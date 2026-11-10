/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00520544; name: FUN_00520544
 */


long FUN_00520544(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar3 = *(long *)(lVar1 + 0x18);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 8) != lVar1 + 0x10)) {
      lVar1 = tpidr_el0;
      if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
        lVar3 = *(long *)(lVar1 + 0x18);
      }
      else {
        lVar3 = *(long *)(param_1 + 8);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 8) != lVar1 + 0x10)) {
          lVar3 = FUN_005209d8(param_1,lVar1 + 0x10);
        }
      }
      lVar1 = *(long *)(lVar3 + 0x28);
      if ((ulong)(*(long *)(lVar3 + 0x30) - lVar1) < param_2) {
        lVar1 = FUN_00520b10(lVar3,param_2);
        plVar2 = *(long **)(lVar3 + 0x38);
        if (plVar2 == *(long **)(lVar3 + 0x40)) goto LAB_00520750;
      }
      else {
        *(ulong *)(lVar3 + 0x28) = lVar1 + param_2;
        plVar2 = *(long **)(lVar3 + 0x38);
        if (plVar2 == *(long **)(lVar3 + 0x40)) {
LAB_00520750:
          FUN_00520494(lVar3,lVar1,param_3);
          return lVar1;
        }
      }
      *plVar2 = lVar1;
      plVar2[1] = param_3;
      *(long **)(lVar3 + 0x38) = plVar2 + 2;
      return lVar1;
    }
  }
  lVar1 = *(long *)(lVar3 + 0x28);
  if ((ulong)(*(long *)(lVar3 + 0x30) - lVar1) < param_2) {
    lVar1 = FUN_00520b10(lVar3,param_2);
    plVar2 = *(long **)(lVar3 + 0x38);
    if (plVar2 == *(long **)(lVar3 + 0x40)) goto LAB_00520630;
  }
  else {
    *(ulong *)(lVar3 + 0x28) = lVar1 + param_2;
    plVar2 = *(long **)(lVar3 + 0x38);
    if (plVar2 == *(long **)(lVar3 + 0x40)) {
LAB_00520630:
      FUN_00520494(lVar3,lVar1,param_3);
      return lVar1;
    }
  }
  *plVar2 = lVar1;
  plVar2[1] = param_3;
  *(long **)(lVar3 + 0x38) = plVar2 + 2;
  return lVar1;
}


