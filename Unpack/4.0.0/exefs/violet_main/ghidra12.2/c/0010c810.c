/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010c810; name: FUN_0010c810
 */


undefined4 FUN_0010c810(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (((param_1 != 0x6632424b) && (param_1 != 0x6732424b)) && (param_1 != 0x6832424b)) {
    uVar1 = param_1 + 0x96cdbdb5U >> 0x18 | (param_1 + 0x96cdbdb5U) * 0x100;
    if (5 < uVar1) {
      return 0;
    }
    uVar2 = *(undefined4 *)(&DAT_03cb4b60 + (long)(int)uVar1 * 4);
  }
  return uVar2;
}


