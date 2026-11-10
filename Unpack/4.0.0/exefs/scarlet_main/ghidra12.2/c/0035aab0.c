/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035aab0; name: FUN_0035aab0
 */


long FUN_0035aab0(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_003629c0(param_1,1,0);
  if ((int)uVar1 < 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    uVar5 = 0x9a;
  }
  else {
    iVar2 = FUN_003629c0(param_1 & 0xffffffff,2,uVar1 & 0xfffffffe | (uint)(param_2 != 0));
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    uVar5 = 0xa4;
  }
  lVar4 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                       ,uVar5,iVar2,"fcntl");
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar4;
}


