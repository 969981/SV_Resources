/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034d600; name: FUN_0034d600
 */


undefined8 FUN_0034d600(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0034d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_047ccdd0 + 0x10))();
    return uVar1;
  }
  if (param_1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0034d620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_047ccdc8 + 0x10))();
    return uVar1;
  }
  return 0;
}


