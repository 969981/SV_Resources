/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f580cc; name: FUN_01f580cc
 */


void FUN_01f580cc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  FUN_01f56f58(param_1 + 0xe);
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar3 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar3 << 3,1);
        goto LAB_01f580f0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3 << 3,1);
  }
LAB_01f580f0:
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (param_1[1] == lVar5) {
    lVar3 = lVar5;
  }
  else {
    do {
      pcVar4 = *(code **)(lVar3 + -0x78);
      lVar6 = lVar3 + -0x80;
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x70) = 0;
        *(undefined8 *)(lVar3 + -0x68) = 0;
        *(undefined8 *)(lVar3 + -0x80) = 0;
        *(undefined8 *)(lVar3 + -0x78) = 0;
        (*pcVar4)(lVar3 + -0x60);
      }
      lVar3 = lVar6;
    } while (lVar5 != lVar6);
    lVar3 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar3,lVar5 - lVar3,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01f581f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar5 - lVar3,0x10);
  return;
}


