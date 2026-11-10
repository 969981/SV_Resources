/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175e858; name: FUN_0175e858
 */


void FUN_0175e858(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *local_b0 [4];
  long *local_90;
  long *local_80 [4];
  long *local_60;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  (**(code **)(*param_1 + 0x20))();
  if ((*(long *)(param_1[6] + 0x48) == 0) ||
     (**(char **)(*(long *)(param_1[6] + 0x48) + 0x38) == '\0')) {
    local_50 = 0x5b2360269d7204c4;
    pcStack_48 = "world/scene/startup/startup.trscn";
    local_40 = 0x21;
    local_38 = (long *)0x0;
  }
  else {
    FUN_0135d26c(&local_50);
  }
  FUN_00cbf4c0(local_80,&local_50);
  puVar1 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar3 = PTR_DAT_047d4e08;
  puVar2 = PTR_DAT_047d4e00;
  uVar5 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar5;
  FUN_00e55738(local_b0,uVar5,local_80);
  iVar4 = FUN_0172bf60(local_b0);
  if (iVar4 == 1) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_0175ea54(uVar5,local_80);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0[0] != (long *)0x0) {
    (**(code **)(*local_b0[0] + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  do {
    uVar6 = (**(code **)(*param_1 + 0x18))(param_1);
  } while ((uVar6 & 1) != 0);
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}


