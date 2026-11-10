/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e3954; name: FUN_012e3954
 */


void FUN_012e3954(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_2 + 9;
  iVar1 = *param_2;
  param_1[0x1b] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = iVar1;
  param_1[3] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x18,0,1);
  return;
}


