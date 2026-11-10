/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c419e0; name: FUN_00c419e0
 */


void FUN_00c419e0(long param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0x11;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 8) = uVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


