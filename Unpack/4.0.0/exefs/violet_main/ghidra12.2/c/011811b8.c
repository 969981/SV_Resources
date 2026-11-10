/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011811b8; name: FUN_011811b8
 */


void FUN_011811b8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1[0xe] != 0) {
    FUN_01aa6944();
    lVar5 = param_1[0xe];
    lVar4 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,0x10);
        goto LAB_011811d4;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,0x10);
  }
LAB_011811d4:
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    lVar5 = param_1[9];
    plVar1 = (long *)param_1[10];
    param_1[8] = lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5 - lVar4,0x10);
        goto LAB_01181218;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,0x10);
  }
LAB_01181218:
  if (*param_1 == 0) {
    return;
  }
  FUN_01aa68c8(param_1);
  lVar5 = *param_1;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,lVar4 - lVar5,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0118126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 - lVar5,0x10);
  return;
}


