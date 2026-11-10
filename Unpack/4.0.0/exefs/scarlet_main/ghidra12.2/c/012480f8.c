/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012480f8; name: FUN_012480f8
 */


void FUN_012480f8(long param_1,byte param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x210) +
                     (ulong)param_2 * 0x28 + (ulong)param_3 * 8 + 0x30);
  if ((param_2 < 4 && (int)param_3 < 5) &&
     (uVar2 = *puVar1, uVar2 < *(ulong *)(PTR_DAT_047e2f38 + (ulong)param_2 * 8))) {
    *puVar1 = uVar2 + 1;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x2e,param_2,param_3 & 0xff);
  return;
}


