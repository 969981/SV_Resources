/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec554; name: FUN_001ec554
 */


int FUN_001ec554(long *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *__s;
  long lVar14;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  uint local_64;
  
  if (param_1 == (long *)0x0) {
    return 0x62;
  }
  if (param_3 == (undefined1 *)0x0) {
    return 0x62;
  }
  if ((int)param_1[(long)param_2 * 3 + 0x52] == 2) {
    *param_3 = 1;
    return 0;
  }
  lVar14 = (long)param_2;
  puVar1 = (undefined4 *)((long)param_1 + lVar14 * 0x18 + 0x294);
  if (*(int *)((long)param_1 + lVar14 * 0x18 + 0x294) != 0) {
LAB_001ec5c4:
    lVar11 = param_1[lVar14 * 3 + 0x53];
    local_64 = 4;
    if (lVar11 == 0) {
LAB_001ec79c:
      iVar4 = 0x62;
      goto LAB_001ec938;
    }
    lVar13 = *param_1;
    iVar4 = FUN_001c5a28(lVar13,0,1);
    if (iVar4 < 0) {
      iVar4 = 0x1c;
      goto LAB_001ec938;
    }
    *(undefined8 *)(lVar13 + 0xaa0) = 0;
    *(undefined8 *)(lVar13 + 0xac8) = 0;
    local_78 = local_78 & 0xff00000000000000;
    local_6c = 0;
    uVar7 = nnsslConnectionDoHandshakeWithCertBuffer(lVar11,(long)&local_6c + 4,&local_6c);
    uVar7 = uVar7 & 0xffffffff;
    uVar8 = nnResultIsFailure(uVar7);
    if ((uVar8 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
        local_70 = 0;
        uVar6 = nnsslConnectionGetNextAlpnProto(lVar11,&local_64,&local_f8,&local_70,0x32);
        uVar7 = nnResultIsSuccess(uVar6);
        if (((uVar7 & 1) != 0) && ((local_64 | 2) == 3)) {
          if ((*(long *)(lVar13 + 0xa40) < 3) || (local_70 != 2)) {
            if ((local_70 == 8) &&
               (CONCAT44(uStack_f4,
                         CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)))) ==
                0x312e312f70747468)) {
              uVar6 = 2;
              goto LAB_001ec8e4;
            }
          }
          else if (CONCAT11(uStack_f7,local_f8) == 0x3268) {
            uVar6 = 3;
LAB_001ec8e4:
            *(undefined4 *)(param_1 + 0xcd) = uVar6;
          }
        }
      }
      iVar4 = 0;
      uVar10 = 1;
LAB_001ec8f0:
      if (*(code **)(lVar13 + 0xab0) != (code *)0x0) {
        uStack_f7 = (undefined1)local_78;
        uStack_f6 = (undefined1)(local_78 >> 8);
        uStack_f5 = (undefined1)(local_78 >> 0x10);
        uStack_f4 = local_78._3_4_;
        uStack_e8 = local_6c & 0xffffffff;
        local_f0 = local_6c >> 0x20;
        local_f8 = uVar10;
        iVar5 = (**(code **)(lVar13 + 0xab0))
                          (*param_1,lVar11,*(undefined8 *)(*param_1 + 0xab8),&local_f8);
        if (iVar5 != 0) {
          iVar4 = 0x2a;
        }
      }
    }
    else {
      uVar8 = FUN_001ecc34(uVar7,0x1987b);
      if ((uVar8 & 1) == 0) {
        *(ulong *)(lVar13 + 0xaa0) = uVar7;
        uVar7 = FUN_001ecc34(uVar7,0x19e7b);
        uVar10 = 0;
        iVar4 = 0x3c;
        if ((uVar7 & 1) == 0) {
          iVar4 = 0x23;
        }
        goto LAB_001ec8f0;
      }
      iVar4 = 0x51;
    }
    if (iVar4 == 0) {
      *param_3 = 1;
      param_1[lVar14 + 0x4e] = (long)FUN_001ecca0;
      param_1[lVar14 + 0x50] = (long)FUN_001ecd40;
      *(undefined4 *)(param_1 + (long)param_2 * 3 + 0x52) = 2;
      *puVar1 = 0;
      return 0;
    }
    goto LAB_001ec938;
  }
  local_78 = 0;
  lVar11 = param_1[lVar14 * 3 + 0x53];
  if (lVar11 == 0) goto LAB_001ec79c;
  lVar12 = *param_1;
  lVar13 = *(long *)(lVar12 + 0xa98);
  if (lVar13 == 0) {
    *(undefined1 *)(lVar11 + 0x108) = 0;
    *(long *)(lVar11 + 0x100) = lVar11 + 0x80;
    uVar6 = nnsslContextGetContextId(lVar11 + 0x80,&local_78);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec858;
    if (local_78 != 0) {
      uVar6 = nnsslContextDestroy(*(undefined8 *)(lVar11 + 0x100));
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) != 0) goto LAB_001ec858;
    }
    if ((*(code **)(lVar12 + 0xae0) == (code *)0x0) && (*(long *)(lVar12 + 0xa98) == 0)) {
      iVar4 = 0x5e;
      goto LAB_001ec938;
    }
    iVar4 = (**(code **)(lVar12 + 0xae0))
                      (lVar12,*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar12 + 0xae8));
    if (iVar4 == 0) {
      lVar13 = *(long *)(lVar11 + 0x100);
      goto LAB_001ec678;
    }
LAB_001ec8ac:
    iVar4 = 0x2a;
LAB_001ec938:
    if (iVar4 == 0x51) {
      return 0;
    }
    if (iVar4 != 0x3c) goto LAB_001ecb50;
    if (param_1[lVar14 * 3 + 0x53] != 0) {
      uVar6 = nnsslConnectionGetVerifyCertError(param_1[lVar14 * 3 + 0x53],&local_f8);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) == 0) {
        uVar7 = (ulong)CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)));
        *(ulong *)(*param_1 + 0xac8) = uVar7;
        uVar7 = FUN_001ecc34(uVar7,0x25a7b);
        if (((((uVar7 & 1) == 0) &&
             (uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                            CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),
                                   0x2607b), (uVar7 & 1) == 0)) &&
            (uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                           CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),0x25e7b
                                 ), (uVar7 & 1) == 0)) &&
           ((uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                           CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),0x2867b
                                 ), (uVar7 & 1) != 0 ||
            ((uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                            CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),
                                   0x2687b), (uVar7 & 1) == 0 &&
             (((uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                              CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),
                                     0xbca7b), (uVar7 & 1) != 0 ||
               (uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                              CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),
                                     0xbd07b), (uVar7 & 1) != 0)) ||
              (uVar7 = FUN_001ecc34(CONCAT13(uStack_f5,
                                             CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8))),
                                    0xbce7b), (uVar7 & 1) != 0)))))))) {
          iVar4 = 0x3a;
          goto LAB_001ecb50;
        }
      }
      iVar4 = 0x3c;
      goto LAB_001ecb50;
    }
  }
  else {
    *(long *)(lVar11 + 0x100) = lVar13;
    *(undefined1 *)(lVar11 + 0x108) = 1;
LAB_001ec678:
    uVar6 = nnsslContextGetContextId(lVar13,&local_78);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) {
LAB_001ec858:
      iVar4 = 0x60;
      goto LAB_001ec938;
    }
    if (local_78 == 0) {
      iVar4 = 0x5f;
      goto LAB_001ec938;
    }
    uVar6 = nnsslConnectionCreate(lVar11,*(undefined8 *)(lVar11 + 0x100));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) {
LAB_001ec794:
      iVar4 = 0x23;
      goto LAB_001ec938;
    }
    nnsocketFcntl(*(undefined4 *)((long)param_1 + lVar14 * 4 + 600),4,0);
    uVar6 = nnsslConnectionSetOption(lVar11,0,1);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    uVar6 = nnsslConnectionSetSocketDescriptor
                      (lVar11,*(undefined4 *)((long)param_1 + lVar14 * 4 + 600));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    __s = (char *)param_1[0x1b];
    sVar9 = strlen(__s);
    uVar6 = nnsslConnectionSetHostName(lVar11,__s,sVar9);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    uVar6 = nnsslConnectionSetOption(lVar11,2,*(undefined1 *)(*param_1 + 0xac0));
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    bVar3 = *(byte *)(*param_1 + 0xac1);
    bVar2 = bVar3 & 3;
    if (*(char *)(*param_1 + 0xa90) != '\0') {
      bVar2 = bVar3 & 3 | 4;
    }
    uVar6 = nnsslConnectionSetVerifyOption(lVar11,bVar2);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    uVar6 = nnsslConnectionSetSessionCacheMode(lVar11,*(byte *)(*param_1 + 0xac1) >> 3 & 1);
    uVar7 = nnResultIsFailure(uVar6);
    if ((uVar7 & 1) != 0) goto LAB_001ec794;
    if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
      memset(&local_f8,0,0x80);
      uVar6 = nnsslConnectionSetOption(lVar11,3,1);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar12 + 0xa40) < 3) {
          uVar7 = 0;
        }
        else {
          local_f8 = 2;
          uStack_f7 = 0x68;
          uStack_f6 = 0x32;
          uVar7 = 3;
        }
        *(undefined1 *)(uVar7 | (ulong)&local_f8) = 8;
        *(undefined8 *)((undefined1 *)(uVar7 | (ulong)&local_f8) + 1) = 0x312e312f70747468;
        uVar6 = nnsslConnectionSetNextAlpnProto(lVar11,&local_f8,(int)uVar7 + 9);
        uVar7 = nnResultIsFailure(uVar6);
        if ((uVar7 & 1) == 0) goto LAB_001ecb08;
      }
      goto LAB_001ec794;
    }
LAB_001ecb08:
    lVar13 = *param_1;
    if ((*(code **)(lVar13 + 0xaa8) != (code *)0x0) &&
       (iVar4 = (**(code **)(lVar13 + 0xaa8))(lVar13,lVar11,*(undefined8 *)(lVar13 + 0xab8)),
       iVar4 != 0)) goto LAB_001ec8ac;
    if (param_1[lVar14 * 3 + 0x53] != 0) {
      uVar6 = nnsslConnectionSetIoMode(param_1[lVar14 * 3 + 0x53],2);
      uVar7 = nnResultIsFailure(uVar6);
      if ((uVar7 & 1) != 0) {
        iVar4 = 0x23;
        goto LAB_001ecb50;
      }
      *puVar1 = 1;
      goto LAB_001ec5c4;
    }
  }
  iVar4 = 0x62;
LAB_001ecb50:
  lVar11 = param_1[lVar14 * 3 + 0x53];
  if (lVar11 != 0) {
    FUN_001ecde0(param_1 + lVar14 * 3 + 0x52);
    if (*(char *)(lVar11 + 0x108) == '\0') {
      FUN_001ece38(param_1 + lVar14 * 3 + 0x52);
    }
  }
  return iVar4;
}


