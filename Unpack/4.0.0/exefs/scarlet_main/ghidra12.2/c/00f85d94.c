/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f85d94; name: FUN_00f85d94
 */


void FUN_00f85d94(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  long *local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  long *local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  long *local_70 [2];
  
  local_138 = 0x302ee6d5ddb8605e;
  pcStack_130 = "EventSystem";
  local_128 = 0xb;
  local_150 = *param_2;
  uStack_148 = param_2[1];
  local_140 = param_2[2];
  uVar3 = param_3[2];
  plVar8 = (long *)param_3[3];
  uVar4 = *param_3;
  uVar9 = param_3[1];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar17 = *param_5;
  uVar16 = param_5[1];
  uVar5 = *param_4;
  uVar10 = param_4[1];
  uVar21 = param_4[2];
  uVar6 = param_5[2];
  plVar11 = (long *)param_5[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  uVar7 = *param_6;
  uVar12 = param_6[1];
  uVar20 = param_6[2];
  local_108 = uVar4;
  uStack_100 = uVar9;
  local_f8 = uVar3;
  plStack_f0 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_120 = uVar5;
  uStack_118 = uVar10;
  local_110 = uVar21;
  local_b0 = uVar17;
  uStack_a8 = uVar16;
  local_a0 = uVar6;
  plStack_98 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_c8 = uVar7;
  uStack_c0 = uVar12;
  local_b8 = uVar20;
  FUN_00f861d0(&local_e8,&local_b0,&local_c8);
  plVar14 = local_e8;
  plVar13 = (long *)PTR_DAT_047d8b70;
  plVar2 = (long *)PTR_PTR_047d4508;
  local_90 = (long *)PTR_DAT_047d8b70;
  if (local_e8 != (long *)0x0) {
    local_90 = local_e8 + 6;
  }
  local_90 = (long *)*local_90;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_e8 != (long *)0x0) {
    plVar1 = local_e8 + 7;
  }
  lStack_88 = *plVar1;
  if (local_e8 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_e8[8];
  }
  local_78 = (long *)0x0;
  if (local_e8 == (long *)0x0) {
    local_78 = local_e8;
  }
  else {
    (**(code **)(*local_e8 + 0x18))(local_e8);
    local_78 = plVar14;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  FUN_00f86254(local_70,&local_108,&local_120,&local_90);
  plVar15 = local_70[0];
  plVar1 = plVar2;
  local_e8 = plVar13;
  if (local_70[0] != (long *)0x0) {
    plVar1 = local_70[0] + 7;
    local_e8 = local_70[0] + 6;
  }
  local_e8 = (long *)*local_e8;
  lStack_e0 = *plVar1;
  if (local_70[0] == (long *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_70[0][8];
  }
  local_d0 = (long *)0x0;
  if (local_70[0] == (long *)0x0) {
    local_d0 = plVar15;
  }
  else {
    (**(code **)(*local_70[0] + 0x18))(local_70[0]);
    local_d0 = plVar15;
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  FUN_00f86124(&local_90,&local_138,&local_150,&local_e8);
  plVar14 = local_90;
  if (local_90 != (long *)0x0) {
    plVar2 = local_90 + 7;
    plVar13 = local_90 + 6;
  }
  lVar18 = *plVar2;
  if (local_90 == (long *)0x0) {
    lVar19 = 0;
  }
  else {
    lVar19 = local_90[8];
  }
  *param_1 = *plVar13;
  param_1[1] = lVar18;
  param_1[2] = lVar19;
  param_1[3] = 0;
  if (local_90 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_90 + 0x18))(local_90);
    param_1[3] = (long)plVar14;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return;
}


