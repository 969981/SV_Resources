/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290be20; name: FUN_0290be20
 */


undefined8 FUN_0290be20(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x6abc4e98d224cabd);
  if (((uVar1 & 1) == 0) &&
     ((((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x6f),
        (uVar1 & 1) != 0 &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d)
        , (uVar1 & 1) != 0)) ||
       ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x169),
        (uVar1 & 1) != 0 &&
        (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d)
        , (uVar1 & 1) != 0)))) ||
      ((uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x163),
       (uVar1 & 1) != 0 &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d),
       (uVar1 & 1) != 0)))))) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0157dd78(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


