/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035a9f0; name: FUN_0035a9f0
 */


long FUN_0035a9f0(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_003629c0(param_1,3,0);
  if ((int)uVar1 < 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    uVar5 = 0x49;
  }
  else {
    iVar2 = FUN_003629c0(param_1 & 0xffffffff,4,
                         uVar1 & 0xfffff000 | uVar1 & 0x7ff | (uint)(param_2 != 0) << 0xb);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    uVar5 = 0x53;
  }
  lVar4 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                       ,uVar5,iVar2,"fcntl");
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lVar4;
}


