/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103730; name: FUN_00103730
 */


undefined8 FUN_00103730(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x2d8) == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    if (((*(code **)(param_1 + 0x240) == (code *)0x0) ||
        (uVar1 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar1 & 1) == 0)) &&
       (*(long *)(param_1 + 0x1f8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00103794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x230))(param_1 + 0x210);
      return uVar2;
    }
  }
  return 0;
}


