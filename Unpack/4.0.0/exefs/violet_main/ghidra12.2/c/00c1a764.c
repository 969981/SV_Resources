/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1a764; name: FUN_00c1a764
 */


void FUN_00c1a764(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_48 [16];
  ulong local_38;
  long lStack_30;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x18);
  if (lVar2 != 0) goto LAB_00c1a784;
  lVar2 = param_1[1];
  uVar3 = param_1[2] & *(long *)(lVar2 + 8) - 1U;
  param_1[2] = uVar3;
  lVar4 = *(long *)(*(long *)(lVar2 + 0x20) + uVar3 * 8);
  if (lVar4 == lVar1) {
LAB_00c1a814:
    uVar3 = uVar3 + 1;
    *param_1 = 0;
    param_1[2] = uVar3;
    if (*(ulong *)(lVar2 + 8) <= uVar3) {
      return;
    }
    while( true ) {
      lVar1 = *(long *)(lVar2 + 0x20);
      plVar5 = *(long **)(lVar1 + uVar3 * 8);
      if (plVar5 != (long *)0x0) break;
      uVar3 = uVar3 + 1;
      param_1[2] = uVar3;
      if (*(ulong *)(lVar2 + 8) <= uVar3) {
        return;
      }
    }
  }
  else {
    if ((lVar4 != 0) && (lVar4 != *(long *)(*(long *)(lVar2 + 0x20) + (uVar3 ^ 1) * 8))) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_00c1a7e4;
      } while (lVar4 != lVar1);
      goto LAB_00c1a814;
    }
LAB_00c1a7e4:
    FUN_00c1a8fc(auStack_48);
    lVar2 = param_1[1];
    param_1[2] = local_38;
    param_1[3] = lStack_30;
    lVar1 = *(long *)(*(long *)(lVar2 + 0x20) + local_38 * 8);
    uVar3 = local_38;
    if ((lVar1 == 0) || (lVar1 != *(long *)(*(long *)(lVar2 + 0x20) + (local_38 ^ 1) * 8)))
    goto LAB_00c1a814;
    plVar5 = *(long **)(lStack_30 + 8);
    if (*(long **)(lStack_30 + 8) == (long *)0x0) {
      while( true ) {
        plVar6 = *(long **)(lStack_30 + 0x10);
        if (*plVar6 == lStack_30) break;
        lStack_30 = *(long *)(lStack_30 + 0x10);
      }
    }
    else {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    param_1[3] = (long)plVar6;
    if (plVar6 != (long *)(lVar1 + 8)) {
      lVar2 = plVar6[4];
      goto LAB_00c1a784;
    }
    uVar3 = local_38 + 2;
    *param_1 = 0;
    param_1[2] = uVar3;
    if (*(ulong *)(lVar2 + 8) <= uVar3) {
      return;
    }
    while( true ) {
      lVar1 = *(long *)(lVar2 + 0x20);
      plVar5 = *(long **)(lVar1 + uVar3 * 8);
      if (plVar5 != (long *)0x0) break;
      uVar3 = uVar3 + 1;
      param_1[2] = uVar3;
      if (*(ulong *)(lVar2 + 8) <= uVar3) {
        return;
      }
    }
  }
  if (plVar5 != *(long **)(lVar1 + (uVar3 ^ 1) * 8)) {
    *param_1 = (long)plVar5;
    return;
  }
  lVar1 = *plVar5;
  param_1[3] = lVar1;
  lVar2 = *(long *)(lVar1 + 0x20);
LAB_00c1a784:
  *param_1 = lVar2;
  return;
}


