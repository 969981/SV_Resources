/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d41944; name: FUN_00d41944
 */


void FUN_00d41944(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = param_1[1];
  lVar6 = param_1[2];
  if (lVar6 != lVar4) {
    param_1[2] = lVar6 + -0x78;
    FUN_00d42924(lVar6 + -0x38);
    lVar2 = *(long *)(lVar6 + -0x70);
    if (lVar2 != 0) {
      plVar5 = *(long **)(lVar6 + -0x58);
      *(long *)(lVar6 + -0x68) = lVar2;
      lVar6 = *(long *)(lVar6 + -0x60) - lVar2;
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar6,0x10);
      }
      else {
        FUN_00c48fe8(plVar5,lVar2,lVar6,0x10);
      }
    }
    lVar6 = param_1[2];
    while (lVar6 != lVar4) {
      param_1[2] = lVar6 + -0x78;
      FUN_00d42924(lVar6 + -0x38);
      lVar2 = *(long *)(lVar6 + -0x70);
      if (lVar2 != 0) {
        *(long *)(lVar6 + -0x68) = lVar2;
        plVar5 = *(long **)(lVar6 + -0x58);
        lVar6 = *(long *)(lVar6 + -0x60) - lVar2;
        uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar6,0x10);
        }
        else {
          FUN_00c48fe8(plVar5,lVar2,lVar6,0x10);
        }
      }
      lVar6 = param_1[2];
    }
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar6 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar6 - lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar5,lVar4,lVar6 - lVar4,8);
  return;
}


