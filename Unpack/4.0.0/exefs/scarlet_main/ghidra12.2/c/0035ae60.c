/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035ae60; name: FUN_0035ae60
 */


long FUN_0035ae60(ulong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined1 auStack_40 [36];
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = (uint)(param_2 != 0);
  local_1c = 4;
  iVar1 = nnsocketSetSockOpt(param_1,6,1,&local_14,4);
  if (iVar1 == 0) {
    iVar1 = nnsocketGetSockOpt(param_1 & 0xffffffff,6,1,&local_18,&local_1c);
    if (iVar1 == 0) {
      if (local_14 == (local_18 != 0)) {
        return 0;
      }
      FUN_003673f0(auStack_40,"Failed to set TCP_NODELAY");
      lVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                           ,0xf5,auStack_40,0,0);
      return lVar3;
    }
    piVar2 = __errno_location();
    lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xf2,*piVar2,"getsockopt(TCP_NODELAY)");
  }
  else {
    piVar2 = __errno_location();
    lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xef,*piVar2,"setsockopt(TCP_NODELAY)");
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


