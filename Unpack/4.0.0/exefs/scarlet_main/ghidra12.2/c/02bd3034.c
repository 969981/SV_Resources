/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bd3034; name: FUN_02bd3034
 */


void FUN_02bd3034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = param_1[2];
  memcpy(param_2 + 3,param_1 + 3,0x28);
  uVar1 = param_1[8];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = uVar1;
  FUN_00c6c994(param_2 + 9,param_1 + 9);
  uVar1 = param_1[0xc];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = uVar1;
  return;
}


