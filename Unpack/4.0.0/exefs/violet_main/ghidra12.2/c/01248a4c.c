/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248a4c; name: FUN_01248a4c
 */


uint FUN_01248a4c(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_00f7e3e0(uVar3,*(undefined1 *)(*(long *)(param_1 + 8) + 0x95));
  uVar2 = FUN_01248a90(param_1,uVar1);
  return ~uVar2 & 1;
}


