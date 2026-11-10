/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3d0f0; name: FUN_00a3d0f0
 */


void FUN_00a3d0f0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_04540ed8;
  if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[9])();
    plVar3 = (long *)param_1[1];
    uVar4 = param_1[9];
    uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar1 & 1) == 0) {
LAB_00a3d140:
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,0x88,8);
    }
    else {
      lVar2 = FUN_00c4e600();
      if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_00a3d140;
      FUN_00c48fe8(plVar3,uVar4,0x88,8);
    }
    param_1[9] = 0;
  }
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
    plVar3 = (long *)param_1[1];
    uVar4 = param_1[8];
    uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar1 & 1) == 0) {
LAB_00a3d190:
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,0x88,8);
    }
    else {
      lVar2 = FUN_00c4e600();
      if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_00a3d190;
      FUN_00c48fe8(plVar3,uVar4,0x88,8);
    }
    param_1[8] = 0;
  }
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[7])();
    plVar3 = (long *)param_1[1];
    uVar4 = param_1[7];
    uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar1 & 1) == 0) {
LAB_00a3d1e0:
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,0x88,8);
    }
    else {
      lVar2 = FUN_00c4e600();
      if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_00a3d1e0;
      FUN_00c48fe8(plVar3,uVar4,0x88,8);
    }
    param_1[7] = 0;
  }
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) goto LAB_00a3d24c;
  (*(code *)**(undefined8 **)param_1[2])();
  plVar3 = (long *)param_1[1];
  uVar4 = param_1[2];
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) == 0) {
LAB_00a3d22c:
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,0x88,8);
  }
  else {
    lVar2 = FUN_00c4e600();
    if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_00a3d22c;
    FUN_00c48fe8(plVar3,uVar4,0x88,8);
  }
  param_1[2] = 0;
LAB_00a3d24c:
  FUN_00a42ac0();
  return;
}


