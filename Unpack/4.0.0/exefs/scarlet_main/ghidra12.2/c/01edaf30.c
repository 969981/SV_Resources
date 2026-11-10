/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edaf30; name: FUN_01edaf30
 */


undefined8 FUN_01edaf30(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  char local_30 [8];
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar3 = FUN_01ed96ac();
  uVar4 = 0;
  if (lVar3 != 0) {
    FUN_01ecce00(local_30);
    if (local_30[0] == '\0') {
      uVar4 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x10);
      if ((bVar1 & 1) != 0) {
        FUN_01edc278(lVar3,param_1);
        bVar1 = *(byte *)(param_1 + 0x10);
      }
      uVar5 = (uint)bVar1;
      if (((bVar1 & 1) == 0) && (*(char *)(param_1 + 0x12) != '\0')) {
        FUN_01edc2a8(lVar3,param_1);
        FUN_01edc60c(lVar3,param_1,local_28);
        uVar5 = (uint)*(byte *)(param_1 + 0x10);
      }
      if ((uVar5 >> 2 & 1) != 0) {
        FUN_01edc60c(lVar3,param_1,local_28);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


