/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3728; name: FUN_017f3728
 */


undefined8 FUN_017f3728(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar4 & 1) != 0) {
    return 0xfffffff6;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
  if ((uVar4 & 1) != 0) {
    return 0xfffffff6;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar4 & 1) != 0) && (*(short *)(param_1 + 0x9e) != 0x97)) {
    return 0xfffffff6;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),3);
  if (((((uVar4 & 1) != 0) && (*(short *)(param_1 + 0xb6) != 0x1a)) &&
      (*(char *)(param_1 + 0xb8) != '\x02')) && (*(char *)(param_1 + 0xb9) != '\x02')) {
    return 0xfffffff6;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
  if ((((uVar4 & 1) != 0) && (*(short *)(param_1 + 0xb6) != 0x1a)) &&
     ((*(char *)(param_1 + 0xb8) != '\x02' && (*(char *)(param_1 + 0xb9) != '\x02')))) {
    return 0xfffffff6;
  }
  uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if ((0x3c < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) == 0)) {
    uVar1 = *(ushort *)(param_1 + 0xb6);
    if (uVar1 < 0x9c) {
      if (uVar1 == 0xf) {
        return 0xfffffff6;
      }
      if (uVar1 == 0x48) {
        return 0xfffffff6;
      }
    }
    else {
      if (uVar1 == 0x9c) {
        return 0xfffffff6;
      }
      if (uVar1 == 0xd5) {
        return 0xfffffff6;
      }
      if (uVar1 == 0x110) {
        return 0xfffffff6;
      }
    }
    if ((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) {
      if (uVar1 == 0xa6) {
        return 0xfffffff6;
      }
      iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
      if ((iVar3 == 1) && (*(short *)(param_1 + 0xc2) == 0xa6)) {
        return 0xfffffff6;
      }
    }
    else {
      if (uVar1 == 0xaf) {
        return 0xfffffff6;
      }
      plVar5 = *(long **)(param_1 + 0x30);
      if (uVar1 == 0xc5) {
        iVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,*(undefined4 *)(param_1 + 0xb0));
        if (0x32 < iVar3) {
          return 0xfffffff6;
        }
      }
      else {
        iVar3 = (**(code **)(*plVar5 + 0x4d8))();
        if ((iVar3 == 1) && (*(short *)(param_1 + 0xc2) == 0xaf)) {
          return 0xfffffff6;
        }
      }
    }
  }
  return 0;
}


