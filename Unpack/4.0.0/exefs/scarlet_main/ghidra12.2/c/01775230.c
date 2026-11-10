/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01775230; name: FUN_01775230
 */


undefined8 FUN_01775230(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == '\0') {
    uVar1 = FUN_01775450(param_1,0);
    return uVar1;
  }
  FUN_00c46da0((double)*(float *)(param_2 + 0x10),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x14),param_1);
  FUN_00c46da0((double)*(float *)(param_2 + 0x18),param_1);
  return 3;
}


