/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f12c0; name: FUN_001f12c0
 */


/* WARNING: Removing unreachable block (ram,0x001f23f0) */
/* WARNING: Removing unreachable block (ram,0x001f2630) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_001f12c0(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  uint *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  size_t __n;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  undefined2 uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  char *pcVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  int *piVar29;
  long lVar30;
  long *plVar31;
  int *piVar32;
  void *pvVar33;
  ulong uVar34;
  void *__s2;
  ulong local_118;
  long local_98;
  int local_90;
  char local_8c;
  byte local_8b;
  undefined8 local_88;
  long lStack_80;
  undefined1 local_74;
  uint local_6c [3];
  
  iVar17 = FUN_001eecb4();
  if (iVar17 < -900) {
LAB_001f2dcc:
    param_3 = (ulong)iVar17;
switchD_001f1388_caseD_f:
    return param_3;
  }
  iVar17 = FUN_001f2df4(param_1);
  if (iVar17 == 0) {
    return param_3;
  }
  lVar1 = param_1 + 0x1a0;
  lVar2 = param_1 + 0x230;
  lVar3 = param_1 + 0x890;
  pvVar11 = (void *)((long)param_2 + param_3);
  puVar4 = (ulong *)(param_1 + 0x1a0);
  plVar5 = (long *)(param_1 + 0x228);
  puVar6 = (uint *)(param_1 + 0x280);
  puVar7 = (ulong *)(param_1 + 0x270);
  pbVar8 = (byte *)(param_1 + 0x1ad);
  lVar9 = param_1 + 0x208;
  plVar10 = (long *)(param_1 + 0x260);
  local_118 = 0xfffffc7a;
  __s2 = param_2;
LAB_001f1370:
  pvVar33 = __s2;
  switch(*puVar6) {
  case 0:
    uVar26 = *puVar7;
    __n = param_3;
    if (uVar26 <= param_3) {
      __n = uVar26;
    }
    iVar17 = memcmp("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n" + (0x18 - uVar26),__s2,__n);
    if (iVar17 != 0) {
      return 0xfffffffffffffc79;
    }
    pvVar33 = (void *)((long)__s2 + __n);
    *puVar7 = uVar26 - __n;
    if (uVar26 - __n == 0) {
      FUN_001ee1e8(param_1);
      bVar14 = false;
      *(undefined4 *)(param_1 + 0x280) = 1;
    }
    else {
      bVar14 = false;
    }
    goto joined_r0x001f287c;
  case 1:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar20 = FUN_001ed9b4(*(long *)(param_1 + 0x220),__s2,uVar26);
    *(long *)(param_1 + 0x220) = lVar20;
    lVar30 = *(long *)(param_1 + 0x228);
    pvVar33 = (void *)((long)__s2 + uVar26);
    if (lVar30 != lVar20) goto LAB_001f2c64;
    if ((*(char *)(*(long *)(param_1 + 0x218) + 3) == '\x04') &&
       ((*(byte *)(*(long *)(param_1 + 0x218) + 4) & 1) == 0)) {
      *puVar6 = 2;
      lVar20 = lVar30;
      goto LAB_001f155c;
    }
    iVar17 = FUN_001f2e4c(param_1,0xfffffde8,
                          "Remote peer returned unexpected data while we expected SETTINGS frame.  Perhaps, peer does not support HTTP/2 properly."
                         );
    if (-0x385 < iVar17) {
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "SETTINGS expected";
      goto LAB_001f2cf0;
    }
    goto LAB_001f2dcc;
  case 2:
    lVar30 = *(long *)(param_1 + 0x220);
    lVar20 = *(long *)(param_1 + 0x228);
LAB_001f155c:
    uVar26 = (long)pvVar11 - (long)pvVar33;
    if ((ulong)(lVar20 - lVar30) <= (ulong)((long)pvVar11 - (long)pvVar33)) {
      uVar26 = lVar20 - lVar30;
    }
    lVar20 = FUN_001ed9b4(lVar30,pvVar33,uVar26);
    pvVar33 = (void *)((long)pvVar33 + uVar26);
    *(long *)(param_1 + 0x220) = lVar20;
    if (*(long *)(param_1 + 0x228) != lVar20) {
LAB_001f2c64:
      return (long)pvVar33 - (long)param_2;
    }
    FUN_001f4658(puVar4,*(undefined8 *)(param_1 + 0x218));
    uVar26 = *(ulong *)(param_1 + 0x1a0);
    *(ulong *)(param_1 + 0x270) = uVar26;
    if (*(uint *)(param_1 + 0x990) < uVar26) {
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "too large frame size";
      uVar21 = 6;
      goto LAB_001f2cf8;
    }
    bVar12 = *(byte *)(param_1 + 0x1ac);
    switch(bVar12) {
    case 0:
      uVar19 = *(uint *)(param_1 + 0x1a8);
      *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) & 9;
      if (uVar19 == 0) {
        uVar21 = 1;
        pcVar25 = "DATA: stream_id == 0";
LAB_001f296c:
        iVar17 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),uVar21,pcVar25);
        iVar18 = -0x68;
        if (iVar17 < -900) {
          iVar18 = iVar17;
        }
      }
      else {
        if ((uVar19 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar17 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar17 = *(int *)(param_1 + 0x938);
        }
        if (iVar17 < (int)uVar19) {
          uVar21 = 1;
          pcVar25 = "DATA: stream in idle";
          goto LAB_001f296c;
        }
        lVar20 = FUN_001edb18(param_1,uVar19);
        if (lVar20 != 0) {
          if ((*(byte *)(lVar20 + 0xe5) & 1) == 0) {
            iVar17 = *(int *)(lVar20 + 0xdc);
            if ((uVar19 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
              if (iVar17 == 3) goto LAB_001f2ae0;
              if (iVar17 == 2) goto LAB_001f2ad8;
              uVar21 = 1;
              pcVar25 = "DATA: stream not opened";
            }
            else {
              if (iVar17 == 3) {
LAB_001f2ae0:
                iVar18 = -0x68;
                goto LAB_001f2984;
              }
              if (iVar17 != 4) {
LAB_001f2ad8:
                iVar18 = 0;
                goto LAB_001f2984;
              }
              uVar21 = 1;
              pcVar25 = "DATA: stream in reserved";
            }
          }
          else {
            pcVar25 = "DATA: stream in half-closed(remote)";
LAB_001f2968:
            uVar21 = 5;
          }
          goto LAB_001f296c;
        }
        lVar20 = FUN_001f9090(param_1,uVar19);
        if (lVar20 == 0) goto LAB_001f2ae0;
        iVar18 = -0x68;
        if ((*(byte *)(lVar20 + 0xe5) & 1) != 0) {
          pcVar25 = "DATA: stream closed";
          goto LAB_001f2968;
        }
      }
LAB_001f2984:
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if (iVar18 == -0x68) goto LAB_001f2998;
      if (iVar18 < -900) {
LAB_001f2d30:
        return (long)iVar18;
      }
      if ((*pbVar8 >> 3 & 1) == 0) {
        bVar14 = true;
        uVar19 = 0xd;
      }
      else {
        if (*puVar4 == 0) {
          uVar24 = *(undefined4 *)(param_1 + 0x93c);
          pcVar25 = "DATA: insufficient padding space";
          goto LAB_001f2cf0;
        }
        FUN_001f40b4(lVar9);
        bVar14 = true;
        *plVar5 = *plVar5 + 1;
        uVar19 = 0xc;
      }
      goto LAB_001f25c4;
    case 1:
      bVar12 = *pbVar8;
      *pbVar8 = bVar12 & 0x2d;
      if ((bVar12 >> 3 & 1) != 0) {
        if (uVar26 != 0) {
LAB_001f25a4:
          FUN_001f40b4(lVar9);
          bVar14 = false;
          *plVar5 = *plVar5 + 1;
          uVar19 = 3;
          goto LAB_001f25c4;
        }
        uVar24 = *(undefined4 *)(param_1 + 0x93c);
        pcVar25 = "HEADERS: insufficient padding space";
        goto LAB_001f2cf0;
      }
      uVar26 = FUN_001f48dc();
      if (uVar26 == 0) {
        if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x858))(param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8))
           , iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
        goto LAB_001f2af0;
      }
      if (*puVar7 < uVar26) break;
      *puVar6 = 3;
      FUN_001f40b4(lVar9);
      bVar14 = false;
      lVar20 = *plVar5 + uVar26;
LAB_001f21e0:
      *plVar5 = lVar20;
LAB_001f21e4:
      if ((*puVar6 < 0x10) && ((1 << (ulong)(*puVar6 & 0x1f) & 0xc0e0U) != 0))
      goto joined_r0x001f287c;
      goto LAB_001f25c8;
    case 2:
      *pbVar8 = 0;
      if (uVar26 == 5) {
        *puVar6 = 3;
        FUN_001f40b4(lVar9);
        bVar14 = false;
        lVar20 = *plVar5 + 5;
        goto LAB_001f21e0;
      }
      break;
    case 3:
    case 8:
      *pbVar8 = 0;
      if (uVar26 == 4) {
LAB_001f2170:
        *puVar6 = 3;
        FUN_001f40b4(lVar9);
        bVar14 = false;
        lVar20 = *plVar5 + 4;
        goto LAB_001f21e0;
      }
      break;
    case 4:
      bVar12 = *pbVar8;
      *pbVar8 = bVar12 & 1;
      if (uVar26 % 6 == 0) {
        if ((bVar12 & 1) == 0) {
          *puVar6 = 8;
          if (uVar26 == 0) goto LAB_001f27c8;
          lVar20 = uVar26 / 6 + 1;
          *(long *)(param_1 + 0x268) = lVar20;
          lVar20 = FUN_001f45a0(lVar3,lVar20 * 8);
          *(long *)(param_1 + 0x200) = lVar20;
          if (lVar20 == 0) {
            return 0xfffffffffffffc7b;
          }
          *(undefined8 *)(lVar20 + *(long *)(param_1 + 0x268) * 8 + -8) = 0xffffffff00000001;
          FUN_001f40b4(lVar9);
          bVar14 = false;
          *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 6;
        }
        else {
          if (uVar26 != 0) break;
          *puVar6 = 8;
LAB_001f27c8:
          FUN_001f40b4(lVar9);
          bVar14 = true;
        }
        goto LAB_001f21e4;
      }
      break;
    case 5:
      bVar12 = *pbVar8;
      *pbVar8 = bVar12 & 0xc;
      if ((bVar12 >> 3 & 1) == 0) {
        if (3 < uVar26) goto LAB_001f2170;
        break;
      }
      if (uVar26 != 0) goto LAB_001f25a4;
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "PUSH_PROMISE: insufficient padding space";
      goto LAB_001f2cf0;
    case 6:
      *pbVar8 = *pbVar8 & 1;
      if (uVar26 == 8) {
LAB_001f21c0:
        *puVar6 = 3;
        FUN_001f40b4(lVar9);
        bVar14 = false;
        lVar20 = *plVar5 + 8;
        goto LAB_001f21e0;
      }
      break;
    case 7:
      *pbVar8 = 0;
      if (7 < uVar26) goto LAB_001f21c0;
      break;
    case 9:
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "CONTINUATION: unexpected";
      goto LAB_001f2cf0;
    default:
      uVar19 = (uint)bVar12;
      if ((*(byte *)(param_1 + (ulong)(bVar12 >> 3) + 0x9ad) >> (ulong)(uVar19 & 7) & 1) != 0) {
        if (*(long *)(param_1 + 0x870) == 0) goto LAB_001f28f0;
        bVar14 = true;
        uVar19 = 0x12;
LAB_001f25c4:
        *puVar6 = uVar19;
LAB_001f25c8:
        if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x858))(param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8))
           , iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
        goto joined_r0x001f287c;
      }
      if (uVar19 == 0xc) {
        if (((((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) &&
             (*(long *)(param_1 + 0x1b0) = param_1 + 0x1e0, *(char *)(param_1 + 0x9aa) == '\0')) &&
            (*(int *)(param_1 + 0x1a8) == 0)) && (*pbVar8 < 0x10)) {
          *pbVar8 = 0;
          if (uVar26 == 0) {
            bVar14 = true;
          }
          else {
            lVar20 = FUN_001f45a0(lVar3);
            *(long *)(param_1 + 600) = lVar20;
            if (lVar20 == 0) {
              return 0xfffffffffffffc7b;
            }
            FUN_001f40c4(lVar2,lVar20,*puVar7);
            bVar14 = false;
          }
          uVar19 = 0x11;
          goto LAB_001f25c4;
        }
      }
      else if ((uVar19 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x1ad) = 0;
        *(long *)(param_1 + 0x1b0) = param_1 + 0x1e0;
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          if (uVar26 < 2) break;
          *puVar6 = 3;
          FUN_001f40b4(lVar9);
          bVar14 = true;
          lVar20 = *plVar5 + 2;
          goto LAB_001f21e0;
        }
      }
LAB_001f28f0:
      *puVar6 = 6;
      __s2 = pvVar33;
      goto LAB_001f1370;
    }
LAB_001f2958:
    uVar19 = 7;
    goto LAB_001f2b38;
  case 3:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar20 = FUN_001ed9b4(*(long *)(param_1 + 0x220),__s2,uVar26);
    pvVar33 = (void *)((long)__s2 + uVar26);
    uVar26 = *(long *)(param_1 + 0x270) - uVar26;
    *(long *)(param_1 + 0x220) = lVar20;
    *(ulong *)(param_1 + 0x270) = uVar26;
    if (*(long *)(param_1 + 0x228) != lVar20) goto LAB_001f2c64;
    switch(*(undefined1 *)(param_1 + 0x1ac)) {
    case 1:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*pbVar8 >> 3 & 1) != 0)) {
        uVar26 = FUN_001f48dc();
        uVar27 = *(ulong *)(param_1 + 0x270);
        if (**(byte **)(param_1 + 0x218) <= uVar27) {
          lVar20 = (ulong)**(byte **)(param_1 + 0x218) + 1;
          *(long *)(param_1 + 0x278) = lVar20;
          if (lVar20 + uVar26 <= uVar27 + 1) {
            *(long *)(param_1 + 0x1b0) = lVar20;
            if (uVar26 != 0) {
              if (uVar26 <= uVar27) {
                *puVar6 = 3;
                FUN_001f40b4(lVar9);
                lVar20 = *plVar5 + uVar26;
                goto LAB_001f2628;
              }
              goto LAB_001f2958;
            }
            FUN_001f40b4(lVar9);
            goto LAB_001f2af0;
          }
        }
        uVar24 = *(undefined4 *)(param_1 + 0x93c);
        pcVar25 = "HEADERS: invalid padding";
        goto LAB_001f2cf0;
      }
LAB_001f2af0:
      iVar17 = FUN_001f2fd0(param_1);
      if (iVar17 < -900) goto LAB_001f2dcc;
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if (iVar17 == -0x67) goto LAB_001f2b34;
      if (iVar17 == -0x209) {
        uVar24 = *(undefined4 *)(param_1 + 0x1a8);
        goto LAB_001f2b20;
      }
LAB_001f2b48:
      uVar19 = 4;
      break;
    case 2:
      FUN_001f4bbc(puVar4,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_001f0110(param_1,puVar4);
      goto LAB_001f285c;
    case 3:
      FUN_001f4c10(puVar4,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_001f02dc(param_1,puVar4);
      goto LAB_001f285c;
    default:
      goto switchD_001f164c_caseD_4;
    case 5:
      if ((*(long *)(param_1 + 0x278) == 0) && ((*pbVar8 >> 3 & 1) != 0)) {
        uVar27 = (ulong)**(byte **)(param_1 + 0x218);
        if (uVar27 <= uVar26) {
          *(ulong *)(param_1 + 0x278) = uVar27 + 1;
          if (uVar27 + 5 <= uVar26 + 1) {
            *(ulong *)(param_1 + 0x1b0) = uVar27 + 1;
            if (3 < uVar26) {
              *puVar6 = 3;
              FUN_001f40b4(lVar9);
              lVar20 = *plVar5 + 4;
              goto LAB_001f2628;
            }
            goto LAB_001f2958;
          }
        }
        uVar24 = *(undefined4 *)(param_1 + 0x93c);
        pcVar25 = "PUSH_PROMISE: invalid padding";
        goto LAB_001f2cf0;
      }
      iVar17 = FUN_001f4ed4(puVar4,*(undefined8 *)(param_1 + 0x218));
      if (iVar17 == 0) {
        iVar17 = FUN_001f0ae8(param_1,puVar4);
      }
      else {
        iVar17 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),1,
                              "PUSH_PROMISE: could not unpack");
      }
      if (iVar17 < -900) goto LAB_001f2dcc;
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if (iVar17 == -0x67) goto LAB_001f2b34;
      if (iVar17 != -0x209) goto LAB_001f2b48;
      uVar24 = *(undefined4 *)(param_1 + 0x1c8);
LAB_001f2b20:
      iVar17 = FUN_001ee90c(param_1,uVar24,2);
      if (iVar17 < -900) goto LAB_001f2dcc;
LAB_001f2b34:
      uVar19 = 5;
      break;
    case 6:
      FUN_001f4f50(puVar4,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_001f0ccc(param_1,puVar4);
      goto LAB_001f285c;
    case 7:
      lVar20 = *puVar4 - 8;
      if (lVar20 != 0) {
        lVar30 = FUN_001f45a0(lVar3,lVar20);
        *(long *)(param_1 + 600) = lVar30;
        if (lVar30 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_001f40c4(lVar2,lVar30,lVar20);
      }
      uVar19 = 9;
      break;
    case 8:
      FUN_001f5078(puVar4,*(undefined8 *)(param_1 + 0x218));
      iVar17 = FUN_001f0f88(param_1,puVar4);
LAB_001f285c:
      if (-0x385 < iVar17) {
LAB_001f2864:
        if (*puVar6 == 0xf) {
          return param_3;
        }
switchD_001f164c_caseD_4:
        FUN_001ee1e8(param_1);
        goto switchD_001f1388_default;
      }
      goto LAB_001f2dcc;
    case 10:
      uVar16 = FUN_001ed564(*(undefined8 *)(param_1 + 0x218));
      if (*(ulong *)(param_1 + 0x270) < (ulong)uVar16) goto LAB_001f2958;
      if (2 < *puVar4) {
        lVar20 = FUN_001f45a0(lVar3,*puVar4 - 2);
        *(long *)(param_1 + 600) = lVar20;
        if (lVar20 == 0) {
          return 0xfffffffffffffc7b;
        }
        FUN_001f40c4(lVar2,lVar20,*puVar4);
      }
      uVar19 = 0x10;
    }
LAB_001f2b38:
    *puVar6 = uVar19;
    __s2 = pvVar33;
    goto LAB_001f1370;
  case 4:
  case 5:
    uVar27 = *(ulong *)(param_1 + 0x270);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar34 = FUN_001f4864(puVar4,*(undefined8 *)(param_1 + 0x278));
    uVar23 = uVar34 - (uVar27 - uVar26);
    uVar22 = uVar26 - uVar23;
    if (uVar26 < uVar23) {
      uVar22 = 0xffffffffffffffff;
    }
    if (uVar34 <= uVar27 - uVar26) {
      uVar22 = uVar26;
    }
    uVar27 = 0;
    if (uVar22 != 0xffffffffffffffff) {
      uVar27 = uVar22;
    }
    lVar20 = FUN_001f4864(puVar4,*(undefined8 *)(param_1 + 0x278));
    if ((*(byte *)(param_1 + 0x1ad) >> 2 & 1) == 0) {
      bVar14 = false;
    }
    else {
      bVar14 = *puVar7 - uVar27 == lVar20;
    }
    if (0 < (long)uVar27 || (uVar27 == 0 & bVar14) != 0) {
      iVar17 = *(int *)(param_1 + 0x280);
      lVar20 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1a8));
      if (*(char *)(param_1 + 0x1ac) == '\x05') {
        lVar20 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1c8));
        bVar13 = false;
      }
      else {
        bVar13 = false;
        if ((lVar20 != 0) && (*(char *)(param_1 + 0x1ac) == '\x01')) {
          bVar13 = *(char *)(param_1 + 0x9aa) != '\0' && *(int *)(param_1 + 0x1d8) == 3;
          if ((*(char *)(param_1 + 0x9aa) == '\0') && (*(int *)(param_1 + 0x1d8) == 3)) {
            bVar13 = (*(byte *)(lVar20 + 0xe3) & 0x40) == 0;
          }
        }
      }
      lVar30 = 0;
      do {
        local_6c[0] = 0;
        uVar22 = FUN_001f60a4(param_1 + 0x6e8,&local_88,local_6c,pvVar33,uVar27,bVar14);
        if ((int)uVar22 < -900) goto LAB_001f2c5c;
        if ((long)uVar22 < 0) {
          if ((((lVar20 != 0) && (*puVar6 == 4)) && (*(int *)(lVar20 + 0xdc) != 3)) &&
             (uVar27 = FUN_001ee90c(param_1,*(undefined4 *)(lVar20 + 0xb8),9), (int)uVar27 < -900))
          {
LAB_001f2d60:
            uVar22 = uVar27 & 0xffffffff;
            goto LAB_001f2c5c;
          }
          uVar27 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),9,0);
          iVar17 = (int)uVar27;
          iVar18 = -0x20b;
joined_r0x001f1e78:
          if (iVar17 < -900) {
            uVar22 = uVar27 & 0xffffffff;
            goto LAB_001f2c5c;
          }
          goto LAB_001f1e9c;
        }
        lVar30 = uVar22 + lVar30;
        if (((iVar17 == 4) && (lVar20 != 0)) && ((local_6c[0] >> 1 & 1) != 0)) {
          if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
            iVar18 = FUN_001f832c(param_1,lVar20,puVar4,&local_88,bVar13);
            if (iVar18 == -0x69) {
              if (*(code **)(param_1 + 0x840) == (code *)0x0) {
                if (*(code **)(param_1 + 0x838) != (code *)0x0) {
                  iVar18 = (**(code **)(param_1 + 0x838))
                                     (param_1,puVar4,*(undefined8 *)(local_88 + 0x10),
                                      *(undefined8 *)(local_88 + 0x18),
                                      *(undefined8 *)(lStack_80 + 0x10),
                                      *(undefined8 *)(lStack_80 + 0x18),local_74,
                                      *(undefined8 *)(param_1 + 0x8b8));
                  goto LAB_001f1d60;
                }
LAB_001f2a28:
                uVar27 = FUN_001f2e4c(param_1,0xfffffded,
                                      "Invalid HTTP header field was received: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                      ,*(undefined1 *)(param_1 + 0x1ac),
                                      *(undefined4 *)(param_1 + 0x1a8),
                                      *(undefined4 *)(local_88 + 0x18),
                                      *(undefined8 *)(local_88 + 0x10),
                                      *(undefined4 *)(lStack_80 + 0x18),
                                      *(undefined8 *)(lStack_80 + 0x10));
                if (-0x385 < (int)uVar27) {
                  uVar27 = FUN_001f3ca0(param_1,*(undefined4 *)(lVar20 + 0xb8),puVar4,0xfffffded);
                  iVar17 = (int)uVar27;
                  iVar18 = -0x209;
                  goto joined_r0x001f1e78;
                }
                goto LAB_001f2d60;
              }
              iVar18 = (**(code **)(param_1 + 0x840))
                                 (param_1,puVar4,local_88,lStack_80,local_74,
                                  *(undefined8 *)(param_1 + 0x8b8));
LAB_001f1d60:
              if (iVar18 == 0) {
                uVar19 = FUN_001f2e4c(param_1,0xfffffded,
                                      "Ignoring received invalid HTTP header field: frame type: %u, stream: %d, name: [%.*s], value: [%.*s]"
                                      ,*(undefined1 *)(param_1 + 0x1ac),
                                      *(undefined4 *)(param_1 + 0x1a8),
                                      *(undefined4 *)(local_88 + 0x18),
                                      *(undefined8 *)(local_88 + 0x10),
                                      *(undefined4 *)(lStack_80 + 0x18),
                                      *(undefined8 *)(lStack_80 + 0x10));
                if (-0x385 < (int)uVar19) goto LAB_001f1da0;
                local_118 = (ulong)uVar19;
              }
              else {
                if (iVar18 == -0x20e) goto LAB_001f1e9c;
                if (iVar18 == -0x209) goto LAB_001f2a28;
              }
              uVar22 = local_118;
              goto LAB_001f2c5c;
            }
            if (iVar18 != 0) {
              if (iVar18 == -0x213) goto LAB_001f2a28;
              goto LAB_001f1da0;
            }
          }
          if (*(code **)(param_1 + 0x830) == (code *)0x0) {
            if (*(code **)(param_1 + 0x828) == (code *)0x0) goto LAB_001f1da0;
            iVar18 = (**(code **)(param_1 + 0x828))
                               (param_1,puVar4,*(undefined8 *)(local_88 + 0x10),
                                *(undefined8 *)(local_88 + 0x18),*(undefined8 *)(lStack_80 + 0x10),
                                *(undefined8 *)(lStack_80 + 0x18),local_74,
                                *(undefined8 *)(param_1 + 0x8b8));
          }
          else {
            iVar18 = (**(code **)(param_1 + 0x830))
                               (param_1,puVar4,local_88,lStack_80,local_74,
                                *(undefined8 *)(param_1 + 0x8b8));
          }
          if (iVar18 != 0) {
            if ((iVar18 != -0x20e) && (iVar18 != -0x209)) {
              uVar22 = 0xfffffc7a;
LAB_001f2c5c:
              return (long)(int)uVar22;
            }
            goto LAB_001f1e9c;
          }
        }
LAB_001f1da0:
        if ((local_6c[0] & 1) != 0) {
          FUN_001f695c(param_1 + 0x6e8);
          iVar18 = 0;
          goto LAB_001f1e9c;
        }
        pvVar33 = (void *)((long)pvVar33 + uVar22);
        uVar27 = uVar27 - uVar22;
      } while ((uVar27 != 0) || ((local_6c[0] >> 1 & 1) != 0));
      iVar18 = 0;
LAB_001f1e9c:
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if (iVar18 != -0x209) {
        if (iVar18 == -0x20e) {
          *puVar7 = *puVar7 - lVar30;
          return (long)__s2 + (lVar30 - (long)param_2);
        }
        pvVar33 = (void *)((long)__s2 + uVar26);
        uVar27 = *puVar7 - uVar26;
        *puVar7 = uVar27;
        if (iVar18 != -0x20b) {
          if (uVar27 == 0) goto LAB_001f1bac;
          break;
        }
        if (uVar27 == 0) goto switchD_001f164c_caseD_4;
        goto LAB_001f28f0;
      }
      *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - lVar30;
      lVar20 = 0x1c8;
      if (*(char *)(param_1 + 0x1ac) != '\x05') {
        lVar20 = 0x1a8;
      }
      iVar17 = FUN_001ee90c(param_1,*(undefined4 *)(param_1 + lVar20),2);
      if (-0x385 < iVar17) {
        pvVar33 = (void *)((long)__s2 + lVar30);
        uVar19 = 5;
        bVar14 = true;
LAB_001f23fc:
        *puVar6 = uVar19;
        goto joined_r0x001f287c;
      }
      goto LAB_001f2dcc;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    uVar27 = *puVar7;
    *puVar7 = uVar27 - uVar26;
    if (uVar27 - uVar26 != 0) break;
LAB_001f1bac:
    pvVar33 = (void *)((long)__s2 + uVar26);
    if ((*pbVar8 >> 2 & 1) == 0) {
      FUN_001f40b4(lVar9);
      *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
      *(undefined8 *)(param_1 + 0x278) = 0;
      if (*(int *)(param_1 + 0x280) == 4) {
        uVar19 = 10;
      }
      else {
        uVar19 = 0xb;
      }
      bVar14 = false;
      goto LAB_001f23fc;
    }
    if (((*puVar6 != 4) ||
        (lVar20 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1a8)), lVar20 == 0)) ||
       (*(int *)(lVar20 + 0xdc) == 3)) goto switchD_001f164c_caseD_4;
    if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
      if (*(char *)(param_1 + 0x1ac) == '\x05') {
        lVar30 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1c8));
        if (lVar30 == 0) goto LAB_001f2bd0;
        iVar17 = FUN_001f8a64(lVar30,lVar1);
LAB_001f2b98:
        if (iVar17 == 0) goto LAB_001f2bd0;
      }
      else {
        iVar17 = *(int *)(param_1 + 0x1d8);
        if (1 < iVar17 - 1U) {
          if (iVar17 == 3) {
            if ((*(byte *)(lVar20 + 0xe3) >> 6 & 1) != 0) goto LAB_001f2b78;
            iVar17 = FUN_001f8bb4(lVar20,lVar1);
            goto LAB_001f2b80;
          }
          if (iVar17 == 0) {
            iVar17 = FUN_001f8a64(lVar20,lVar1);
            goto LAB_001f2b80;
          }
LAB_001f2b84:
          if ((*pbVar8 & 1) == 0) goto LAB_001f2bd0;
          iVar17 = FUN_001f8bc4(lVar20);
          goto LAB_001f2b98;
        }
LAB_001f2b78:
        iVar17 = FUN_001f8b14(lVar20);
LAB_001f2b80:
        if (iVar17 == 0) goto LAB_001f2b84;
      }
      lVar30 = 0x1c8;
      if (*(char *)(param_1 + 0x1ac) != '\x05') {
        lVar30 = 0x1a8;
      }
      iVar17 = FUN_001f3ca0(param_1,*(undefined4 *)(param_1 + lVar30),lVar1,0xfffffdec);
      if (iVar17 < -900) goto LAB_001f2dcc;
    }
    else {
LAB_001f2bd0:
      if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
         (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,lVar1,*(undefined8 *)(param_1 + 0x8b8)),
         iVar17 != 0)) {
        iVar17 = -0x386;
        goto LAB_001f2dcc;
      }
    }
    if (((*(char *)(param_1 + 0x1ac) == '\x01') && ((*pbVar8 & 1) != 0)) &&
       (FUN_001f9648(lVar20,1), (~*(byte *)(lVar20 + 0xe5) & 3) == 0)) {
      iVar17 = FUN_001eea24(param_1,*(undefined4 *)(lVar20 + 0xb8),0);
      goto LAB_001f1e08;
    }
    goto switchD_001f164c_caseD_4;
  case 6:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar7 = uVar27 - uVar26;
    if (uVar27 - uVar26 == 0) {
      if ((*(byte *)(param_1 + 0x1ac) < 10) &&
         ((1 << (ulong)(*(byte *)(param_1 + 0x1ac) & 0x1f) & 0x222U) != 0)) {
        *(undefined1 *)(param_1 + 0x724) = 1;
      }
      goto switchD_001f164c_caseD_4;
    }
    break;
  case 7:
    uVar24 = *(undefined4 *)(param_1 + 0x93c);
    uVar21 = 6;
    pcVar25 = (char *)0x0;
    goto LAB_001f2cf8;
  case 8:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar20 = FUN_001ed9b4(*(long *)(param_1 + 0x220),__s2,uVar26);
    uVar27 = *(long *)(param_1 + 0x270) - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar20;
    *(ulong *)(param_1 + 0x270) = uVar27;
    if (*(long *)(param_1 + 0x228) != lVar20) break;
    if (uVar26 != 0) {
      FUN_001f4d10(&local_88,*(undefined8 *)(param_1 + 0x218));
      if (((int)local_88 - 1U < 6) || ((int)local_88 == 8)) {
        lVar20 = *plVar10;
        if (lVar20 != 0) {
          plVar31 = *(long **)(param_1 + 0x200);
          lVar30 = 0;
          do {
            if ((int)*plVar31 == (int)local_88) {
              *plVar31 = local_88;
              lVar20 = *plVar10;
              if (lVar20 != lVar30) goto LAB_001f2568;
              break;
            }
            lVar30 = lVar30 + 1;
            plVar31 = plVar31 + 1;
          } while (lVar20 != lVar30);
        }
        *(long *)(param_1 + 0x260) = lVar20 + 1;
        *(long *)(*(long *)(param_1 + 0x200) + lVar20 * 8) = local_88;
LAB_001f2568:
        if ((int)local_88 == 1) {
          puVar28 = (uint *)(*(long *)(param_1 + 0x200) + *(long *)(param_1 + 0x268) * 8 + -4);
          if (local_88._4_4_ < *puVar28) {
            *puVar28 = local_88._4_4_;
          }
        }
      }
      else {
        lVar20 = *(long *)(param_1 + 0x260);
        *(long *)(param_1 + 0x260) = lVar20 + 1;
        *(long *)(*(long *)(param_1 + 0x200) + lVar20 * 8) = local_88;
      }
      uVar27 = *puVar7;
    }
    if (uVar27 == 0) {
      lVar20 = *(long *)(param_1 + 0x268);
      if (lVar20 != 0) {
        piVar29 = *(int **)(param_1 + 0x200);
        iVar17 = piVar29[lVar20 * 2 + -1];
        if (iVar17 != -1) {
          iVar18 = piVar29[lVar20 * 2 + -2];
          lVar20 = *plVar10;
          if (lVar20 == 0) {
            lVar30 = 0;
          }
          else {
            lVar30 = 0;
            piVar32 = piVar29;
            do {
              if (*piVar32 == 1) goto LAB_001f2804;
              lVar30 = lVar30 + 1;
              piVar32 = piVar32 + 2;
            } while (lVar20 != lVar30);
            lVar30 = lVar20;
          }
LAB_001f2804:
          if (iVar17 != piVar29[lVar30 * 2 + 1]) {
            *(long *)(param_1 + 0x260) = lVar20 + 1;
            *(undefined8 *)(piVar29 + lVar20 * 2) = *(undefined8 *)(piVar29 + lVar30 * 2);
            piVar29 = (int *)(*(long *)(param_1 + 0x200) + lVar30 * 8);
            *piVar29 = iVar18;
            piVar29[1] = iVar17;
          }
        }
      }
      FUN_001f4d08(puVar4,*(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x260));
      *(undefined8 *)(param_1 + 0x200) = 0;
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      iVar17 = FUN_001f0530(param_1,puVar4,0);
      goto LAB_001f285c;
    }
    FUN_001f40b4(lVar9);
    lVar20 = *plVar5 + 6;
LAB_001f2628:
    *plVar5 = lVar20;
    goto LAB_001f2880;
  case 9:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar21 = FUN_001ed9b4(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar21;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 == 0) {
      FUN_001f4fdc(puVar4,*(undefined8 *)(param_1 + 0x218),*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_001f40c4(lVar2,0,0);
      iVar17 = FUN_001f0e34(param_1,puVar4);
      goto LAB_001f285c;
    }
    break;
  case 10:
  case 0xb:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar20 = FUN_001ed9b4(*(long *)(param_1 + 0x220),__s2,uVar26);
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar20;
    if (*(long *)(param_1 + 0x228) != lVar20) goto LAB_001f2c64;
    FUN_001f4658(&local_98,*(undefined8 *)(param_1 + 0x218));
    *(long *)(param_1 + 0x270) = local_98;
    if ((local_8c != '\t') || (local_90 != *(int *)(param_1 + 0x1a8))) {
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "unexpected non-CONTINUATION frame or stream_id is invalid";
      goto LAB_001f2cf0;
    }
    *pbVar8 = local_8b & 4 | *pbVar8;
    *puVar4 = *puVar4 + local_98;
    if (*puVar6 != 10) goto LAB_001f2b34;
    *(undefined4 *)(param_1 + 0x280) = 4;
    __s2 = pvVar33;
    if ((*(code **)(param_1 + 0x858) != (code *)0x0) &&
       (iVar17 = (**(code **)(param_1 + 0x858))(param_1,&local_98,*(undefined8 *)(param_1 + 0x8b8)),
       iVar17 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_001f1370;
  case 0xc:
    uVar27 = *(long *)(param_1 + 0x228) - *(long *)(param_1 + 0x220);
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    lVar20 = FUN_001ed9b4(*(long *)(param_1 + 0x220),__s2,uVar26);
    *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x270) - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *(long *)(param_1 + 0x220) = lVar20;
    if (*(long *)(param_1 + 0x228) != lVar20) goto LAB_001f2c64;
    iVar17 = FUN_001f30c8(param_1,uVar26);
    if (iVar17 < -900) goto LAB_001f2dcc;
    if (*puVar6 == 0xf) {
      return param_3;
    }
    iVar17 = FUN_001f3164(param_1,*(undefined4 *)(param_1 + 0x1a8),uVar26);
    if (iVar17 < -900) goto LAB_001f2dcc;
    if (*puVar6 == 0xf) {
      return param_3;
    }
    lVar20 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1a8));
    if (lVar20 != 0) {
      if (*puVar7 == 0) {
        bVar14 = (*pbVar8 & 1) == 0;
      }
      else {
        bVar14 = true;
      }
      iVar17 = FUN_001f320c(param_1,lVar20,uVar26,bVar14);
      if (iVar17 < -900) goto LAB_001f2dcc;
    }
    if (*(ulong *)(param_1 + 0x270) < (ulong)**(byte **)(param_1 + 0x218)) {
      uVar24 = *(undefined4 *)(param_1 + 0x93c);
      pcVar25 = "DATA: invalid padding";
LAB_001f2cf0:
      uVar21 = 1;
LAB_001f2cf8:
      iVar17 = FUN_001eda90(param_1,uVar24,uVar21,pcVar25);
      if (iVar17 < -900) {
        param_3 = (long)iVar17;
      }
      return param_3;
    }
    lVar20 = (ulong)**(byte **)(param_1 + 0x218) + 1;
    *(long *)(param_1 + 0x278) = lVar20;
    *(long *)(param_1 + 0x1b0) = lVar20;
    *(undefined4 *)(param_1 + 0x280) = 0xd;
    __s2 = pvVar33;
    goto LAB_001f1370;
  case 0xd:
    lVar20 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1a8));
    if (lVar20 == 0) {
LAB_001f2998:
      uVar19 = 0xe;
      goto LAB_001f2b38;
    }
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar7 = uVar27;
    if (uVar26 != 0) {
      iVar17 = FUN_001f30c8(param_1,uVar26);
      if (iVar17 < -900) goto LAB_001f2dcc;
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if (*puVar7 == 0) {
        bVar14 = (*pbVar8 & 1) == 0;
      }
      else {
        bVar14 = true;
      }
      iVar17 = FUN_001f320c(param_1,lVar20,uVar26,bVar14);
      if (iVar17 < -900) goto LAB_001f2dcc;
      uVar34 = *(ulong *)(param_1 + 0x270);
      uVar23 = FUN_001f4864(puVar4,*(undefined8 *)(param_1 + 0x278));
      uVar22 = uVar23 - uVar34;
      uVar27 = uVar26 - uVar22;
      if (uVar26 < uVar22) {
        uVar27 = 0xffffffffffffffff;
      }
      if (uVar23 <= uVar34) {
        uVar27 = uVar26;
      }
      uVar22 = 0;
      if (uVar27 != 0xffffffffffffffff) {
        uVar22 = uVar27;
      }
      if (0 < (long)(uVar26 - uVar22)) {
        iVar17 = FUN_001f3164(param_1,*(undefined4 *)(param_1 + 0x1a8));
        if (iVar17 < -900) goto LAB_001f2dcc;
        if (*puVar6 == 0xf) {
          return param_3;
        }
      }
      if (0 < (long)uVar22) {
        if (((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) &&
           (iVar17 = FUN_001f8bf4(lVar20,uVar22), iVar17 != 0)) {
          if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
            iVar17 = FUN_001f3efc(param_1,param_1 + 0x954,param_1 + 0x950,
                                  *(undefined1 *)(param_1 + 0x9ac),0,uVar22,
                                  *(undefined4 *)(param_1 + 0x95c));
            if (iVar17 < -900) goto LAB_001f2dcc;
            if (*puVar6 == 0xe) {
              return param_3;
            }
          }
          iVar17 = FUN_001ee90c(param_1,*(undefined4 *)(param_1 + 0x1a8),1);
          if (iVar17 < -900) goto LAB_001f2dcc;
          *puVar6 = 0xe;
          __s2 = pvVar33;
          goto LAB_001f1370;
        }
        if (*(code **)(param_1 + 0x7f8) != (code *)0x0) {
          iVar17 = (**(code **)(param_1 + 0x7f8))
                             (param_1,*(undefined1 *)(param_1 + 0x1ad),
                              *(undefined4 *)(param_1 + 0x1a8),__s2,uVar22,
                              *(undefined8 *)(param_1 + 0x8b8));
          if (iVar17 == -0x20e) {
            return (long)pvVar33 - (long)param_2;
          }
          if (iVar17 < -900) {
            return 0xfffffffffffffc7a;
          }
        }
      }
      uVar27 = *puVar7;
    }
    if (uVar27 != 0) goto LAB_001f2880;
    iVar17 = FUN_001f11e0(param_1,lVar1);
LAB_001f1e08:
    if (-0x385 < iVar17) goto switchD_001f164c_caseD_4;
    goto LAB_001f2dcc;
  case 0xe:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    *puVar7 = uVar27;
    if (uVar26 != 0) {
      iVar17 = FUN_001f30c8(param_1,uVar26);
      if (iVar17 < -900) goto LAB_001f2dcc;
      if (*puVar6 == 0xf) {
        return param_3;
      }
      if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
        iVar17 = FUN_001f3efc(param_1,param_1 + 0x954,param_1 + 0x950,
                              *(undefined1 *)(param_1 + 0x9ac),0,uVar26,
                              *(undefined4 *)(param_1 + 0x95c));
        if (iVar17 < -900) goto LAB_001f2dcc;
        if (*puVar6 == 0xf) {
          return param_3;
        }
      }
      uVar27 = *puVar7;
    }
    pvVar33 = (void *)((long)__s2 + uVar26);
    if (uVar27 == 0) goto switchD_001f164c_caseD_4;
    break;
  case 0xf:
    goto switchD_001f1388_caseD_f;
  case 0x10:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar21 = FUN_001ed9b4(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar21;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 == 0) {
      uVar15 = FUN_001ed564(*(undefined8 *)(param_1 + 0x218));
      FUN_001f5114(puVar4,uVar15,*(long *)(param_1 + 0x240),
                   *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240));
      FUN_001f40c4(lVar2,0,0);
      iVar17 = FUN_001f1130(param_1,puVar4);
      goto LAB_001f1e08;
    }
    break;
  case 0x11:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    if (uVar26 != 0) {
      uVar21 = FUN_001ed9b4(*(undefined8 *)(param_1 + 0x248),__s2,uVar26);
      uVar27 = *(long *)(param_1 + 0x270) - uVar26;
      pvVar33 = (void *)((long)__s2 + uVar26);
      *(undefined8 *)(param_1 + 0x248) = uVar21;
      *(ulong *)(param_1 + 0x270) = uVar27;
    }
    if (uVar27 != 0) break;
    iVar17 = FUN_001f51e4(puVar4,*(long *)(param_1 + 0x240),
                          *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240),lVar3);
    if (iVar17 != 0) goto LAB_001f285c;
    if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
       (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,puVar4,*(undefined8 *)(param_1 + 0x8b8)),
       iVar17 != 0)) {
      return 0xfffffffffffffc7a;
    }
    goto LAB_001f2864;
  case 0x12:
    uVar27 = *puVar7;
    uVar26 = (long)pvVar11 - (long)__s2;
    if (uVar27 <= (ulong)((long)pvVar11 - (long)__s2)) {
      uVar26 = uVar27;
    }
    uVar27 = uVar27 - uVar26;
    pvVar33 = (void *)((long)__s2 + uVar26);
    *puVar7 = uVar27;
    if ((uVar26 != 0) && (*(code **)(param_1 + 0x878) != (code *)0x0)) {
      iVar18 = (**(code **)(param_1 + 0x878))
                         (param_1,lVar1,__s2,uVar26,*(undefined8 *)(param_1 + 0x8b8));
      iVar17 = 0;
      if (iVar18 != 0) {
        iVar17 = -0x386;
      }
      if (iVar18 != -0x217) {
        iVar18 = iVar17;
      }
      if (iVar18 < -900) goto LAB_001f2d30;
      if (iVar18 != 0) {
        *puVar6 = 6;
        bVar14 = true;
        goto joined_r0x001f287c;
      }
      uVar27 = *puVar7;
    }
    if (uVar27 == 0) {
      local_88 = 0;
      iVar17 = (**(code **)(param_1 + 0x870))
                         (param_1,&local_88,lVar1,*(undefined8 *)(param_1 + 0x8b8));
      if (iVar17 != -0x217) {
        if (iVar17 != 0) {
          return 0xfffffffffffffc7a;
        }
        *(long *)(param_1 + 0x1b0) = local_88;
        if ((*(code **)(param_1 + 0x7e8) != (code *)0x0) &&
           (iVar17 = (**(code **)(param_1 + 0x7e8))(param_1,lVar1,*(undefined8 *)(param_1 + 0x8b8)),
           iVar17 != 0)) {
          return 0xfffffffffffffc7a;
        }
      }
      FUN_001ee1e8(param_1);
    }
    bVar14 = false;
    goto joined_r0x001f287c;
  }
switchD_001f1388_default:
  bVar14 = false;
joined_r0x001f287c:
  __s2 = pvVar33;
  if (!bVar14) {
LAB_001f2880:
    __s2 = pvVar33;
    if (pvVar33 == pvVar11) {
      return param_3;
    }
  }
  goto LAB_001f1370;
}


