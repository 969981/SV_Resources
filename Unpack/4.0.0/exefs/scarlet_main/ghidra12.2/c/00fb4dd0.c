/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb4dd0; name: FUN_00fb4dd0
 */


void FUN_00fb4dd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((param_2[0xc] == 0) || ((*(byte *)(param_2[0xc] + 0x1e8) & 1) != 0)) &&
     ((param_2[4] == 0 || ((*(byte *)(param_2[4] + 0x1e8) & 1) != 0)))) {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    *param_1 = uVar1;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


