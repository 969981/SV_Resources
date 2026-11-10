/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015200b8; name: FUN_015200b8
 */


void FUN_015200b8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = FUN_0271ac10(*(undefined8 *)(param_1 + 0x30));
    bVar1 = uVar3 < uVar2;
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (bVar1);
  uVar3 = 0;
  do {
    uVar2 = FUN_0271ac2c(*(undefined8 *)(param_1 + 0x30));
    bVar1 = uVar3 < uVar2;
    uVar3 = (ulong)((int)uVar3 + 1);
  } while (bVar1);
  return;
}


