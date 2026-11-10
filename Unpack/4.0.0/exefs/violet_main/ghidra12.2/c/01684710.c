/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01684710; name: FUN_01684710
 */


undefined1 FUN_01684710(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0xa6) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(param_1 + uVar1 * 8) == param_2) {
        return *(undefined1 *)(param_1 + uVar1 + 0x84);
      }
      uVar1 = uVar1 + 1;
    } while (*(byte *)(param_1 + 0xa6) != uVar1);
  }
  return 0;
}


