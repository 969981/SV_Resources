/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ebe88; name: FUN_001ebe88
 */


undefined8 FUN_001ebe88(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001eb850(0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*(long *)PTR_PTR_047cb968 + 0x20))();
    return uVar2;
  }
  return 1;
}


