/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d18e0; name: FUN_003d18e0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_003d18e0(uint *param_1,long *param_2)

{
  void *__src;
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  size_t __n;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  int *piVar25;
  ulong uVar26;
  byte *pbVar27;
  ushort *puVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  long lVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  byte local_160 [48];
  byte abStack_130 [192];
  ushort *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  switch(param_1[0x17]) {
  case 0x14:
    break;
  default:
    FUN_003c3950(param_1,0x50,0x25b,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x4b9);
    return 0;
  case 0x1b:
    param_1[0x20] = 0;
    lVar19 = FUN_0047dcc0();
    if (lVar19 == 0) {
      uVar13 = 0x50;
      iVar12 = 0x41;
      uVar20 = 0xe38;
      goto LAB_003d22d0;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
        (iVar12 = **(int **)(param_1 + 2), iVar12 < 0x304)) || (iVar12 == 0x10000))
    goto LAB_003d20b4;
    if (param_2[1] == 0) {
LAB_003d22b8:
      uVar13 = 0x32;
      iVar12 = 0x11a;
      uVar20 = 0xe41;
LAB_003d22d0:
      FUN_003c3950(param_1,uVar13,0x17c,iVar12,"external/openssl/ssl/statem/statem_srvr.c",uVar20);
LAB_003d22d8:
      lVar16 = 0;
    }
    else {
      uVar30 = param_2[1] - 1;
      bVar34 = *(byte *)*param_2;
      uVar15 = (ulong)bVar34;
      if (uVar30 < uVar15) goto LAB_003d22b8;
      *param_2 = (long)((byte *)*param_2 + uVar15 + 1);
      param_2[1] = uVar30 - uVar15;
      if (*(long *)(param_1 + 0x228) == 0) {
        if (bVar34 != 0) goto LAB_003d22b8;
      }
      else if ((*(ulong *)(param_1 + 0x22a) != uVar15) || (iVar12 = FUN_003f6d80(), iVar12 != 0))
      goto LAB_003d22b8;
LAB_003d20b4:
      uVar15 = param_2[1] - 3;
      if ((ulong)param_2[1] < 3) {
LAB_003d20f4:
        uVar13 = 0x32;
        iVar12 = 0x9f;
        uVar20 = 0xe48;
        goto LAB_003d22d0;
      }
      pbVar31 = (byte *)*param_2;
      uVar30 = (ulong)*pbVar31 << 0x10 | (ulong)pbVar31[1] << 8 | (ulong)pbVar31[2];
      lVar33 = uVar15 - uVar30;
      if (uVar15 < uVar30) goto LAB_003d20f4;
      puVar28 = (ushort *)(pbVar31 + 3);
      *param_2 = (long)((long)puVar28 + uVar30);
      param_2[1] = lVar33;
      if (lVar33 != 0) goto LAB_003d20f4;
      if (uVar30 != 0) {
        lVar33 = 0;
        do {
          uVar15 = uVar30 - 3;
          if (uVar30 < 3) {
LAB_003d2318:
            uVar13 = 0x32;
            iVar12 = 0x87;
            uVar20 = 0xe51;
            goto LAB_003d22d0;
          }
          uVar32 = (ulong)(byte)*puVar28 << 0x10 | (ulong)*(byte *)((long)puVar28 + 1) << 8 |
                   (ulong)(byte)puVar28[1];
          uVar30 = uVar15 - uVar32;
          if (uVar15 < uVar32) goto LAB_003d2318;
          local_58 = (ushort *)((long)puVar28 + 3);
          lVar16 = FUN_0048c810(0,&local_58,uVar32);
          if (lVar16 == 0) {
            uVar20 = 0x32;
            uVar21 = 0xd;
            uVar22 = 0xe59;
            goto LAB_003d2414;
          }
          puVar28 = (ushort *)((long)puVar28 + 3 + uVar32);
          if (local_58 != puVar28) {
            uVar20 = 0x32;
            uVar21 = 0x87;
            uVar22 = 0xe5f;
            goto LAB_003d2414;
          }
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
              (iVar12 = **(int **)(param_1 + 2), 0x303 < iVar12)) && (iVar12 != 0x10000)) {
            uVar15 = uVar30 - 2;
            local_60 = 0;
            if (1 < uVar30) {
              uVar32 = (((ulong)*puVar28 & 0xff00) << 0x28 | (ulong)*puVar28 << 0x38) >> 0x30;
              uVar30 = uVar15 - uVar32;
              if (uVar32 <= uVar15) {
                local_70 = puVar28 + 1;
                uStack_68 = uVar32;
                iVar12 = FUN_003ba070(param_1,&local_70,0x1000,&local_60,0,lVar33 == 0);
                if ((iVar12 != 0) &&
                   (iVar12 = FUN_003baa30(param_1,0x1000,local_60,lVar16,lVar33,uVar30 == 0),
                   iVar12 != 0)) {
                  puVar28 = (ushort *)((long)(puVar28 + 1) + uVar32);
                  FUN_00452f80(local_60,"external/openssl/ssl/statem/statem_srvr.c",0xe76);
                  goto LAB_003d223c;
                }
                FUN_00452f80(local_60,"external/openssl/ssl/statem/statem_srvr.c",0xe73);
                goto LAB_003d22dc;
              }
            }
            FUN_003c3950(param_1,0x32,0x17c,0x10f,"external/openssl/ssl/statem/statem_srvr.c",0xe6a)
            ;
            goto LAB_003d22dc;
          }
LAB_003d223c:
          iVar12 = FUN_0047e2f0(lVar19,lVar16);
          if (iVar12 == 0) {
            uVar20 = 0x50;
            uVar21 = 0x41;
            uVar22 = 0xe7c;
            goto LAB_003d2414;
          }
          lVar33 = lVar33 + 1;
        } while (uVar30 != 0);
      }
      iVar12 = FUN_0047e430(lVar19);
      if (iVar12 < 1) {
        if (*param_1 == 0x300) {
          uVar13 = 0x28;
          iVar12 = 0xb0;
          uVar20 = 0xe87;
          goto LAB_003d22d0;
        }
        if ((~param_1[0x188] & 3) == 0) {
          uVar13 = 0x74;
          iVar12 = 199;
          uVar20 = 0xe8f;
          goto LAB_003d22d0;
        }
        if ((*(long *)(*(long *)(param_1 + 0x2a) + 0xe0) == 0) ||
           (iVar12 = FUN_003acf80(param_1,0), iVar12 != 0)) goto LAB_003d243c;
        goto LAB_003d22d8;
      }
      iVar12 = FUN_003aea50(param_1,lVar19);
      if (iVar12 < 1) {
        uVar13 = FUN_003cd880(param_1[0x19c]);
        iVar12 = 0x86;
        uVar20 = 0xe9d;
        goto LAB_003d22d0;
      }
      if (iVar12 != 1) {
        uVar13 = 0x28;
        uVar20 = 0xea2;
        goto LAB_003d22d0;
      }
      FUN_0047e450(lVar19,0);
      lVar33 = FUN_00483c90();
      if (lVar33 == 0) {
        uVar13 = 0x28;
        iVar12 = 0xf7;
        uVar20 = 0xea9;
        goto LAB_003d22d0;
      }
LAB_003d243c:
      lVar33 = *(long *)(param_1 + 0x174);
      if (param_1[0x226] != 4) {
LAB_003d246c:
        FUN_0048c830(*(undefined8 *)(lVar33 + 0x1b8));
        puVar10 = PTR_FUN_047cd0a0;
        uVar20 = FUN_0047e310(lVar19);
        lVar33 = *(long *)(param_1 + 0x174);
        *(undefined8 *)(lVar33 + 0x1b8) = uVar20;
        *(undefined8 *)(lVar33 + 0x1c8) = *(undefined8 *)(param_1 + 0x19c);
        FUN_0047e3b0(*(undefined8 *)(lVar33 + 0x1c0),puVar10);
        *(long *)(*(long *)(param_1 + 0x174) + 0x1c0) = lVar19;
        piVar25 = *(int **)(param_1 + 2);
        uVar11 = *(uint *)(*(long *)(piVar25 + 0x30) + 0x60);
        if ((((uVar11 >> 3 & 1) == 0) && (0x303 < *piVar25)) && (*piVar25 != 0x10000)) {
          iVar12 = FUN_003acf80(param_1,1);
          if (iVar12 != 0) {
            piVar25 = *(int **)(param_1 + 2);
            uVar11 = *(uint *)(*(long *)(piVar25 + 0x30) + 0x60);
            goto LAB_003d24e8;
          }
LAB_003d2598:
          lVar16 = 0;
          uVar15 = 0;
          lVar19 = 0;
        }
        else {
LAB_003d24e8:
          lVar16 = 0;
          if ((uVar11 >> 3 & 1) == 0) {
            uVar15 = 3;
            if (*piVar25 < 0x304) {
              lVar19 = 0;
              goto LAB_003d22e0;
            }
            lVar19 = 0;
            if (*piVar25 == 0x10000) goto LAB_003d22e0;
            iVar12 = FUN_003b5600(param_1,param_1 + 0x156,0x40,param_1 + 0x166);
            if (iVar12 == 0) goto LAB_003d2598;
            param_1[0x658] = 0;
            param_1[0x659] = 0;
          }
          lVar16 = 0;
          lVar19 = 0;
          uVar15 = 3;
        }
        goto LAB_003d22e0;
      }
      lVar33 = FUN_003b8c10(lVar33,0);
      if (lVar33 != 0) {
        FUN_003b8e30(*(undefined8 *)(param_1 + 0x174));
        *(long *)(param_1 + 0x174) = lVar33;
        goto LAB_003d246c;
      }
      uVar20 = 0x50;
      uVar21 = 0x41;
      uVar22 = 0xeba;
      lVar16 = 0;
LAB_003d2414:
      FUN_003c3950(param_1,uVar20,0x17c,uVar21,"external/openssl/ssl/statem/statem_srvr.c",uVar22);
    }
LAB_003d22dc:
    uVar15 = 0;
LAB_003d22e0:
    FUN_0048c830(lVar16);
    FUN_0047e3b0(lVar19,PTR_FUN_047cd0a0);
    return uVar15;
  case 0x1c:
    lVar19 = *(long *)(param_1 + 0x2a);
    uVar11 = *(uint *)(*(long *)(lVar19 + 0x238) + 0x1c);
    if ((uVar11 & 0x1c8) == 0) {
LAB_003d2768:
      if ((uVar11 >> 3 & 1) == 0) {
        if ((uVar11 & 0x41) == 0) {
          if ((uVar11 & 0x102) != 0) {
            uVar30 = param_2[1];
            uVar15 = uVar30 - 2;
            if (uVar30 < 2) {
LAB_003d2900:
              uVar20 = 0x32;
              uVar21 = 0x19b;
              uVar22 = 0x94;
              uVar23 = 0xc89;
LAB_003d2fd0:
              FUN_003c3950(param_1,uVar20,uVar21,uVar22,"external/openssl/ssl/statem/statem_srvr.c",
                           uVar23);
              lVar33 = 0;
            }
            else {
              puVar28 = (ushort *)*param_2;
              uVar32 = (((ulong)*puVar28 & 0xff00) << 0x28 | (ulong)*puVar28 << 0x38) >> 0x30;
              *param_2 = (long)(puVar28 + 1);
              param_2[1] = uVar15;
              if (uVar15 != uVar32) goto LAB_003d2900;
              lVar19 = *(long *)(lVar19 + 0x240);
              if (lVar19 == 0) {
                uVar20 = 0x50;
                uVar21 = 0x19b;
                uVar22 = 0xab;
                uVar23 = 0xc8f;
                goto LAB_003d2fd0;
              }
              if (uVar15 == 0) {
                uVar20 = 0x32;
                uVar21 = 0x19b;
                uVar22 = 0xab;
                uVar23 = 0xc95;
                goto LAB_003d2fd0;
              }
              *param_2 = (long)puVar28 + uVar30;
              param_2[1] = 0;
              lVar33 = FUN_0043def0();
              if ((lVar33 == 0) || (iVar12 = FUN_0043dc10(lVar33,lVar19), iVar12 == 0)) {
                FUN_003c3950(param_1,0x50,0x19b,0x82,"external/openssl/ssl/statem/statem_srvr.c",
                             0xca1);
              }
              else {
                lVar16 = FUN_0043e7f0(lVar33);
                lVar17 = FUN_003eba50(puVar28 + 1,uVar32,0);
                if (((lVar16 == 0) || (lVar17 == 0)) ||
                   (iVar12 = FUN_00400280(lVar16,lVar17,0), iVar12 == 0)) {
                  FUN_003c3950(param_1,0x50,0x19b,0x44,"external/openssl/ssl/statem/statem_srvr.c",
                               0xca9);
                  FUN_003eb520(lVar17);
                }
                else {
LAB_003d2ca8:
                  iVar12 = FUN_003acb80(param_1,lVar19,lVar33,1);
                  if (iVar12 != 0) {
                    FUN_0043e1f0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240));
                    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240) = 0;
                    FUN_0043e1f0(lVar33);
                    return 2;
                  }
                }
              }
            }
LAB_003d2fdc:
            FUN_0043e1f0(lVar33);
            goto LAB_003d2b88;
          }
          if ((uVar11 & 0x84) != 0) {
            if (param_2[1] == 0) {
              uVar20 = 0x28;
              uVar21 = 0x19c;
              uVar22 = 0x137;
              uVar23 = 0xccb;
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x240);
              uVar15 = param_2[1] - 1;
              pbVar31 = (byte *)*param_2 + 1;
              uVar30 = (ulong)*(byte *)*param_2;
              *param_2 = (long)pbVar31;
              param_2[1] = uVar15;
              if (uVar30 <= uVar15) {
                *param_2 = (long)(pbVar31 + uVar30);
                param_2[1] = uVar15 - uVar30;
                if (uVar15 - uVar30 == 0) {
                  if (lVar19 != 0) {
                    lVar33 = FUN_0043def0();
                    if ((lVar33 == 0) || (iVar12 = FUN_0043dc10(lVar33,lVar19), iVar12 < 1)) {
                      FUN_003c3950(param_1,0x50,0x19c,6,"external/openssl/ssl/statem/statem_srvr.c",
                                   0xce6);
                    }
                    else {
                      iVar12 = FUN_0043e880(lVar33,pbVar31,uVar30);
                      if (iVar12 != 0) goto LAB_003d2ca8;
                      FUN_003c3950(param_1,0x50,0x19c,0x10,
                                   "external/openssl/ssl/statem/statem_srvr.c",0xceb);
                    }
                    goto LAB_003d2fdc;
                  }
                  uVar20 = 0x50;
                  uVar21 = 0x19c;
                  uVar22 = 0x137;
                  uVar23 = 0xcdf;
                  goto LAB_003d2fd0;
                }
              }
              uVar20 = 0x32;
              uVar21 = 0x19c;
              uVar22 = 0x9f;
              uVar23 = 0xcda;
            }
            goto LAB_003d2fd0;
          }
          if ((uVar11 >> 5 & 1) == 0) {
            if ((uVar11 >> 4 & 1) != 0) {
              uVar11 = *(uint *)(*(long *)(lVar19 + 0x238) + 0x20);
              if ((uVar11 >> 7 & 1) == 0) {
                if ((uVar11 >> 5 & 1) == 0) {
                  lVar19 = 0;
                }
                else {
                  lVar33 = *(long *)(param_1 + 0x154);
LAB_003d2fec:
                  lVar19 = *(long *)(lVar33 + 200);
                }
              }
              else {
                lVar33 = *(long *)(param_1 + 0x154);
                lVar19 = *(long *)(lVar33 + 0x118);
                if ((lVar19 == 0) && (lVar19 = *(long *)(lVar33 + 0xf0), lVar19 == 0))
                goto LAB_003d2fec;
              }
              lVar19 = FUN_004400b0(lVar19,0);
              if (lVar19 == 0) {
                uVar20 = 0x41;
                uVar21 = 0xd51;
LAB_003d3110:
                FUN_003c3950(param_1,0x50,0x19d,uVar20,"external/openssl/ssl/statem/statem_srvr.c",
                             uVar21);
                bVar9 = false;
              }
              else {
                iVar12 = FUN_0043f6b0();
                if (iVar12 < 1) {
                  uVar20 = 0x44;
                  uVar21 = 0xd56;
                  goto LAB_003d3110;
                }
                lVar33 = FUN_00483c90(*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1b8));
                if ((lVar33 != 0) && (iVar12 = FUN_0043f930(lVar19,lVar33), iVar12 < 1)) {
                  FUN_004808e0();
                }
                local_58 = (ushort *)*param_2;
                plVar18 = (long *)FUN_003e1880(0,&local_58,param_2[1],PTR_DAT_047cd200);
                if (((plVar18 == (long *)0x0) || (*plVar18 == 0)) ||
                   (iVar12 = FUN_003de390(), iVar12 != 0x10)) {
                  uVar20 = 0x32;
                  uVar21 = 0xd6d;
LAB_003d30d0:
                  FUN_003c3950(param_1,uVar20,0x19d,0x93,"external/openssl/ssl/statem/statem_srvr.c"
                               ,uVar21);
LAB_003d30d8:
                  bVar9 = false;
                }
                else {
                  uVar15 = (long)local_58 - *param_2;
                  lVar33 = param_2[1] - uVar15;
                  if ((ulong)param_2[1] < uVar15) {
                    uVar20 = 0x50;
                    uVar21 = 0xd73;
                    goto LAB_003d30d0;
                  }
                  *param_2 = *param_2 + uVar15;
                  param_2[1] = lVar33;
                  if (lVar33 != 0) {
                    uVar20 = 0x50;
                    uVar21 = 0xd79;
                    goto LAB_003d30d0;
                  }
                  iVar12 = FUN_0043f740(lVar19,local_160,abStack_130 + 0xe8,
                                        *(undefined8 *)(*(int **)(*plVar18 + 8) + 2),
                                        (long)**(int **)(*plVar18 + 8));
                  if (iVar12 < 1) {
                    uVar20 = 0x32;
                    uVar21 = 0xd83;
                    goto LAB_003d30d0;
                  }
                  iVar12 = FUN_003ac690(param_1,local_160,0x20,0);
                  if (iVar12 == 0) goto LAB_003d30d8;
                  iVar12 = FUN_00440390(lVar19,0xffffffff,0xffffffff,2,2,0);
                  bVar9 = true;
                  if (0 < iVar12) {
                    param_1[0x1d] = 1;
                  }
                }
                FUN_00440340(lVar19);
                FUN_003e4550(plVar18,PTR_DAT_047cd200);
              }
              if (bVar9) {
                return 2;
              }
              goto LAB_003d2b88;
            }
            uVar20 = 0x50;
            uVar21 = 0x17e;
            uVar22 = 0xf9;
            uVar23 = 0xdd3;
          }
          else {
            uVar15 = param_2[1] - 2;
            if (1 < (ulong)param_2[1]) {
              puVar28 = (ushort *)*param_2 + 1;
              uVar30 = (ulong)*(ushort *)*param_2;
              uVar30 = ((uVar30 & 0xff00) << 0x28 | uVar30 << 0x38) >> 0x30;
              *param_2 = (long)puVar28;
              param_2[1] = uVar15;
              if (uVar30 <= uVar15) {
                *param_2 = (long)puVar28 + uVar30;
                param_2[1] = uVar15 - uVar30;
                lVar19 = FUN_003eba50(puVar28,uVar30,0);
                *(long *)(param_1 + 0x242) = lVar19;
                if (lVar19 == 0) {
                  uVar20 = 0x50;
                  uVar21 = 0x1a0;
                  uVar23 = 0xd12;
                  uVar22 = 3;
                }
                else {
                  iVar12 = FUN_003ebf10(lVar19,*(undefined8 *)(param_1 + 0x23a));
                  if ((iVar12 < 0) &&
                     (iVar12 = FUN_003eb480(*(undefined8 *)(param_1 + 0x242)), iVar12 == 0)) {
                    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x174) + 600),
                                 "external/openssl/ssl/statem/statem_srvr.c",0xd1a);
                    lVar19 = FUN_0045abd0(*(undefined8 *)(param_1 + 0x238),
                                          "external/openssl/ssl/statem/statem_srvr.c",0xd1b);
                    *(long *)(*(long *)(param_1 + 0x174) + 600) = lVar19;
                    if (lVar19 != 0) {
                      iVar12 = FUN_003dab50(param_1);
                      goto joined_r0x003d28d8;
                    }
                    uVar20 = 0x50;
                    uVar21 = 0x1a0;
                    uVar22 = 0x41;
                    uVar23 = 0xd1e;
                  }
                  else {
                    uVar20 = 0x2f;
                    uVar21 = 0x1a0;
                    uVar22 = 0x173;
                    uVar23 = 0xd17;
                  }
                }
                goto LAB_003d2b84;
              }
            }
            uVar20 = 0x32;
            uVar21 = 0x1a0;
            uVar22 = 0x15b;
            uVar23 = 0xd0d;
          }
        }
        else {
          lVar19 = FUN_0043e520(*(undefined8 *)(*(long *)(param_1 + 0x154) + 0x28));
          if (lVar19 == 0) {
            uVar20 = 0x50;
            uVar21 = 0x19f;
            uVar22 = 0xa8;
            uVar23 = 0xbe0;
          }
          else if ((*param_1 | 0x200) == 0x300) {
            puVar28 = (ushort *)*param_2;
            uVar30 = param_2[1];
LAB_003d27a0:
            iVar12 = FUN_00469640(lVar19);
            if (iVar12 < 0x30) {
              uVar20 = 0x50;
              uVar21 = 0x19f;
              uVar23 = 0xbf8;
              uVar22 = 0x78;
            }
            else {
              iVar12 = FUN_00469640(lVar19);
              pbVar31 = (byte *)FUN_00452c30((long)iVar12,
                                             "external/openssl/ssl/statem/statem_srvr.c",0xbfc);
              if (pbVar31 != (byte *)0x0) {
                iVar12 = FUN_00464e30(local_160,0x30);
                if (iVar12 < 1) {
                  uVar20 = 0x50;
                  uVar21 = 0x44;
                  uVar22 = 0xc0e;
                }
                else {
                  iVar12 = FUN_00469690(uVar30 & 0xffffffff,puVar28,pbVar31,lVar19,3);
                  if (iVar12 < 0) {
                    uVar20 = 0x33;
                    uVar21 = 0x44;
                    uVar22 = 0xc1c;
                  }
                  else {
                    if (0x3a < iVar12) {
                      uVar15 = (ulong)(iVar12 - 0x30);
                      uVar11 = (pbVar31[1] ^ 2) - 1 & *pbVar31 - 1;
                      uVar14 = (int)uVar11 >> 0x1f;
                      bVar34 = (byte)((int)uVar11 >> 0x1f);
                      if (2 < uVar15 - 1) {
                        uVar30 = uVar15 - 3;
                        if (uVar30 < 0x20) {
                          uVar26 = 2;
                        }
                        else {
                          bVar41 = 0xff;
                          bVar42 = 0xff;
                          bVar43 = 0xff;
                          bVar44 = 0xff;
                          bVar45 = 0xff;
                          bVar46 = 0xff;
                          bVar47 = 0xff;
                          bVar48 = 0xff;
                          bVar24 = 0xff;
                          bVar35 = 0xff;
                          bVar36 = 0xff;
                          bVar37 = 0xff;
                          bVar38 = 0xff;
                          bVar39 = 0xff;
                          bVar40 = 0xff;
                          uVar21 = 0xffffffffffffffff;
                          uVar20 = 0xffffffffffffffff;
                          uVar29 = uVar30 & 0xffffffffffffffe0;
                          uVar26 = uVar29 | 2;
                          pbVar27 = pbVar31 + 0x12;
                          uVar32 = uVar29;
                          do {
                            uVar23 = *(undefined8 *)(pbVar27 + -8);
                            uVar22 = *(undefined8 *)(pbVar27 + -0x10);
                            uVar67 = *(undefined8 *)(pbVar27 + 8);
                            uVar66 = *(undefined8 *)pbVar27;
                            pbVar27 = pbVar27 + 0x20;
                            bVar51 = (byte)((ulong)uVar66 >> 8);
                            bVar53 = (byte)((ulong)uVar66 >> 0x18);
                            bVar55 = (byte)((ulong)uVar66 >> 0x28);
                            bVar59 = (byte)((ulong)uVar67 >> 8);
                            bVar63 = (byte)((ulong)uVar67 >> 0x28);
                            bVar50 = (byte)((ulong)uVar22 >> 8);
                            bVar54 = (byte)((ulong)uVar22 >> 0x18);
                            bVar56 = (byte)((ulong)uVar22 >> 0x28);
                            bVar52 = (byte)((ulong)uVar23 >> 8);
                            bVar57 = (byte)((ulong)uVar23 >> 0x28);
                            bVar34 = bVar34 & ~(byte)((int)((CONCAT12(bVar50,(ushort)(byte)uVar22) &
                                                            0xffff) - 1) >> 0x1f);
                            bVar24 = bVar24 & ~(byte)((int)(bVar50 - 1) >> 0x1f);
                            bVar35 = bVar35 & ~(byte)((int)((CONCAT12(bVar54,(ushort)(byte)((ulong)
                                                  uVar22 >> 0x10)) & 0xffff) - 1) >> 0x1f);
                            bVar36 = bVar36 & ~(byte)((int)(bVar54 - 1) >> 0x1f);
                            bVar37 = bVar37 & ~(byte)((int)((CONCAT12(bVar56,(ushort)(byte)((ulong)
                                                  uVar22 >> 0x20)) & 0xffff) - 1) >> 0x1f);
                            bVar38 = bVar38 & ~(byte)((int)(bVar56 - 1) >> 0x1f);
                            bVar39 = bVar39 & ~(byte)((int)((byte)((ulong)uVar22 >> 0x30) - 1) >>
                                                     0x1f);
                            bVar40 = bVar40 & ~(byte)((int)((byte)((ulong)uVar22 >> 0x38) - 1) >>
                                                     0x1f);
                            bVar41 = bVar41 & ~(byte)((int)(((CONCAT12(bVar52,(short)uVar23) &
                                                             0xff00ff) & 0xffff) - 1) >> 0x1f);
                            bVar42 = bVar42 & ~(byte)((int)(bVar52 - 1) >> 0x1f);
                            bVar43 = bVar43 & ~(byte)((int)((byte)((ulong)uVar23 >> 0x10) - 1) >>
                                                     0x1f);
                            bVar44 = bVar44 & ~(byte)((int)((byte)((ulong)uVar23 >> 0x18) - 1) >>
                                                     0x1f);
                            bVar45 = bVar45 & ~(byte)((int)((CONCAT12(bVar57,(ushort)(byte)((ulong)
                                                  uVar23 >> 0x20)) & 0xffff) - 1) >> 0x1f);
                            bVar46 = bVar46 & ~(byte)((int)(bVar57 - 1) >> 0x1f);
                            bVar47 = bVar47 & ~(byte)((int)((byte)((ulong)uVar23 >> 0x30) - 1) >>
                                                     0x1f);
                            bVar48 = bVar48 & ~(byte)((int)((byte)((ulong)uVar23 >> 0x38) - 1) >>
                                                     0x1f);
                            bVar50 = (byte)uVar20 &
                                     ~(byte)((int)((CONCAT12(bVar51,(ushort)(byte)uVar66) & 0xffff)
                                                  - 1) >> 0x1f);
                            bVar51 = (byte)((ulong)uVar20 >> 8) & ~(byte)((int)(bVar51 - 1) >> 0x1f)
                            ;
                            bVar52 = (byte)((ulong)uVar20 >> 0x10) &
                                     ~(byte)((int)((CONCAT12(bVar53,(ushort)(byte)((ulong)uVar66 >>
                                                                                  0x10)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar53 = (byte)((ulong)uVar20 >> 0x18) &
                                     ~(byte)((int)(bVar53 - 1) >> 0x1f);
                            bVar54 = (byte)((ulong)uVar20 >> 0x20) &
                                     ~(byte)((int)((CONCAT12(bVar55,(ushort)(byte)((ulong)uVar66 >>
                                                                                  0x20)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar55 = (byte)((ulong)uVar20 >> 0x28) &
                                     ~(byte)((int)(bVar55 - 1) >> 0x1f);
                            bVar56 = (byte)((ulong)uVar20 >> 0x30) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x30) - 1) >> 0x1f);
                            bVar57 = (byte)((ulong)uVar20 >> 0x38) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x38) - 1) >> 0x1f);
                            uVar20 = CONCAT17(bVar57,CONCAT16(bVar56,CONCAT15(bVar55,CONCAT14(bVar54
                                                  ,CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,
                                                  bVar50)))))));
                            bVar58 = (byte)uVar21 &
                                     ~(byte)((int)(((CONCAT12(bVar59,(short)uVar67) & 0xff00ff) &
                                                   0xffff) - 1) >> 0x1f);
                            bVar59 = (byte)((ulong)uVar21 >> 8) & ~(byte)((int)(bVar59 - 1) >> 0x1f)
                            ;
                            bVar60 = (byte)((ulong)uVar21 >> 0x10) &
                                     ~(byte)((int)((byte)((ulong)uVar67 >> 0x10) - 1) >> 0x1f);
                            bVar61 = (byte)((ulong)uVar21 >> 0x18) &
                                     ~(byte)((int)((byte)((ulong)uVar67 >> 0x18) - 1) >> 0x1f);
                            bVar62 = (byte)((ulong)uVar21 >> 0x20) &
                                     ~(byte)((int)((CONCAT12(bVar63,(ushort)(byte)((ulong)uVar67 >>
                                                                                  0x20)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar63 = (byte)((ulong)uVar21 >> 0x28) &
                                     ~(byte)((int)(bVar63 - 1) >> 0x1f);
                            bVar64 = (byte)((ulong)uVar21 >> 0x30) &
                                     ~(byte)((int)((byte)((ulong)uVar67 >> 0x30) - 1) >> 0x1f);
                            bVar65 = (byte)((ulong)uVar21 >> 0x38) &
                                     ~(byte)((int)((byte)((ulong)uVar67 >> 0x38) - 1) >> 0x1f);
                            uVar21 = CONCAT17(bVar65,CONCAT16(bVar64,CONCAT15(bVar63,CONCAT14(bVar62
                                                  ,CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,
                                                  bVar58)))))));
                            uVar32 = uVar32 - 0x20;
                          } while (uVar32 != 0);
                          bVar50 = bVar50 & bVar34;
                          bVar51 = bVar51 & bVar24;
                          bVar52 = bVar52 & bVar35;
                          bVar53 = bVar53 & bVar36;
                          bVar54 = bVar54 & bVar37;
                          bVar55 = bVar55 & bVar38;
                          bVar56 = bVar56 & bVar39;
                          bVar57 = bVar57 & bVar40;
                          bVar58 = bVar58 & bVar41;
                          bVar59 = bVar59 & bVar42;
                          bVar60 = bVar60 & bVar43;
                          bVar61 = bVar61 & bVar44;
                          bVar62 = bVar62 & bVar45;
                          bVar63 = bVar63 & bVar46;
                          bVar64 = bVar64 & bVar47;
                          bVar65 = bVar65 & bVar48;
                          auVar49[1] = bVar51;
                          auVar49[0] = bVar50;
                          auVar49[2] = bVar52;
                          auVar49[3] = bVar53;
                          auVar49[4] = bVar54;
                          auVar49[5] = bVar55;
                          auVar49[6] = bVar56;
                          auVar49[7] = bVar57;
                          auVar49[8] = bVar58;
                          auVar49[9] = bVar59;
                          auVar49[10] = bVar60;
                          auVar49[0xb] = bVar61;
                          auVar49[0xc] = bVar62;
                          auVar49[0xd] = bVar63;
                          auVar49[0xe] = bVar64;
                          auVar49[0xf] = bVar65;
                          auVar4[1] = bVar51;
                          auVar4[0] = bVar50;
                          auVar4[2] = bVar52;
                          auVar4[3] = bVar53;
                          auVar4[4] = bVar54;
                          auVar4[5] = bVar55;
                          auVar4[6] = bVar56;
                          auVar4[7] = bVar57;
                          auVar4[8] = bVar58;
                          auVar4[9] = bVar59;
                          auVar4[10] = bVar60;
                          auVar4[0xb] = bVar61;
                          auVar4[0xc] = bVar62;
                          auVar4[0xd] = bVar63;
                          auVar4[0xe] = bVar64;
                          auVar4[0xf] = bVar65;
                          auVar49 = NEON_ext(auVar49,auVar4,8,1);
                          bVar50 = bVar50 & auVar49[0];
                          bVar51 = bVar51 & auVar49[1];
                          bVar52 = bVar52 & auVar49[2];
                          bVar53 = bVar53 & auVar49[3];
                          bVar54 = bVar54 & auVar49[4];
                          bVar55 = bVar55 & auVar49[5];
                          bVar56 = bVar56 & auVar49[6];
                          bVar57 = bVar57 & auVar49[7];
                          bVar58 = bVar58 & auVar49[8];
                          bVar59 = bVar59 & auVar49[9];
                          bVar60 = bVar60 & auVar49[10];
                          bVar61 = bVar61 & auVar49[0xb];
                          bVar62 = bVar62 & auVar49[0xc];
                          bVar63 = bVar63 & auVar49[0xd];
                          bVar64 = bVar64 & auVar49[0xe];
                          bVar65 = bVar65 & auVar49[0xf];
                          auVar5[1] = bVar51;
                          auVar5[0] = bVar50;
                          auVar5[2] = bVar52;
                          auVar5[3] = bVar53;
                          auVar5[4] = bVar54;
                          auVar5[5] = bVar55;
                          auVar5[6] = bVar56;
                          auVar5[7] = bVar57;
                          auVar5[8] = bVar58;
                          auVar5[9] = bVar59;
                          auVar5[10] = bVar60;
                          auVar5[0xb] = bVar61;
                          auVar5[0xc] = bVar62;
                          auVar5[0xd] = bVar63;
                          auVar5[0xe] = bVar64;
                          auVar5[0xf] = bVar65;
                          auVar6[1] = bVar51;
                          auVar6[0] = bVar50;
                          auVar6[2] = bVar52;
                          auVar6[3] = bVar53;
                          auVar6[4] = bVar54;
                          auVar6[5] = bVar55;
                          auVar6[6] = bVar56;
                          auVar6[7] = bVar57;
                          auVar6[8] = bVar58;
                          auVar6[9] = bVar59;
                          auVar6[10] = bVar60;
                          auVar6[0xb] = bVar61;
                          auVar6[0xc] = bVar62;
                          auVar6[0xd] = bVar63;
                          auVar6[0xe] = bVar64;
                          auVar6[0xf] = bVar65;
                          auVar49 = NEON_ext(auVar5,auVar6,4,1);
                          bVar50 = bVar50 & auVar49[0];
                          bVar51 = bVar51 & auVar49[1];
                          bVar52 = bVar52 & auVar49[2];
                          bVar53 = bVar53 & auVar49[3];
                          bVar54 = bVar54 & auVar49[4];
                          bVar55 = bVar55 & auVar49[5];
                          bVar56 = bVar56 & auVar49[6];
                          bVar57 = bVar57 & auVar49[7];
                          bVar58 = bVar58 & auVar49[8];
                          bVar59 = bVar59 & auVar49[9];
                          bVar60 = bVar60 & auVar49[10];
                          bVar61 = bVar61 & auVar49[0xb];
                          bVar62 = bVar62 & auVar49[0xc];
                          bVar63 = bVar63 & auVar49[0xd];
                          bVar64 = bVar64 & auVar49[0xe];
                          bVar65 = bVar65 & auVar49[0xf];
                          auVar7[1] = bVar51;
                          auVar7[0] = bVar50;
                          auVar7[2] = bVar52;
                          auVar7[3] = bVar53;
                          auVar7[4] = bVar54;
                          auVar7[5] = bVar55;
                          auVar7[6] = bVar56;
                          auVar7[7] = bVar57;
                          auVar7[8] = bVar58;
                          auVar7[9] = bVar59;
                          auVar7[10] = bVar60;
                          auVar7[0xb] = bVar61;
                          auVar7[0xc] = bVar62;
                          auVar7[0xd] = bVar63;
                          auVar7[0xe] = bVar64;
                          auVar7[0xf] = bVar65;
                          auVar8[1] = bVar51;
                          auVar8[0] = bVar50;
                          auVar8[2] = bVar52;
                          auVar8[3] = bVar53;
                          auVar8[4] = bVar54;
                          auVar8[5] = bVar55;
                          auVar8[6] = bVar56;
                          auVar8[7] = bVar57;
                          auVar8[8] = bVar58;
                          auVar8[9] = bVar59;
                          auVar8[10] = bVar60;
                          auVar8[0xb] = bVar61;
                          auVar8[0xc] = bVar62;
                          auVar8[0xd] = bVar63;
                          auVar8[0xe] = bVar64;
                          auVar8[0xf] = bVar65;
                          auVar49 = NEON_ext(auVar7,auVar8,2,1);
                          bVar34 = bVar50 & auVar49[0] & bVar51 & auVar49[1];
                          uVar14 = (uint)bVar34;
                          if (uVar30 == uVar29) goto LAB_003d2e50;
                        }
                        lVar19 = ~uVar26 + uVar15;
                        pbVar27 = pbVar31 + uVar26;
                        do {
                          uVar14 = uVar14 & ((int)(*pbVar27 - 1) >> 0x1f ^ 0xffffffffU);
                          bVar34 = (byte)uVar14;
                          lVar19 = lVar19 + -1;
                          pbVar27 = pbVar27 + 1;
                        } while (lVar19 != 0);
                      }
LAB_003d2e50:
                      pbVar27 = pbVar31 + uVar15;
                      uVar11 = param_1[0x1ad];
                      bVar24 = (byte)(((int)uVar11 >> 8 ^ (uint)*pbVar27) - 1 >> 0x18) &
                               ((byte)((int)uVar11 >> 0x1f) ^ 0xff) &
                               (byte)((uVar11 & 0xff ^ (uint)pbVar27[1]) - 1 >> 0x18);
                      if (*(char *)((long)param_1 + 0x696) < '\0') {
                        uVar11 = *param_1;
                        bVar24 = bVar24 | (byte)(((int)uVar11 >> 8 ^ (uint)*pbVar27) - 1 >> 0x18) &
                                          ((byte)((int)uVar11 >> 0x1f) ^ 0xff) &
                                          (byte)((uVar11 & 0xff ^ (uint)pbVar27[1]) - 1 >> 0x18);
                      }
                      bVar34 = bVar34 & (byte)((int)(pbVar31[uVar15 - 1] - 1) >> 0x1f) &
                               (char)bVar24 >> 7;
                      bVar24 = ~bVar34;
                      if ((pbVar27 < abStack_130) && (local_160 < pbVar27 + 0x30)) {
                        lVar19 = 0;
                        do {
                          pbVar27[lVar19] = bVar24 & local_160[lVar19] | bVar34 & pbVar27[lVar19];
                          lVar19 = lVar19 + 1;
                        } while (lVar19 != 0x30);
                      }
                      else {
                        uVar21 = *(undefined8 *)(pbVar27 + 8);
                        uVar20 = *(undefined8 *)pbVar27;
                        uVar23 = *(undefined8 *)(pbVar27 + 0x18);
                        uVar22 = *(undefined8 *)(pbVar27 + 0x10);
                        *(ulong *)(pbVar27 + 8) =
                             CONCAT17(bVar24 & local_160[0xf] |
                                      bVar34 & (byte)((ulong)uVar21 >> 0x38),
                                      CONCAT16(bVar24 & local_160[0xe] |
                                               bVar34 & (byte)((ulong)uVar21 >> 0x30),
                                               CONCAT15(bVar24 & local_160[0xd] |
                                                        bVar34 & (byte)((ulong)uVar21 >> 0x28),
                                                        CONCAT14(bVar24 & local_160[0xc] |
                                                                 bVar34 & (byte)((ulong)uVar21 >>
                                                                                0x20),
                                                                 CONCAT13(bVar24 & local_160[0xb] |
                                                                          bVar34 & (byte)((ulong)
                                                  uVar21 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[10] |
                                                           bVar34 & (byte)((ulong)uVar21 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[9] |
                                                                    bVar34 & (byte)((ulong)uVar21 >>
                                                                                   8),
                                                                    bVar24 & local_160[8] |
                                                                    bVar34 & (byte)uVar21)))))));
                        *(ulong *)pbVar27 =
                             CONCAT17(bVar24 & local_160[7] | bVar34 & (byte)((ulong)uVar20 >> 0x38)
                                      ,CONCAT16(bVar24 & local_160[6] |
                                                bVar34 & (byte)((ulong)uVar20 >> 0x30),
                                                CONCAT15(bVar24 & local_160[5] |
                                                         bVar34 & (byte)((ulong)uVar20 >> 0x28),
                                                         CONCAT14(bVar24 & local_160[4] |
                                                                  bVar34 & (byte)((ulong)uVar20 >>
                                                                                 0x20),
                                                                  CONCAT13(bVar24 & local_160[3] |
                                                                           bVar34 & (byte)((ulong)
                                                  uVar20 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[2] |
                                                           bVar34 & (byte)((ulong)uVar20 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[1] |
                                                                    bVar34 & (byte)((ulong)uVar20 >>
                                                                                   8),
                                                                    bVar24 & local_160[0] |
                                                                    bVar34 & (byte)uVar20)))))));
                        *(ulong *)(pbVar27 + 0x18) =
                             CONCAT17(bVar24 & local_160[0x1f] |
                                      bVar34 & (byte)((ulong)uVar23 >> 0x38),
                                      CONCAT16(bVar24 & local_160[0x1e] |
                                               bVar34 & (byte)((ulong)uVar23 >> 0x30),
                                               CONCAT15(bVar24 & local_160[0x1d] |
                                                        bVar34 & (byte)((ulong)uVar23 >> 0x28),
                                                        CONCAT14(bVar24 & local_160[0x1c] |
                                                                 bVar34 & (byte)((ulong)uVar23 >>
                                                                                0x20),
                                                                 CONCAT13(bVar24 & local_160[0x1b] |
                                                                          bVar34 & (byte)((ulong)
                                                  uVar23 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[0x1a] |
                                                           bVar34 & (byte)((ulong)uVar23 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[0x19] |
                                                                    bVar34 & (byte)((ulong)uVar23 >>
                                                                                   8),
                                                                    bVar24 & local_160[0x18] |
                                                                    bVar34 & (byte)uVar23)))))));
                        *(ulong *)(pbVar27 + 0x10) =
                             CONCAT17(bVar24 & local_160[0x17] |
                                      bVar34 & (byte)((ulong)uVar22 >> 0x38),
                                      CONCAT16(bVar24 & local_160[0x16] |
                                               bVar34 & (byte)((ulong)uVar22 >> 0x30),
                                               CONCAT15(bVar24 & local_160[0x15] |
                                                        bVar34 & (byte)((ulong)uVar22 >> 0x28),
                                                        CONCAT14(bVar24 & local_160[0x14] |
                                                                 bVar34 & (byte)((ulong)uVar22 >>
                                                                                0x20),
                                                                 CONCAT13(bVar24 & local_160[0x13] |
                                                                          bVar34 & (byte)((ulong)
                                                  uVar22 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[0x12] |
                                                           bVar34 & (byte)((ulong)uVar22 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[0x11] |
                                                                    bVar34 & (byte)((ulong)uVar22 >>
                                                                                   8),
                                                                    bVar24 & local_160[0x10] |
                                                                    bVar34 & (byte)uVar22)))))));
                        uVar21 = *(undefined8 *)(pbVar27 + 0x28);
                        uVar20 = *(undefined8 *)(pbVar27 + 0x20);
                        *(ulong *)(pbVar27 + 0x28) =
                             CONCAT17(bVar24 & local_160[0x2f] |
                                      bVar34 & (byte)((ulong)uVar21 >> 0x38),
                                      CONCAT16(bVar24 & local_160[0x2e] |
                                               bVar34 & (byte)((ulong)uVar21 >> 0x30),
                                               CONCAT15(bVar24 & local_160[0x2d] |
                                                        bVar34 & (byte)((ulong)uVar21 >> 0x28),
                                                        CONCAT14(bVar24 & local_160[0x2c] |
                                                                 bVar34 & (byte)((ulong)uVar21 >>
                                                                                0x20),
                                                                 CONCAT13(bVar24 & local_160[0x2b] |
                                                                          bVar34 & (byte)((ulong)
                                                  uVar21 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[0x2a] |
                                                           bVar34 & (byte)((ulong)uVar21 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[0x29] |
                                                                    bVar34 & (byte)((ulong)uVar21 >>
                                                                                   8),
                                                                    bVar24 & local_160[0x28] |
                                                                    bVar34 & (byte)uVar21)))))));
                        *(ulong *)(pbVar27 + 0x20) =
                             CONCAT17(bVar24 & local_160[0x27] |
                                      bVar34 & (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16(bVar24 & local_160[0x26] |
                                               bVar34 & (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15(bVar24 & local_160[0x25] |
                                                        bVar34 & (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14(bVar24 & local_160[0x24] |
                                                                 bVar34 & (byte)((ulong)uVar20 >>
                                                                                0x20),
                                                                 CONCAT13(bVar24 & local_160[0x23] |
                                                                          bVar34 & (byte)((ulong)
                                                  uVar20 >> 0x18),
                                                  CONCAT12(bVar24 & local_160[0x22] |
                                                           bVar34 & (byte)((ulong)uVar20 >> 0x10),
                                                           CONCAT11(bVar24 & local_160[0x21] |
                                                                    bVar34 & (byte)((ulong)uVar20 >>
                                                                                   8),
                                                                    bVar24 & local_160[0x20] |
                                                                    bVar34 & (byte)uVar20)))))));
                      }
                      iVar12 = FUN_003ac690(param_1,pbVar27,0x30,0);
                      FUN_00452f80(pbVar31,"external/openssl/ssl/statem/statem_srvr.c",0xc72);
                      goto joined_r0x003d28d8;
                    }
                    uVar20 = 0x33;
                    uVar21 = 0x93;
                    uVar22 = 0xc29;
                  }
                }
                FUN_003c3950(param_1,uVar20,0x19f,uVar21,"external/openssl/ssl/statem/statem_srvr.c"
                             ,uVar22);
                FUN_00452f80(pbVar31,"external/openssl/ssl/statem/statem_srvr.c",0xc72);
                goto LAB_003d2b88;
              }
              uVar20 = 0x50;
              uVar21 = 0x19f;
              uVar22 = 0x41;
              uVar23 = 0xbff;
            }
          }
          else {
            uVar15 = param_2[1] - 2;
            if (1 < (ulong)param_2[1]) {
              puVar28 = (ushort *)*param_2 + 1;
              uVar30 = (ulong)*(ushort *)*param_2;
              uVar30 = ((uVar30 & 0xff00) << 0x28 | uVar30 << 0x38) >> 0x30;
              lVar33 = uVar15 - uVar30;
              if (uVar30 <= uVar15) {
                *param_2 = (long)puVar28 + uVar30;
                param_2[1] = lVar33;
                if (lVar33 == 0) goto LAB_003d27a0;
              }
            }
            uVar20 = 0x32;
            uVar21 = 0x19f;
            uVar22 = 0x9f;
            uVar23 = 0xbeb;
          }
        }
      }
      else {
        if (param_2[1] == 0) {
          iVar12 = FUN_003ac690(param_1,0,0,0);
joined_r0x003d28d8:
          if (iVar12 != 0) {
            return 2;
          }
          goto LAB_003d2b88;
        }
        uVar20 = 0x32;
        uVar21 = 0x17e;
        uVar22 = 0x9f;
        uVar23 = 0xdaf;
      }
    }
    else {
      uVar15 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar28 = (ushort *)*param_2 + 1;
        uVar30 = (ulong)*(ushort *)*param_2;
        uVar30 = ((uVar30 & 0xff00) << 0x28 | uVar30 << 0x38) >> 0x30;
        if (uVar30 <= uVar15) {
          *param_2 = (long)puVar28 + uVar30;
          param_2[1] = uVar15 - uVar30;
          if (uVar30 < 0x81) {
            if (*(long *)(param_1 + 0x192) == 0) {
              uVar20 = 0x50;
              uVar21 = 0x19e;
              uVar22 = 0xe1;
              uVar23 = 0xba0;
            }
            else {
              lVar33 = *(long *)(param_1 + 0x174);
              FUN_00452f80(*(undefined8 *)(lVar33 + 0x1a8),
                           "external/openssl/ssl/statem/../packet_local.h",0x1c1);
              lVar19 = FUN_0045ac20(puVar28,uVar30,"external/openssl/ssl/statem/../packet_local.h",
                                    0x1c4);
              *(long *)(lVar33 + 0x1a8) = lVar19;
              if (lVar19 == 0) {
                uVar20 = 0x50;
                uVar21 = 0x19e;
                uVar22 = 0x44;
                uVar23 = 0xba6;
              }
              else {
                uVar14 = (**(code **)(param_1 + 0x192))
                                   (param_1,*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1a8),
                                    local_160,0x100);
                if (uVar14 < 0x101) {
                  uVar15 = (ulong)uVar14;
                  if (uVar14 == 0) {
                    uVar20 = 0x73;
                    uVar21 = 0x19e;
                    uVar22 = 0xdf;
                    uVar23 = 2999;
                  }
                  else {
                    FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8),
                                 "external/openssl/ssl/statem/statem_srvr.c",0xbbb);
                    uVar20 = FUN_0045ace0(local_160,uVar15,
                                          "external/openssl/ssl/statem/statem_srvr.c",0xbbc);
                    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8) = uVar20;
                    FUN_00453300(local_160,uVar15);
                    lVar19 = *(long *)(param_1 + 0x2a);
                    if (*(long *)(lVar19 + 0x2c8) != 0) {
                      *(ulong *)(lVar19 + 0x2d0) = uVar15;
                      goto LAB_003d2768;
                    }
                    *(undefined8 *)(lVar19 + 0x2d0) = 0;
                    uVar20 = 0x50;
                    uVar21 = 0x19e;
                    uVar22 = 0x41;
                    uVar23 = 0xbc2;
                  }
                }
                else {
                  uVar20 = 0x50;
                  uVar21 = 0x19e;
                  uVar22 = 0x44;
                  uVar23 = 0xbaf;
                }
              }
            }
          }
          else {
            uVar20 = 0x32;
            uVar21 = 0x19e;
            uVar22 = 0x92;
            uVar23 = 0xb9b;
          }
          goto LAB_003d2b84;
        }
      }
      uVar20 = 0x32;
      uVar21 = 0x19e;
      uVar22 = 0x9f;
      uVar23 = 0xb96;
    }
LAB_003d2b84:
    FUN_003c3950(param_1,uVar20,uVar21,uVar22,"external/openssl/ssl/statem/statem_srvr.c",uVar23);
LAB_003d2b88:
    FUN_00453260(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8),
                 *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2d0),
                 "external/openssl/ssl/statem/statem_srvr.c",0xdda);
    lVar19 = *(long *)(param_1 + 0x2a);
    *(undefined8 *)(lVar19 + 0x2d0) = 0;
    *(undefined8 *)(lVar19 + 0x2c8) = 0;
    return 0;
  case 0x1d:
    uVar15 = FUN_003cc0b0();
    return uVar15;
  case 0x1e:
    if (param_2[1] != 0) {
      uVar15 = param_2[1] - 1;
      pbVar31 = (byte *)*param_2 + 1;
      bVar34 = *(byte *)*param_2;
      uVar30 = (ulong)bVar34;
      lVar19 = uVar15 - uVar30;
      if (uVar30 <= uVar15) {
        pbVar27 = pbVar31 + uVar30;
        *param_2 = (long)pbVar27;
        param_2[1] = lVar19;
        if (lVar19 != 0) {
          uVar15 = (ulong)*pbVar27;
          lVar33 = (lVar19 - 1U) - uVar15;
          if (uVar15 <= lVar19 - 1U) {
            *param_2 = (long)(pbVar27 + uVar15 + 1);
            param_2[1] = lVar33;
            if (lVar33 == 0) {
              FUN_00452f80(*(undefined8 *)(param_1 + 0x1f0),
                           "external/openssl/ssl/statem/../packet_local.h",0x1a4);
              param_1[0x1f0] = 0;
              param_1[0x1f1] = 0;
              if (bVar34 == 0) {
LAB_003d3340:
                *(ulong *)(param_1 + 0x1f2) = uVar30;
                return 3;
              }
              lVar19 = FUN_0045ace0(pbVar31,uVar30,"external/openssl/ssl/statem/../packet_local.h",
                                    0x1ad);
              *(long *)(param_1 + 0x1f0) = lVar19;
              if (lVar19 != 0) goto LAB_003d3340;
              param_1[0x1f2] = 0;
              param_1[499] = 0;
              uVar20 = 0x50;
              uVar21 = 0x44;
              uVar22 = 0x10b3;
              goto LAB_003d32ec;
            }
          }
        }
      }
    }
    uVar20 = 0x32;
    uVar21 = 0x9f;
    uVar22 = 0x10ac;
LAB_003d32ec:
    FUN_003c3950(param_1,uVar20,0x17f,uVar21,"external/openssl/ssl/statem/statem_srvr.c",uVar22);
    return 0;
  case 0x1f:
    uVar15 = FUN_003cc9a0();
    return uVar15;
  case 0x20:
    uVar15 = FUN_003ccae0();
    return uVar15;
  case 0x2c:
    uVar15 = FUN_003cc840();
    return uVar15;
  case 0x31:
    if (param_2[1] == 0) {
      if ((param_1[0x21] & 0xfffffffe) == 10) {
        iVar12 = FUN_003a4580(param_1 + 0x252);
        if (iVar12 == 0) {
          param_1[0x21] = 0xc;
          iVar12 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1);
          uVar11 = 0;
          if (iVar12 != 0) {
            uVar11 = 3;
          }
          return (ulong)uVar11;
        }
        uVar20 = 10;
        uVar21 = 0xb6;
        uVar22 = 0x10de;
      }
      else {
        uVar20 = 0x50;
        uVar21 = 0x44;
        uVar22 = 0x10d3;
      }
    }
    else {
      uVar20 = 0x32;
      uVar21 = 0x9f;
      uVar22 = 0x10cc;
    }
    FUN_003c3950(param_1,uVar20,0x219,uVar21,"external/openssl/ssl/statem/statem_srvr.c",uVar22);
    return 0;
  }
  if (((param_1[0x224] == 0) && (lVar19 = *(long *)(param_1 + 0x2a), *(long *)(lVar19 + 0x198) != 0)
      ) && (*(long *)(lVar19 + 0x220) != 0)) {
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar12 = **(int **)(param_1 + 2), 0x303 < iVar12)) && (iVar12 != 0x10000)) {
      FUN_003c3950(param_1,0x50,0x17d,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x584);
      piVar25 = (int *)0x0;
      goto LAB_003d1c30;
    }
    if (((param_1[0x1a5] >> 0x1e & 1) != 0) ||
       (*(int *)(lVar19 + 0x3d8) == 0 && (param_1[0x1a5] & 0x40000) == 0)) {
      FUN_003ad170(param_1,1,100);
      return 1;
    }
    param_1[0x224] = 1;
    param_1[0xf] = 1;
  }
  piVar25 = (int *)FUN_00452ce0(0x290,"external/openssl/ssl/statem/statem_srvr.c",0x592);
  if (piVar25 == (int *)0x0) {
    FUN_003c3950(param_1,0x50,0x17d,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x595);
    goto LAB_003d1c30;
  }
  iVar12 = FUN_003a6970(param_1 + 0x252);
  *piVar25 = iVar12;
  if (iVar12 == 0) {
    uVar15 = param_2[1];
LAB_003d1a8c:
    if (uVar15 < 2) {
      uVar20 = 0x32;
      uVar21 = 0xa0;
      uVar22 = 0x5c7;
      goto LAB_003d1c14;
    }
    pbVar31 = (byte *)*param_2;
    bVar34 = *pbVar31;
    piVar25[1] = (uint)bVar34 << 8;
    piVar25[1] = (uint)CONCAT11(bVar34,pbVar31[1]);
    uVar30 = uVar15 - 2;
    *param_2 = (long)(pbVar31 + 2);
    param_2[1] = uVar30;
    if (iVar12 == 0) {
      if (0x1f < uVar30) {
        uVar21 = *(undefined8 *)(pbVar31 + 10);
        uVar20 = *(undefined8 *)(pbVar31 + 2);
        uVar22 = *(undefined8 *)(pbVar31 + 0x12);
        *(undefined8 *)(piVar25 + 8) = *(undefined8 *)(pbVar31 + 0x1a);
        *(undefined8 *)(piVar25 + 6) = uVar22;
        *(undefined8 *)(piVar25 + 4) = uVar21;
        *(undefined8 *)(piVar25 + 2) = uVar20;
        lVar19 = *param_2;
        lVar33 = param_2[1];
        lVar16 = lVar33 + -0x20;
        *param_2 = lVar19 + 0x20;
        param_2[1] = lVar16;
        if (lVar16 != 0) {
          bVar34 = *(byte *)(lVar19 + 0x20);
          uVar15 = (ulong)bVar34;
          uVar30 = lVar33 - 0x21;
          if (uVar15 <= uVar30) {
            *param_2 = lVar19 + 0x21 + uVar15;
            param_2[1] = uVar30 - uVar15;
            if (bVar34 < 0x21) {
              *(ulong *)(piVar25 + 10) = uVar15;
              memcpy(piVar25 + 0xc,(void *)(lVar19 + 0x21),uVar15);
              if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0) {
                if (param_2[1] != 0) {
                  uVar30 = param_2[1] - 1;
                  pbVar31 = (byte *)*param_2 + 1;
                  uVar15 = (ulong)*(byte *)*param_2;
                  if (uVar15 <= uVar30) {
                    *param_2 = (long)(pbVar31 + uVar15);
                    param_2[1] = uVar30 - uVar15;
                    *(ulong *)(piVar25 + 0x14) = uVar15;
                    memcpy(piVar25 + 0x16,pbVar31,uVar15);
                    uVar11 = FUN_003b5740(param_1);
                    if (((uVar11 >> 0xd & 1) != 0) && (*(long *)(piVar25 + 0x14) == 0)) {
                      FUN_00452f80(piVar25,"external/openssl/ssl/statem/statem_srvr.c",0x622);
                      return 1;
                    }
                    goto LAB_003d1d38;
                  }
                }
                uVar20 = 0x32;
                uVar21 = 0x9f;
                uVar22 = 0x611;
                goto LAB_003d1c14;
              }
LAB_003d1d38:
              uVar15 = param_2[1] - 2;
              if (1 < (ulong)param_2[1]) {
                puVar28 = (ushort *)*param_2 + 1;
                uVar30 = (ulong)*(ushort *)*param_2;
                uVar30 = ((uVar30 & 0xff00) << 0x28 | uVar30 << 0x38) >> 0x30;
                if (uVar30 <= uVar15) {
                  *param_2 = (long)puVar28 + uVar30;
                  param_2[1] = uVar15 - uVar30;
                  *(ushort **)(piVar25 + 0x56) = puVar28;
                  *(ulong *)(piVar25 + 0x58) = uVar30;
                  if (param_2[1] != 0) {
                    uVar15 = param_2[1] - 1;
                    pbVar31 = (byte *)*param_2 + 1;
                    __n = (size_t)*(byte *)*param_2;
                    lVar19 = uVar15 - __n;
                    if (__n <= uVar15) {
                      puVar28 = (ushort *)(pbVar31 + __n);
                      *param_2 = (long)puVar28;
                      param_2[1] = lVar19;
                      if (lVar19 != 1) {
                        if (lVar19 == 0) {
                          piVar25[0x9c] = 0;
                          piVar25[0x9d] = 0;
                          piVar25[0x9e] = 0;
                          piVar25[0x9f] = 0;
LAB_003d1ed0:
                          if ((*(long *)(param_1 + 0x218) == 0) || (*(long *)(piVar25 + 10) == 0))
                          goto LAB_003d1e74;
                          uVar20 = 0x2f;
                          uVar21 = 0x9f;
                          uVar22 = 0x644;
                          goto LAB_003d1c14;
                        }
                        uVar15 = (((ulong)*puVar28 & 0xff00) << 0x28 | (ulong)*puVar28 << 0x38) >>
                                 0x30;
                        if (uVar15 <= lVar19 - 2U) {
                          *param_2 = (long)((long)(puVar28 + 1) + uVar15);
                          param_2[1] = (lVar19 - 2U) - uVar15;
                          *(ushort **)(piVar25 + 0x9c) = puVar28 + 1;
                          *(ulong *)(piVar25 + 0x9e) = uVar15;
                          if (param_2[1] == 0) goto LAB_003d1ed0;
                        }
                      }
                      uVar20 = 0x32;
                      uVar21 = 0x9f;
                      uVar22 = 0x63b;
                      goto LAB_003d1c14;
                    }
                  }
                  uVar20 = 0x32;
                  uVar21 = 0x9f;
                  uVar22 = 0x630;
                  goto LAB_003d1c14;
                }
              }
              uVar20 = 0x32;
              uVar21 = 0x9f;
              uVar22 = 0x62a;
              goto LAB_003d1c14;
            }
            piVar25[10] = 0;
            piVar25[0xb] = 0;
          }
        }
      }
      uVar20 = 0x32;
      uVar21 = 0x9f;
      uVar22 = 0x60a;
      goto LAB_003d1c14;
    }
    if (uVar30 < 2) {
LAB_003d1b14:
      uVar20 = 0x32;
      uVar21 = 0xd5;
      uVar22 = 0x5d9;
      goto LAB_003d1c14;
    }
    uVar2 = *(ushort *)(pbVar31 + 2);
    *param_2 = (long)(pbVar31 + 4);
    param_2[1] = uVar15 - 4;
    if (uVar15 - 4 < 2) goto LAB_003d1b14;
    uVar3 = *(ushort *)(pbVar31 + 4);
    *param_2 = (long)(pbVar31 + 6);
    param_2[1] = uVar15 - 6;
    if (uVar15 - 6 < 2) goto LAB_003d1b14;
    uVar30 = ((ulong)uVar3 & 0xff00) << 0x28 | (ulong)uVar3 << 0x38;
    uVar32 = uVar30 >> 0x30;
    uVar3 = *(ushort *)(pbVar31 + 6);
    *param_2 = (long)(pbVar31 + 8);
    param_2[1] = uVar15 - 8;
    if (0x20 < (ushort)(uVar30 >> 0x30)) {
      uVar20 = 0x2f;
      uVar21 = 0x9f;
      uVar22 = 0x5df;
      goto LAB_003d1c14;
    }
    uVar30 = (((ulong)uVar2 & 0xff00) << 0x28 | (ulong)uVar2 << 0x38) >> 0x30;
    if (uVar15 - 8 < uVar30) {
LAB_003d1d00:
      uVar20 = 0x32;
      uVar21 = 0xd5;
      uVar22 = 0x5ea;
      goto LAB_003d1c14;
    }
    *(byte **)(piVar25 + 0x56) = pbVar31 + 8;
    *(ulong *)(piVar25 + 0x58) = uVar30;
    lVar19 = *param_2;
    lVar33 = param_2[1];
    *param_2 = (long)(lVar19 + uVar30);
    param_2[1] = lVar33 - uVar30;
    if (lVar33 - uVar30 < uVar32) goto LAB_003d1d00;
    uVar15 = ((ulong)uVar3 & 0xff00) << 0x28 | (ulong)uVar3 << 0x38;
    uVar26 = uVar15 >> 0x30;
    memcpy(piVar25 + 0xc,(void *)(lVar19 + uVar30),uVar32);
    __src = (void *)(*param_2 + uVar32);
    uVar30 = param_2[1] - uVar32;
    *param_2 = (long)__src;
    param_2[1] = uVar30;
    if (uVar30 < uVar26) goto LAB_003d1d00;
    *param_2 = (long)__src + uVar26;
    param_2[1] = uVar30 - uVar26;
    if (uVar30 - uVar26 != 0) goto LAB_003d1d00;
    uVar11 = (uint)(ushort)(uVar15 >> 0x30);
    if (0x1f < uVar11) {
      uVar11 = 0x20;
    }
    *(ulong *)(piVar25 + 10) = uVar32;
    piVar25[4] = 0;
    piVar25[5] = 0;
    piVar25[2] = 0;
    piVar25[3] = 0;
    piVar25[8] = 0;
    piVar25[9] = 0;
    piVar25[6] = 0;
    piVar25[7] = 0;
    memcpy((void *)((long)(piVar25 + 10) - (ulong)uVar11),__src,(ulong)uVar11);
    __n = 1;
    pbVar31 = &DAT_03cdcf55;
    piVar25[0x9e] = 0;
    piVar25[0x9f] = 0;
    piVar25[0x9c] = 0;
    piVar25[0x9d] = 0;
LAB_003d1e74:
    *(size_t *)(piVar25 + 0x5a) = __n;
    memcpy(piVar25 + 0x5c,pbVar31,__n);
    iVar12 = FUN_003ba070(param_1,abStack_130 + 0xf0,0x80,piVar25 + 0xa2,piVar25 + 0xa0,1);
    if (iVar12 != 0) {
      *(int **)(param_1 + 0x21a) = piVar25;
      return 2;
    }
  }
  else {
    if (((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0) ||
        (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)) && (param_1[0x168] == 0)) {
      if (param_2[1] != 0) {
        uVar15 = param_2[1] - 1;
        cVar1 = *(char *)*param_2;
        *param_2 = (long)((char *)*param_2 + 1);
        param_2[1] = uVar15;
        if (cVar1 == '\x01') goto LAB_003d1a8c;
      }
      uVar20 = 0x50;
      uVar21 = 0x44;
      uVar22 = 0x5c0;
    }
    else {
      uVar20 = 10;
      uVar21 = 0xf4;
      uVar22 = 0x5a5;
    }
LAB_003d1c14:
    FUN_003c3950(param_1,uVar20,0x17d,uVar21,"external/openssl/ssl/statem/statem_srvr.c",uVar22);
  }
  FUN_00452f80(*(undefined8 *)(piVar25 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x661);
LAB_003d1c30:
  FUN_00452f80(piVar25,"external/openssl/ssl/statem/statem_srvr.c",0x662);
  return 0;
}


