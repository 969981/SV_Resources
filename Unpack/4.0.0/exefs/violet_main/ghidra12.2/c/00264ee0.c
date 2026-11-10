/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00264ee0; name: FUN_00264ee0
 */


void FUN_00264ee0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 8);
  lVar2 = *plVar3;
  if (lVar2 != *(long *)(param_1 + 0x10)) {
                    /* try { // try from 00264f00 to 00264f07 has its CatchHandler @ 00264f34 */
    FUN_00514600(plVar3);
    lVar2 = *plVar3;
  }
  puVar1 = PTR_LAB_047cba48;
  if (lVar2 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  FUN_0049e790(puVar1);
  return;
}


