/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d29288; name: FUN_01d29288
 */


void FUN_01d29288(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_130 [136];
  undefined1 auStack_a8 [136];
  
  FUN_01d32d20(auStack_130,param_3,*param_2,param_2[1]);
  *param_1 = 1;
  memcpy(auStack_a8,auStack_130,0x88);
  FUN_01941d88(param_1 + 8,auStack_a8);
  return;
}


