/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c78950; name: FUN_02c78950
 */


void FUN_02c78950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045e6550;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_LAB_045e6250;
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02c789a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 8))();
  return;
}


