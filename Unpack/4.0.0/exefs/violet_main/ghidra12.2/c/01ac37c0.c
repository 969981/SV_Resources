/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ac37c0; name: FUN_01ac37c0
 */


int FUN_01ac37c0(long param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  short sVar13;
  short local_14 [2];
  
  sVar13 = *(short *)(param_1 + 0xc2);
  if (sVar13 == 0x9c) {
    uVar4 = *(ushort *)(param_1 + 0x90);
    uVar6 = (uint)uVar4;
    if (uVar4 < 0x179) {
      uVar1 = uVar4 - 0x27;
      if ((((uVar1 < 0x2b) && ((1L << ((ulong)uVar1 & 0x3f) & 0x40000000051U) != 0)) ||
          ((uVar6 - 0xb2 < 0x35 && ((1L << ((ulong)(uVar6 - 0xb2) & 0x3f) & 0x10000000002001U) != 0)
           ))) || (uVar6 == 0x8b)) goto LAB_01ac4518;
    }
    else if (uVar4 < 0x1bd) {
      if ((uVar6 == 0x179) || (uVar6 == 0x186)) goto LAB_01ac4518;
    }
    else if (((uVar6 - 0x1bd < 0x14) && ((1 << (ulong)(uVar6 - 0x1bd & 0x1f) & 0x80003U) != 0)) ||
            ((uVar6 == 599 || (uVar4 == 0x234)))) {
LAB_01ac4518:
      uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2a8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if ((uVar10 & 1) == 0) {
        return -0xc;
      }
      sVar13 = *(short *)(param_1 + 0xc2);
      goto LAB_01ac37e0;
    }
  }
  else {
LAB_01ac37e0:
    if (((sVar13 == 0x1f) && (*(char *)(param_1 + 0x94) == '\f')) &&
       (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2a8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
       (uVar10 & 1) == 0)) {
      uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 800))
                         (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90));
      if ((uVar10 & 1) != 0) {
        return -0xc;
      }
      sVar13 = *(short *)(param_1 + 0x90);
      if (sVar13 == 0x56) {
        return -0xc;
      }
      if (sVar13 == 0x246) {
        return -0xc;
      }
      if (sVar13 == 0x256) {
        return -0xc;
      }
    }
    if ((((*(short *)(param_1 + 0xc2) == 0x72) && (*(char *)(param_1 + 0x94) == '\n')) &&
        ((uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x2a8))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
         (uVar10 & 1) == 0 && (*(short *)(param_1 + 0x90) != 0x2e9)))) &&
       ((uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 800))(), (uVar10 & 1) != 0 ||
        (*(short *)(param_1 + 0x90) == 0x1e7)))) {
      return -0xc;
    }
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x298))
                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((((uVar10 & 1) != 0) &&
      (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0)), (uVar10 & 1) != 0)) &&
     (*(short *)(param_1 + 0x9e) != 99)) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if (uVar4 < 0x123) {
      if (uVar4 == 0x13) goto LAB_01ac46f4;
      if (uVar4 != 0x5b) {
        return -10;
      }
      if ((*(short *)(param_1 + 0x90) != 0x59) && (*(short *)(param_1 + 0x90) != 0xde)) {
        return -10;
      }
    }
    else if (uVar4 == 0x123) {
      if ((*(short *)(param_1 + 0x90) != 0xfa) && (*(short *)(param_1 + 0x90) != 0x39)) {
        return -10;
      }
    }
    else {
      if (uVar4 != 0x154) {
        return -10;
      }
LAB_01ac46f4:
      uVar4 = *(ushort *)(param_1 + 0x90);
      if (uVar4 < 0xef) {
        if ((uVar4 != 0x10) && (uVar4 != 0x57)) {
          return -10;
        }
      }
      else if (((uVar4 != 0xef) && (uVar4 != 0x147)) && (uVar4 != 0x1df)) {
        return -10;
      }
    }
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x440))
                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                      *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90),0);
  iVar8 = 0;
  if ((uVar10 & 1) != 0) {
    uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x290))
                       (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    if ((uVar10 & 1) == 0) {
      iVar8 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x120))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
      uVar4 = *(ushort *)(param_1 + 0x92);
      if (iVar7 < iVar8) {
        if (uVar4 < 0xaa) {
          if ((uVar4 == 7) || (uVar4 == 0x94)) goto LAB_01ac462c;
LAB_01ac4720:
          plVar11 = *(long **)(param_1 + 0x30);
          uVar12 = 0x59;
        }
        else {
          if ((uVar4 != 0xf8) && (uVar4 != 0xaa)) goto LAB_01ac4720;
LAB_01ac462c:
          plVar11 = *(long **)(param_1 + 0x30);
          uVar12 = 0x32;
        }
        uVar10 = (**(code **)(*plVar11 + 0x4c8))(plVar11,uVar12);
        iVar8 = 3;
        if ((uVar10 & 1) == 0) {
          iVar8 = 0;
        }
        sVar13 = *(short *)(param_1 + 0x92);
        if ((sVar13 == 0x168) || (iVar7 = iVar8, sVar13 == 0x67)) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x32);
          iVar7 = iVar8 + 5;
          if ((uVar10 & 1) == 0) {
            iVar7 = iVar8;
          }
          sVar13 = *(short *)(param_1 + 0x92);
        }
        iVar8 = iVar7;
        if (sVar13 == 0x155) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x32);
          iVar8 = iVar7 + 4;
          if ((uVar10 & 1) == 0) {
            iVar8 = iVar7;
          }
          sVar13 = *(short *)(param_1 + 0x92);
        }
        if (sVar13 != 0x1a5) goto LAB_01ac3834;
        plVar11 = *(long **)(param_1 + 0x30);
        uVar12 = 0x32;
        iVar7 = iVar8;
      }
      else {
        if (uVar4 < 0xaa) {
          if ((uVar4 == 7) || (uVar4 == 0x94)) goto LAB_01ac4438;
LAB_01ac46c4:
          plVar11 = *(long **)(param_1 + 0x30);
          uVar12 = 0x46;
        }
        else {
          if ((uVar4 != 0xf8) && (uVar4 != 0xaa)) goto LAB_01ac46c4;
LAB_01ac4438:
          plVar11 = *(long **)(param_1 + 0x30);
          uVar12 = 0x32;
        }
        uVar10 = (**(code **)(*plVar11 + 0x4c8))(plVar11,uVar12);
        iVar8 = 3;
        if ((uVar10 & 1) == 0) {
          iVar8 = 0;
        }
        sVar13 = *(short *)(param_1 + 0x92);
        if ((sVar13 == 0x67) || (iVar7 = iVar8, sVar13 == 0x168)) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x5a);
          iVar7 = iVar8 + 5;
          if ((uVar10 & 1) == 0) {
            iVar7 = iVar8;
          }
          sVar13 = *(short *)(param_1 + 0x92);
        }
        iVar8 = iVar7;
        if (sVar13 == 0x155) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x5a);
          iVar8 = iVar7 + 4;
          if ((uVar10 & 1) == 0) {
            iVar8 = iVar7;
          }
          sVar13 = *(short *)(param_1 + 0x92);
        }
        if (sVar13 != 0x1a5) goto LAB_01ac3834;
        plVar11 = *(long **)(param_1 + 0x30);
        uVar12 = 0x5a;
        iVar7 = iVar8;
      }
      uVar10 = (**(code **)(*plVar11 + 0x4c8))(plVar11,uVar12);
      iVar8 = iVar7 + 3;
      if ((uVar10 & 1) == 0) {
        iVar8 = iVar7;
      }
    }
    else {
      iVar8 = 0;
    }
  }
LAB_01ac3834:
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xb1);
  iVar7 = iVar8;
  if ((((uVar10 & 1) != 0) && (*(char *)(param_1 + 0x94) == '\x02')) &&
     ((uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x1f5),
      (uVar10 & 1) != 0 ||
      (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xbc),0x1f5),
      (uVar10 & 1) != 0)))) {
    uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x52);
    iVar7 = iVar8 + -8;
    if ((uVar10 & 1) == 0) {
      iVar7 = iVar8;
    }
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x148))
                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x9e);
  iVar8 = iVar7;
  if ((((uVar10 & 1) != 0) &&
      (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 800))
                          (*(long **)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x90)),
      (uVar10 & 1) == 0)) &&
     ((uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x1f5),
      (uVar10 & 1) != 0 ||
      (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xbc),0x1f5),
      (uVar10 & 1) != 0)))) {
    uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x52);
    iVar8 = iVar7 + -8;
    if ((uVar10 & 1) == 0) {
      iVar8 = iVar7;
    }
  }
  uVar6 = *(ushort *)(param_1 + 0xc2) - 0x7e;
  if ((uVar6 < 0x2f) && ((1L << ((ulong)uVar6 & 0x3f) & 0x400000000005U) != 0)) {
    uVar4 = *(ushort *)(param_1 + 0x90);
    uVar6 = (uint)uVar4;
    if (uVar4 < 0x1bd) {
      uVar1 = uVar4 - 0x27;
      if (((uVar1 < 0x2b) && ((1L << ((ulong)uVar1 & 0x3f) & 0x40000000051U) != 0)) ||
         ((uVar6 - 0xb2 < 0x35 && ((1L << ((ulong)(uVar6 - 0xb2) & 0x3f) & 0x10000000040001U) != 0))
         )) goto LAB_01ac3e4c;
    }
    else if ((((uVar6 - 0x20a < 0x22) &&
              ((1L << ((ulong)(uVar6 - 0x20a) & 0x3f) & 0x208000023U) != 0)) || (uVar6 == 599)) ||
            (uVar4 == 0x1bd)) {
LAB_01ac3e4c:
      uVar6 = *(ushort *)(param_1 + 0x9e) - 0x68;
      if ((0x3c < uVar6) || ((1L << ((ulong)uVar6 & 0x3f) & 0x1800000000000001U) == 0)) {
        return iVar8 + -8;
      }
    }
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x90);
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 800))(*(long **)(param_1 + 0x30),uVar4);
  if ((uVar10 & 1) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x92);
    if (*(ushort *)(param_1 + 0x92) < 0x82) {
      if ((0x3f < uVar6 - 0x1a) ||
         ((1L << ((ulong)(uVar6 - 0x1a) & 0x3f) & 0xe00000000000d001U) == 0)) goto LAB_01ac3914;
    }
    else if (((0x3c < uVar6 - 0x82) ||
             ((1L << ((ulong)(uVar6 - 0x82) & 0x3f) & 0x1800000000004001U) == 0)) &&
            ((uVar6 != 0xe3 && (uVar6 != 0x140)))) {
LAB_01ac3914:
      uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x440))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90),0);
      if (((uVar10 & 1) == 0) && (*(int *)(param_1 + 0xbc) != 0)) {
        bVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
        if (bVar2 < 6) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                             (*(long **)(param_1 + 0x30),0x5d);
          if ((uVar10 & 1) != 0) {
            return -2;
          }
        }
        else if ((bVar2 == 6) &&
                (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                                    (*(long **)(param_1 + 0x30),0x4e), (uVar10 & 1) != 0)) {
          return -1;
        }
      }
      iVar7 = iVar8;
      if (((*(short *)(param_1 + 0x92) != 7) &&
          (uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x428))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                              *(undefined4 *)(param_1 + 0xb0),0,local_14),
          local_14[0] == *(short *)(param_1 + 0x90))) &&
         (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x428))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),
                             *(undefined4 *)(param_1 + 0xb0),0,0), uVar5 < uVar4)) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x27);
        iVar8 = iVar8 + (uVar6 & 1);
        cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
        if (cVar3 == '\x02') {
          uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x32);
          iVar8 = iVar8 + (uVar6 & 1);
        }
        uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0xfc);
        iVar7 = iVar8;
        if (((uVar10 & 1) != 0) &&
           (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)),
           (uVar10 & 1) != 0)) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x32);
          iVar7 = iVar8 + 2;
          if ((uVar10 & 1) == 0) {
            iVar7 = iVar8;
          }
        }
      }
      uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x10e);
      iVar8 = iVar7;
      if ((((uVar10 & 1) != 0) &&
          (iVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
          iVar9 == 0)) &&
         (iVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                            (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), 1 < iVar9)
         ) {
        uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x27)
        ;
        iVar8 = iVar7 + 2;
        if ((uVar10 & 1) == 0) {
          iVar8 = iVar7;
        }
      }
    }
  }
  sVar13 = *(short *)(param_1 + 0xaa);
  if (sVar13 == 0x1f) {
    if (*(char *)(param_1 + 0x94) == '\f') {
      uVar6 = (uint)*(ushort *)(param_1 + 0x90);
      if (*(ushort *)(param_1 + 0x90) < 0x239) {
        if (((uVar6 != 0x10c) && (uVar6 != 0x189)) && (uVar6 != 0x1b3)) goto LAB_01ac401c;
      }
      else if ((0x23 < uVar6 - 0x239) ||
              ((1L << ((ulong)(uVar6 - 0x239) & 0x3f) & 0xa00000001U) == 0)) {
LAB_01ac401c:
        if ((*(char *)(param_1 + 0xac) == '\x04') || (*(char *)(param_1 + 0xad) == '\x04')) {
          iVar8 = iVar8 + -7;
        }
        uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x5a)
        ;
        iVar7 = iVar8 + -7;
        if ((uVar10 & 1) == 0) {
          iVar7 = iVar8;
        }
        sVar13 = *(short *)(param_1 + 0xaa);
        iVar8 = iVar7;
        goto LAB_01ac39d4;
      }
    }
  }
  else {
LAB_01ac39d4:
    if ((sVar13 == 0x72) && (*(char *)(param_1 + 0x94) == '\n')) {
      uVar4 = *(ushort *)(param_1 + 0x90);
      if (uVar4 < 0x15a) {
        if (((uVar4 != 0x39) && (uVar4 != 0x6e)) && (uVar4 != 0xf0)) goto LAB_01ac4558;
      }
      else if (((uVar4 != 0x15a) && (uVar4 != 0x188)) && (uVar4 != 0x2e9)) {
LAB_01ac4558:
        uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x5a)
        ;
        iVar7 = iVar8 + -7;
        if ((uVar10 & 1) == 0) {
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
      }
    }
  }
  uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                     (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x2b1);
  if ((uVar10 & 1) != 0) {
    iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (0x46 < iVar7) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x90);
      if (*(ushort *)(param_1 + 0x90) < 0x14e) {
        if (((uVar6 - 0x6b < 0x2d) &&
            ((1L << ((ulong)(uVar6 - 0x6b) & 0x3f) & 0x100004000021U) != 0)) || (uVar6 == 0xe))
        goto LAB_01ac45c4;
      }
      else if (((uVar6 - 0x14e < 0xe) && ((1 << (ulong)(uVar6 - 0x14e & 0x1f) & 0x2021U) != 0)) ||
              (uVar6 == 0x1a1)) {
LAB_01ac45c4:
        iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
        iVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
        if (iVar9 < iVar7) {
          uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                             (*(long **)(param_1 + 0x30),0x32);
          iVar7 = iVar8 + 3;
          if ((uVar10 & 1) == 0) {
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
        }
      }
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x92);
  if (uVar4 < 0x103) {
    if (uVar4 < 0x6f) {
      if (uVar4 < 0x1b) {
        switch(uVar4) {
        case 2:
          iVar7 = FUN_01ac4768(param_1);
          break;
        default:
          goto switchD_01ac3a34_caseD_3;
        case 4:
switchD_01ac3a34_caseD_4:
          iVar7 = FUN_02916180(param_1);
          break;
        case 6:
          iVar7 = FUN_01ac4a7c(param_1);
          break;
        case 7:
          iVar7 = FUN_02916518(param_1);
        }
      }
      else if (uVar4 == 0x46) {
        if (*(short *)(param_1 + 0x90) == 0x20b) {
LAB_01ac4260:
          iVar7 = FUN_0291693c(param_1);
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        if (uVar4 != 0x1b) {
          if (uVar4 != 0x34) {
            return iVar8;
          }
          goto switchD_01ac3a74_caseD_138;
        }
        iVar7 = FUN_02916708(param_1);
      }
    }
    else if (uVar4 < 0xd4) {
      if (uVar4 < 0xaa) {
        if (uVar4 == 0x6f) goto LAB_01ac3eac;
        if (uVar4 == 0x93) goto LAB_01ac4260;
        if (uVar4 != 0x9e) {
          return iVar8;
        }
        iVar7 = FUN_02917428(param_1);
      }
      else if (uVar4 < 0xbe) {
        if (uVar4 == 0xaa) {
          iVar7 = FUN_02917608(param_1);
        }
        else {
          if (uVar4 != 0xac) {
            return iVar8;
          }
          iVar7 = FUN_029176d0(param_1);
        }
      }
      else if (uVar4 == 0xbe) {
        iVar7 = FUN_02917978(param_1);
      }
      else {
        if (uVar4 != 0xc3) {
          return iVar8;
        }
        iVar7 = FUN_02917a94(param_1);
      }
    }
    else if (uVar4 < 0x101) {
      if (uVar4 == 0xd4) goto switchD_01ac3a74_caseD_138;
      if (uVar4 == 0xdf) {
        iVar7 = FUN_02917f9c(param_1);
      }
      else {
        if (uVar4 != 0xe1) {
          return iVar8;
        }
        iVar7 = FUN_029180c4(param_1);
      }
    }
    else {
      if (uVar4 != 0x101) {
        return iVar8;
      }
      iVar7 = FUN_01ac4dcc(param_1);
    }
  }
  else if (uVar4 < 0x150) {
    if (uVar4 < 300) {
      switch(uVar4) {
      case 0x11c:
      case 0x122:
        goto switchD_01ac3a74_caseD_138;
      case 0x11d:
      case 0x11e:
      case 0x11f:
      case 0x120:
      case 0x123:
        goto switchD_01ac3a34_caseD_3;
      case 0x121:
        iVar7 = FUN_02918620(param_1);
        break;
      case 0x124:
        iVar7 = FUN_02918680(param_1);
        break;
      default:
        if (uVar4 == 0x103) {
          iVar7 = FUN_02918158(param_1);
        }
        else {
          if (uVar4 != 0x116) {
            return iVar8;
          }
          iVar7 = FUN_02918284(param_1);
        }
      }
    }
    else {
      switch(uVar4) {
      case 300:
      case 0x135:
switchD_01ac3a74_caseD_12c:
        return iVar8 + -0xc;
      case 0x12d:
        iVar7 = FUN_0291874c(param_1);
        break;
      case 0x12e:
      case 0x12f:
      case 0x130:
      case 0x131:
      case 0x134:
      case 0x136:
      case 0x137:
      case 0x139:
      case 0x13a:
        goto switchD_01ac3a34_caseD_3;
      case 0x132:
        iVar7 = FUN_029187d0(param_1);
        break;
      case 0x133:
        iVar7 = FUN_029189d0(param_1);
        break;
      case 0x138:
switchD_01ac3a74_caseD_138:
        iVar7 = FUN_029168e4(param_1);
        break;
      case 0x13b:
        iVar7 = FUN_02918cc0(param_1);
        break;
      default:
        if (uVar4 != 0x14f) {
          return iVar8;
        }
        iVar7 = FUN_02918e0c(param_1);
      }
    }
  }
  else if (uVar4 < 0x178) {
    if (uVar4 < 0x15e) {
      if (uVar4 == 0x150) {
        iVar7 = FUN_02918e90(param_1);
      }
      else if (uVar4 == 0x153) {
        iVar7 = FUN_02918f14(param_1);
      }
      else {
        if (uVar4 != 0x159) {
          return iVar8;
        }
        iVar7 = FUN_02918f90(param_1);
      }
    }
    else {
      if (uVar4 < 0x169) {
        if (uVar4 == 0x15e) {
          if (((*(char *)(param_1 + 0xac) == '\v') || (*(char *)(param_1 + 0xad) == '\v')) &&
             (uVar10 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))
                                 (*(long **)(param_1 + 0x30),0x32), (uVar10 & 1) != 0)) {
            iVar7 = 2;
          }
          else {
            iVar7 = 0;
          }
          return iVar7 + iVar8;
        }
        if (uVar4 != 0x163) {
          return iVar8;
        }
      }
      else if (uVar4 != 0x169) {
        if (uVar4 != 0x16e) {
          return iVar8;
        }
        iVar7 = FUN_0291901c(param_1);
        goto LAB_01ac3c3c;
      }
LAB_01ac3eac:
      iVar7 = FUN_02916d24(param_1);
    }
  }
  else if (uVar4 < 0x182) {
    if (uVar4 == 0x178) goto LAB_01ac3eac;
    if (uVar4 == 0x17a) {
      iVar7 = FUN_02919120(param_1);
    }
    else {
      if (uVar4 != 0x181) {
        return iVar8;
      }
      iVar7 = FUN_0291951c(param_1);
    }
  }
  else if (uVar4 < 0x195) {
    if (uVar4 == 0x182) goto switchD_01ac3a74_caseD_12c;
    if (uVar4 != 0x184) {
      return iVar8;
    }
    iVar7 = FUN_029195bc(param_1);
  }
  else {
    if (uVar4 != 0x195) {
      if (uVar4 != 0x1a3) {
        return iVar8;
      }
      goto switchD_01ac3a34_caseD_4;
    }
    iVar7 = FUN_02919634(param_1);
  }
LAB_01ac3c3c:
  iVar8 = iVar7 + iVar8;
switchD_01ac3a34_caseD_3:
  return iVar8;
}


