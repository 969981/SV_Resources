/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01823890; name: FUN_01823890
 */


void FUN_01823890(long param_1,byte param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_01823914(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x210));
  if (((lVar2 != 0) && (param_2 < 4)) && ((int)param_3 < 5)) {
    uVar1 = *(ulong *)(PTR_DAT_047e2f38 + (ulong)param_2 * 8);
    if (lVar2 - 1U <= *(ulong *)(PTR_DAT_047e2f38 + (ulong)param_2 * 8)) {
      uVar1 = lVar2 - 1U;
    }
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)param_2 * 0x28 +
               (ulong)param_3 * 8 + 0x30) = uVar1;
  }
  return;
}


