/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a36a0; name: FUN_003a36a0
 */


ushort * FUN_003a36a0(long param_1,long param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x18f8);
  uVar1 = *puVar2;
  if (*(ulong *)(param_2 + 0x40) == (ulong)uVar1) {
    return puVar2 + 4;
  }
  if (((*(ulong *)(param_2 + 0x40) == (ulong)uVar1 + 1) && (puVar2[0x14] != uVar1)) &&
     (*(int *)(param_2 + 4) - 0x15U < 2)) {
    *param_3 = 1;
    return puVar2 + 0xc;
  }
  return (ushort *)0x0;
}


