setlocal

set GRPC_PATH=D:\vcpkg-master\installed\x86-windows\tools\grpc
set PROTOC_PATH=D:\vcpkg-master\installed\x86-windows\tools\protobuf
set PROTOS_PATH=Protos
set OUTPUT_PATH=Generated

if not exist %OUTPUT_PATH% mkdir %OUTPUT_PATH%

for /R . %%f in (%PROTOS_PATH%\*.proto) do (
	%PROTOC_PATH%\protoc.exe --proto_path %PROTOS_PATH% --cpp_out %OUTPUT_PATH% %PROTOS_PATH%\%%~nf%%~xf 
)

for /R . %%f in (%PROTOS_PATH%%\*.proto) do (
	%PROTOC_PATH%\protoc.exe --proto_path %PROTOS_PATH% --grpc_out %OUTPUT_PATH% --plugin=protoc-gen-grpc=%GRPC_PATH%\grpc_cpp_plugin.exe %PROTOS_PATH%\%%~nf%%~xf
)

endlocal

pause