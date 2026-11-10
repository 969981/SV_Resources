/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02914cc8; name: FUN_02914cc8
 */


uint FUN_02914cc8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x20);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x84),
       (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x25),
      (uVar2 & 1) == 0)) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xa2),
     (uVar2 & 1) == 0)) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xd6);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


