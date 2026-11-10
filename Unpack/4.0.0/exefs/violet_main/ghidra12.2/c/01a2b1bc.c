/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2b1bc; name: FUN_01a2b1bc
 */


void FUN_01a2b1bc(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x48) == (long *)0x0) {
    *param_1 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a2b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x48) + 0x70))();
  return;
}


