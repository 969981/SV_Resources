/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291874c; name: FUN_0291874c
 */


undefined8 FUN_0291874c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((bVar1 < 7) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1f0),
      (uVar2 & 1) == 0)) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


