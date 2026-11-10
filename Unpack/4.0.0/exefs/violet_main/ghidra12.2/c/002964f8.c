/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002964f8; name: FUN_002964f8
 */


void FUN_002964f8(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar3 = *param_1;
  uVar1 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    puVar2 = param_1 + 1;
  }
  else {
    puVar2 = (ulong *)param_1[1];
  }
  if ((uVar3 >> 1 != 0) && (uVar3 = uVar3 >> 1, puVar2 != (ulong *)0x0)) {
    puVar2 = puVar2 + uVar3 * 2;
    do {
      puVar2 = puVar2 + -2;
      __ptr = (void *)*puVar2;
      *puVar2 = 0;
      if (__ptr != (void *)0x0) {
                    /* try { // try from 00296564 to 00296567 has its CatchHandler @ 002965a0 */
        free(__ptr);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    uVar1 = *param_1 & 1;
  }
  if (uVar1 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


