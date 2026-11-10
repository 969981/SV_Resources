/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03522938; name: FUN_03522938
 */


void FUN_03522938(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x318) != 0) {
    FUN_03537fa4(*(long *)(param_1 + 0x318),param_1 + 0x308);
    uVar1 = *(undefined8 *)(param_1 + 0x318);
  }
  FUN_0351c44c(uVar1,param_1 + 0x308);
  FUN_034a2980(param_1 + -0x18,param_2 & 1);
  return;
}


