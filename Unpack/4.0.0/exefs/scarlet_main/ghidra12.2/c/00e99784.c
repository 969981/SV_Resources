/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e99784; name: FUN_00e99784
 */


uint FUN_00e99784(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00e99bb0(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00e99ef8(*(undefined8 *)(param_1 + 0x70));
  uVar1 = 2;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar2 & 1;
  }
  return uVar1;
}


