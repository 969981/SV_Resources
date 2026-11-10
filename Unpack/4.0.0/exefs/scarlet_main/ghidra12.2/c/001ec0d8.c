/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ec0d8; name: FUN_001ec0d8
 */


undefined8 FUN_001ec0d8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_001eb850(0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*(long *)PTR_PTR_047cb968 + 0x70))(param_1,param_2);
    return uVar2;
  }
  return 0;
}


