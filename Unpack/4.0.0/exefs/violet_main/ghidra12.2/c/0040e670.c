/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040e670; name: FUN_0040e670
 */


undefined8
FUN_0040e670(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((param_4 != 0) && (iVar1 = FUN_0040ded0(param_1,param_4), iVar1 != 0)) {
    uVar7 = FUN_0040daf0(param_1,param_2);
    return uVar7;
  }
  iVar1 = FUN_003eb480(param_1[2]);
  if (iVar1 != 0) {
    uVar7 = 0x72;
    uVar12 = 0x9c;
LAB_0040e718:
    FUN_004806c0(0x10,0x11c,uVar7,"external/openssl/crypto/ec/ec_mult.c",uVar12);
    return 0;
  }
  iVar1 = FUN_003eb480(param_1[3]);
  if (iVar1 != 0) {
    uVar7 = 0xa4;
    uVar12 = 0xa0;
    goto LAB_0040e718;
  }
  FUN_003ed410(param_5);
  lVar8 = FUN_0040cf10(param_1);
  if ((lVar8 == 0) || (lVar9 = FUN_0040cf10(param_1), lVar9 == 0)) {
    FUN_004806c0(0x10,0x11c,0x41,"external/openssl/crypto/ec/ec_mult.c",0xa8);
    lVar9 = 0;
    goto LAB_0040ea90;
  }
  if (param_4 == 0) {
    iVar1 = FUN_0040d010(lVar8,param_1[1]);
    if (iVar1 != 0) goto LAB_0040e7c8;
    uVar7 = 0xae;
LAB_0040ea84:
    uVar12 = 0x10;
  }
  else {
    iVar1 = FUN_0040d010(lVar8,param_4);
    if (iVar1 == 0) {
      uVar7 = 0xb3;
      goto LAB_0040ea84;
    }
LAB_0040e7c8:
    FUN_003ec740(*(undefined8 *)(lVar8 + 0x10),4);
    FUN_003ec740(*(undefined8 *)(lVar8 + 0x18),4);
    FUN_003ec740(*(undefined8 *)(lVar8 + 0x20),4);
    FUN_003ec740(*(undefined8 *)(param_2 + 0x10),4);
    FUN_003ec740(*(undefined8 *)(param_2 + 0x18),4);
    FUN_003ec740(*(undefined8 *)(param_2 + 0x20),4);
    FUN_003ec740(*(undefined8 *)(lVar9 + 0x10),4);
    FUN_003ec740(*(undefined8 *)(lVar9 + 0x18),4);
    FUN_003ec740(*(undefined8 *)(lVar9 + 0x20),4);
    uVar7 = FUN_003ed5c0(param_5);
    uVar12 = FUN_003ed5c0(param_5);
    lVar10 = FUN_003ed5c0(param_5);
    if (lVar10 == 0) {
      uVar12 = 0x41;
      uVar7 = 0xc0;
    }
    else {
      iVar1 = FUN_003f1d10(uVar7,param_1[2],param_1[3],param_5);
      if (iVar1 == 0) {
        uVar7 = 0xc5;
      }
      else {
        iVar2 = FUN_003eb2b0(uVar7);
        iVar1 = FUN_003f8cc0(uVar7);
        iVar1 = iVar1 + 2;
        lVar11 = FUN_003eb9a0(lVar10,iVar1);
        if ((lVar11 == 0) || (lVar11 = FUN_003eb9a0(uVar12,iVar1), lVar11 == 0)) {
          uVar7 = 0xd3;
        }
        else {
          lVar11 = FUN_003eb8f0(lVar10,param_3);
          if (lVar11 == 0) {
            uVar7 = 0xd8;
          }
          else {
            FUN_003ec740(lVar10,4);
            iVar3 = FUN_003eb2b0(lVar10);
            if (((iVar2 < iVar3) || (iVar3 = FUN_003ec670(lVar10), iVar3 != 0)) &&
               (iVar3 = FUN_003f0870(lVar10,lVar10,uVar7,param_5), iVar3 == 0)) {
              uVar7 = 0xe4;
            }
            else {
              iVar3 = FUN_003f0310(uVar12,lVar10,uVar7);
              if (iVar3 == 0) {
                uVar7 = 0xea;
              }
              else {
                FUN_003ec740(uVar12,4);
                iVar3 = FUN_003f0310(lVar10,uVar12,uVar7);
                if (iVar3 == 0) {
                  uVar7 = 0xef;
                }
                else {
                  uVar7 = FUN_003ec150(uVar12,iVar2);
                  FUN_003ec370(uVar7,lVar10,uVar12,iVar1);
                  uVar4 = FUN_003f8cc0(param_1[8]);
                  lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar9 + 0x10),uVar4);
                  if (((((lVar11 != 0) &&
                        (lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar9 + 0x18),uVar4), lVar11 != 0))
                       && ((lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar9 + 0x20),uVar4), lVar11 != 0
                           && ((lVar11 = FUN_003eb9a0(*(undefined8 *)(param_2 + 0x10),uVar4),
                               lVar11 != 0 &&
                               (lVar11 = FUN_003eb9a0(*(undefined8 *)(param_2 + 0x18),uVar4),
                               lVar11 != 0)))))) &&
                      (lVar11 = FUN_003eb9a0(*(undefined8 *)(param_2 + 0x20),uVar4), lVar11 != 0))
                     && (((lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar8 + 0x10),uVar4), lVar11 != 0
                          && (lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar8 + 0x18),uVar4),
                             lVar11 != 0)) &&
                         (lVar11 = FUN_003eb9a0(*(undefined8 *)(lVar8 + 0x20),uVar4), lVar11 != 0)))
                     ) {
                    if ((*(int *)(lVar8 + 0x28) == 0) &&
                       (iVar1 = FUN_0040e150(param_1,lVar8,param_5), iVar1 == 0)) {
                      uVar7 = 0x109;
                      goto LAB_0040ea84;
                    }
                    if (*(code **)(*param_1 + 0x198) == (code *)0x0) {
                      iVar1 = FUN_0040d010(lVar9,lVar8);
                      if (iVar1 != 0) {
                        iVar1 = FUN_0040e020(param_1,param_2,lVar9,param_5);
                        uVar5 = (uint)(iVar1 != 0);
                        goto LAB_0040eb40;
                      }
                    }
                    else {
                      uVar5 = (**(code **)(*param_1 + 0x198))(param_1,param_2,lVar9,lVar8,param_5);
LAB_0040eb40:
                      if (uVar5 != 0) {
                        uVar5 = 1;
                        do {
                          while( true ) {
                            iVar1 = iVar2 + -1;
                            if (iVar2 < 1) {
                              FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x10),
                                           *(undefined8 *)(lVar9 + 0x10),uVar4);
                              FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x18),
                                           *(undefined8 *)(lVar9 + 0x18),uVar4);
                              FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x20),
                                           *(undefined8 *)(lVar9 + 0x20),uVar4);
                              uVar5 = (*(uint *)(lVar9 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar5;
                              *(uint *)(param_2 + 0x28) = uVar5 ^ *(uint *)(param_2 + 0x28);
                              *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ uVar5;
                              if ((*(code **)(*param_1 + 0x1a8) == (code *)0x0) ||
                                 (iVar1 = (**(code **)(*param_1 + 0x1a8))
                                                    (param_1,param_2,lVar9,lVar8,param_5),
                                 iVar1 != 0)) {
                                uVar7 = 1;
                                goto LAB_0040ea94;
                              }
                              uVar12 = 0x88;
                              uVar7 = 0x16e;
                              goto LAB_0040ea8c;
                            }
                            uVar6 = FUN_003ec150(lVar10,iVar1);
                            uVar5 = uVar6 ^ uVar5;
                            FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x10),
                                         *(undefined8 *)(lVar9 + 0x10),uVar4);
                            FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x18),
                                         *(undefined8 *)(lVar9 + 0x18),uVar4);
                            FUN_003ec370(uVar5,*(undefined8 *)(param_2 + 0x20),
                                         *(undefined8 *)(lVar9 + 0x20),uVar4);
                            uVar5 = (*(uint *)(lVar9 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar5;
                            *(uint *)(param_2 + 0x28) = uVar5 ^ *(uint *)(param_2 + 0x28);
                            *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ uVar5;
                            uVar5 = uVar6;
                            iVar2 = iVar1;
                            if (*(code **)(*param_1 + 0x1a0) != (code *)0x0) break;
                            iVar1 = FUN_0040df50(param_1,lVar9,param_2,lVar9,param_5);
                            if ((iVar1 == 0) ||
                               (iVar1 = FUN_0040e020(param_1,param_2,param_2,param_5), iVar1 == 0))
                            goto LAB_0040ec34;
                          }
                          iVar1 = (**(code **)(*param_1 + 0x1a0))
                                            (param_1,param_2,lVar9,lVar8,param_5);
                        } while (iVar1 != 0);
LAB_0040ec34:
                        uVar12 = 0xa2;
                        uVar7 = 0x15f;
                        goto LAB_0040ea8c;
                      }
                    }
                    uVar12 = 0x99;
                    uVar7 = 0x10f;
                    goto LAB_0040ea8c;
                  }
                  uVar7 = 0x103;
                }
              }
            }
          }
        }
      }
      uVar12 = 3;
    }
  }
LAB_0040ea8c:
  FUN_004806c0(0x10,0x11c,uVar12,"external/openssl/crypto/ec/ec_mult.c",uVar7);
LAB_0040ea90:
  uVar7 = 0;
LAB_0040ea94:
  FUN_0040caf0(lVar8);
  FUN_0040cc00(lVar9);
  FUN_003ed530(param_5);
  return uVar7;
}


