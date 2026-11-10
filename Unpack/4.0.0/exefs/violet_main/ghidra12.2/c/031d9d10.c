/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d9d10; name: FUN_031d9d10
 */


void FUN_031d9d10(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  short *psVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong *puVar18;
  long *plVar19;
  uint uVar20;
  ulong *puVar21;
  uint uVar22;
  short *psVar23;
  ulong uVar24;
  uint uVar25;
  byte bVar26;
  undefined1 auStack_270 [448];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  
  uVar24 = *param_1;
  uVar8 = (uint)uVar24;
  puVar13 = param_1;
  if ((uVar24 & 1) == 0) {
    puVar15 = param_1;
    do {
      puVar15 = (ulong *)puVar15[1];
    } while ((*puVar15 & 1) == 0);
    if ((param_1 != (ulong *)0x0) && ((puVar15[2] & 0x1f) == 1)) {
      return;
    }
    do {
      puVar13 = (ulong *)puVar13[1];
    } while ((*puVar13 & 1) == 0);
    if (param_1 != (ulong *)0x0) goto LAB_031d9da4;
  }
  else {
    if ((param_1[2] & 0x1f) == 1) {
      return;
    }
LAB_031d9da4:
    if ((puVar13[2] & 0x1f) == 0) {
      return;
    }
  }
  while ((uVar8 >> 0x14 & 1) == 0) {
    param_1 = (ulong *)param_1[1];
    uVar24 = *param_1;
    uVar8 = (uint)uVar24;
  }
  uVar8 = (uint)uVar24;
  uVar16 = CONCAT44(uVar8,uVar8) & 0xfffff000fffff;
  puVar13 = param_1 + 2;
  if ((short)puVar13[(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                           POPCOUNT((char)(uVar16 >> 0x10)))] != 0) {
    return;
  }
  if (param_1[1] == 0) {
    if ((uVar24 & 1) == 0) {
      puVar15 = (ulong *)0x0;
      goto LAB_031d9e30;
    }
LAB_031d9e48:
    if ((uVar8 >> 0x17 & 1) == 0) {
      if ((param_1[2] & 0x1f) != 8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar24 = *puVar13;
      if (((uint)*param_1 >> 1 & 1) == 0) {
        puVar15 = (ulong *)0x0;
      }
      else {
        puVar15 = (ulong *)param_1[3];
      }
      FUN_031d9d10(puVar15,param_2);
      puVar9 = param_1;
      do {
        uVar8 = (uint)*puVar9;
        if ((uVar8 >> 0x14 & 1) != 0) {
          uVar8 = uVar8 & 0xfffff;
          uVar16 = (ulong)(uint)puVar9[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                     POPCOUNT((char)(uVar8 >> 8)) +
                                                    POPCOUNT((char)(uVar8 >> 0x10))) + 2];
          goto LAB_031da0b4;
        }
        if ((*puVar9 & 1) != 0) {
          uVar16 = 0;
          goto LAB_031da0b4;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      uVar16 = 0;
LAB_031da0b4:
      do {
        uVar8 = (uint)*puVar15;
        if ((uVar8 >> 0x14 & 1) != 0) {
          if (puVar15 != (ulong *)0x0) {
            uVar8 = uVar8 & 0xfffff;
            uVar8 = (uint)puVar15[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                               + POPCOUNT((char)(uVar8 >> 0x10))) + 2];
            goto LAB_031da0f8;
          }
LAB_031da0f4:
          uVar8 = 0;
LAB_031da0f8:
          uVar25 = (uVar8 & 0xffff) * (int)(uVar24 >> 8);
          if ((int)uVar25 <= (int)param_2[3]) {
            uVar25 = param_2[3];
          }
          uVar8 = uVar8 >> 0x10 & 0xfff;
          iVar7 = (int)(uVar16 >> 0x1c);
          if (iVar7 == 0xf) {
            uVar6 = (uint)uVar16 >> 0x10 & 0xfff;
            if ((ulong)uVar6 <= (ulong)((long)(int)param_2[1] << 2)) {
              uVar6 = (uint)((long)(int)param_2[1] << 2);
            }
          }
          else {
            uVar6 = (uint)uVar16 >> 0x10 & 0xfff;
            if (iVar7 != 0) {
              uVar14 = 1 << (uVar16 >> 0x1c);
              if (uVar6 <= uVar14) {
                uVar6 = uVar14;
              }
            }
          }
          if ((int)uVar8 <= (int)uVar6) {
            uVar8 = uVar6;
          }
          uVar6 = (uint)*param_1 & 0xfffff;
          bVar26 = POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                   POPCOUNT((char)(uVar6 >> 0x10));
          if (((uint)*param_1 >> 0x14 & 1) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (uint)puVar13[bVar26] & 0xf0000000;
          }
          puVar13[bVar26] = (ulong)(uVar25 & 0xffff | (uVar8 & 0xfff) << 0x10 | uVar6);
          return;
        }
        if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
        goto LAB_031da0f4;
      } while( true );
    }
    puVar15 = (ulong *)0x0;
    bVar5 = true;
    uVar6 = 0;
    uVar25 = 0;
    uVar14 = 1;
  }
  else {
    FUN_031d9d10(param_1[1],param_2);
    uVar24 = *param_1;
    uVar8 = (uint)uVar24;
    puVar15 = (ulong *)param_1[1];
    if ((uVar24 & 1) == 0) {
LAB_031d9e30:
      while( true ) {
        uVar8 = (uint)*puVar15;
        if ((uVar8 >> 0x14 & 1) != 0) break;
        if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
        goto LAB_031d9eb4;
      }
      if (puVar15 != (ulong *)0x0) {
        uVar8 = uVar8 & 0xfffff;
        uVar8 = (uint)puVar15[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                           POPCOUNT((char)(uVar8 >> 0x10))) + 2];
        goto LAB_031d9eb8;
      }
LAB_031d9eb4:
      uVar8 = 0;
LAB_031d9eb8:
      if (((uint)uVar24 >> 0x14 & 1) == 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = (uint)*param_1 & 0xfffff;
        uVar25 = (uint)(puVar13[(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8)) +
                                      POPCOUNT((char)(uVar25 >> 0x10)))] >> 0x1c) & 0xf;
      }
      uVar6 = uVar8 >> 0x1c;
      if (uVar8 >> 0x1c <= uVar25) {
        uVar6 = uVar25;
      }
      if (uVar6 == 0xf) {
        uVar25 = uVar8 >> 0x10 & 0xfff;
        if ((ulong)uVar25 <= (ulong)((long)(int)param_2[1] << 2)) {
          uVar25 = (uint)((long)(int)param_2[1] << 2);
        }
      }
      else {
        uVar25 = uVar8 >> 0x10 & 0xfff;
        if (uVar6 != 0) {
          if (uVar25 <= (uint)(1 << (ulong)uVar6)) {
            uVar25 = 1 << (ulong)uVar6;
          }
        }
      }
      uVar14 = (uint)*param_1 & 0xfffff;
      puVar13[(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                    POPCOUNT((char)(uVar14 >> 0x10)))] =
           (ulong)(uVar8 & 0xffff | uVar6 << 0x1c | (uVar25 & 0xfff) << 0x10);
      return;
    }
    if (puVar15 == (ulong *)0x0) goto LAB_031d9e48;
    puVar9 = puVar15;
    do {
      uVar25 = (uint)*puVar9;
      if ((uVar25 >> 0x14 & 1) != 0) {
        uVar24 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
        uVar25 = (uint)(ushort)puVar9[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                                    POPCOUNT((char)(uVar24 >> 8)) +
                                                   POPCOUNT((char)(uVar24 >> 0x10))) + 2];
        goto LAB_031d9fa4;
      }
    } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
    uVar25 = 0;
LAB_031d9fa4:
    puVar9 = puVar15;
    while( true ) {
      uVar6 = (uint)*puVar9;
      if ((uVar6 >> 0x14 & 1) != 0) break;
      if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
      goto LAB_031d9fec;
    }
    if (puVar9 != (ulong *)0x0) {
      uVar24 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
      uVar12 = *(ushort *)
                ((long)puVar9 +
                (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                             POPCOUNT((char)(uVar24 >> 0x10))) * 8 + 0x12) & 0xfff;
      goto LAB_031d9ff0;
    }
LAB_031d9fec:
    uVar12 = 0;
LAB_031d9ff0:
    uVar14 = uVar12;
    if ((uVar25 == 1) && (*(char *)((long)param_2 + 0xb) != '\0')) {
      puVar9 = puVar15;
      do {
        uVar25 = (uint)*puVar9;
        if ((uVar25 >> 0x17 & 1) != 0) {
          uVar24 = CONCAT44(uVar25,uVar25) & 0x7fffff007fffff;
          if (((short *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))
                                            + POPCOUNT((char)(uVar24 >> 0x10))) + 2] != (short *)0x0
              ) && (*(short *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                                   POPCOUNT((char)(uVar24 >> 8)) +
                                                  POPCOUNT((char)(uVar24 >> 0x10))) + 2] != 0)) {
            uVar25 = 1;
            goto LAB_031da1a0;
          }
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      bVar5 = false;
      uVar25 = 0;
      uVar6 = 0;
    }
    else if (uVar25 == 0) {
LAB_031da054:
      bVar5 = false;
      uVar6 = 0;
      uVar14 = uVar12;
    }
    else {
LAB_031da1a0:
      if ((char)param_2[2] == '\0') {
        if ((*(char *)((long)param_2 + 9) == '\0') && (*(char *)((long)param_2 + 10) == '\0'))
        goto LAB_031da054;
        uVar22 = 0;
        puVar9 = puVar15;
        do {
          uVar20 = (uint)*puVar9;
          uVar6 = (uint)((long)(int)param_2[1] << 2);
          if ((uVar20 >> 0x14 & 1) != 0) {
            uVar24 = CONCAT44(uVar20,uVar20) & 0xfffff000fffff;
            if (puVar9[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                    POPCOUNT((char)(uVar24 >> 0x10))) + 2] != 0) {
              uVar24 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                           POPCOUNT((char)(uVar24 >> 0x10))) + 2] >> 0x1c & 0xf;
              iVar7 = (int)uVar24;
              uVar20 = 1 << uVar24;
              if (iVar7 == 0xf) {
                uVar20 = uVar6;
              }
              uVar2 = 0;
              if (iVar7 != 0) {
                uVar2 = uVar20;
              }
              if ((int)uVar2 <= (int)uVar22) {
                uVar2 = uVar22;
              }
              uVar22 = uVar2;
            }
          }
        } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
        if (uVar12 == uVar22) {
          plVar19 = (long *)0x0;
          plVar17 = (long *)0x0;
          puVar9 = (ulong *)0x0;
          uVar14 = 1;
LAB_031da794:
          plVar17 = plVar17 + 1;
          puVar21 = puVar9;
          if (plVar19 <= plVar17) {
            if (puVar15 == puVar9) goto LAB_031da908;
            psVar10 = (short *)0x0;
            puVar21 = (ulong *)0x0;
            puVar18 = puVar15;
            do {
              uVar22 = (uint)*puVar18;
              if ((uVar22 >> 0x17 & 1) != 0) {
                uVar24 = CONCAT44(uVar22,uVar22) & 0x7fffff007fffff;
                psVar23 = (short *)puVar18[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                                         POPCOUNT((char)(uVar24 >> 8)) +
                                                        POPCOUNT((char)(uVar24 >> 0x10))) + 2];
                if (psVar23 != (short *)0x0) {
                  if ((int)psVar23[1] + (int)*psVar23 != 0) {
                    psVar10 = psVar23;
                    puVar21 = puVar18;
                  }
                }
              }
              puVar18 = (ulong *)puVar18[1];
            } while (puVar18 != puVar9);
            if (puVar21 == (ulong *)0x0) goto LAB_031da908;
            plVar17 = (long *)(psVar10 + 4);
            plVar19 = plVar17 + (long)psVar10[1] + (long)*psVar10;
          }
          uVar22 = (uint)*(undefined8 *)*plVar17;
          if ((uVar22 >> 0x11 & 1) == 0) {
            uVar22 = 0;
          }
          else {
            uVar24 = CONCAT44(uVar22,uVar22) & 0x1ffff0001ffff;
            uVar22 = (uint)*(ushort *)
                            (*plVar17 +
                            (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                         POPCOUNT((char)(uVar24 >> 0x10))) * 8 + 0x12);
          }
          puVar9 = puVar21;
          if ((uVar22 >> 5 & 1) != 0) {
            uVar22 = (uint)*(undefined8 *)*plVar17;
            if ((uVar22 >> 0x14 & 1) == 0) {
              uVar22 = 0;
LAB_031da898:
              uVar22 = uVar22 >> 0x10 & 0xfff;
            }
            else {
              uVar24 = CONCAT44(uVar22,uVar22) & 0xfffff000fffff;
              uVar22 = *(uint *)((undefined8 *)*plVar17 +
                                (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))
                                             + POPCOUNT((char)(uVar24 >> 0x10))) + 2);
              uVar20 = uVar22 >> 0x1c;
              if (uVar20 == 0xf) {
                uVar22 = uVar22 >> 0x10 & 0xfff;
                if ((ulong)uVar22 <= (ulong)((long)(int)param_2[1] << 2)) {
                  uVar22 = uVar6;
                }
              }
              else {
                if (uVar20 == 0) goto LAB_031da898;
                uVar22 = uVar22 >> 0x10 & 0xfff;
                if (uVar22 <= (uint)(1 << (ulong)uVar20)) {
                  uVar22 = 1 << (ulong)uVar20;
                }
              }
            }
            if ((int)uVar22 <= (int)uVar14) {
              uVar22 = uVar14;
            }
            uVar14 = uVar22;
          }
          goto LAB_031da794;
        }
        uVar6 = 0;
        if (((uVar12 < 8) || (*(char *)((long)param_2 + 9) == '\0')) || (uVar22 != 0)) {
          bVar5 = false;
        }
        else {
          iVar7 = FUN_031da9a0(puVar15,*param_2);
          uVar12 = iVar7 + 7U & 0xfffffff8;
          uVar6 = 0;
          if ((int)uVar25 <= (int)uVar12) {
            uVar12 = uVar25;
          }
          bVar5 = false;
          uVar25 = uVar12;
        }
      }
      else {
        uVar6 = FUN_031da9a0(puVar15,*param_2);
        bVar5 = false;
        if ((int)uVar25 <= (int)uVar6) {
          uVar6 = uVar25;
        }
        uVar25 = uVar6;
        uVar6 = 0;
      }
    }
  }
LAB_031da1c4:
  if ((uVar8 >> 0x14 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)*param_1 & 0xfffff;
    uVar24 = puVar13[(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                           POPCOUNT((char)(uVar12 >> 0x10)))] >> 0x1c & 0xf;
    iVar7 = (int)uVar24;
    uVar12 = (uint)puVar13[(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                                 POPCOUNT((char)(uVar12 >> 0x10)))];
    if (iVar7 == 0xf) {
      uVar12 = uVar12 >> 0x10 & 0xfff;
      if ((ulong)uVar12 <= (ulong)((long)(int)param_2[1] << 2)) {
        uVar12 = (uint)((long)(int)param_2[1] << 2);
      }
      goto LAB_031da208;
    }
    if (iVar7 != 0) {
      uVar12 = uVar12 >> 0x10 & 0xfff;
      uVar22 = 1 << uVar24;
      if (uVar12 <= uVar22) {
        uVar12 = uVar22;
      }
      goto LAB_031da208;
    }
  }
  uVar12 = uVar12 >> 0x10 & 0xfff;
LAB_031da208:
  uVar24 = 0;
  if ((int)uVar12 <= (int)uVar14) {
    uVar12 = uVar14;
  }
  puVar9 = param_1;
  do {
    uVar14 = (uint)*puVar9;
    if ((uVar14 >> 0x15 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar14 = uVar14 & 0x1fffff;
      uVar16 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                   POPCOUNT((char)(uVar14 >> 0x10))) + 2];
    }
    uVar24 = uVar16 | uVar24;
  } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
  uVar14 = uVar12;
  if (((uint)uVar24 >> 7 & 1) != 0) {
    uVar22 = *param_2;
    uVar14 = uVar22;
    if ((int)uVar22 <= (int)uVar12) {
      uVar14 = uVar12;
    }
    iVar7 = 0;
    if (uVar14 != 0) {
      iVar7 = (int)uVar25 / (int)uVar14;
    }
    iVar4 = uVar25 - iVar7 * uVar14;
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = uVar14 - iVar4;
    }
    uVar25 = uVar22 + uVar25 + iVar7;
  }
  if ((((uVar8 >> 0xe & 1) != 0) &&
      (uVar12 = (uint)*param_1 & 0x3fff,
      puVar9 = (ulong *)puVar13[(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)))],
      puVar9 != (ulong *)0x0)) && (uVar24 = *puVar9, 0 < (int)uVar24)) {
    uVar16 = 0;
    uVar8 = uVar14;
    do {
      puVar18 = (ulong *)puVar9[uVar16 * 2 + 1];
      puVar21 = puVar18;
      do {
        uVar14 = (uint)*puVar21;
        if ((uVar14 >> 0x14 & 1) != 0) {
          if (puVar21 != (ulong *)0x0) {
            uVar14 = uVar14 & 0xfffff;
            puVar21 = (ulong *)(ulong)(ushort)puVar21[(ulong)(byte)(POPCOUNT((char)uVar14) +
                                                                    POPCOUNT((char)(uVar14 >> 8)) +
                                                                   POPCOUNT((char)(uVar14 >> 0x10)))
                                                      + 2];
          }
          break;
        }
        if ((*puVar21 & 1) != 0) {
          puVar21 = (ulong *)0x0;
          break;
        }
        puVar21 = (ulong *)puVar21[1];
      } while (puVar21 != (ulong *)0x0);
      do {
        uVar14 = (uint)*puVar18;
        if ((uVar14 >> 0x14 & 1) != 0) {
          uVar12 = 0;
          if (puVar18 != (ulong *)0x0) {
            uVar14 = uVar14 & 0xfffff;
            uVar12 = *(ushort *)
                      ((long)puVar18 +
                      (ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                   POPCOUNT((char)(uVar14 >> 0x10))) * 8 + 0x12) & 0xfff;
          }
          goto LAB_031da35c;
        }
        if ((*puVar18 & 1) != 0) {
          uVar12 = 0;
          goto LAB_031da35c;
        }
        puVar18 = (ulong *)puVar18[1];
      } while (puVar18 != (ulong *)0x0);
      uVar12 = 0;
LAB_031da35c:
      iVar7 = 0;
      if (uVar12 != 0) {
        iVar7 = (int)uVar25 / (int)uVar12;
      }
      uVar14 = uVar12;
      if ((int)uVar12 <= (int)uVar8) {
        uVar14 = uVar8;
      }
      uVar1 = uVar16 + 1;
      iVar4 = uVar25 - iVar7 * uVar12;
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = uVar12 - iVar4;
      }
      iVar7 = iVar7 + uVar25;
      uVar25 = iVar7 + (int)puVar21;
      puVar9[uVar16 * 2 + 2] = (long)iVar7;
      uVar16 = uVar1;
      uVar8 = uVar14;
    } while (uVar1 != (uVar24 & 0xffffffff));
    uVar8 = (uint)*param_1;
  }
  if ((uVar8 >> 0x17 & 1) != 0) {
    uVar24 = CONCAT44((int)*param_1,(int)*param_1) & 0x7fffff007fffff;
    psVar10 = (short *)puVar13[(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                     POPCOUNT((char)(uVar24 >> 0x10)))];
    if ((psVar10 != (short *)0x0) && (sVar3 = *psVar10, (long)sVar3 != 0)) {
      plVar17 = (long *)(psVar10 + 4);
      do {
        puVar21 = (ulong *)*plVar17;
        FUN_031d9d10(puVar21,param_2);
        puVar9 = puVar21;
        do {
          uVar8 = (uint)*puVar9;
          if ((uVar8 >> 0x14 & 1) != 0) {
            uVar12 = 0;
            if (puVar9 != (ulong *)0x0) {
              uVar8 = uVar8 & 0xfffff;
              uVar12 = *(ushort *)
                        ((long)puVar9 +
                        (ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                     POPCOUNT((char)(uVar8 >> 0x10))) * 8 + 0x12) & 0xfff;
            }
            goto LAB_031da434;
          }
          if ((*puVar9 & 1) != 0) {
            uVar12 = 0;
            goto LAB_031da434;
          }
          puVar9 = (ulong *)puVar9[1];
        } while (puVar9 != (ulong *)0x0);
        uVar12 = 0;
LAB_031da434:
        if (((uint)*puVar21 >> 0x14 & 1) == 0) {
          uVar8 = 0;
LAB_031da474:
          uVar8 = uVar8 >> 0x10 & 0xfff;
        }
        else {
          uVar8 = (uint)*puVar21 & 0xfffff;
          uVar8 = (uint)puVar21[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                             POPCOUNT((char)(uVar8 >> 0x10))) + 2];
          uVar22 = uVar8 >> 0x1c;
          if (uVar22 == 0xf) {
            uVar8 = uVar8 >> 0x10 & 0xfff;
            if ((ulong)uVar8 <= (ulong)((long)(int)param_2[1] << 2)) {
              uVar8 = (uint)((long)(int)param_2[1] << 2);
            }
          }
          else {
            if (uVar22 == 0) goto LAB_031da474;
            uVar8 = uVar8 >> 0x10 & 0xfff;
            if (uVar8 <= (uint)(1 << (ulong)uVar22)) {
              uVar8 = 1 << (ulong)uVar22;
            }
          }
        }
        if ((int)uVar8 <= (int)uVar12) {
          uVar8 = uVar12;
        }
        if (uVar8 != 0) {
          uVar12 = uVar8;
          if ((int)uVar8 <= (int)uVar14) {
            uVar12 = uVar14;
          }
          uVar25 = (uVar25 + uVar8) - 1 & -uVar8;
          uVar14 = uVar12;
        }
        puVar11 = (undefined8 *)*plVar17;
        uVar8 = (uint)*puVar11;
        uVar24 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
        bVar26 = POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                 POPCOUNT((char)(uVar24 >> 0x10));
        if ((uVar8 >> 0x11 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)*(ushort *)((long)puVar11 + (ulong)bVar26 * 8 + 0x12);
        }
        puVar11[(ulong)bVar26 + 2] = (ulong)(uVar25 & 0xffff | uVar8 << 0x10);
        do {
          uVar8 = (uint)*puVar21;
          if ((uVar8 >> 0x14 & 1) != 0) {
            uVar24 = CONCAT44(uVar8,uVar8) & 0xfffff000fffff;
            uVar8 = (uint)(ushort)puVar21[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                                        POPCOUNT((char)(uVar24 >> 8)) +
                                                       POPCOUNT((char)(uVar24 >> 0x10))) + 2];
            goto LAB_031da554;
          }
        } while (((*puVar21 & 1) == 0) && (puVar21 = (ulong *)puVar21[1], puVar21 != (ulong *)0x0));
        uVar8 = 0;
LAB_031da554:
        plVar17 = plVar17 + 1;
        uVar25 = uVar8 + uVar25;
      } while (plVar17 != (long *)(psVar10 + (long)sVar3 * 4 + 4));
    }
  }
  if ((int)uVar25 <= (int)param_2[3]) {
    uVar25 = param_2[3];
  }
  if ((int)uVar6 <= (int)uVar14) {
    uVar6 = uVar14;
  }
  if (uVar6 != 0) {
    iVar7 = 0;
    if (uVar6 != 0) {
      iVar7 = (int)uVar25 / (int)uVar6;
    }
    iVar4 = uVar25 - iVar7 * uVar6;
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = uVar6 - iVar4;
    }
    uVar25 = iVar7 + uVar25;
  }
  if ((int)uVar25 < 2) {
    uVar25 = 1;
  }
  if (!bVar5) {
    while( true ) {
      uVar8 = (uint)*puVar15;
      if ((uVar8 >> 0x14 & 1) != 0) break;
      if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
      goto LAB_031da664;
    }
    if ((puVar15 != (ulong *)0x0) &&
       (uVar8 = uVar8 & 0xfffff,
       (int)uVar25 <
       (int)(uint)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                               + POPCOUNT((char)(uVar8 >> 0x10))) + 2])) {
      local_a0 = 1;
      uStack_98 = 0;
      local_90 = auStack_270;
      uStack_88 = 0;
      local_b0 = PTR_DAT_047e34b8 + 0x10;
      uStack_a8 = 0xffffffff;
      local_80 = 0x1bf;
      local_78 = 0;
      memset(auStack_270,0,0x1c0);
      FUN_0322bd4c(&local_b0,
                   "Child\'s final size is less than parent\'s! (Do you have a trailing unreflected field?)"
                   ,0x55);
      iVar7 = FUN_03226f50(0x71544192,auStack_270,
                           "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkRecordLayout.cpp"
                           ,0x13d);
      if (iVar7 != 0) {
        CallSupervisor(0x26);
      }
    }
  }
LAB_031da664:
  uVar8 = (uint)*param_1 & 0xfffff;
  bVar26 = POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) + POPCOUNT((char)(uVar8 >> 0x10));
  if (((uint)*param_1 >> 0x14 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)puVar13[bVar26] & 0xf0000000;
  }
  puVar13[bVar26] = (ulong)(uVar25 & 0xffff | (uVar6 & 0xfff) << 0x10 | uVar8);
  return;
LAB_031da908:
  puVar9 = puVar15;
  do {
    uVar24 = 0;
    puVar21 = puVar9;
    do {
      uVar6 = (uint)*puVar21;
      if ((uVar6 >> 0x15 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = CONCAT44(uVar6,uVar6) & 0x1fffff001fffff;
        uVar16 = puVar21[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                                      POPCOUNT((char)(uVar16 >> 0x10))) + 2];
      }
      uVar24 = uVar16 | uVar24;
    } while (((*puVar21 & 1) == 0) && (puVar21 = (ulong *)puVar21[1], puVar21 != (ulong *)0x0));
    if (((uint)uVar24 >> 7 & 1) != 0) {
      if ((int)uVar14 <= (int)*param_2) {
        uVar14 = *param_2;
      }
      break;
    }
    puVar9 = (ulong *)puVar9[1];
  } while (puVar9 != (ulong *)0x0);
  if ((int)uVar12 <= (int)uVar14) goto LAB_031da054;
  uVar6 = FUN_031da9a0(puVar15);
  bVar5 = false;
  if ((int)uVar25 <= (int)uVar6) {
    uVar6 = uVar25;
  }
  uVar25 = uVar6;
  uVar6 = uVar12;
  goto LAB_031da1c4;
}


