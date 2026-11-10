/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cddd0; name: FUN_007cddd0
 */


undefined8 FUN_007cddd0(void)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)PTR_DAT_047d0a08 + 0x80) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x007cdde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)PTR_DAT_047d0a08 + 0x80))();
  return uVar1;
}


