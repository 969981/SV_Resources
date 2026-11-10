/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f110c; name: FUN_008f110c
 */


void FUN_008f110c(long param_1,uint param_2)

{
  if ((param_2 >> 6 & 0x40) == 0 &&
      (((param_2 >> 6 & 8) == 0 && (param_2 & 0x4020) == 0) && (param_2 & 0x2050) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f1148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d28c8)(*(undefined8 *)(param_1 + 0xb0));
  return;
}


