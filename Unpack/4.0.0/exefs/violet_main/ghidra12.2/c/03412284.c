/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03412284; name: FUN_03412284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03412284(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  
  uVar20 = *(uint *)(param_1 + 0x38);
  plVar13 = (long *)(param_1 + 0x30);
  if (uVar20 != 0) {
    uVar10 = 0;
    if (uVar20 != 0) {
      uVar10 = (uint)param_2 / uVar20;
    }
    for (plVar17 = *(long **)(*plVar13 + (ulong)((uint)param_2 - uVar10 * uVar20) * 8);
        plVar17 != (long *)0x0; plVar17 = (long *)plVar17[8]) {
      if (*plVar17 == param_2) {
        plVar19 = (long *)plVar17[7];
        FUN_0341791c(plVar17,param_1 + 0x70);
        FUN_0341655c(plVar17);
        if ((plVar19 != (long *)0x0) && ((int)plVar19[7] == 0)) {
          if (plVar19[2] != 0) {
            FUN_03415768(plVar19 + 1);
            plVar19[2] = 0;
          }
          plVar8 = *(long **)(param_1 + 0x80);
          plVar14 = (long *)0x0;
          if ((plVar8 == (long *)0x0) || (plVar19 == plVar8)) {
            plVar15 = plVar8;
          }
          else {
            plVar15 = plVar8;
            do {
              plVar14 = plVar15;
              plVar15 = (long *)*plVar14;
            } while (plVar15 != (long *)0x0 && plVar19 != plVar15);
          }
          if (plVar15 != (long *)0x0) {
            plVar2 = (long *)(param_1 + 0x80);
            if (plVar8 != plVar15) {
              plVar2 = plVar14;
            }
            *plVar2 = *plVar15;
          }
          if (plVar19[2] != 0) {
            FUN_03415768(plVar19 + 1);
            plVar19[2] = 0;
          }
          plVar19[1] = (long)&PTR_FUN_047bf4e0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,plVar19);
        }
        goto LAB_03412578;
      }
    }
  }
  plVar19 = (long *)(param_1 + 0x68);
  for (plVar8 = (long *)*plVar19; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x340]) {
    if (plVar8[0x342] != 0) goto LAB_034123f4;
  }
  plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(10,0x1a18);
  if (plVar8 != (long *)0x0) {
    lVar11 = 0x3f;
    plVar8[0x340] = 0;
    *(undefined4 *)(plVar8 + 0x341) = 0;
    plVar8[0x342] = 0;
    plVar17 = plVar8;
    do {
      plVar8[0x342] = (long)plVar17;
      *plVar17 = 0;
      while( true ) {
        *(int *)(plVar8 + 0x341) = (int)plVar8[0x341] + 1;
        if (lVar11 == 0) {
          if (*plVar19 == 0) {
            *plVar19 = (long)plVar8;
            plVar8[0x340] = 0;
          }
          else {
            plVar8[0x340] = *plVar19;
            *plVar19 = (long)plVar8;
          }
          goto LAB_034123f4;
        }
        lVar11 = lVar11 + -1;
        plVar17 = plVar17 + 0xd;
        if (plVar8[0x342] == 0) break;
        *plVar17 = plVar8[0x342];
        plVar8[0x342] = (long)plVar17;
      }
    } while( true );
  }
LAB_034129d8:
  iVar7 = 2;
LAB_034129dc:
  *(undefined1 *)(param_1 + 0x8c) = 1;
  if (*param_3 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
  }
  if (param_3[2] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
  }
  puVar6 = PTR_DAT_047e2fd0;
  lVar11 = param_3[4];
  if (lVar11 != 0) {
    uVar9 = *(ushort *)(param_3 + 5);
    if (uVar9 != 0) {
      uVar22 = 1;
      lVar18 = 8;
      while( true ) {
        if (*(long *)(lVar11 + lVar18) != 0) {
          (**(code **)(puVar6 + 0x30))(10);
          uVar9 = *(ushort *)(param_3 + 5);
        }
        if (uVar9 <= uVar22) break;
        lVar11 = param_3[4];
        uVar22 = uVar22 + 1;
        lVar18 = lVar18 + 0x10;
      }
      lVar11 = param_3[4];
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10,lVar11);
  }
  *(undefined2 *)(param_3 + 1) = 0;
  *param_3 = 0;
  *(undefined2 *)(param_3 + 3) = 0;
  param_3[2] = 0;
  *(undefined2 *)(param_3 + 5) = 0;
  param_3[4] = 0;
  return iVar7;
LAB_034123f4:
  plVar17 = (long *)plVar8[0x342];
  if (plVar17 != (long *)0x0) {
    if (*plVar17 == 0) {
      plVar8[0x342] = 0;
    }
    else {
      plVar8[0x342] = *plVar17;
    }
    *(int *)(plVar8 + 0x341) = (int)plVar8[0x341] + -1;
    *plVar17 = param_2;
    plVar17[1] = 0;
    plVar17[2] = 0;
    plVar17[3] = 0;
    plVar17[8] = 0;
    *(undefined1 *)(plVar17 + 0xc) = 0;
    *(undefined2 *)((long)plVar17 + 0x61) = 1;
    *(undefined1 *)((long)plVar17 + 99) = 1;
    plVar17[4] = 0;
    plVar17[5] = 0;
    plVar17[6] = 0;
    plVar17[7] = 0;
    plVar17[10] = 0;
    plVar17[0xb] = 0;
    uVar20 = *(uint *)(param_1 + 0x38);
    if (uVar20 == 0) {
LAB_03412478:
      uVar22 = 0x1d;
      goto LAB_0341247c;
    }
    fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40));
    if (0.9 < fVar23 / (float)uVar20) {
      if (uVar20 < 0x1d) goto LAB_03412478;
      if (uVar20 < 0x35) {
        uVar22 = 0x35;
LAB_0341247c:
        lVar18 = *(long *)(param_1 + 0x30);
        uVar3 = *(undefined4 *)(param_1 + 0x3c);
        *plVar13 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        puVar6 = PTR_DAT_047e2fd0;
        lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(10,0,uVar22 << 3);
        if (lVar11 != 0) {
          uVar21 = (uint)uVar22;
          *(long *)(param_1 + 0x30) = lVar11;
          *(uint *)(param_1 + 0x3c) = uVar21;
          uVar10 = uVar21;
          while( true ) {
            uVar10 = uVar10 - 1;
            uVar4 = *(uint *)(param_1 + 0x38);
            if (uVar4 < (uint)uVar22) {
              *(uint *)(param_1 + 0x38) = uVar4 + 1;
              if (*(long *)(param_1 + 0x30) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 8) = 0;
              }
            }
            if (uVar10 == 0) break;
            uVar22 = (ulong)*(uint *)(param_1 + 0x3c);
          }
          if (uVar20 != 0) {
            uVar22 = 0;
            do {
              puVar5 = *(uint **)(lVar18 + uVar22 * 8);
              while (puVar5 != (uint *)0x0) {
                uVar10 = 0;
                if (uVar21 != 0) {
                  uVar10 = *puVar5 / uVar21;
                }
                puVar16 = *(uint **)(puVar5 + 0x10);
                uVar10 = *puVar5 - uVar10 * uVar21;
                *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(*plVar13 + (ulong)uVar10 * 8);
                *(uint **)(*plVar13 + (ulong)uVar10 * 8) = puVar5;
                puVar5 = puVar16;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar20);
          }
          if (lVar18 != 0) {
            (**(code **)(puVar6 + 0x30))(10,lVar18);
          }
          goto LAB_03412544;
        }
        if (*plVar13 != 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
          (**(code **)(puVar6 + 0x30))(10);
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x3c) = 0;
        }
        *(long *)(param_1 + 0x30) = lVar18;
        *(uint *)(param_1 + 0x38) = uVar20;
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
      }
      else {
        if (uVar20 < 0x61) {
          uVar22 = 0x61;
          goto LAB_0341247c;
        }
        if (uVar20 < 0xc1) {
          uVar22 = 0xc1;
          goto LAB_0341247c;
        }
        if (uVar20 < 0x185) {
          uVar22 = 0x185;
          goto LAB_0341247c;
        }
        if (uVar20 < 0x301) {
          uVar22 = 0x301;
          goto LAB_0341247c;
        }
        if (uVar20 < 0x607) {
          uVar22 = 0x607;
          goto LAB_0341247c;
        }
        if (uVar20 < 0xc07) {
          uVar22 = 0xc07;
          goto LAB_0341247c;
        }
        uVar22 = 0x1807;
        if (uVar20 < 0x1807) goto LAB_0341247c;
        if (uVar20 < 0x3001) {
          uVar22 = 0x3001;
          goto LAB_0341247c;
        }
        uVar22 = 0x6011;
        if ((((uVar20 < 0x6011) || (uVar22 = 0xc005, uVar20 < 0xc005)) ||
            (uVar22 = 0x1800d, uVar20 < 0x1800d)) ||
           ((uVar22 = 0x30005, uVar20 < 0x30005 || (uVar22 = 0x60019, uVar20 < 0x60019))))
        goto LAB_0341247c;
        if (uVar20 < 0xc0001) {
          uVar22 = 0xc0001;
          goto LAB_0341247c;
        }
        uVar22 = 0x180005;
        if (((((uVar20 < 0x180005) || (uVar22 = 0x30000b, uVar20 < 0x30000b)) ||
             ((uVar22 = 0x60000d, uVar20 < 0x60000d ||
              (((uVar22 = 0xc00005, uVar20 < 0xc00005 || (uVar22 = 0x1800013, uVar20 < 0x1800013))
               || (uVar22 = 0x3000005, uVar20 < 0x3000005)))))) ||
            ((uVar22 = 0x6000017, uVar20 < 0x6000017 || (uVar22 = 0xc000013, uVar20 < 0xc000013))))
           || ((uVar22 = 0x18000005, uVar20 < 0x18000005 ||
               ((uVar22 = 0x30000059, uVar20 < 0x30000059 ||
                (uVar22 = 0x60000005, uVar20 < 0x60000005)))))) goto LAB_0341247c;
LAB_03412544:
        uVar20 = *(uint *)(param_1 + 0x38);
      }
      if (uVar20 == 0) {
        FUN_0341655c(plVar17);
        plVar13 = (long *)*plVar19;
        if (plVar13 == (long *)0x0) {
LAB_03412858:
          if (_DAT_00001a10 == (long *)0x0) {
            _DAT_00001a10 = plVar17;
            *plVar17 = 0;
          }
          else {
            *plVar17 = (long)_DAT_00001a10;
            _DAT_00001a10 = plVar17;
          }
          _DAT_00001a08 = _DAT_00001a08 + 1;
        }
        else {
          if ((plVar17 < plVar13) || (plVar13 + 0x340 <= plVar17)) {
            do {
              plVar8 = plVar13;
              plVar13 = (long *)plVar8[0x340];
              if (plVar13 == (long *)0x0) goto LAB_03412858;
            } while ((plVar17 < plVar13) || (plVar13 + 0x340 <= plVar17));
          }
          else {
            plVar8 = (long *)0x0;
          }
          if (plVar13[0x342] == 0) {
            plVar13[0x342] = (long)plVar17;
            *plVar17 = 0;
          }
          else {
            *plVar17 = plVar13[0x342];
            plVar13[0x342] = (long)plVar17;
          }
          iVar7 = (int)plVar13[0x341] + 1;
          *(int *)(plVar13 + 0x341) = iVar7;
          if (iVar7 == 0x40) {
            if ((long *)*plVar19 != plVar13) {
              plVar19 = plVar8 + 0x340;
            }
            *plVar19 = plVar13[0x340];
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
          }
        }
        goto LAB_034129d8;
      }
      param_2 = *plVar17;
    }
    uVar10 = 0;
    if (uVar20 != 0) {
      uVar10 = (uint)param_2 / uVar20;
    }
    uVar20 = (uint)param_2 - uVar10 * uVar20;
    plVar17[8] = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar20 * 8);
    *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar20 * 8) = plVar17;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
LAB_03412578:
    plVar17[1] = *param_3;
    *(short *)(plVar17 + 6) = (short)param_3[1];
    plVar17[2] = param_3[2];
    *(short *)((long)plVar17 + 0x32) = (short)param_3[3];
    plVar17[3] = param_3[4];
    *(short *)((long)plVar17 + 0x34) = (short)param_3[5];
    *(undefined1 *)(plVar17 + 0xc) = 1;
    *(char *)((long)plVar17 + 0x61) = (char)param_3[7];
    *(undefined1 *)((long)plVar17 + 0x62) = *(undefined1 *)((long)param_3 + 0x39);
    *(undefined1 *)((long)plVar17 + 99) = *(undefined1 *)((long)param_3 + 0x3a);
    *param_3 = 0;
    *(undefined2 *)(param_3 + 1) = 0;
    param_3[2] = 0;
    *(undefined2 *)(param_3 + 3) = 0;
    param_3[4] = 0;
    *(undefined2 *)(param_3 + 5) = 0;
    if (param_3[6] == -1) {
      plVar19 = (long *)(param_1 + 0x78);
      goto LAB_03412684;
    }
    lVar11 = FUN_03412c3c(param_1);
    if (lVar11 == 0) {
LAB_034126d4:
      iVar7 = 0x34;
    }
    else {
      plVar19 = (long *)(lVar11 + 0xa8);
      if ((*plVar19 == 0) || (*plVar19 == *(long *)(param_1 + 0x78))) {
        lVar18 = FUN_03412f4c(param_1);
        lVar12 = *plVar19;
        if (lVar12 != lVar18) {
          if (lVar12 != 0) {
            *(int *)(lVar12 + 0x38) = *(int *)(lVar12 + 0x38) + -1;
          }
          *plVar19 = lVar18;
          if (lVar18 != 0) {
            *(int *)(lVar18 + 0x38) = *(int *)(lVar18 + 0x38) + 1;
          }
          if (*(int *)(lVar11 + 0x58) != 0) {
            plVar8 = *(long **)(lVar11 + 0x50);
            do {
              plVar14 = plVar8 + 1;
              *(undefined1 *)(*plVar8 + 0x60) = 1;
              plVar8 = plVar14;
            } while (plVar14 !=
                     (long *)(*(long *)(lVar11 + 0x50) + (ulong)*(uint *)(lVar11 + 0x58) * 8));
          }
          goto LAB_03412684;
        }
      }
      else {
LAB_03412684:
        lVar18 = *plVar19;
      }
      if (lVar18 == 0) goto LAB_034126d4;
      plVar17[7] = lVar18;
      *(int *)(lVar18 + 0x38) = *(int *)(lVar18 + 0x38) + 1;
      if ((*(char *)((long)plVar17 + 99) == '\0') ||
         (iVar7 = FUN_0341664c(plVar17,lVar18,param_1 + 0x70), iVar7 == 1)) {
        if (*(long *)(lVar18 + 0x30) == 0) {
          *(long **)(lVar18 + 0x30) = plVar17;
          plVar17[9] = 0;
        }
        else {
          plVar17[9] = *(long *)(lVar18 + 0x30);
          *(long **)(lVar18 + 0x30) = plVar17;
        }
        iVar7 = 1;
        *(undefined1 *)(lVar18 + 0x3c) = 1;
        goto LAB_034129dc;
      }
    }
    FUN_0341791c(plVar17,param_1 + 0x70);
    uVar20 = *(uint *)(param_1 + 0x38);
    if (uVar20 != 0) {
      lVar11 = *plVar17;
      uVar10 = 0;
      if (uVar20 != 0) {
        uVar10 = (uint)lVar11 / uVar20;
      }
      plVar13 = (long *)(*plVar13 + (ulong)((uint)lVar11 - uVar10 * uVar20) * 8);
      plVar19 = (long *)*plVar13;
      if (plVar19 != (long *)0x0) {
        if (*plVar19 != lVar11) {
          do {
            plVar13 = plVar19;
            plVar19 = (long *)plVar13[8];
            if (plVar19 == (long *)0x0) goto LAB_03412744;
          } while (*plVar19 != lVar11);
          plVar13 = plVar13 + 8;
        }
        *plVar13 = plVar19[8];
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      }
    }
LAB_03412744:
    FUN_0341655c(plVar17);
    plVar13 = (long *)(param_1 + 0x68);
    plVar19 = (long *)*plVar13;
    if (plVar19 == (long *)0x0) {
LAB_034127ac:
      if (_DAT_00001a10 == (long *)0x0) {
        _DAT_00001a10 = plVar17;
        *plVar17 = 0;
      }
      else {
        *plVar17 = (long)_DAT_00001a10;
        _DAT_00001a10 = plVar17;
      }
      _DAT_00001a08 = _DAT_00001a08 + 1;
    }
    else {
      if ((plVar17 < plVar19) || (plVar19 + 0x340 <= plVar17)) {
        do {
          plVar8 = plVar19;
          plVar19 = (long *)plVar8[0x340];
          if (plVar19 == (long *)0x0) goto LAB_034127ac;
        } while ((plVar17 < plVar19) || (plVar19 + 0x340 <= plVar17));
      }
      else {
        plVar8 = (long *)0x0;
      }
      if (plVar19[0x342] == 0) {
        plVar19[0x342] = (long)plVar17;
        *plVar17 = 0;
      }
      else {
        *plVar17 = plVar19[0x342];
        plVar19[0x342] = (long)plVar17;
      }
      iVar1 = (int)plVar19[0x341] + 1;
      *(int *)(plVar19 + 0x341) = iVar1;
      if (iVar1 == 0x40) {
        if ((long *)*plVar13 != plVar19) {
          plVar13 = plVar8 + 0x340;
        }
        *plVar13 = plVar19[0x340];
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
      }
    }
    goto LAB_034129dc;
  }
  goto LAB_034129d8;
}


