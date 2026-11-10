/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f2400c; name: FUN_02f2400c
 */


void FUN_02f2400c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0460ed28;
  memset(param_1 + 1,0,0x48);
  FUN_031c4168(param_1);
                    /* WARNING: Could not recover jumptable at 0x02f2405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


