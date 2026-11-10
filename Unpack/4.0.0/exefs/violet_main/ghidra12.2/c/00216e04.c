/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00216e04; name: FUN_00216e04
 */


void FUN_00216e04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_047cbe28 + 0x10);
  if ((param_1 != (long *)PTR_DAT_047cbe20) && (plVar1 = (long *)param_1[2], plVar1 != (long *)0x0))
  {
    *plVar1 = (long)(PTR_DAT_047cbe38 + 0x10);
    FUN_0021b5a0(plVar1);
    if (((plVar1[1] & 1U) != 0) &&
       (plVar2 = (long *)(plVar1[1] & 0xfffffffffffffffe), *plVar2 == 0 && plVar2 != (long *)0x0)) {
      if ((*(byte *)(plVar2 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar2);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


