/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f49d4; name: FUN_017f49d4
 */


int FUN_017f49d4(long param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if ((((((uVar6 & 1) == 0) &&
        (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        (uVar6 & 1) == 0)) && (*(char *)(param_1 + 0xb8) != '\f')) &&
      ((*(char *)(param_1 + 0xb9) != '\f' &&
       (cVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
       cVar4 != '\0')))) &&
     ((*(short *)(param_1 + 0x90) != 0x56 ||
      ((*(char *)(param_1 + 0xb8) != '\x04' && (*(char *)(param_1 + 0xb9) != '\x04')))))) {
    iVar5 = 0;
  }
  else {
    iVar5 = -10;
  }
  uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
  iVar7 = iVar5;
  if ((0x3c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) == 0)) {
    uVar1 = *(ushort *)(param_1 + 0xb6);
    if (uVar1 < 0xd5) {
      if (uVar1 == 7) goto LAB_017f4b10;
      if (uVar1 == 0x9c) {
        return iVar5 + -0xc;
      }
    }
    else if ((uVar1 == 0x110) || (uVar1 == 0xd5)) goto LAB_017f4b10;
    if ((*(short *)(param_1 + 0x90) == 0x56) &&
       (((uVar1 == 10 || (uVar1 == 0x4e)) || (uVar1 == 0x1f)))) goto LAB_017f4b10;
    iVar7 = iVar5 + -10;
    if (uVar1 != 0x66 || cVar3 != '\x01') {
      iVar7 = iVar5;
    }
    if ((((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) &&
        ((uVar1 == 0xa6 ||
         ((iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))(), iVar5 == 1 &&
          (*(short *)(param_1 + 0xc2) == 0xa6)))))) ||
       ((*(short *)(param_1 + 0xb6) == 0xc5 &&
        (iVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        0x32 < iVar5)))) goto LAB_017f4b10;
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar6 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
    if ((uVar6 & 1) == 0) {
      return iVar7;
    }
    if (*(short *)(param_1 + 0xb6) == 0x1a) {
      return iVar7;
    }
    if (*(char *)(param_1 + 0xb8) == '\x02') {
      return iVar7;
    }
    if (*(char *)(param_1 + 0xb9) == '\x02') {
      return iVar7;
    }
    return iVar7 + -10;
  }
LAB_017f4b10:
  return iVar7 + -10;
}


