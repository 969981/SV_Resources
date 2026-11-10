/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bd26c; name: FUN_024bd26c
 */


ulong FUN_024bd26c(long param_1,long param_2)

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


