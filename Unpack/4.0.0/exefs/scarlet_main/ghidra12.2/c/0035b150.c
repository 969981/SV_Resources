/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035b150; name: FUN_0035b150
 */


undefined8 FUN_0035b150(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [32];
  
  lVar1 = FUN_00343a90(param_2,"grpc.socket_mutator");
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = FUN_0035a9d0(*(long *)(lVar1 + 0x10),param_1);
    if ((uVar2 & 1) == 0) {
      FUN_003673f0(auStack_30,"grpc_socket_mutator failed.");
      uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                           ,0x189,auStack_30,0,0);
      return uVar3;
    }
  }
  return 0;
}


