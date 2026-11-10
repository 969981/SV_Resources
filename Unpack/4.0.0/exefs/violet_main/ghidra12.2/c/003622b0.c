/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003622b0; name: FUN_003622b0
 */


void FUN_003622b0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_30 [32];
  
  *param_2 = 0;
  FUN_003673f0(auStack_30,"Unix domain sockets are not supported on Windows");
  FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/unix_sockets_posix_noop.cc",0x28,
               auStack_30,0,0);
  return;
}


