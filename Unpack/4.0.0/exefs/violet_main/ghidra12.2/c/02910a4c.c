/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02910a4c; name: FUN_02910a4c
 */


undefined8 FUN_02910a4c(long param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar3 & 1) == 0) {
    uVar4 = 0xfffffffe;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x9c);
    if ((((sVar1 == 0xeb) || (sVar1 == 0x269)) || (sVar1 == 0x147)) &&
       ((iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        0x46 < iVar2 &&
        (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x14)
        , (uVar3 & 1) != 0)))) {
      uVar4 = 2;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


