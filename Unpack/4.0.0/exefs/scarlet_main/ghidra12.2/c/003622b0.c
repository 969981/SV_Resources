/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


