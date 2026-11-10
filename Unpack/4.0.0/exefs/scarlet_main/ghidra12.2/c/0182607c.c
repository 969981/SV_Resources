/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182607c; name: FUN_0182607c
 */


void FUN_0182607c(long *param_1)

{
  undefined *puVar1;
  
  FUN_01826204();
  puVar1 = PTR_DAT_047dcd78 + 0x40;
  *param_1 = (long)(PTR_DAT_047dcd78 + 0x10);
  param_1[4] = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  param_1[9] = 0;
  param_1[0xc] = 0x666666666666666;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1[1];
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_1[1];
  param_1[0x11] = 0x666666666666666;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  FUN_01826100(param_1 + 9,0x14);
  return;
}


