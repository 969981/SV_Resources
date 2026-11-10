/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172bf88; name: FUN_0172bf88
 */


undefined8 FUN_0172bf88(long *param_1,undefined4 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char local_70 [16];
  char local_60;
  long *local_58;
  long *local_38;
  int local_24;
  
  if (param_3 == 0) {
    if (((*PTR_DAT_047d8c40 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d8c48;
    *(undefined8 *)PTR_DAT_047d8c50 = uVar3;
    FUN_00cf9078(local_70,uVar3,param_1);
  }
  else {
    FUN_00d0633c(local_70,param_3);
  }
  if ((local_70[0] == '\0') || (local_60 == '\0')) {
    puVar1 = (undefined8 *)PTR_PTR_047d4508;
    if (*param_1 != 0) {
      puVar1 = (undefined8 *)(*param_1 + 0x38);
    }
    if (*(char *)*puVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_24,(char *)*puVar1);
      uVar3 = 1;
      uVar4 = 1;
      if (local_24 != 1) {
        uVar4 = 2;
      }
      if (iVar2 != 0) {
        uVar4 = 0;
      }
      *param_2 = uVar4;
    }
    if (local_70[0] == '\0') {
      return uVar3;
    }
  }
  else {
    uVar3 = 1;
    *param_2 = 1;
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar3;
}


