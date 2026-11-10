/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040ed30; name: FUN_0040ed30
 */


undefined8
FUN_0040ed30(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 *param_5,
            long *param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *__dest;
  long *plVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  void *__src;
  undefined8 uVar27;
  ulong uVar28;
  long local_d0;
  long local_c0;
  ulong local_a0;
  ulong local_98;
  uint local_78;
  ulong local_68;
  
  iVar7 = FUN_003eb480(*(undefined8 *)(param_1 + 0x10));
  if ((iVar7 == 0) && (iVar7 = FUN_003eb480(*(undefined8 *)(param_1 + 0x18)), iVar7 == 0)) {
    if ((param_4 == 0) && ((param_3 != 0 && (*(long *)(param_1 + 0x10) != param_3)))) {
      uVar27 = 0;
      lVar21 = param_3;
LAB_0040ee80:
      uVar27 = FUN_0040e670(param_1,param_2,lVar21,uVar27,param_7);
      return uVar27;
    }
    if ((param_3 != 0) || (param_4 != 1)) goto LAB_0040ed80;
    lVar21 = *param_6;
    if (lVar21 != *(long *)(param_1 + 0x10)) {
      uVar27 = *param_5;
      goto LAB_0040ee80;
    }
LAB_0040eea4:
    local_c0 = 0;
    uVar19 = 0;
    lVar21 = 0;
    lVar25 = 0;
    local_98 = 0;
    bVar5 = false;
    bVar6 = true;
    local_d0 = 0;
LAB_0040eecc:
    local_a0 = uVar19 + param_4;
    lVar20 = local_a0 * 8;
    lVar9 = FUN_00452c30(lVar20,"external/openssl/crypto/ec/ec_mult.c",0x1f9);
    puVar10 = (ulong *)FUN_00452c30(lVar20,"external/openssl/crypto/ec/ec_mult.c",0x1fa);
    plVar11 = (long *)FUN_00452c30(lVar20 + 8,"external/openssl/crypto/ec/ec_mult.c",0x1fc);
    lVar20 = FUN_00452c30(lVar20,"external/openssl/crypto/ec/ec_mult.c",0x1fd);
    if ((((plVar11 == (long *)0x0) || (*plVar11 = 0, lVar9 == 0)) || (puVar10 == (ulong *)0x0)) ||
       (lVar20 == 0)) {
      uVar27 = 0x41;
      uVar16 = 0x204;
      goto LAB_0040f048;
    }
    uVar24 = lVar25 + param_4;
    if (uVar24 == 0) {
      uVar26 = 0;
      lVar25 = 0;
      if (uVar19 != 0) goto LAB_0040f148;
    }
    else {
      lVar25 = 0;
      uVar28 = 0;
      puVar22 = puVar10;
      uVar18 = 0;
      do {
        lVar12 = param_3;
        if (uVar28 < param_4) {
          lVar12 = param_6[uVar28];
        }
        uVar8 = FUN_003eb2b0(lVar12);
        if (uVar8 < 2000) {
          if (uVar8 < 800) {
            if (uVar8 < 300) {
              if (uVar8 < 0x46) {
                lVar12 = 1;
                if (0x13 < uVar8) {
                  lVar12 = 2;
                }
              }
              else {
                lVar12 = 3;
              }
            }
            else {
              lVar12 = 4;
            }
          }
          else {
            lVar12 = 5;
          }
        }
        else {
          lVar12 = 6;
        }
        *(long *)(lVar9 + uVar28 * 8) = lVar12;
        plVar11[uVar28 + 1] = 0;
        lVar13 = param_3;
        if (uVar28 < param_4) {
          lVar13 = param_6[uVar28];
        }
        lVar13 = FUN_003f8940(lVar13,lVar12,puVar22);
        plVar11[uVar28] = lVar13;
        if (lVar13 == 0) {
          lVar21 = 0;
          plVar15 = (long *)0x0;
          goto LAB_0040f1f8;
        }
        lVar25 = (1L << (lVar12 - 1U & 0x3f)) + lVar25;
        uVar26 = *puVar22;
        if (*puVar22 <= uVar18) {
          uVar26 = uVar18;
        }
        uVar28 = uVar28 + 1;
        puVar22 = puVar22 + 1;
        uVar18 = uVar26;
      } while (uVar24 != uVar28);
      if (uVar19 != 0) {
LAB_0040f148:
        if (lVar21 == 0) {
          if (bVar5) goto LAB_0040f3e4;
          uVar27 = 0x44;
          uVar16 = 0x222;
LAB_0040f048:
          FUN_004806c0(0x10,0xbb,uVar27,"external/openssl/crypto/ec/ec_mult.c",uVar16);
        }
        else {
          local_68 = 0;
          if (!bVar6) {
            uVar27 = 0x44;
            uVar16 = 0x22b;
            goto LAB_0040f048;
          }
          uVar27 = *(undefined8 *)(lVar21 + 0x18);
          *(undefined8 *)(lVar9 + param_4 * 8) = uVar27;
          pvVar14 = (void *)FUN_003f8940(param_3,uVar27,&local_68);
          if (pvVar14 != (void *)0x0) {
            if (local_68 <= uVar26) {
              local_a0 = param_4 + 1;
              plVar11[param_4] = (long)pvVar14;
              plVar11[local_a0] = 0;
              puVar10[param_4] = local_68;
              *(undefined8 *)(lVar20 + param_4 * 8) = *(undefined8 *)(lVar21 + 0x20);
              goto LAB_0040f3e4;
            }
            if (local_68 < uVar19 * local_98) {
              local_a0 = 0;
              if (local_98 != 0) {
                local_a0 = ((local_98 + local_68) - 1) / local_98;
              }
              if (*(ulong *)(lVar21 + 0x10) < local_a0) {
                FUN_004806c0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x256);
                FUN_00452f80(pvVar14,"external/openssl/crypto/ec/ec_mult.c",599);
                goto LAB_0040f050;
              }
              local_a0 = local_a0 + param_4;
            }
            if (param_4 < local_a0) {
              plVar15 = *(long **)(lVar21 + 0x20);
              uVar19 = param_4;
              uVar28 = uVar26;
              __src = pvVar14;
              plVar23 = plVar11 + param_4;
              do {
                if (uVar19 < local_a0 - 1) {
                  puVar10[uVar19] = local_98;
                  if (local_68 < local_98) {
                    FUN_004806c0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x265);
                    FUN_00452f80(pvVar14,"external/openssl/crypto/ec/ec_mult.c",0x266);
                    goto LAB_0040f050;
                  }
                  uVar26 = puVar10[uVar19];
                  local_68 = local_68 - local_98;
                }
                else {
                  puVar10[uVar19] = local_68;
                  uVar26 = local_68;
                }
                plVar23[1] = 0;
                __dest = (void *)FUN_00452c30(uVar26,"external/openssl/crypto/ec/ec_mult.c",0x272);
                *plVar23 = (long)__dest;
                if (__dest == (void *)0x0) {
                  FUN_004806c0(0x10,0xbb,0x41,"external/openssl/crypto/ec/ec_mult.c",0x274);
                  FUN_00452f80(pvVar14,"external/openssl/crypto/ec/ec_mult.c",0x275);
                  goto LAB_0040f050;
                }
                memcpy(__dest,__src,puVar10[uVar19]);
                if (*plVar15 == 0) {
                  FUN_004806c0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x27d);
                  FUN_00452f80(pvVar14,"external/openssl/crypto/ec/ec_mult.c",0x27e);
                  goto LAB_0040f050;
                }
                uVar26 = puVar10[uVar19];
                if (puVar10[uVar19] <= uVar28) {
                  uVar26 = uVar28;
                }
                *(long **)(lVar20 + uVar19 * 8) = plVar15;
                uVar19 = uVar19 + 1;
                __src = (void *)((long)__src + local_98);
                plVar15 = plVar15 + local_d0;
                uVar28 = uVar26;
                plVar23 = plVar23 + 1;
              } while (local_a0 != uVar19);
            }
            FUN_00452f80(pvVar14,"external/openssl/crypto/ec/ec_mult.c",0x285);
            goto LAB_0040f3e4;
          }
        }
LAB_0040f050:
        lVar21 = 0;
        plVar15 = (long *)0x0;
        goto LAB_0040f058;
      }
    }
LAB_0040f3e4:
    plVar15 = (long *)FUN_00452c30(lVar25 * 8 + 8,"external/openssl/crypto/ec/ec_mult.c",0x28f);
    if (plVar15 == (long *)0x0) {
      FUN_004806c0(0x10,0xbb,0x41,"external/openssl/crypto/ec/ec_mult.c",0x291);
      lVar21 = 0;
    }
    else {
      plVar15[lVar25] = 0;
      plVar23 = plVar15;
      if (uVar24 != 0) {
        uVar19 = 0;
        do {
          uVar28 = 1;
          *(long **)(lVar20 + uVar19 * 8) = plVar23;
          do {
            lVar21 = FUN_0040cf10(param_1);
            *plVar23 = lVar21;
            if (lVar21 == 0) goto LAB_0040f4ac;
            plVar23 = plVar23 + 1;
            uVar18 = uVar28 >> (*(long *)(lVar9 + uVar19 * 8) - 1U & 0x3f);
            uVar28 = uVar28 + 1;
          } while (uVar18 == 0);
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar24);
      }
      if (plVar23 == plVar15 + lVar25) {
        lVar21 = FUN_0040cf10(param_1);
        if (lVar21 != 0) {
          if (uVar24 != 0) {
            uVar19 = 0;
            do {
              uVar27 = **(undefined8 **)(lVar20 + uVar19 * 8);
              if (uVar19 < param_4) {
                iVar7 = FUN_0040d010(uVar27,param_5[uVar19]);
              }
              else {
                iVar7 = FUN_0040d010(uVar27,local_c0);
              }
              if (iVar7 == 0) goto LAB_0040f058;
              if (1 < *(ulong *)(lVar9 + uVar19 * 8)) {
                iVar7 = FUN_0040e020(param_1,lVar21,**(undefined8 **)(lVar20 + uVar19 * 8),param_7);
                if (iVar7 == 0) goto LAB_0040f058;
                if (*(long *)(lVar9 + uVar19 * 8) != 1) {
                  lVar12 = 0;
                  do {
                    puVar2 = (undefined8 *)(*(long *)(lVar20 + uVar19 * 8) + lVar12 * 8);
                    iVar7 = FUN_0040df50(param_1,puVar2[1],*puVar2,lVar21,param_7);
                    if (iVar7 == 0) goto LAB_0040f058;
                    uVar28 = lVar12 + 2;
                    lVar12 = lVar12 + 1;
                  } while (uVar28 >> (*(long *)(lVar9 + uVar19 * 8) - 1U & 0x3f) == 0);
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar24);
          }
          iVar7 = FUN_0040e1d0(param_1,lVar25,plVar15,param_7);
          if (iVar7 != 0) {
            uVar8 = (uint)uVar26;
            local_78 = uVar8 - 1;
            if ((int)local_78 < 0) {
LAB_0040f7f4:
              iVar7 = FUN_0040daf0(param_1,param_2);
joined_r0x0040f800:
              if (iVar7 == 0) goto LAB_0040f058;
            }
            else {
              if (local_a0 == 0) {
                if ((int)local_78 < 0) {
                  uVar8 = 1;
                }
                if (3 < uVar8) {
                  uVar17 = uVar8 & 0xfffffffc;
                  uVar1 = (uVar17 - 4 >> 2) + 1;
                  uVar3 = uVar1 & 7;
                  if (0x1b < uVar17 - 4) {
                    iVar7 = -(uVar1 & 0x7ffffff8);
                    do {
                      iVar7 = iVar7 + 8;
                    } while (iVar7 != 0);
                  }
                  local_78 = local_78 - uVar17;
                  if (uVar3 != 0) {
                    iVar7 = -uVar3;
                    do {
                      bVar6 = iVar7 != -1;
                      iVar7 = iVar7 + 1;
                    } while (bVar6);
                  }
                  if (uVar8 == uVar17) goto LAB_0040f7f4;
                }
                iVar7 = local_78 + 1;
                do {
                  iVar7 = iVar7 + -1;
                } while (0 < iVar7);
                goto LAB_0040f7f4;
              }
              bVar6 = false;
              uVar8 = 0;
              uVar19 = (ulong)local_78;
              uVar27 = 1;
              do {
                if ((bVar6) && (iVar7 = FUN_0040e020(param_1,param_2,param_2,param_7), iVar7 == 0))
                goto LAB_0040f1f8;
                uVar24 = 0;
                do {
                  if (uVar19 < puVar10[uVar24]) {
                    cVar4 = *(char *)(plVar11[uVar24] + uVar19);
                    if ((int)cVar4 != 0) {
                      uVar17 = (uint)cVar4;
                      uVar1 = -uVar17;
                      if (-1 < (int)uVar17) {
                        uVar1 = uVar17;
                      }
                      if (uVar8 != ((int)cVar4 & 0x80U) >> 7) {
                        if (((int)uVar27 == 0) &&
                           (iVar7 = FUN_0040e0d0(param_1,param_2,param_7), iVar7 == 0))
                        goto LAB_0040f1f8;
                        uVar8 = (uint)(uVar8 == 0);
                      }
                      uVar16 = *(undefined8 *)
                                (*(long *)(lVar20 + uVar24 * 8) + (ulong)(uVar1 >> 1) * 8);
                      if ((int)uVar27 == 0) {
                        iVar7 = FUN_0040df50(param_1,param_2,param_2,uVar16,param_7);
                        if (iVar7 == 0) goto LAB_0040f05c;
                      }
                      else {
                        iVar7 = FUN_0040d010(param_2,uVar16);
                        if (iVar7 == 0) goto LAB_0040f1f8;
                        iVar7 = FUN_0040e590(param_1,param_2,param_7);
                        if (iVar7 == 0) {
                          FUN_004806c0(0x10,0xbb,0xa3,"external/openssl/crypto/ec/ec_mult.c",0x2f1);
                          goto LAB_0040f1f8;
                        }
                        uVar27 = 0;
                      }
                    }
                  }
                  uVar24 = uVar24 + 1;
                } while (local_a0 != uVar24);
                bVar6 = (int)uVar27 == 0;
                local_78 = local_78 - 1;
                uVar19 = uVar19 - 1;
              } while (-1 < (int)local_78);
              if ((int)uVar27 != 0) goto LAB_0040f7f4;
              if (uVar8 != 0) {
                iVar7 = FUN_0040e0d0(param_1,param_2,param_7);
                goto joined_r0x0040f800;
              }
            }
            uVar27 = 1;
            goto LAB_0040f05c;
          }
        }
      }
      else {
        FUN_004806c0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x2a2);
LAB_0040f4ac:
        lVar21 = 0;
      }
    }
  }
  else {
LAB_0040ed80:
    if (param_3 == 0) goto LAB_0040eea4;
    local_c0 = FUN_0040d4a0(param_1);
    if (local_c0 != 0) {
      lVar21 = *(long *)(param_1 + 0xa0);
      if (lVar21 == 0) {
LAB_0040ee40:
        local_98 = 0;
        local_d0 = 0;
        bVar6 = false;
        uVar19 = 1;
        bVar5 = true;
        lVar25 = 1;
      }
      else {
        if ((*(long *)(lVar21 + 0x10) == 0) ||
           (iVar7 = FUN_0040da30(param_1,local_c0,**(undefined8 **)(lVar21 + 0x20),param_7),
           iVar7 != 0)) {
          lVar21 = 0;
          goto LAB_0040ee40;
        }
        local_98 = *(ulong *)(lVar21 + 8);
        iVar7 = FUN_003eb2b0(param_3);
        uVar24 = 0;
        if (local_98 != 0) {
          uVar24 = (ulong)(long)iVar7 / local_98;
        }
        uVar26 = *(ulong *)(lVar21 + 0x10);
        uVar19 = uVar26;
        if (uVar24 + 1 <= uVar26) {
          uVar19 = uVar24 + 1;
        }
        uVar24 = *(long *)(lVar21 + 0x18) - 1;
        if (*(long *)(lVar21 + 0x28) != uVar26 << (uVar24 & 0x3f)) {
          uVar27 = 0x44;
          uVar16 = 0x1eb;
          goto LAB_0040edf0;
        }
        lVar25 = 0;
        bVar5 = false;
        local_d0 = 1L << (uVar24 & 0x3f);
        bVar6 = true;
      }
      goto LAB_0040eecc;
    }
    uVar27 = 0x71;
    uVar16 = 0x1cf;
LAB_0040edf0:
    FUN_004806c0(0x10,0xbb,uVar27,"external/openssl/crypto/ec/ec_mult.c",uVar16);
    lVar21 = 0;
    lVar9 = 0;
    plVar11 = (long *)0x0;
    puVar10 = (ulong *)0x0;
    plVar15 = (long *)0x0;
    lVar20 = 0;
  }
LAB_0040f058:
  uVar27 = 0;
LAB_0040f05c:
  FUN_0040caf0(lVar21);
  FUN_00452f80(lVar9,"external/openssl/crypto/ec/ec_mult.c",0x30d);
  FUN_00452f80(puVar10,"external/openssl/crypto/ec/ec_mult.c",0x30e);
  if (plVar11 != (long *)0x0) {
    lVar21 = *plVar11;
    plVar23 = plVar11;
    while (lVar21 != 0) {
      plVar23 = plVar23 + 1;
      FUN_00452f80(lVar21,"external/openssl/crypto/ec/ec_mult.c",0x313);
      lVar21 = *plVar23;
    }
    FUN_00452f80(plVar11,"external/openssl/crypto/ec/ec_mult.c",0x315);
  }
  if (plVar15 != (long *)0x0) {
    lVar21 = *plVar15;
    plVar11 = plVar15;
    while (lVar21 != 0) {
      plVar11 = plVar11 + 1;
      FUN_0040cc00();
      lVar21 = *plVar11;
    }
    FUN_00452f80(plVar15,"external/openssl/crypto/ec/ec_mult.c",0x31b);
  }
  FUN_00452f80(lVar20,"external/openssl/crypto/ec/ec_mult.c",0x31d);
  return uVar27;
LAB_0040f1f8:
  uVar27 = 0;
  goto LAB_0040f05c;
}


