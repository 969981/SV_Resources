/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029401c8; name: FUN_029401c8
 */


void FUN_029401c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  plVar1 = (long *)*param_3;
  plVar8 = (long *)FUN_0168126c(param_3[1],0);
  uVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1);
  uVar4 = (**(code **)(*plVar8 + 0xf0))(plVar8);
  uVar9 = FUN_029886cc(param_1,plVar1,plVar8,*(undefined1 *)((long)param_3 + 0x11));
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_029886cc(param_1,plVar8,plVar1,*(undefined1 *)((long)param_3 + 0x11));
    if ((uVar9 & 1) == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x98))(plVar1);
      uVar6 = (**(code **)(*plVar8 + 0x98))(plVar8);
      lVar11 = FUN_0149b698(param_1);
      FUN_0167a950(lVar11 + 0x10);
      FUN_01582534(param_1);
      uVar10 = FUN_014813ec();
      uVar9 = FUN_0128ab58(uVar10,uVar5,uVar6);
      if ((uVar9 & 1) == 0) {
        uVar10 = FUN_01243584(param_1);
        FUN_0298883c(uVar10,uVar5,uVar6,uVar3,uVar4);
      }
      uVar10 = FUN_01243584(param_1);
      uVar7 = (**(code **)(*(long *)*param_3 + 0x98))();
      FUN_01636f5c(uVar10,uVar7,plVar1,0xa9);
      uVar10 = FUN_01246e90(param_1);
      FUN_0293a468(uVar10,uVar5,uVar3,uVar4);
      uVar10 = FUN_01246e90(param_1);
      FUN_0293a468(uVar10,uVar6,uVar4,uVar3);
      uVar10 = FUN_01243584(param_1);
      FUN_02988860(uVar10,uVar5,uVar6,uVar4,uVar3);
      uVar10 = FUN_01243584(param_1);
      FUN_029888bc(uVar10,uVar5,uVar6);
      FUN_02988900(param_1,plVar1);
      FUN_02988900(param_1,plVar8);
      FUN_02988930(param_1,plVar1,uVar3,uVar4);
      FUN_02988930(param_1,plVar8,uVar4,uVar3);
      return;
    }
    if (*(char *)(param_3 + 2) == '\0') {
      return;
    }
    uVar10 = FUN_01246e90(param_1);
    uVar5 = (**(code **)(*plVar1 + 0x98))(plVar1);
    uVar2 = *(undefined1 *)((long)param_3 + 0x11);
  }
  else {
    if (*(char *)(param_3 + 2) == '\0') {
      return;
    }
    uVar10 = FUN_01246e90(param_1);
    uVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar2 = *(undefined1 *)((long)param_3 + 0x11);
    uVar4 = uVar3;
  }
  uVar9 = FUN_0293b83c(uVar10,uVar5,uVar4,uVar2);
  if ((uVar9 & 1) == 0) {
    uVar10 = FUN_01243584(param_1);
    uVar4 = (**(code **)(*(long *)*param_3 + 0x98))();
    FUN_0167a95c(uVar10,uVar4);
    return;
  }
  return;
}


