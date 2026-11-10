/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc71b0; name: FUN_01dc71b0
 */


undefined1 FUN_01dc71b0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_3 < 6) {
    uVar2 = param_3;
  }
  return *(undefined1 *)(param_1 + (ulong)uVar1 * 0xc + (ulong)uVar2 * 2 + 0x527);
}


