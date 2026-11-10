/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a39cd4; name: FUN_00a39cd4
 */


void FUN_00a39cd4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = FUN_019d8b6c();
  lVar4 = *(long *)(lVar1 + 0xf0);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0xff000,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar4,0xff000,8);
    }
    *(undefined8 *)(lVar1 + 0xf0) = 0;
  }
  lVar1 = FUN_019d8b6c();
  lVar4 = *(long *)(lVar1 + 0x110);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0xff000,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar4,0xff000,8);
    }
    *(undefined8 *)(lVar1 + 0x110) = 0;
  }
  lVar1 = FUN_019d8b6c();
  lVar4 = *(long *)(lVar1 + 0x130);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0xff000,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar4,0xff000,8);
    }
    *(undefined8 *)(lVar1 + 0x130) = 0;
  }
  lVar1 = FUN_019d8b6c();
  lVar4 = *(long *)(lVar1 + 0x150);
  if (lVar4 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0xff000,8);
  }
  else {
    FUN_00c48fe8(plVar5,lVar4,0xff000,8);
  }
  *(undefined8 *)(lVar1 + 0x150) = 0;
  return;
}


