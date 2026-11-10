/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02465b68; name: FUN_02465b68
 */


undefined8 FUN_02465b68(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02465bb0();
  if (param_2 < uVar1) {
    uVar2 = FUN_02465bbc(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined4 *)(param_1 + 0x38));
    return uVar2;
  }
  return 0;
}


