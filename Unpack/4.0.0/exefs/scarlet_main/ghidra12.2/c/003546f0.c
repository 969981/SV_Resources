/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003546f0; name: FUN_003546f0
 */


void FUN_003546f0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0038ccb0(param_2);
  *param_1 = uVar2;
  FUN_0038db40(&DAT_047ef658);
  param_1[1] = &DAT_047ef640;
  lVar1 = DAT_047ef650;
  param_1[2] = DAT_047ef650;
  *(undefined8 **)(lVar1 + 8) = param_1;
  *(undefined8 **)(param_1[1] + 0x10) = param_1;
  FUN_0038db60(&DAT_047ef658);
  return;
}


