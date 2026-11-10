/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226e558; name: FUN_0226e558
 */


void FUN_0226e558(long param_1)

{
  int iVar1;
  uint local_24;
  NpadControllerColor aNStack_20 [8];
  NpadControllerColor aNStack_18 [8];
  
  local_24 = *(uint *)(param_1 + 0x4b8);
  iVar1 = nn::hid::GetNpadControllerColor(aNStack_18,aNStack_20,&local_24);
  if (iVar1 == 0) {
    FUN_0226d758(aNStack_18);
  }
  return;
}


