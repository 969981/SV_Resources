/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298003c; name: FUN_0298003c
 */


void FUN_0298003c(long param_1,byte param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x210) +
                     (ulong)param_2 * 8 + 8);
  if ((param_2 < 5) && (uVar2 = *puVar1, uVar2 < *(ulong *)(PTR_DAT_047e2f40 + (ulong)param_2 * 8)))
  {
    *puVar1 = uVar2 + 1;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x2d);
  return;
}


