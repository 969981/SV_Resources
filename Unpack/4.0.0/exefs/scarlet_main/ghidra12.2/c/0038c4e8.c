/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c4e8; name: FUN_0038c4e8
 */


void FUN_0038c4e8(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  param_1[1] = param_3;
  *(byte *)(param_1 + 2) = param_2 & 1;
  puVar1 = PTR_DAT_047ccfd8;
  *param_1 = *(undefined8 *)PTR_DAT_047ccfd8;
  *(undefined8 **)puVar1 = param_1;
  return;
}


