/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e74c74; name: FUN_00e74c74
 */


long FUN_00e74c74(undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_2 + 0x70);
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x80) / uVar4;
  }
  uVar3 = (ulong)((param_1._0_4_ - (float)*(undefined8 *)(param_2 + 0x60)) /
                 (float)*(undefined8 *)(param_2 + 0x50));
  uVar1 = uVar4;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  uVar3 = (ulong)((param_1._8_4_ - (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20)) /
                 (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20));
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  return uVar1 + uVar2 * uVar4;
}


