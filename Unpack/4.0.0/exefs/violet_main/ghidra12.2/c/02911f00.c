/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02911f00; name: FUN_02911f00
 */


undefined8 FUN_02911f00(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((((uVar2 & 1) == 0) &&
       ((((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
          0x3b < iVar1 ||
          (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
          iVar1 < 0x3d)) &&
         (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
         0x27 < iVar1)) &&
        ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
         0x31 < iVar1 ||
         (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
         iVar1 < 0x33)))))) &&
      ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x3b < iVar1
       || (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
          iVar1 < 0x3d)))) &&
     ((uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x470))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0)), (uVar2 & 1) == 0 ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
      (uVar2 & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}


