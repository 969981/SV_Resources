/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f3920; name: FUN_017f3920
 */


undefined4 FUN_017f3920(long param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if (*(short *)(param_1 + 0xb6) == 0x5a) {
    return 0xfffffff4;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((uVar5 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x9e) - 0x68;
    if ((uVar2 < 0x3d) && ((1L << ((ulong)uVar2 & 0x3f) & 0x1800000000000001U) != 0))
    goto LAB_017f3990;
  }
  else if (*(ushort *)(param_1 + 0x9e) != 0x97) {
    return 0xfffffff6;
  }
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if (uVar1 < 0xc5) {
    if (uVar1 == 0x9c) {
      return 0xfffffff4;
    }
    if (uVar1 == 0x11) {
      return 0xfffffff6;
    }
  }
  else {
    if (uVar1 == 0x110) {
      return 0xfffffff6;
    }
    if (uVar1 == 0xd5) {
      return 0xfffffff6;
    }
    if ((uVar1 == 0xc5) &&
       (iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), 0x32 < iVar4
       )) {
      return 0xfffffff6;
    }
  }
  if ((cVar3 == '\x01') && (*(short *)(param_1 + 0xb6) == 0x66)) {
    return 0xfffffff6;
  }
  if ((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) {
    if (*(short *)(param_1 + 0xb6) == 0xa6) {
      return 0xfffffff6;
    }
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
    if ((iVar4 == 1) && (*(short *)(param_1 + 0xc2) == 0xa6)) {
      return 0xfffffff6;
    }
  }
LAB_017f3990:
  if (*(char *)(param_1 + 0xb8) == '\b') {
    return 0xfffffff6;
  }
  if (*(char *)(param_1 + 0xb8) == '\x03') {
    return 0xfffffff6;
  }
  if (*(char *)(param_1 + 0xb9) == '\b') {
    return 0xfffffff6;
  }
  if (*(char *)(param_1 + 0xb9) == '\x03') {
    return 0xfffffff6;
  }
  if (*(short *)(param_1 + 0xb6) != 0x62) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar5 & 1) != 0) {
      return 0xfffffff6;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2);
    if (((((uVar5 & 1) == 0) || (*(short *)(param_1 + 0xb6) == 0x1a)) ||
        (*(char *)(param_1 + 0xb8) == '\x02')) || (*(char *)(param_1 + 0xb9) == '\x02')) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2);
      uVar6 = 0xfffffff6;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  return 0xfffffff6;
}


