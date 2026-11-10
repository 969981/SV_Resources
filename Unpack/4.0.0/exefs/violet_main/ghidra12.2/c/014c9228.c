/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c9228; name: FUN_014c9228
 */


void FUN_014c9228(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    if (0 < *(int *)(param_1 + 0x3c)) {
      lVar3 = 0;
      lVar5 = 0;
      do {
        FUN_00d7b620(lVar2 + lVar3);
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x30;
        lVar2 = *(long *)(param_1 + 0x30);
      } while (lVar5 < *(int *)(param_1 + 0x3c));
      if (lVar2 == 0) goto LAB_014c9248;
    }
    plVar4 = *(long **)(param_1 + 8);
    lVar5 = (long)*(int *)(param_1 + 0x38) * 0x30;
    uVar1 = FUN_00c4e564(plVar4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar2,lVar5,0x10);
    }
    else {
      FUN_00c48fe8(plVar4,lVar2,lVar5,0x10);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
LAB_014c9248:
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


