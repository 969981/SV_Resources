/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290fe60; name: FUN_0290fe60
 */


uint FUN_0290fe60(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((uVar3 & 1) == 0) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
     (uVar3 & 1) != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_02915ecc(param_1);
    if ((iVar1 == 1) &&
       ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        0x32 < iVar1 &&
        (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46)
        , (uVar3 & 1) != 0)))) {
      uVar2 = 1;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x25);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
        uVar2 = uVar2 & 1;
      }
    }
  }
  return uVar2;
}


