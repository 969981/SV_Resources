/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f7fee4; name: FUN_02f7fee4
 */


void FUN_02f7fee4(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*param_2,0);
  if ((int)param_3 < 1) {
    return;
  }
  memset(param_2,0,(ulong)param_3 << 3);
  return;
}


