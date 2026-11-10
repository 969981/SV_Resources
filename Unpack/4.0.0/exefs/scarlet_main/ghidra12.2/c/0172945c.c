/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172945c; name: FUN_0172945c
 */


void FUN_0172945c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *local_a8;
  long *local_a0 [4];
  long *local_80;
  long *local_70 [4];
  long *local_50;
  long *local_40;
  long *local_38;
  
  puVar1 = PTR_DAT_047d4240;
  local_38 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar3 = PTR_DAT_047d4250;
  puVar2 = PTR_DAT_047d4248;
  uVar6 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar6;
  FUN_00cf9884(local_70,uVar6,"default");
  plVar4 = local_38;
  local_38 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  local_40 = (long *)0x0;
  local_38 = local_70[0];
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar6;
  FUN_00cf9884(local_70,uVar6,"world/data/field/dither_fade/field_dither_fade/");
  plVar4 = local_40;
  local_40 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  plVar4 = local_70[0];
  local_40 = local_70[0];
  FUN_017296cc(local_a0,&local_40,&local_38);
  FUN_01221874(local_70,local_a0);
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  FUN_00dc5c18(param_1 + 0x198,0,local_70,0,0);
  FUN_017297e0(&local_a8,&local_40,&local_38);
  FUN_01221874(local_a0,&local_a8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_00dc5c18(param_1 + 0x1d8,0,local_a0,0,0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


