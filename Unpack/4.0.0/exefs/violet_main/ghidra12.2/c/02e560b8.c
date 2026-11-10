/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e560b8; name: FUN_02e560b8
 */


void FUN_02e560b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04607388;
  FUN_0159f938(param_1 + 2);
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e560fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x20))();
  return;
}


