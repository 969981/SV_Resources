/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f00e8; name: FUN_026f00e8
 */


ulong FUN_026f00e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 - uVar3 < (lVar2 - uVar3) + 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = uVar3 << 3;
  if (4 < uVar3 >> 0x3d) {
    uVar1 = 0xffffffffffffffff;
  }
  if (uVar3 >> 0x3d == 0) {
    uVar1 = (uVar3 << 3) / 5;
  }
  if (uVar1 <= uVar4) {
    uVar4 = uVar1;
  }
  if (uVar4 < lVar2 + 1U) {
    uVar4 = lVar2 + 1;
  }
  return uVar4;
}


