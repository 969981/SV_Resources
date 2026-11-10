/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00520d08; name: FUN_00520d08
 */


void FUN_00520d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(code **)(param_1 + 0x58) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00520d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  return;
}


