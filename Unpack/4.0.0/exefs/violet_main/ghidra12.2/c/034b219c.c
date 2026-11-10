/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b219c; name: FUN_034b219c
 */


long * FUN_034b219c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  plVar4 = *(long **)(param_1 + 0x88);
  uVar5 = *(uint *)(param_1 + 0x90);
  plVar3 = plVar4;
  if ((uVar5 != 0) && (*plVar4 != param_2)) {
    lVar6 = (ulong)uVar5 * 0x30;
    plVar7 = plVar4;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) goto LAB_034b2258;
      plVar3 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar3;
    } while (*plVar1 != param_2);
  }
  if (plVar3 == plVar4 + (ulong)uVar5 * 6) {
LAB_034b2258:
    uVar8 = *(uint *)(param_1 + 0x94);
    if (uVar8 <= uVar5) {
      iVar2 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar2 = 1;
      }
      uVar8 = iVar2 + uVar8;
      plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar4,(ulong)uVar8 * 0x30);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      *(long **)(param_1 + 0x88) = plVar4;
      *(uint *)(param_1 + 0x94) = uVar8;
    }
    if (uVar8 <= uVar5) {
      return (long *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = uVar5 + 1;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar3 = plVar4 + (ulong)uVar5 * 6;
    *plVar3 = param_2;
  }
  uVar5 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar5 != 0) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = (uint)param_2 / uVar5;
    }
    for (plVar4 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)((uint)param_2 - uVar8 * uVar5) * 8); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4[1] == param_2) {
        if ((plVar4[2] != 0) && (lVar6 = *(long *)(plVar4[2] + 0x40), lVar6 != 0)) {
          memcpy(plVar3 + 1,(void *)(lVar6 + 0x3c),0x24);
          return plVar3 + 1;
        }
        break;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x88);
  uVar5 = *(uint *)(param_1 + 0x90);
  plVar4 = plVar3 + (ulong)uVar5 * 6;
  if ((uVar5 != 0) && (*plVar3 != param_2)) {
    lVar6 = (ulong)uVar5 * 0x30;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        plVar3 = plVar4;
        goto LAB_034b2340;
      }
      plVar7 = plVar3 + 6;
      plVar3 = plVar3 + 6;
    } while (*plVar7 != param_2);
  }
LAB_034b2340:
  if (plVar4 == plVar3) {
    return (long *)0x0;
  }
  if (plVar3 < plVar4 + -6) {
    do {
      plVar7 = plVar3 + 6;
      memcpy(plVar3,plVar7,0x30);
      plVar3 = plVar7;
    } while (plVar7 < plVar4 + -6);
    uVar5 = *(uint *)(param_1 + 0x90);
  }
  *(uint *)(param_1 + 0x90) = uVar5 - 1;
  return (long *)0x0;
}


