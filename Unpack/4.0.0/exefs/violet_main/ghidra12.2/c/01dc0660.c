/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc0660; name: FUN_01dc0660
 */


void FUN_01dc0660(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < *(byte *)(param_1 + 0x56f) || param_2 == 0x20) {
    uVar1 = param_2;
  }
  *(char *)(param_1 + 0x570) = (char)uVar1;
  return;
}


