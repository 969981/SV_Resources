/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003624d0; name: FUN_003624d0
 */


long FUN_003624d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  do {
    iVar1 = nn::socket::EventFdWrite(*param_1,1);
    if (-1 < iVar1) {
      return 0;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  piVar2 = __errno_location();
  lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/wakeup_fd_eventfd.cc",0x41,
                       *piVar2,"eventfd_write");
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


