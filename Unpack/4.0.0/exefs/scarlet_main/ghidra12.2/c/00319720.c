/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319720; name: FUN_00319720
 */


void FUN_00319720(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0038c780(param_2 << 2);
  *param_1 = uVar1;
  uVar1 = FUN_0038c780(param_2 << 3);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}


