/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8693c; name: FUN_00f8693c
 */


void FUN_00f8693c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *plStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  long *local_70 [2];
  
  uVar2 = *param_2;
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar4 = (long *)*param_4;
  uVar8 = param_4[1];
  uVar12 = param_4[2];
  uVar5 = *param_3;
  uVar9 = param_3[1];
  uVar16 = param_3[2];
  plVar15 = (long *)param_4[3];
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_100 = 0x302ee6d5ddb8605e;
  local_118 = 0x45e24506a4634ddf;
  pcStack_110 = "Event";
  local_f8 = "EventSystem";
  uStack_f0 = 0xb;
  local_108 = 5;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_d0 = uVar2;
  uStack_c8 = uVar6;
  local_c0 = uVar3;
  plStack_b8 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_e8 = uVar5;
  uStack_e0 = uVar9;
  local_d8 = uVar16;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  local_90 = plVar4;
  uStack_88 = uVar8;
  local_80 = uVar12;
  plStack_78 = plVar15;
  FUN_00f86254(local_70,&local_d0,&local_e8,&local_90);
  plVar11 = local_70[0];
  plVar10 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_70[0] != (long *)0x0) {
    plVar4 = local_70[0] + 6;
  }
  local_b0 = *plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_70[0] != (long *)0x0) {
    plVar4 = local_70[0] + 7;
  }
  lStack_a8 = *plVar4;
  if (local_70[0] == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_70[0][8];
  }
  local_98 = (long *)0x0;
  if (local_70[0] == (long *)0x0) {
    local_98 = plVar11;
  }
  else {
    (**(code **)(*local_70[0] + 0x18))(local_70[0]);
    local_98 = plVar11;
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  FUN_00f86124(&local_90,&local_100,&local_118,&local_b0);
  plVar4 = local_90;
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 7;
    plVar10 = local_90 + 6;
  }
  lVar13 = *plVar1;
  if (local_90 == (long *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = local_90[8];
  }
  *param_1 = *plVar10;
  param_1[1] = lVar13;
  param_1[2] = lVar14;
  param_1[3] = 0;
  if (local_90 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_90 + 0x18))(local_90);
    param_1[3] = (long)plVar4;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


