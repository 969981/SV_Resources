/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ab29c; name: FUN_024ab29c
 */


void FUN_024ab29c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  
  uVar1 = *param_1;
  FUN_024addf0(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,param_2,param_1 + 2,param_5,param_6,0,0);
  return;
}


