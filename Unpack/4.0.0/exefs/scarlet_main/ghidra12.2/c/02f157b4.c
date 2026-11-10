/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f157b4; name: FUN_02f157b4
 */


void FUN_02f157b4(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  long *local_248;
  long local_240 [56];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  if (param_3 != 0) {
    plVar12 = (long *)(param_3 + 0x20);
    local_240[0] = param_2;
    lVar8 = FUN_02f15c5c(plVar12,local_240);
    if (lVar8 == 0) {
      uVar11 = 0;
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = *(uint *)(lVar8 + 4);
      uVar11 = ((int)lVar8 - (int)*(undefined8 *)(param_3 + 0x30)) * 0x20000000;
    }
    if (-1 < (int)(uVar9 | uVar11)) {
      local_240[0] = param_2;
      lVar8 = FUN_02f15c5c(plVar12,local_240);
      if (((lVar8 == 0) ||
          (plVar12 = *(long **)(*plVar12 + (long)*(int *)(lVar8 + 4) * 0x10 + 8),
          plVar12 != (long *)0x0)) && (plVar12[1] != 0)) {
        plVar1 = plVar12 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_02f15af4;
    }
  }
  puVar2 = PTR_DAT_047d1a08;
  switch(*(undefined1 *)(param_2 + 0x18)) {
  case 1:
    local_240[0] = 0x38;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_240,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar12,"hknpPositionConstraintMotor");
    }
    plVar12[2] = 1;
    *plVar12 = (long)(PTR_DAT_047e4638 + 0x10);
    plVar12[1] = 0xffffffff;
    *(undefined1 *)(plVar12 + 3) = *(undefined1 *)(param_2 + 0x18);
    *plVar12 = (long)(PTR_DAT_047e4640 + 0x10);
    *(undefined8 *)((long)plVar12 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *plVar12 = (long)(PTR_DAT_047e4648 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)plVar12 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    break;
  case 2:
    local_240[0] = 0x38;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_240,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar12,"hknpVelocityConstraintMotor");
    }
    plVar12[2] = 1;
    *plVar12 = (long)(PTR_DAT_047e4638 + 0x10);
    plVar12[1] = 0xffffffff;
    *(undefined1 *)(plVar12 + 3) = *(undefined1 *)(param_2 + 0x18);
    *plVar12 = (long)(PTR_DAT_047e4640 + 0x10);
    *(undefined8 *)((long)plVar12 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *plVar12 = (long)(PTR_DAT_047e4650 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)plVar12 + 0x29) = *(undefined8 *)(param_2 + 0x29);
    break;
  case 3:
    local_240[0] = 0x30;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_240,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar12,"hknpSpringDamperConstraintMotor");
    }
    plVar12[2] = 1;
    *plVar12 = (long)(PTR_DAT_047e4638 + 0x10);
    plVar12[1] = 0xffffffff;
    *(undefined1 *)(plVar12 + 3) = *(undefined1 *)(param_2 + 0x18);
    *plVar12 = (long)(PTR_DAT_047e4640 + 0x10);
    *(undefined8 *)((long)plVar12 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *plVar12 = (long)(PTR_DAT_047e4658 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x24);
    break;
  case 4:
    local_240[0] = 0x50;
    plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_240,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar12,"hknpCallbackConstraintMotor");
    }
    puVar6 = PTR_DAT_047e4638;
    plVar12[2] = 1;
    puVar2 = PTR_DAT_047e4640 + 0x10;
    *plVar12 = (long)(puVar6 + 0x10);
    plVar12[1] = 0xffffffff;
    uVar3 = *(undefined1 *)(param_2 + 0x18);
    *plVar12 = (long)puVar2;
    puVar2 = PTR_DAT_047e4660;
    *(undefined1 *)(plVar12 + 3) = uVar3;
    uVar10 = *(undefined8 *)(param_2 + 0x1c);
    *plVar12 = (long)(puVar2 + 0x10);
    *(undefined8 *)((long)plVar12 + 0x1c) = uVar10;
    memcpy(plVar12 + 5,(void *)(param_2 + 0x28),0x28);
    if (param_3 == 0) goto LAB_02f15af4;
    goto LAB_02f15ae0;
  default:
    local_70 = 1;
    uStack_68 = 0;
    local_60 = local_240;
    uStack_58 = 0;
    local_80 = PTR_DAT_047e34b8 + 0x10;
    uStack_78 = 0xffffffff;
    local_50 = 0x1bf;
    local_48 = 0;
    memset(local_240,0,0x1c0);
    FUN_0322bd4c(&local_80,"Unknown motor type.",0x13);
    iVar7 = FUN_03226f50(0x29ce6436,local_240,
                         "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Dynamics/Constraint/Motor/hknpConstraintMotor.cpp"
                         ,0x49);
    if (iVar7 != 0) {
      CallSupervisor(0x26);
    }
    *param_1 = 0;
    return;
  }
  *(undefined8 *)((long)plVar12 + 0x24) = uVar10;
  if (param_3 != 0) {
LAB_02f15ae0:
    local_248 = plVar12;
    local_240[0] = param_2;
    FUN_02f15bb4(param_3 + 0x20,local_240,&local_248);
  }
LAB_02f15af4:
  *param_1 = plVar12;
  return;
}


