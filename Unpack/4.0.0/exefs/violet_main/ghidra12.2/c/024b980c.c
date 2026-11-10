/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024b980c; name: FUN_024b980c
 */


ulong FUN_024b980c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0x666666666666666 - uVar2 < (param_2 - uVar2) + *(long *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = uVar2 << 3;
  if (4 < uVar2 >> 0x3d) {
    uVar1 = 0xffffffffffffffff;
  }
  if (uVar2 >> 0x3d == 0) {
    uVar1 = (uVar2 << 3) / 5;
  }
  uVar2 = *(long *)(param_1 + 0x10) + param_2;
  if (0x666666666666665 < uVar1) {
    uVar1 = 0x666666666666666;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


