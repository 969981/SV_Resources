/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b850; name: FUN_0290b850
 */


uint FUN_0290b850(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if ((uVar1 & 0xff) < 5 && (1 << (ulong)(uVar1 & 0x1f) & 0x1aU) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar1 = 2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return uVar1 | uVar2 & 1;
}


