/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00610590; name: FUN_00610590
 */


void FUN_00610590(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_047cedc0 + 0x10);
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    FUN_00616f8c(param_1 + 2);
    lVar1 = param_1[2];
  }
  else {
    if ((*(byte *)(plVar2 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar2);
    FUN_00616f8c(param_1 + 2);
    lVar1 = param_1[2];
  }
  if ((lVar1 != 0) || (lVar1 = param_1[4], lVar1 == 0)) {
    return;
  }
  if ((*(long *)(lVar1 + 0x20) != 0) && (FUN_006173fc(lVar1), *(long *)(lVar1 + 0x28) == 0)) {
    FUN_0049e700(*(undefined8 *)(lVar1 + 0x20));
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


