/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290a814; name: FUN_0290a814
 */


uint FUN_0290a814(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((lVar5 == 0) ||
     (lVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), lVar5 != 0)) {
    return 0;
  }
  uVar3 = 0;
  if (*(short *)(param_1 + 0xb6) == 0x3c) {
    return 0;
  }
  if (*(short *)(param_1 + 0xb6) == 5) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (iVar1 < iVar2) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = 0;
    }
  }
  uVar6 = *(ushort *)(param_1 + 0xb4);
  if (uVar6 < 0x71) {
    if ((uVar6 != 0x19) && (uVar6 != 0x69)) goto LAB_0290a92c;
  }
  else if ((uVar6 != 0x71) && ((uVar6 != 0x164 && (uVar6 != 0xe9)))) goto LAB_0290a92c;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  uVar3 = uVar3 + (uVar4 & 1);
  uVar6 = *(ushort *)(param_1 + 0xb4);
LAB_0290a92c:
  if (uVar6 == 0x1e7) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xf2fe6b1eb04f534)
    ;
    return uVar3 - (uVar4 & 1);
  }
  if ((uVar6 == 0x289) || (uVar6 == 0x1ed)) {
    uVar3 = uVar3 - 1;
  }
  return uVar3;
}


