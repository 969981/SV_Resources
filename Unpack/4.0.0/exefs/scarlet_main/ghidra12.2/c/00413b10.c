/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00413b10; name: FUN_00413b10
 */


undefined8 FUN_00413b10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003eb5b0();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_003eb5b0();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = FUN_003eb5b0();
  *(long *)(param_1 + 0x68) = lVar2;
  if (((*(long *)(param_1 + 0x40) == 0) || (lVar2 == 0)) || (*(long *)(param_1 + 0x60) == 0)) {
    FUN_003eb520();
    FUN_003eb520(*(undefined8 *)(param_1 + 0x60));
    FUN_003eb520(*(undefined8 *)(param_1 + 0x68));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 1;
}


