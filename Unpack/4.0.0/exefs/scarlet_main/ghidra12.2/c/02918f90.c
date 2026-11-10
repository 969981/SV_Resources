/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02918f90; name: FUN_02918f90
 */


undefined8 FUN_02918f90(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*(byte *)(param_1 + 0xb8) | 8) == 10) || ((*(byte *)(param_1 + 0xb9) | 8) == 10)) &&
      (((*(byte *)(param_1 + 0xc4) | 8) == 10 || ((*(byte *)(param_1 + 0xc5) | 8) == 10)))) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x3d),
     (uVar1 & 1) != 0)) {
    return 2;
  }
  uVar2 = FUN_01ac4a7c(param_1);
  return uVar2;
}


