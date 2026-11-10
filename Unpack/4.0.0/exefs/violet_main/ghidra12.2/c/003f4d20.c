/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4d20; name: FUN_003f4d20
 */


undefined8 FUN_003f4d20(long param_1,long param_2,long *param_3)

{
  short *__s;
  uint uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  long lVar28;
  char *pcVar29;
  long lVar30;
  bool bVar31;
  ulong uVar32;
  long local_110;
  char *local_f8;
  long local_f0;
  byte *local_e8;
  __dev_t local_e0;
  __ino_t _Stack_d8;
  __nlink_t local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  __dev_t _Stack_b8;
  __off_t _Stack_b0;
  __blksize_t _Stack_a8;
  __blkcnt_t local_a0;
  __time_t _Stack_98;
  long lStack_90;
  __time_t _Stack_88;
  long local_80;
  __time_t _Stack_78;
  long lStack_70;
  long lStack_68;
  
  local_f0 = 0;
  local_e8 = (byte *)0x0;
  lVar28 = *(long *)(param_1 + 0x10);
  lVar11 = FUN_003f3110();
  if (lVar11 == 0) {
    uVar19 = 0xcb;
    uVar17 = 7;
LAB_003f57ec:
    FUN_004806c0(0xe,0x79,uVar17,"external/openssl/crypto/conf/conf_def.c",uVar19);
  }
  else {
    pbVar12 = (byte *)FUN_0045abd0("default","external/openssl/crypto/conf/conf_def.c",0xcf);
    local_e8 = pbVar12;
    if (pbVar12 == (byte *)0x0) {
      uVar17 = 0x41;
      uVar19 = 0xd1;
    }
    else {
      iVar9 = FUN_003f6490(param_1);
      if (iVar9 == 0) {
        uVar17 = 0x41;
        uVar19 = 0xd6;
        goto LAB_003f57ec;
      }
      local_110 = FUN_003f66f0(param_1,pbVar12);
      if (local_110 != 0) {
        lVar13 = FUN_003f31c0(lVar11,0x200);
        if (lVar13 != 0) {
          lVar30 = 0;
          lVar13 = 0;
          pcVar29 = (char *)0x0;
          bVar8 = true;
LAB_003f4dcc:
          uVar32 = 0;
          bVar31 = false;
LAB_003f4dfc:
          iVar9 = (int)uVar32;
          __s = (short *)(*(long *)(lVar11 + 8) + (long)iVar9);
          *(char *)__s = '\0';
          if (bVar31) {
            FUN_003e9300(param_2,__s,0x1ff);
            *(char *)((long)__s + 0x1ff) = '\0';
            sVar14 = strlen((char *)__s);
            if (bVar8) {
              uVar32 = (ulong)((int)sVar14 - 3);
              if ((2 < (int)sVar14) && (*__s == -0x4411 && (char)__s[1] == -0x41)) {
                memmove(__s,(char *)((long)__s + 3),uVar32);
                *(char *)((long)__s + uVar32) = '\0';
                sVar14 = uVar32;
              }
            }
            iVar10 = (int)sVar14;
            bVar8 = iVar10 != 0;
          }
          else {
            while( true ) {
              FUN_003e9300(param_2,__s,0x1ff);
              *(char *)((long)__s + 0x1ff) = '\0';
              sVar14 = strlen((char *)__s);
              if (bVar8) {
                uVar32 = (ulong)((int)sVar14 - 3);
                if (2 < (int)sVar14) {
                  if (*__s != -0x4411 || (char)__s[1] != -0x41) {
                    bVar8 = true;
                    goto LAB_003f4f60;
                  }
                  memmove(__s,(char *)((long)__s + 3),uVar32);
                  *(char *)((long)__s + uVar32) = '\0';
                  sVar14 = uVar32;
                }
              }
              iVar10 = (int)sVar14;
              if (iVar10 != 0) break;
              if (local_f0 == 0) {
LAB_003f4e8c:
                lVar23 = FUN_0047e380(lVar30);
                if (lVar23 == 0) {
                  FUN_003f3160(lVar11);
                  FUN_00452f80(local_e8,"external/openssl/crypto/conf/conf_def.c",0x1bf);
                  FUN_0047db00(lVar30);
                  return 1;
                }
              }
              else {
                lVar23 = FUN_003f5bd0(pcVar29,&local_f0);
                if (lVar23 == 0) {
                  FUN_00452f80(pcVar29,"external/openssl/crypto/conf/conf_def.c",0x108);
                  pcVar29 = (char *)0x0;
                  goto LAB_003f4e8c;
                }
              }
              thunk_FUN_003e8b90(param_2);
              bVar8 = false;
              param_2 = lVar23;
            }
            bVar8 = true;
          }
          iVar21 = iVar10;
          if (0 < iVar10) {
LAB_003f4f60:
            lVar23 = 0;
            iVar10 = (int)sVar14;
            do {
              cVar2 = *(char *)((long)__s + (ulong)(uint)(iVar10 + -1 + (int)lVar23));
              if (cVar2 != '\r' && cVar2 != '\n') {
                iVar21 = iVar10 + (int)lVar23;
                if (!bVar8) goto LAB_003f4fc4;
                goto LAB_003f4fa8;
              }
              lVar23 = lVar23 + -1;
            } while (1 < (long)((sVar14 & 0xffffffff) + lVar23 + 1));
            iVar21 = 0;
          }
          if (bVar8) {
LAB_003f4fa8:
            if (iVar21 != iVar10) goto LAB_003f4fc4;
            bVar8 = false;
            uVar1 = iVar21 + iVar9;
            uVar22 = (ulong)uVar1;
            if (0 < (int)uVar1) goto LAB_003f4fdc;
LAB_003f4ffc:
            if (bVar8) {
LAB_003f5000:
              pbVar12 = *(byte **)(lVar11 + 8);
              bVar20 = *pbVar12;
              pbVar24 = pbVar12;
              if (-1 < (char)bVar20) {
                do {
                  uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2);
                  if ((uVar3 >> 0xb & 1) != 0) goto LAB_003f517c;
                  if ((uVar3 >> 4 & 1) == 0) break;
                  pbVar24 = pbVar24 + 1;
                  bVar20 = *pbVar24;
                } while (-1 < (char)bVar20);
              }
              do {
                if ((char)bVar20 < '\0') {
LAB_003f5070:
                  pbVar25 = pbVar24 + 1;
                }
                else {
                  lVar23 = *(long *)(param_1 + 8);
                  uVar3 = *(ushort *)(lVar23 + (ulong)bVar20 * 2);
                  if ((uVar3 >> 7 & 1) != 0) goto LAB_003f517c;
                  if ((uVar3 >> 10 & 1) == 0) {
                    if ((uVar3 >> 6 & 1) == 0) {
                      if ((uVar3 >> 5 & 1) != 0) {
                        pbVar25 = pbVar24 + 1;
                        if (((char)*pbVar25 < '\0') ||
                           ((*(ushort *)(lVar23 + (ulong)*pbVar25 * 2) >> 3 & 1) == 0)) {
                          pbVar25 = pbVar24 + 2;
                        }
                        goto LAB_003f5074;
                      }
                      if ((uVar3 >> 3 & 1) == 0) goto LAB_003f5070;
                      goto LAB_003f5180;
                    }
                    do {
                      while( true ) {
                        pbVar25 = pbVar24;
                        pbVar27 = pbVar25 + 1;
                        bVar5 = *pbVar27;
                        pbVar24 = pbVar27;
                        if ((char)bVar5 < '\0') break;
                        bVar4 = bVar5;
                        if ((bVar5 == bVar20) ||
                           (uVar3 = *(ushort *)(lVar23 + (ulong)bVar5 * 2), (uVar3 >> 3 & 1) != 0))
                        goto LAB_003f5170;
                        if ((uVar3 >> 5 & 1) != 0) {
                          pbVar25 = pbVar25 + 2;
                          pbVar24 = pbVar25;
                          if ((-1 < (char)*pbVar25) &&
                             ((*(ushort *)(lVar23 + (ulong)*pbVar25 * 2) >> 3 & 1) != 0))
                          goto LAB_003f5074;
                        }
                      }
                      bVar4 = bVar20;
                    } while (bVar5 != bVar20);
                  }
                  else {
                    do {
                      do {
                        pbVar25 = pbVar24;
                        pbVar27 = pbVar25 + 1;
                        bVar4 = *pbVar27;
                        if ((-1 < (char)bVar4) &&
                           ((*(ushort *)(lVar23 + (ulong)bVar4 * 2) >> 3 & 1) != 0))
                        goto LAB_003f5170;
                        pbVar24 = pbVar27;
                      } while (bVar4 != bVar20);
                      pbVar24 = pbVar25 + 2;
                      bVar4 = bVar20;
                    } while (pbVar25[2] == bVar20);
                  }
LAB_003f5170:
                  pbVar25 = pbVar25 + 2;
                  if (bVar4 != bVar20) {
                    pbVar25 = pbVar27;
                  }
                }
LAB_003f5074:
                bVar20 = *pbVar25;
                pbVar24 = pbVar25;
              } while( true );
            }
            bVar31 = true;
            uVar32 = uVar22;
          }
          else {
LAB_003f4fc4:
            lVar13 = lVar13 + 1;
            bVar8 = true;
            *(char *)((long)__s + (long)iVar21) = '\0';
            uVar1 = iVar21 + iVar9;
            uVar22 = (ulong)uVar1;
            if ((int)uVar1 < 1) goto LAB_003f4ffc;
LAB_003f4fdc:
            uVar32 = (ulong)(uVar1 - 1);
            pbVar12 = (byte *)(*(long *)(lVar11 + 8) + uVar32);
            bVar20 = *pbVar12;
            if (((char)bVar20 < '\0') ||
               ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) >> 5 & 1) == 0))
            goto LAB_003f4ffc;
            if ((int)(uint)uVar22 < 2) {
              bVar31 = true;
            }
            else {
              uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)pbVar12[-1] * 2);
              uVar1 = uVar1 - 1;
              if ((uVar3 & 0x20) != 0) {
                uVar1 = (uint)uVar22;
              }
              uVar32 = (ulong)uVar1;
              bVar31 = true;
              if (((uVar3 >> 5 & 1) != 0) && (bVar8)) goto LAB_003f5000;
            }
          }
          goto LAB_003f4de4;
        }
        lVar30 = 0;
        pcVar29 = (char *)0x0;
        lVar13 = 0;
LAB_003f5988:
        FUN_004806c0(0xe,0x79,7,"external/openssl/crypto/conf/conf_def.c",0xe4);
        lVar23 = 0;
        goto LAB_003f5824;
      }
      uVar17 = 0x67;
      uVar19 = 0xdc;
    }
    FUN_004806c0(0xe,0x79,uVar17,"external/openssl/crypto/conf/conf_def.c",uVar19);
  }
  lVar13 = 0;
  pcVar29 = (char *)0x0;
  lVar23 = 0;
  lVar30 = 0;
LAB_003f5824:
  FUN_003f3160(lVar11);
  FUN_00452f80(local_e8,"external/openssl/crypto/conf/conf_def.c",0x1c8);
  iVar9 = FUN_0047e430(lVar30);
  while (0 < iVar9) {
    lVar11 = FUN_0047e380(lVar30);
    thunk_FUN_003e8b90(param_2);
    iVar9 = FUN_0047e430(lVar30);
    param_2 = lVar11;
  }
  FUN_0047db00(lVar30);
  FUN_00452f80(pcVar29,"external/openssl/crypto/conf/conf_def.c",0x1d5);
  if (local_f0 != 0) {
    FUN_0045ab50(&local_f0);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar13;
  }
  FUN_003e7390(&local_e0,0x18,&DAT_03be62d5,lVar13);
  FUN_00481380(2,"line ",&local_e0);
  if (lVar28 != *(long *)(param_1 + 0x10)) {
    FUN_003f4b00();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar23 != 0) {
    FUN_00452f80(*(undefined8 *)(lVar23 + 8),"external/openssl/crypto/conf/conf_def.c",0x1e2);
    FUN_00452f80(*(undefined8 *)(lVar23 + 0x10),"external/openssl/crypto/conf/conf_def.c",0x1e3);
    FUN_00452f80(lVar23,"external/openssl/crypto/conf/conf_def.c",0x1e4);
  }
  return 0;
LAB_003f517c:
  *pbVar24 = 0;
LAB_003f5180:
  bVar20 = *pbVar12;
  if (-1 < (char)bVar20) {
    lVar23 = *(long *)(param_1 + 8);
    pbVar24 = pbVar12;
LAB_003f5190:
    pbVar12 = pbVar24 + 1;
    uVar3 = *(ushort *)(lVar23 + (ulong)bVar20 * 2);
    if ((uVar3 & 0x18) == 0x10) goto code_r0x003f51a4;
    if ((uVar3 >> 3 & 1) != 0) goto LAB_003f5304;
    if (bVar20 != 0x5b) {
      pbVar25 = pbVar24;
      if ((uVar3 >> 5 & 1) != 0) goto LAB_003f5340;
      while ((uVar3 & 0x307) != 0) {
        pbVar12 = pbVar25 + 1;
        while( true ) {
          pbVar25 = pbVar12;
          bVar20 = *pbVar25;
          pbVar12 = pbVar25;
          if ((char)bVar20 < '\0') goto LAB_003f51b4;
          uVar3 = *(ushort *)(lVar23 + (ulong)bVar20 * 2);
          if ((uVar3 >> 5 & 1) == 0) break;
LAB_003f5340:
          bVar20 = pbVar25[1];
          if (((char)bVar20 < '\0') ||
             (pbVar12 = pbVar25 + 1, (*(ushort *)(lVar23 + (ulong)bVar20 * 2) >> 3 & 1) == 0)) {
            pbVar12 = pbVar25 + 2;
          }
        }
      }
      if ((bVar20 == 0x3a) && (pbVar25[1] == 0x3a)) {
        *pbVar25 = 0;
        pbVar25 = pbVar25 + 2;
        bVar20 = *pbVar25;
        pbVar27 = pbVar25;
        if ((char)bVar20 < '\0') {
          pbVar12 = pbVar25;
          goto LAB_003f51c0;
        }
        do {
          uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2);
          if ((uVar3 >> 5 & 1) == 0) {
            pbVar26 = pbVar24;
            if ((uVar3 & 0x307) == 0) goto LAB_003f5404;
            pbVar12 = pbVar25 + 1;
          }
          else {
            pbVar12 = pbVar25 + 1;
            if (((char)*pbVar12 < '\0') ||
               ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)*pbVar12 * 2) >> 3 & 1) == 0)) {
              pbVar12 = pbVar25 + 2;
            }
          }
          bVar20 = *pbVar12;
          pbVar25 = pbVar12;
          pbVar26 = pbVar24;
        } while (-1 < (char)bVar20);
        goto LAB_003f51bc;
      }
      pbVar26 = local_e8;
      pbVar27 = pbVar24;
LAB_003f5404:
      pbVar12 = pbVar25;
      do {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) & 0x18) != 0x10) break;
        pbVar12 = pbVar12 + 1;
        bVar20 = *pbVar12;
      } while (-1 < (char)bVar20);
      pbVar24 = pbVar26;
      goto LAB_003f51c0;
    }
    bVar20 = *pbVar12;
    while ((uVar32 = (ulong)(char)bVar20, -1 < (char)bVar20 &&
           ((*(ushort *)(lVar23 + (ulong)bVar20 * 2) & 0x18) == 0x10))) {
      pbVar12 = pbVar12 + 1;
      bVar20 = *pbVar12;
    }
    uVar22 = uVar32 & 0xffffffff;
    do {
      pbVar24 = pbVar12;
      if ((char)uVar22 < '\0') {
LAB_003f56c4:
        pbVar25 = pbVar24;
        if (-1 < (char)uVar22) {
          if ((*(ushort *)(lVar23 + (uVar22 & 0xff) * 2) & 0x18) == 0x10) {
            do {
              pbVar25 = pbVar25 + 1;
              bVar20 = *pbVar25;
              uVar32 = (ulong)(char)bVar20;
              if ((char)bVar20 < 0) break;
            } while ((*(ushort *)(lVar23 + (ulong)bVar20 * 2) & 0x18) == 0x10);
            uVar22 = (ulong)(uint)(int)(char)bVar20;
          }
          else {
            uVar22 = uVar32 & 0xffffffff;
          }
        }
      }
      else {
        uVar6 = uVar22;
        do {
          uVar22 = uVar6;
          uVar3 = *(ushort *)(lVar23 + (uVar22 & 0xff) * 2);
          if ((uVar3 >> 5 & 1) == 0) {
            if ((uVar3 & 0x307) == 0) {
              goto LAB_003f56c4;
            }
            pbVar25 = pbVar24 + 1;
          }
          else {
            bVar20 = pbVar24[1];
            if (((char)bVar20 < '\0') ||
               (pbVar25 = pbVar24 + 1, (*(ushort *)(lVar23 + (ulong)bVar20 * 2) >> 3 & 1) == 0)) {
              pbVar25 = pbVar24 + 2;
            }
          }
          pbVar24 = pbVar25;
          uVar32 = (ulong)(char)*pbVar24;
          uVar22 = uVar32 & 0xffffffff;
          pbVar25 = pbVar24;
          uVar6 = uVar32 & 0xffffffff;
        } while (-1 < (char)*pbVar24);
      }
      if ((uVar22 & 0xff) == 0) {
LAB_003f5a40:
        FUN_004806c0(0xe,0x79,100,"external/openssl/crypto/conf/conf_def.c",0x152);
        goto LAB_003f5a90;
      }
      if (((uint)uVar22 & 0xff) == 0x5d) goto LAB_003f5740;
      bVar8 = pbVar12 == pbVar25;
      pbVar12 = pbVar25;
      if (bVar8) goto LAB_003f5a40;
    } while( true );
  }
LAB_003f51b0:
  pbVar24 = pbVar12;
LAB_003f51b4:
  pbVar26 = local_e8;
  pbVar27 = pbVar24;
LAB_003f51bc:
  pbVar25 = pbVar12;
  pbVar24 = pbVar26;
LAB_003f51c0:
  iVar9 = strncmp((char *)pbVar27,".include",8);
  if (iVar9 != 0) {
    if (bVar20 == 0x3d) {
      *pbVar25 = 0;
      pbVar12 = pbVar12 + 1;
      bVar20 = *pbVar12;
      if (-1 < (char)bVar20) {
        do {
          if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) & 0x18) != 0x10) break;
          pbVar12 = pbVar12 + 1;
          bVar20 = *pbVar12;
        } while (-1 < (char)bVar20);
      }
      pbVar25 = pbVar12 + -1;
      pbVar26 = pbVar12;
      do {
        if (-1 < (char)bVar20) {
          if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) >> 3 & 1) != 0)
          goto LAB_003f523c;
        }
        pbVar26 = pbVar26 + 1;
        bVar20 = *pbVar26;
        pbVar25 = pbVar25 + 1;
      } while( true );
    }
    goto LAB_003f59b4;
  }
  if ((pbVar12 != pbVar27 + 8) || (bVar20 == 0x3d)) {
    local_f8 = (char *)0x0;
    bVar20 = *pbVar12;
    if (bVar20 == 0x3d) {
      pbVar12 = pbVar12 + 1;
      bVar20 = *pbVar12;
      if (-1 < (char)bVar20) {
        do {
          if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) & 0x18) != 0x10) break;
          pbVar12 = pbVar12 + 1;
          bVar20 = *pbVar12;
        } while (-1 < (char)bVar20);
      }
    }
    pbVar25 = pbVar12 + -1;
    pbVar27 = pbVar12;
    do {
      if (-1 < (char)bVar20) {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar20 * 2) >> 3 & 1) != 0)
        goto LAB_003f54b8;
      }
      pbVar27 = pbVar27 + 1;
      bVar20 = *pbVar27;
      pbVar25 = pbVar25 + 1;
    } while( true );
  }
LAB_003f59b4:
  uVar17 = 0x65;
  uVar19 = 0x197;
LAB_003f59c8:
  FUN_004806c0(0xe,0x79,uVar17,"external/openssl/crypto/conf/conf_def.c",uVar19);
  lVar23 = 0;
  goto LAB_003f5824;
code_r0x003f51a4:
  bVar20 = *pbVar12;
  pbVar24 = pbVar12;
  if ((char)bVar20 < '\0') goto LAB_003f51b0;
  goto LAB_003f5190;
LAB_003f5740:
  *pbVar24 = 0;
  iVar9 = FUN_003f5d60(param_1,0,&local_e8);
  pbVar12 = local_e8;
  if (iVar9 == 0) goto LAB_003f5a90;
  local_110 = FUN_003f6290(param_1,local_e8);
  if ((local_110 == 0) && (local_110 = FUN_003f66f0(param_1,pbVar12), local_110 == 0)) {
    uVar17 = 0x67;
    uVar19 = 0x15c;
    goto LAB_003f59c8;
  }
  lVar23 = FUN_003f31c0(lVar11,0x200);
  bVar8 = false;
  if (lVar23 == 0) goto LAB_003f5988;
  goto LAB_003f4dcc;
  while (pbVar25 = pbVar27 + -1,
        (*(ushort *)(*(long *)(param_1 + 8) + (ulong)*pbVar27 * 2) >> 4 & 1) != 0) {
LAB_003f54b8:
    pbVar27 = pbVar25;
    if ((pbVar27 < pbVar12) || ((char)*pbVar27 < '\0')) break;
  }
  pbVar27[1] = 0;
  iVar9 = FUN_003f5d60(param_1,pbVar24,&local_f8,pbVar12);
  pcVar7 = local_f8;
  if (iVar9 == 0) goto LAB_003f5a90;
  _Stack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  _Stack_98 = 0;
  local_a0 = 0;
  _Stack_88 = 0;
  lStack_90 = 0;
  _Stack_b8 = 0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  _Stack_a8 = 0;
  _Stack_b0 = 0;
  _Stack_d8 = 0;
  local_e0 = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  local_d0 = 0;
  iVar9 = stat(local_f8,(stat *)&local_e0);
  if (iVar9 < 0) {
    piVar16 = __errno_location();
    iVar9 = *piVar16;
    uVar17 = 2;
    uVar19 = 0x16;
    uVar18 = 0x2b4;
LAB_003f5570:
    FUN_004806c0(uVar17,uVar19,iVar9,"external/openssl/crypto/conf/conf_def.c",uVar18);
    FUN_00481380(1,pcVar7);
    lVar23 = 0;
LAB_003f559c:
    if (pcVar7 != pcVar29) {
      FUN_00452f80(pcVar7,"external/openssl/crypto/conf/conf_def.c",0x17e);
    }
    pcVar7 = pcVar29;
    if (lVar23 == 0) {
      lVar23 = param_2;
      goto LAB_003f55e4;
    }
  }
  else {
    if (((uint)local_d0 & 0xf000) != 0x4000) {
      lVar23 = FUN_003ea4b0(pcVar7,&DAT_03c53cd7);
      goto LAB_003f559c;
    }
    if (local_f0 != 0) {
      uVar17 = 0xe;
      uVar19 = 0x74;
      iVar9 = 0x6f;
      uVar18 = 0x2bd;
      goto LAB_003f5570;
    }
    lVar23 = FUN_003f5bd0(pcVar7,&local_f0);
    if (lVar23 == 0) goto LAB_003f559c;
  }
  pcVar29 = pcVar7;
  if ((lVar30 == 0) && (lVar30 = FUN_0047dcc0(), lVar30 == 0)) {
    uVar17 = 0x188;
  }
  else {
    iVar9 = FUN_0047e2f0(lVar30,param_2);
    if (iVar9 != 0) {
LAB_003f55e4:
      param_2 = lVar23;
      lVar23 = FUN_003f31c0(lVar11,0x200);
      bVar8 = false;
      if (lVar23 == 0) goto LAB_003f5988;
      goto LAB_003f4dcc;
    }
    uVar17 = 0x18e;
  }
  FUN_004806c0(0xe,0x79,0x41,"external/openssl/crypto/conf/conf_def.c",uVar17);
  FUN_003e8b90(lVar23);
LAB_003f5a90:
  lVar23 = 0;
  goto LAB_003f5824;
  while (pbVar25 = pbVar26 + -1,
        (*(ushort *)(*(long *)(param_1 + 8) + (ulong)*pbVar26 * 2) >> 4 & 1) != 0) {
LAB_003f523c:
    pbVar26 = pbVar25;
    if ((pbVar26 < pbVar12) || ((char)*pbVar26 < '\0')) break;
  }
  pbVar26[1] = 0;
  lVar23 = FUN_00452c30(0x18,"external/openssl/crypto/conf/conf_def.c",0x19f);
  if (lVar23 == 0) {
    uVar17 = 0x41;
    uVar19 = 0x1a0;
  }
  else {
    lVar15 = FUN_0045abd0(pbVar27,"external/openssl/crypto/conf/conf_def.c",0x1a3);
    *(undefined8 *)(lVar23 + 0x10) = 0;
    *(long *)(lVar23 + 8) = lVar15;
    if (lVar15 == 0) {
      uVar17 = 0x41;
      uVar19 = 0x1a6;
    }
    else {
      iVar9 = FUN_003f5d60(param_1,pbVar24,(undefined8 *)(lVar23 + 0x10),pbVar12);
      if (iVar9 == 0) goto LAB_003f5824;
      iVar9 = strcmp((char *)pbVar24,(char *)local_e8);
      lVar15 = local_110;
      if (((iVar9 == 0) || (lVar15 = FUN_003f6290(param_1,pbVar24), lVar15 != 0)) ||
         (lVar15 = FUN_003f66f0(param_1,pbVar24), lVar15 != 0)) {
        iVar9 = FUN_003f6320(param_1,lVar15,lVar23);
        if (iVar9 != 0) {
LAB_003f5304:
          bVar31 = false;
          uVar32 = 0;
LAB_003f4de4:
          lVar23 = FUN_003f31c0(lVar11,(long)((int)uVar32 + 0x200));
          bVar8 = false;
          if (lVar23 == 0) goto LAB_003f5988;
          goto LAB_003f4dfc;
        }
        uVar17 = 0x41;
        uVar19 = 0x1b8;
      }
      else {
        uVar17 = 0x67;
        uVar19 = 0x1b2;
      }
    }
  }
  FUN_004806c0(0xe,0x79,uVar17,"external/openssl/crypto/conf/conf_def.c",uVar19);
  goto LAB_003f5824;
}


