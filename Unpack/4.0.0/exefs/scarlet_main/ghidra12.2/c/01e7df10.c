/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7df10; name: FUN_01e7df10
 */


ulong FUN_01e7df10(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 - uVar2 < (param_2 - uVar2) + *(long *)(param_1 + 0x28)) {
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
  uVar2 = *(long *)(param_1 + 0x28) + param_2;
  if (uVar1 <= uVar3) {
    uVar3 = uVar1;
  }
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  return uVar2;
}


