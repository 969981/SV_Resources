/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


