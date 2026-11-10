/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d0428; name: FUN_002d0428
 */


void FUN_002d0428(long param_1)

{
  long lVar1;
  
                    /* try { // try from 002d0438 to 002d0447 has its CatchHandler @ 002d04a4 */
  FUN_002d6c54(param_1,*(undefined8 *)(param_1 + 0x90));
  FUN_002d6c54(param_1,*(undefined8 *)(param_1 + 0x88));
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


