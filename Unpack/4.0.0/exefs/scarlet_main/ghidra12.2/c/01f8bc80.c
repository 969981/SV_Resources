/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8bc80; name: FUN_01f8bc80
 */


ulong FUN_01f8bc80(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_2 + 0x20);
    do {
      if ((0.01 < *pfVar3) &&
         (uVar1 = FUN_00daa390(param_1,*(undefined8 *)(pfVar3 + 2)), (uVar1 & 1) == 0)) {
        uVar1 = (ulong)(uint)*pfVar3 << 0x20;
        uVar2 = 1;
        goto LAB_01f8bcdc;
      }
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 0x10;
    } while (param_3 != 0);
  }
  uVar1 = 0;
  uVar2 = 0;
LAB_01f8bcdc:
  return uVar2 | uVar1;
}


