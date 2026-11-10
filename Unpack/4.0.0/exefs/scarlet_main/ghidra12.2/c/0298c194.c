/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c194; name: FUN_0298c194
 */


ulong FUN_0298c194(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x2420);
  if (uVar1 != 0) {
    uVar3 = 0;
    lVar2 = (param_2 - param_1) + 0x84;
    do {
      lVar2 = lVar2 + -0x8c;
      if (lVar2 == 0) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return uVar1;
}


