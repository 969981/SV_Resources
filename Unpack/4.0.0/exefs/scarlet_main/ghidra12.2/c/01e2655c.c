/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2655c; name: FUN_01e2655c
 */


void FUN_01e2655c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = &DAT_045450d0;
  param_1[4] = &PTR_LAB_04545100;
  plVar2 = (long *)param_1[0x14];
  while (plVar2 != (long *)0x0) {
    plVar7 = (long *)*plVar2;
    if ((long *)plVar2[0x2d] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[0x2d] + 0x20))();
    }
    FUN_0115abf4(plVar2 + 0x1c);
    FUN_0115adec(plVar2 + 0xf);
    if ((long *)plVar2[0xe] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[0xe] + 0x20))();
    }
    if ((long *)plVar2[10] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[10] + 0x20))();
    }
    if ((long *)plVar2[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[6] + 0x20))();
    }
    plVar6 = (long *)param_1[0x15];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar2,0x170,8);
      plVar2 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar2,0x170,8);
      plVar2 = plVar7;
    }
  }
  lVar5 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar5 != 0) {
    lVar1 = param_1[0xf];
    plVar2 = (long *)param_1[0x10];
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar2,lVar5,lVar1 << 3,8);
    }
  }
  FUN_01155fc4(param_1 + 0xd);
  FUN_00db239c(param_1 + 5);
  return;
}


