/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008dceb0; name: FUN_008dceb0
 */


undefined8 FUN_008dceb0(undefined1 *param_1,long param_2,uint param_3)

{
  *(undefined8 *)(param_1 + 8) =
       *(undefined8 *)(*(long *)(param_2 + *(long *)(PTR_DAT_047d1f00 + (ulong)param_3 * 8)) + 0x68)
  ;
  *param_1 = 1;
  return 1;
}


