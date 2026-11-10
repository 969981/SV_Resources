/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f4c20; name: FUN_017f4c20
 */


undefined8 FUN_017f4c20(long param_1)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c8))();
  if (*(short *)(param_1 + 0xb6) == 0x5a) {
    return 0xfffffff4;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((((uVar5 & 1) == 0) || (*(short *)(param_1 + 0x9e) == 0x97)) &&
      (((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
        (uVar5 & 1) == 0 &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),2),
        (uVar5 & 1) == 0)) ||
       ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1),
        (uVar5 & 1) == 0 &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            *(undefined4 *)(param_1 + 0xb0)), (uVar5 & 1) == 0)))))) &&
     ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d0))(*(long **)(param_1 + 0x30),2),
      (uVar5 & 1) == 0 ||
      ((((*(short *)(param_1 + 0xb6) == 0x1a || (*(char *)(param_1 + 0xb8) == '\x02')) ||
        (*(char *)(param_1 + 0xb9) == '\x02')) ||
       ((uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1),
        (uVar5 & 1) == 0 &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                            *(undefined4 *)(param_1 + 0xb0)), (uVar5 & 1) == 0)))))))) {
    uVar1 = *(ushort *)(param_1 + 0x9e);
    if (uVar1 == 0xd4) {
LAB_017f4d3c:
      uVar7 = (uint)*(ushort *)(param_1 + 0xb6);
      if (*(ushort *)(param_1 + 0xb6) < 0x80) {
        if ((uVar7 == 0x1d) || (uVar7 == 0x49)) {
          if (*(char *)(param_1 + 0xb8) == '\x03') {
            return 0xfffffff6;
          }
          if (*(char *)(param_1 + 0xb8) == '\b') {
            return 0xfffffff6;
          }
          if (*(char *)(param_1 + 0xb9) == '\x03') {
            return 0xfffffff6;
          }
          if (*(char *)(param_1 + 0xb9) == '\b') {
            return 0xfffffff6;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
          if ((uVar5 & 1) != 0) goto LAB_017f4cec;
        }
      }
      else {
        if ((uVar7 - 0x80 < 0x2d) && ((1L << ((ulong)(uVar7 - 0x80) & 0x3f) & 0x100010000001U) != 0)
           ) {
          return 0xfffffff4;
        }
        if ((uVar7 == 0x110) || (uVar7 == 0xd5)) goto LAB_017f4cec;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
      if (((uVar5 & 1) != 0) ||
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                             *(undefined4 *)(param_1 + 0xb0)), (uVar5 & 1) != 0)) {
        sVar2 = *(short *)(param_1 + 0xb6);
        if (sVar2 == 0x11) {
          return 0xfffffff6;
        }
        if (sVar2 == 0x9c) {
          return 0xfffffff6;
        }
        if (((sVar2 == 0xc5) &&
            (iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
            0x32 < iVar4)) || ((cVar3 == '\x01' && (*(short *)(param_1 + 0xb6) == 0x66))))
        goto LAB_017f4cec;
      }
      if (((*(char *)(param_1 + 0xb8) == '\v') || (*(char *)(param_1 + 0xb9) == '\v')) &&
         ((*(short *)(param_1 + 0xb6) == 0xa6 ||
          ((iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))(), iVar4 == 1 &&
           (*(short *)(param_1 + 0xc2) == 0xa6)))))) goto LAB_017f4cec;
    }
    else {
      if (((*(char *)(param_1 + 0xb8) == '\x03') || (*(char *)(param_1 + 0xb8) == '\b')) ||
         ((*(char *)(param_1 + 0xb9) == '\b' || (*(char *)(param_1 + 0xb9) == '\x03')))) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),1);
        if (((uVar5 & 1) != 0) ||
           (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                               *(undefined4 *)(param_1 + 0xb0)), (uVar5 & 1) != 0))
        goto LAB_017f4cec;
        uVar1 = *(ushort *)(param_1 + 0x9e);
      }
      if ((0x3c < uVar1 - 0x68) ||
         ((1L << ((ulong)(uVar1 - 0x68) & 0x3f) & 0x1800000000000001U) == 0)) goto LAB_017f4d3c;
    }
    uVar6 = 0;
  }
  else {
LAB_017f4cec:
    uVar6 = 0xfffffff6;
  }
  return uVar6;
}


