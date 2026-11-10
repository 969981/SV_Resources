/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e5720; name: FUN_003e5720
 */


undefined8 FUN_003e5720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0045d160(*param_1,*param_2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (param_1[1] == 0 && param_2[1] == 0) {
    return 0;
  }
  uVar1 = FUN_003de440();
  return uVar1;
}


