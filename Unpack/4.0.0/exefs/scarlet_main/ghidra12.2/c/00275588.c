/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00275588; name: FUN_00275588
 */


void FUN_00275588(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*param_1 & 1) == 0) {
    puVar1 = param_1 + 1;
  }
  else {
    puVar1 = (ulong *)param_1[1];
    if (puVar1 == (ulong *)0x0) {
      uVar2 = 0;
      goto LAB_002755fc;
    }
  }
  uVar2 = *param_1 >> 1;
  puVar1 = puVar1 + uVar2 * 0x12 + -1;
  lVar3 = uVar2 + 1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    uVar2 = *puVar1;
    puVar1 = puVar1 + -0x12;
                    /* try { // try from 002755d0 to 002755d3 has its CatchHandler @ 00275610 */
    FUN_00343d90(uVar2);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar2 = param_1[1];
LAB_002755fc:
  FUN_0049e790(PTR_LAB_047cba48,uVar2);
  return;
}


