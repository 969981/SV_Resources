/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ebb44; name: FUN_001ebb44
 */


void FUN_001ebb44(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    (**(code **)(*(long *)PTR_PTR_047cb968 + 0x88))();
    param_1[3] = 0;
    param_1[5] = 0;
    FUN_001eb7b8(param_1 + 7);
    FUN_001ec308(*param_1);
    *param_1 = 0;
    FUN_001ec308(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


