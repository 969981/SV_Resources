/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464b70; name: FUN_00464b70
 */


undefined8 FUN_00464b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_00465440();
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = 0;
  param_1[6] = 0;
  *param_2 = uVar1;
  return uVar2;
}


