/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


