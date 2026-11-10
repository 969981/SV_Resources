/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194a110; name: FUN_0194a110
 */


uint FUN_0194a110(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(ulong *)(param_1 + 8);
  uVar1 = uVar2 & 7;
  uVar3 = (uint)(*(ulong *)(param_1 + 8) >> 0x1a);
  if (uVar1 != 4) {
    uVar3 = 0;
  }
  uVar2 = uVar2 >> 3 & 0x3f;
  if (uVar1 != 3) {
    uVar2 = uVar3;
  }
  return uVar2;
}


