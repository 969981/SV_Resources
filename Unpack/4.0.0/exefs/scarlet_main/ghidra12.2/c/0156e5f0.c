/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156e5f0; name: FUN_0156e5f0
 */


void FUN_0156e5f0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  FUN_0156e944();
  puVar2 = (undefined8 *)FUN_0156ea10();
  plVar5 = (long *)*puVar2;
  if (*plVar5 == 0x2000000) {
    *plVar5 = 0x5a00000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[1] == 0x30000000) {
    plVar5[1] = 0x38400000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[2] == 0x6000000) {
    plVar5[2] = (long)&uleb128_04400000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[3] == 0x4000000) {
    plVar5[3] = 0x8c00000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[4] == 0x4000000) {
    plVar5[4] = 0x2000000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[5] == 0x40000000) {
    plVar5[5] = 0x32000000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[6] == 0x6000000) {
    plVar5[6] = 0x6800000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[7] == 0x4000000) {
    plVar5[7] = 0x4000000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[8] == 0x4000000) {
    plVar5[8] = 0x800000;
    plVar5 = (long *)*puVar2;
  }
  if (plVar5[9] == 0) {
    plVar5[9] = 0x10000000;
  }
  plVar5 = (long *)puVar2[8];
  if (plVar5[3] == 0x18000000) {
    plVar5[3] = 0x15e00000;
    plVar5 = (long *)puVar2[8];
  }
  if (plVar5[5] == 0x3000000) {
    plVar5[5] = (long)&LAB_03200000;
    plVar5 = (long *)puVar2[8];
  }
  if (plVar5[4] == 0x14000000) {
    plVar5[4] = 0x10c00000;
    plVar5 = (long *)puVar2[8];
  }
  if (plVar5[6] == 0x2000) {
    plVar5[6] = 0x6000;
    plVar5 = (long *)puVar2[8];
  }
  if (*plVar5 == 0x1000000) {
    *plVar5 = (long)&LAB_01200000;
  }
  iVar1 = *(int *)(puVar2 + 6);
  local_98 = 1;
  local_70 = 0;
  local_68 = 0x800;
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  local_64 = 1;
  local_60 = 3;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = 0x780;
  uStack_a0 = 0x438;
  local_90 = 0;
  uStack_88 = 0x400000800;
  local_80 = 0;
  uStack_78 = 0;
  FUN_0157280c(&local_b8);
  if (iVar1 == 0x800) {
    *(undefined4 *)(puVar2 + 6) = 0x400;
  }
  iVar1 = *(int *)((long)puVar2 + 0x34);
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  local_a8 = 0x780;
  uStack_a0 = 0x438;
  local_98 = 1;
  local_70 = 0;
  local_68 = 0x800;
  local_64 = 1;
  local_60 = 3;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_90 = 0;
  uStack_88 = 0x400000800;
  local_80 = 0;
  uStack_78 = 0;
  FUN_0157280c(&local_b8);
  if (iVar1 == 4) {
    *(undefined4 *)((long)puVar2 + 0x34) = 2;
  }
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar3;
  FUN_00cf9884(&local_b8,uVar3,"world/scene/startup_/startup.trscn");
  plVar5 = local_b8;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))(local_b8);
  }
  plVar4 = (long *)puVar2[9];
  puVar2[9] = plVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


