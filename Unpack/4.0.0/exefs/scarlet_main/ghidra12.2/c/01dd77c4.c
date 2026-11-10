/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd77c4; name: FUN_01dd77c4
 */


void FUN_01dd77c4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01195974();
  if (*(uint *)(param_1 + 0x108) < 3) {
    FUN_01dd81d4(param_1,*(uint *)(param_1 + 0x108),0);
    uVar1 = (uint)((ulong)uVar2 >> 0x20);
    *(uint *)(param_1 + 0x1ec) = (uint)uVar2 & 0xfff | ((uint)uVar2 & 0xfff) << 0xc | 0x1000000;
    *(uint *)(param_1 + 0x1f0) = uVar1 & 0xfff | (uVar1 & 0xfff) << 0xc | 0x1000000;
    *(undefined1 *)(param_1 + 500) = 1;
    FUN_01dd1a34(param_1);
    *(undefined4 *)(param_1 + 0x27c) = 6;
    FUN_0119544c(param_1,6);
    return;
  }
  return;
}


