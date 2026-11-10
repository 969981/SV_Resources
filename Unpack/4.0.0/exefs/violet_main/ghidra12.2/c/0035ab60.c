/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035ab60; name: FUN_0035ab60
 */


long FUN_0035ab60(ulong param_1,int param_2)

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
  iVar1 = nnsocketSetSockOpt(param_1,0xffff,4,&local_14,4);
  if (iVar1 == 0) {
    iVar1 = nnsocketGetSockOpt(param_1 & 0xffffffff,0xffff,4,&local_18,&local_1c);
    if (iVar1 == 0) {
      if (local_14 == (local_18 != 0)) {
        return 0;
      }
      FUN_003673f0(auStack_40,"Failed to set SO_REUSEADDR");
      lVar3 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                           ,0xb6,auStack_40,0,0);
      return lVar3;
    }
    piVar2 = __errno_location();
    lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xb3,*piVar2,"getsockopt(SO_REUSEADDR)");
  }
  else {
    piVar2 = __errno_location();
    lVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                         ,0xb0,*piVar2,"setsockopt(SO_REUSEADDR)");
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar3;
}


