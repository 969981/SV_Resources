/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0d610; name: FUN_02f0d610
 */


void FUN_02f0d610(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_0460eaa0;
  puVar1 = PTR_DAT_047d1a08;
  if ((param_1[3] & 1U) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[3] - 1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02f0d678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


