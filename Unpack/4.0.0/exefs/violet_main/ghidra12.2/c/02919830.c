/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919830; name: FUN_02919830
 */


undefined4 FUN_02919830(long param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x1b1);
  if ((uVar5 & 1) == 0) {
    return param_2;
  }
  if (iVar3 == 3) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x3a);
LAB_029198b0:
    if ((uVar5 & 1) == 0) {
      param_2 = 0xfffffffb;
    }
    uVar6 = param_2;
  }
  else {
    if (iVar4 == iVar3) {
      uVar1 = *(ushort *)(param_1 + 0x9c);
      uVar2 = *(ushort *)(param_1 + 0xa8);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
      if (uVar1 <= uVar2) goto LAB_029198b0;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x3a);
    }
    uVar6 = 0xfffffffb;
    if ((uVar5 & 1) == 0) {
      uVar6 = param_2;
    }
  }
  return uVar6;
}


