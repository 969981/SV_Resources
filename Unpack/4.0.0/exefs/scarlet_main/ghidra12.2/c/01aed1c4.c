/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aed1c4; name: FUN_01aed1c4
 */


void FUN_01aed1c4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 local_24 [4];
  undefined8 local_8;
  
  local_24[0] = param_4;
  local_8 = FUN_01aee9f4(param_3,*param_2,param_2[1],local_24);
  *param_1 = 1;
  FUN_016b6fd8(param_1 + 8,&local_8);
  return;
}


