/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298cffc; name: FUN_0298cffc
 */


void FUN_0298cffc(long param_1,char param_2,byte param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)param_3 * 8 + 0xd0);
  if ((param_2 == '\0' && param_3 < 2) && (uVar2 = *puVar1, uVar2 < 0xff)) {
    *puVar1 = uVar2 + 1;
  }
  return;
}


