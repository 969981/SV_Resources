/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048d270; name: FUN_0048d270
 */


undefined4
FUN_0048d270(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  bool bVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  uint uVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  long local_68;
  
  local_68 = 0;
  *param_1 = 0;
  *param_2 = 0;
  uVar3 = FUN_0047e430(param_3);
  uVar6 = uVar3;
  if ((param_5 & 0x100) != 0) {
    uVar6 = 0;
  }
  uVar28 = uVar3;
  if ((param_5 & 0x200) != 0) {
    uVar28 = 0;
  }
  plVar22 = (long *)0x0;
  uVar27 = uVar3;
  if ((param_5 & 0x400) != 0) {
    uVar27 = 0;
  }
  iVar5 = uVar3 - 1;
  if (iVar5 == 0) {
LAB_0048d2d8:
    FUN_0048d180(plVar22);
    return 1;
  }
  if ((int)uVar3 < 2) {
    uVar23 = 1;
  }
  else {
    iVar8 = iVar5;
    do {
      iVar8 = iVar8 + -1;
      uVar10 = FUN_0047e450(param_3,iVar8);
      FUN_00498e10(uVar10,0xffffffff,0);
      lVar11 = FUN_0048cad0(uVar10);
      if (lVar11 == 0) {
        return 0;
      }
    } while (0 < iVar8);
    uVar23 = 1;
    do {
      if ((uVar23 >> 1 != 0) && ((int)uVar6 < 1)) break;
      iVar5 = iVar5 + -1;
      uVar10 = FUN_0047e450(param_3,iVar5);
      uVar4 = FUN_00499a10();
      if ((uVar4 >> 0xb & 1) != 0) {
        return 0xffffffff;
      }
      lVar11 = FUN_0048cad0(uVar10);
      if ((uVar23 & 1) != 0) {
        uVar2 = 2;
        if (*(long *)(lVar11 + 8) != 0) {
          uVar2 = uVar23;
        }
        uVar23 = uVar2;
      }
      if (0 < (int)uVar6) {
        uVar18 = *(ulong *)(lVar11 + 0x18);
        uVar4 = (uVar6 + (uVar4 >> 5 & 1)) - 1;
        uVar6 = (uint)uVar18;
        if ((long)(int)uVar4 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar6 = uVar4;
        }
      }
    } while (0 < iVar5);
  }
  uVar4 = uVar23 | 4;
  if (uVar6 != 0) {
    uVar4 = uVar23;
  }
  if ((uVar4 & 1) == 0) {
    plVar22 = (long *)0x0;
  }
  else {
    plVar22 = (long *)FUN_00452ce0(0x30,"external/openssl/crypto/x509v3/pcy_tree.c",0xa6);
    if (plVar22 == (long *)0x0) {
      FUN_004806c0(0x22,0xac,0x41,"external/openssl/crypto/x509v3/pcy_tree.c",0xa7);
      return 0;
    }
    lVar11 = FUN_00452ce0(-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5,
                          "external/openssl/crypto/x509v3/pcy_tree.c",0xb2);
    *plVar22 = lVar11;
    if (lVar11 == 0) {
      FUN_00452f80(plVar22,"external/openssl/crypto/x509v3/pcy_tree.c",0xb3);
      FUN_004806c0(0x22,0xac,0x41,"external/openssl/crypto/x509v3/pcy_tree.c",0xb4);
      return 0;
    }
    *(uint *)(plVar22 + 1) = uVar3;
    uVar10 = FUN_0045bc10(0x2ea);
    puVar13 = (uint *)FUN_0048cf00(0,uVar10,0);
    if (puVar13 == (uint *)0x0) goto LAB_0048dcdc;
    lVar12 = FUN_0048de80(lVar11,puVar13,0,plVar22);
    if (lVar12 == 0) {
LAB_0048db08:
      FUN_0048cea0(puVar13);
      goto LAB_0048dcdc;
    }
    if (1 < (int)uVar3) {
      puVar13 = (uint *)(lVar11 + 0x38);
      iVar5 = uVar3 - 2;
      do {
        while( true ) {
          uVar10 = FUN_0047e450(param_3,iVar5);
          uVar6 = FUN_00499a10();
          plVar25 = (long *)FUN_0048cad0(uVar10);
          FUN_00485cf0(uVar10);
          *(undefined8 *)(puVar13 + -6) = uVar10;
          if (*plVar25 != 0) break;
          *puVar13 = *puVar13 | 0x200;
          if (uVar28 != 0) goto LAB_0048d578;
LAB_0048d5ac:
          if ((iVar5 == 0) || ((uVar6 >> 5 & 1) == 0)) {
            *puVar13 = *puVar13 | 0x200;
            uVar28 = 0;
            goto joined_r0x0048d50c;
          }
          uVar28 = 0;
          if (uVar27 != 0) goto LAB_0048d510;
LAB_0048d5bc:
          *puVar13 = *puVar13 | 0x400;
          bVar1 = iVar5 < 1;
          puVar13 = puVar13 + 8;
          iVar5 = iVar5 + -1;
          if (bVar1) goto LAB_0048d3dc;
        }
        if (uVar28 == 0) goto LAB_0048d5ac;
LAB_0048d578:
        uVar18 = plVar25[2];
        uVar3 = uVar28 - ((uVar6 & 0x20) == 0);
        uVar28 = (uint)uVar18;
        if ((long)(int)uVar3 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar28 = uVar3;
        }
joined_r0x0048d50c:
        if (uVar27 == 0) goto LAB_0048d5bc;
LAB_0048d510:
        uVar18 = plVar25[4];
        uVar6 = uVar27 - ((uVar6 & 0x20) == 0);
        uVar27 = (uint)uVar18;
        if ((long)(int)uVar6 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar27 = uVar6;
        }
        puVar13 = puVar13 + 8;
        bVar1 = 0 < iVar5;
        iVar5 = iVar5 + -1;
      } while (bVar1);
    }
  }
LAB_0048d3dc:
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar4 >> 2 == 0) {
    if ((uVar4 >> 1 & 1) != 0) goto LAB_0048d2d8;
    bVar1 = true;
    iVar5 = (int)plVar22[1];
    puVar26 = (undefined8 *)*plVar22;
    if (1 < iVar5) goto LAB_0048d618;
  }
  else {
    *param_2 = 1;
    if ((uVar4 >> 1 & 1) != 0) {
      return 0xfffffffe;
    }
    bVar1 = false;
    iVar5 = (int)plVar22[1];
    puVar26 = (undefined8 *)*plVar22;
    if (1 < iVar5) {
LAB_0048d618:
      iVar8 = 1;
      puVar21 = puVar26;
      do {
        puVar24 = puVar21 + 4;
        plVar25 = (long *)FUN_0048cad0(*puVar24);
        iVar5 = FUN_0047e430(plVar25[1]);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar11 = FUN_0047e450(plVar25[1],iVar5);
            iVar9 = FUN_0047e430(puVar21[1]);
            if (iVar9 < 1) {
LAB_0048d6f8:
              if ((puVar21[2] != 0) &&
                 (lVar11 = FUN_0048de80(puVar24,lVar11,puVar21[2],0), lVar11 == 0))
              goto LAB_0048dcdc;
            }
            else {
              bVar19 = false;
              iVar9 = 0;
              do {
                uVar10 = FUN_0047e450(puVar21[1],iVar9);
                iVar7 = FUN_0048dfd0(puVar21,uVar10,*(undefined8 *)(lVar11 + 8));
                if (iVar7 != 0) {
                  lVar12 = FUN_0048de80(puVar24,lVar11,uVar10,0);
                  if (lVar12 == 0) goto LAB_0048dcdc;
                  bVar19 = true;
                }
                iVar9 = iVar9 + 1;
                iVar7 = FUN_0047e430(puVar21[1]);
              } while (iVar9 < iVar7);
              if (!bVar19) goto LAB_0048d6f8;
            }
            iVar5 = iVar5 + 1;
            iVar9 = FUN_0047e430(plVar25[1]);
          } while (iVar5 < iVar9);
        }
        if ((*(byte *)((long)puVar21 + 0x39) >> 1 & 1) == 0) {
          iVar5 = FUN_0047e430(puVar21[1]);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              puVar26 = (undefined8 *)FUN_0047e450(puVar21[1],iVar5);
              if (((*(byte *)((long)puVar21 + 0x19) >> 2 & 1) == 0) &&
                 ((*(byte *)*puVar26 & 1) != 0)) {
                uVar10 = *(undefined8 *)((byte *)*puVar26 + 0x18);
                iVar9 = *(int *)(puVar26 + 2);
                iVar7 = FUN_0047e430(uVar10);
                if ((iVar9 != iVar7) && (iVar9 = FUN_0047e430(uVar10), 0 < iVar9)) {
                  iVar9 = 0;
                  do {
                    lVar11 = FUN_0047e450(uVar10,iVar9);
                    lVar12 = FUN_0048ddf0(puVar24,puVar26,lVar11);
                    if (lVar12 == 0) {
                      if (lVar11 == 0) {
                        lVar11 = *(long *)((uint *)*puVar26 + 2);
                      }
                      puVar13 = (uint *)FUN_0048cf00(0,lVar11,*(uint *)*puVar26 & 0x10);
                      if (puVar13 == (uint *)0x0) goto LAB_0048dcdc;
                      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(*plVar25 + 0x10);
                      *puVar13 = *puVar13 | 4;
                      lVar11 = FUN_0048de80(puVar24,puVar13,puVar26,plVar22);
                      if (lVar11 == 0) goto LAB_0048db08;
                    }
                    iVar9 = iVar9 + 1;
                    iVar7 = FUN_0047e430(uVar10);
                  } while (iVar9 < iVar7);
                }
              }
              else if (*(int *)(puVar26 + 2) == 0) {
                puVar13 = (uint *)FUN_0048cf00(0,*(undefined8 *)((uint *)*puVar26 + 2),
                                               *(uint *)*puVar26 & 0x10);
                if (puVar13 == (uint *)0x0) goto LAB_0048dcdc;
                *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(*plVar25 + 0x10);
                *puVar13 = *puVar13 | 4;
                lVar11 = FUN_0048de80(puVar24,puVar13,puVar26,plVar22);
                if (lVar11 == 0) goto LAB_0048db08;
              }
              iVar5 = iVar5 + 1;
              iVar9 = FUN_0047e430(puVar21[1]);
            } while (iVar5 < iVar9);
          }
          if ((puVar21[2] != 0) &&
             (lVar11 = FUN_0048de80(puVar24,*plVar25,puVar21[2],0), lVar11 == 0)) goto LAB_0048dcdc;
        }
        if ((*(byte *)((long)puVar21 + 0x39) >> 2 & 1) != 0) {
          uVar10 = puVar21[5];
          iVar5 = FUN_0047e430(uVar10);
          if (0 < iVar5) {
            iVar5 = iVar5 + 1;
            do {
              puVar26 = (undefined8 *)FUN_0047e450(uVar10,iVar5 + -2);
              if ((*(byte *)*puVar26 & 3) != 0) {
                *(int *)(puVar26[1] + 0x10) = *(int *)(puVar26[1] + 0x10) + -1;
                FUN_00452f80(puVar26,"external/openssl/crypto/x509v3/pcy_tree.c",0x193);
                FUN_0047e170(uVar10,iVar5 + -2);
              }
              iVar5 = iVar5 + -1;
            } while (1 < iVar5);
          }
        }
        puVar21 = puVar24;
        do {
          uVar10 = puVar21[-3];
          iVar5 = FUN_0047e430(uVar10);
          if (0 < iVar5) {
            iVar5 = iVar5 + 1;
            do {
              lVar11 = FUN_0047e450(uVar10,iVar5 + -2);
              if (*(int *)(lVar11 + 0x10) == 0) {
                *(int *)(*(long *)(lVar11 + 8) + 0x10) = *(int *)(*(long *)(lVar11 + 8) + 0x10) + -1
                ;
                FUN_00452f80(lVar11,"external/openssl/crypto/x509v3/pcy_tree.c",0x1a0);
                FUN_0047e170(uVar10,iVar5 + -2);
              }
              iVar5 = iVar5 + -1;
            } while (1 < iVar5);
          }
          lVar11 = puVar21[-2];
          puVar26 = puVar21 + -4;
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) == 0)) {
            lVar12 = *(long *)(lVar11 + 8);
            if (lVar12 != 0) {
              *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
            }
            FUN_00452f80(lVar11,"external/openssl/crypto/x509v3/pcy_tree.c",0x1a7);
            lVar11 = 0;
            puVar21[-2] = 0;
          }
          puVar21 = puVar26;
        } while (puVar26 != (undefined8 *)*plVar22);
        if (lVar11 == 0) {
          FUN_0048d180(plVar22);
          uVar17 = 1;
          if (!bVar1) {
            uVar17 = 0xfffffffe;
          }
          return uVar17;
        }
        iVar8 = iVar8 + 1;
        iVar5 = (int)plVar22[1];
        puVar21 = puVar24;
      } while (iVar8 < iVar5);
    }
  }
  plVar25 = plVar22 + 3;
  lVar11 = puVar26[(long)iVar5 * 4 + -2];
  plVar20 = plVar25;
  if (lVar11 != 0) {
    lVar12 = *plVar25;
    if (lVar12 == 0) {
      lVar12 = FUN_0048dd80();
      *plVar25 = lVar12;
      if (lVar12 == 0) goto LAB_0048dcdc;
    }
    iVar5 = FUN_0047e200(lVar12,lVar11);
    if ((iVar5 < 0) && (iVar5 = FUN_0047e2f0(*plVar25,lVar11), iVar5 == 0)) goto LAB_0048dcdc;
    plVar20 = &local_68;
  }
  if (1 < (int)plVar22[1]) {
    lVar11 = *plVar22;
    iVar5 = 1;
    do {
      lVar12 = *(long *)(lVar11 + 0x10);
      if (lVar12 == 0) break;
      iVar8 = FUN_0047e430(*(undefined8 *)(lVar11 + 0x28));
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          lVar14 = FUN_0047e450(*(undefined8 *)(lVar11 + 0x28),iVar8);
          if (*(long *)(lVar14 + 8) == lVar12) {
            lVar15 = *plVar20;
            if (lVar15 == 0) {
              lVar15 = FUN_0048dd80();
              *plVar20 = lVar15;
              if (lVar15 != 0) goto LAB_0048da9c;
            }
            else {
LAB_0048da9c:
              iVar9 = FUN_0047e200(lVar15,lVar14);
              if ((-1 < iVar9) || (iVar9 = FUN_0047e2f0(*plVar20,lVar14), iVar9 != 0))
              goto LAB_0048da58;
            }
            if (plVar20 == &local_68) {
              FUN_0047db00(local_68);
              local_68 = 0;
            }
            goto LAB_0048dcdc;
          }
LAB_0048da58:
          iVar8 = iVar8 + 1;
          iVar9 = FUN_0047e430(*(undefined8 *)(lVar11 + 0x28));
        } while (iVar8 < iVar9);
      }
      iVar5 = iVar5 + 1;
      lVar11 = lVar11 + 0x20;
    } while (iVar5 < (int)plVar22[1]);
  }
  if (plVar20 != &local_68) {
    local_68 = *plVar25;
  }
  lVar11 = local_68;
  iVar5 = FUN_0047e430(param_4);
  if (0 < iVar5) {
    plVar25 = *(long **)(*plVar22 + (long)(int)plVar22[1] * 0x20 + -0x10);
    iVar5 = FUN_0047e430(param_4);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        FUN_0047e450(param_4,iVar5);
        iVar8 = FUN_0045bea0();
        if (iVar8 == 0x2ea) {
          bVar19 = false;
          *(uint *)(plVar22 + 5) = *(uint *)(plVar22 + 5) | 2;
          goto LAB_0048dccc;
        }
        iVar5 = iVar5 + 1;
        iVar8 = FUN_0047e430(param_4);
      } while (iVar5 < iVar8);
    }
    iVar5 = FUN_0047e430(param_4);
    if (0 < iVar5) {
      iVar5 = 0;
      if (plVar25 == (long *)0x0) {
        do {
          uVar10 = FUN_0047e450(param_4,iVar5);
          lVar12 = FUN_0048ddb0(lVar11,uVar10);
          if (lVar12 != 0) {
            lVar14 = plVar22[4];
            if (lVar14 == 0) {
              lVar14 = FUN_0047dcc0();
              plVar22[4] = lVar14;
              if (lVar14 == 0) break;
            }
            iVar8 = FUN_0047e2f0(lVar14,lVar12);
            if (iVar8 == 0) goto LAB_0048dcc8;
          }
          iVar5 = iVar5 + 1;
          iVar8 = FUN_0047e430(param_4);
        } while (iVar5 < iVar8);
      }
      else {
        do {
          uVar10 = FUN_0047e450(param_4,iVar5);
          lVar12 = FUN_0048ddb0(lVar11,uVar10);
          if (lVar12 == 0) {
            puVar16 = (undefined4 *)FUN_0048cf00(0,uVar10,*(uint *)*plVar25 & 0x10);
            if (puVar16 == (undefined4 *)0x0) goto LAB_0048dcc8;
            *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(*plVar25 + 0x10);
            *puVar16 = 0xc;
            lVar12 = FUN_0048de80(0,puVar16,plVar25[1],plVar22);
          }
          lVar14 = plVar22[4];
          if (lVar14 == 0) {
            lVar14 = FUN_0047dcc0();
            plVar22[4] = lVar14;
            if (lVar14 == 0) break;
          }
          iVar8 = FUN_0047e2f0(lVar14,lVar12);
          if (iVar8 == 0) goto LAB_0048dcc8;
          iVar5 = iVar5 + 1;
          iVar8 = FUN_0047e430(param_4);
        } while (iVar5 < iVar8);
      }
    }
  }
  bVar19 = false;
LAB_0048dccc:
  if (plVar20 == &local_68) {
    FUN_0047db00(local_68);
  }
  if (!bVar19) {
    *param_1 = plVar22;
    if (!bVar1) {
      FUN_0048dd60(plVar22);
      iVar5 = FUN_0047e430();
      if (iVar5 < 1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
LAB_0048dcdc:
  FUN_0048d180(plVar22);
  return 0;
LAB_0048dcc8:
  bVar19 = true;
  goto LAB_0048dccc;
}


