/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eb924; name: FUN_001eb924
 */


undefined8 FUN_001eb924(void)

{
  undefined8 uVar1;
  
  if ((DAT_047ecee6 & 1) == 0) {
    DAT_047ecee6 = 1;
    uVar1 = (**(code **)(*(long *)PTR_PTR_047cb968 + 0x20))();
    return uVar1;
  }
  return 1;
}


