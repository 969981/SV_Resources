/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c3848; name: FUN_034c3848
 */


void FUN_034c3848(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x034c3884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  return;
}


