/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02908e54; name: FUN_02908e54
 */


uint FUN_02908e54(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1e);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3a);
  return uVar3 | uVar1 & 1;
}


