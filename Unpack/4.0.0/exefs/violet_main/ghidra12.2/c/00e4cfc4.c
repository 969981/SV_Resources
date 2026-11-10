/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4cfc4; name: FUN_00e4cfc4
 */


void FUN_00e4cfc4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x188);
  if (lVar5 != 0) {
    lVar6 = *(long *)(param_1 + 400);
    if (*(long *)(param_1 + 400) == lVar5) {
      lVar6 = lVar5;
    }
    else {
      do {
        pcVar3 = *(code **)(lVar6 + -0x78);
        lVar4 = lVar6 + -0x80;
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0x70) = 0;
          *(undefined8 *)(lVar6 + -0x68) = 0;
          *(undefined8 *)(lVar6 + -0x80) = 0;
          *(undefined8 *)(lVar6 + -0x78) = 0;
          (*pcVar3)(lVar6 + -0x60);
        }
        lVar6 = lVar4;
      } while (lVar5 != lVar4);
      lVar6 = *(long *)(param_1 + 0x188);
    }
    plVar1 = *(long **)(param_1 + 0x1a0);
    *(long *)(param_1 + 400) = lVar5;
    lVar5 = *(long *)(param_1 + 0x198) - lVar6;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar6,lVar5,0x10);
        goto LAB_00e4d054;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar5,0x10);
  }
LAB_00e4d054:
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_010f0c94(param_1 + 0x150);
    lVar5 = *(long *)(param_1 + 0x150);
    plVar1 = *(long **)(param_1 + 0x168);
    lVar6 = *(long *)(param_1 + 0x160) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar6,8);
        goto LAB_00e4d05c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar6,8);
  }
LAB_00e4d05c:
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_010f0c2c(param_1 + 0x118);
    lVar5 = *(long *)(param_1 + 0x118);
    plVar1 = *(long **)(param_1 + 0x130);
    lVar6 = *(long *)(param_1 + 0x128) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar6,8);
        goto LAB_00e4d064;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar6,8);
  }
LAB_00e4d064:
  FUN_00e4d1a8(param_1 + 0xb0);
  lVar5 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar5 != 0) {
    FUN_00e51108(param_1 + 0x90);
  }
  FUN_00e4d334(param_1);
  return;
}


