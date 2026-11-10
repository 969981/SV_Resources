/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035228f4; name: FUN_035228f4
 */


void FUN_035228f4(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x330) != 0) {
    FUN_03537fa4(*(long *)(param_1 + 0x330),param_1 + 800);
    uVar1 = *(undefined8 *)(param_1 + 0x330);
  }
  FUN_0351c44c(uVar1,param_1 + 800);
  FUN_034a2980(param_1,param_2 & 1);
  return;
}


