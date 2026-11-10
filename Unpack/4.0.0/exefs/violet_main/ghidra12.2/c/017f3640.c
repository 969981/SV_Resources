/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3640; name: FUN_017f3640
 */


int FUN_017f3640(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x17);
  iVar6 = -10;
  if ((uVar5 & 1) == 0) {
    iVar6 = 0;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if ((uVar5 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x9e);
    if ((1 < uVar2 - 0xa3) && (uVar2 != 0x68)) {
      if (uVar2 == 0x9e) goto LAB_017f3690;
      iVar4 = iVar6;
      if (*(short *)(param_1 + 0xb6) == 0x9c) {
        iVar4 = iVar6 + -0xc;
      }
      iVar1 = iVar6 + -10;
      if (*(short *)(param_1 + 0xb6) != 0xa5) {
        iVar1 = iVar4;
      }
      iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      iVar6 = iVar1;
      if ((iVar4 == 1) && (iVar6 = iVar1 + -10, *(short *)(param_1 + 0xc2) != 0xa5)) {
        iVar6 = iVar1;
      }
    }
    iVar4 = iVar6;
  }
  else {
LAB_017f3690:
    sVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar4 = iVar6 + -10;
    if (sVar3 != 0) {
      iVar4 = iVar6;
    }
  }
  return iVar4;
}


