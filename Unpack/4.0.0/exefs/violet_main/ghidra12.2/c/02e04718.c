/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e04718; name: FUN_02e04718
 */


undefined8 FUN_02e04718(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xe0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if (((uVar2 & 1) == 0) && (*(short *)(param_1 + 0xb6) != 0x7e)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
    if ((((uVar2 & 1) == 0) &&
        (((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),
                              0xfd3846567a2485a3), (uVar2 & 1) == 0 &&
          (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),
                              0x240b99f40359d329), (uVar2 & 1) == 0)) &&
         (*(short *)(param_1 + 0xb6) != 0x14)))) ||
       ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
        iVar1 < 0x47 ||
        (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x27)
        , (uVar2 & 1) == 0)))) {
      uVar3 = 0xfffffff6;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


