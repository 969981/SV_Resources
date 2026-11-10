/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f4a4; name: FUN_0086f4a4
 */


void FUN_0086f4a4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1ce8 + 0x10);
  if (param_1[3] != 0) {
    FUN_012c4338();
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0086f500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


