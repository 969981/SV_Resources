/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd12ac; name: FUN_01dd12ac
 */


void FUN_01dd12ac(long param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x21) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + (ulong)uVar1 + 0x572) = param_3;
  return;
}


