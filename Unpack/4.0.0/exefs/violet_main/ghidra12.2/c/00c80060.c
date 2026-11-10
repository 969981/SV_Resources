/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c80060; name: FUN_00c80060
 */


void FUN_00c80060(undefined8 param_1,long *param_2,long *param_3)

{
  if ((*param_2 != 0) && (0.0 < *(float *)(*param_3 + 4))) {
    *(bool *)(*param_2 + 0x240) = 0.5 < *(float *)(*param_3 + 8);
    return;
  }
  return;
}


