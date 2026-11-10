/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02913958; name: FUN_02913958
 */


undefined8 FUN_02913958(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),4);
  if (((uVar1 & 1) == 0) &&
     (((*(char *)(param_1 + 0xb8) == '\x01' || (*(char *)(param_1 + 0xb9) == '\x01')) &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46),
      (uVar1 & 1) != 0)))) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


