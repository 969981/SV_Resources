/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140f318; name: FUN_0140f318
 */


void FUN_0140f318(undefined8 *param_1,long param_2)

{
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0140f324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2 + 0x30);
  return;
}


