/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


