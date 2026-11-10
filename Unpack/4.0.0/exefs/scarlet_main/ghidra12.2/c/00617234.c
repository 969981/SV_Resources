/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00617234; name: FUN_00617234
 */


long * FUN_00617234(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long local_38;
  undefined1 auStack_30 [16];
  ulong local_20;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) goto LAB_0061724c;
  local_38 = 0;
  lVar2 = param_1[1];
  uVar4 = param_1[2] & *(long *)(lVar2 + 8) - 1U;
  param_1[2] = uVar4;
  lVar3 = *(long *)(lVar2 + 0x20);
  lVar5 = *(long *)(lVar3 + uVar4 * 8);
  if (lVar5 == lVar1) {
LAB_006172e4:
    uVar4 = uVar4 + 1;
    *param_1 = 0;
    param_1[2] = uVar4;
    uVar6 = *(ulong *)(lVar2 + 8);
    if (uVar6 <= uVar4) {
      return param_1;
    }
    while (plVar7 = *(long **)(lVar3 + uVar4 * 8), plVar7 == (long *)0x0) {
      uVar4 = uVar4 + 1;
      param_1[2] = uVar4;
      if (uVar6 == uVar4) {
        return param_1;
      }
    }
  }
  else {
    if ((lVar5 != 0) && (lVar5 != *(long *)(lVar3 + (uVar4 ^ 1) * 8))) {
      do {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) goto LAB_006172b0;
      } while (lVar5 != lVar1);
      goto LAB_006172e4;
    }
LAB_006172b0:
    FUN_005e0e04(auStack_30,lVar2,lVar1,&local_38);
    param_1[2] = local_20;
    lVar2 = param_1[1];
    lVar3 = *(long *)(lVar2 + 0x20);
    lVar1 = *(long *)(lVar3 + local_20 * 8);
    uVar4 = local_20;
    if ((lVar1 == 0) || (lVar1 != *(long *)(lVar3 + (local_20 ^ 1) * 8))) goto LAB_006172e4;
    plVar7 = *(long **)(local_38 + 8);
    if (*(long **)(local_38 + 8) == (long *)0x0) {
      while( true ) {
        plVar8 = *(long **)(local_38 + 0x10);
        if (*plVar8 == local_38) break;
        local_38 = *(long *)(local_38 + 0x10);
      }
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
    if (plVar8 != (long *)(lVar1 + 8)) {
      lVar2 = plVar8[4];
      goto LAB_0061724c;
    }
    uVar4 = local_20 + 2;
    *param_1 = 0;
    param_1[2] = uVar4;
    uVar6 = *(ulong *)(lVar2 + 8);
    if (uVar6 <= uVar4) {
      return param_1;
    }
    while (plVar7 = *(long **)(lVar3 + uVar4 * 8), plVar7 == (long *)0x0) {
      uVar4 = uVar4 + 1;
      param_1[2] = uVar4;
      if (uVar6 == uVar4) {
        return param_1;
      }
    }
  }
  if (plVar7 != *(long **)(lVar3 + (uVar4 ^ 1) * 8)) {
    *param_1 = (long)plVar7;
    return param_1;
  }
  lVar2 = *(long *)(*plVar7 + 0x20);
LAB_0061724c:
  *param_1 = lVar2;
  return param_1;
}


