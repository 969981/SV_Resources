/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124740; name: FUN_00124740
 */


void FUN_00124740(long param_1,long *param_2,undefined8 param_3)

{
  param_2[2] = 0;
  param_2[3] = param_1;
  *param_2 = (long)(param_2 + 4);
  param_2[1] = 0x400;
  FUN_00122800();
  FUN_00124470(param_2,param_3,0xffffffff);
  return;
}


