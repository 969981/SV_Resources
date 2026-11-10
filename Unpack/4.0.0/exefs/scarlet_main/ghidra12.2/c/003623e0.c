/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003623e0; name: FUN_003623e0
 */


long FUN_003623e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  iVar1 = FUN_00362c20(0,6);
  *param_1 = iVar1;
  param_1[1] = -1;
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = __errno_location();
  lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/wakeup_fd_eventfd.cc",0x29,
                       *piVar2,"eventfd");
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


