/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03413774; name: FUN_03413774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03413774(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  
  uVar19 = *(uint *)(param_1 + 0x20);
  plVar8 = (long *)(param_1 + 0x18);
  uVar16 = (uint)param_2;
  if (uVar19 != 0) {
    uVar7 = 0;
    if (uVar19 != 0) {
      uVar7 = uVar16 / uVar19;
    }
    for (plVar15 = *(long **)(*plVar8 + (ulong)(uVar16 - uVar7 * uVar19) * 8);
        plVar15 != (long *)0x0; plVar15 = (long *)plVar15[0xe]) {
      if (plVar15[0xd] == param_2) goto LAB_03413c7c;
    }
  }
  plVar20 = (long *)(param_1 + 0x60);
  for (plVar6 = (long *)*plVar20; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x3480]) {
    if (plVar6[0x3482] != 0) goto LAB_034138a8;
  }
  plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(10,0x1a418,0x10);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 0x3480;
    *plVar2 = 0;
    lVar10 = 0x3f;
    *(undefined4 *)(plVar6 + 0x3481) = 0;
    plVar6[0x3482] = 0;
    plVar15 = plVar6;
    do {
      plVar6[0x3482] = (long)plVar15;
      *plVar15 = 0;
      while( true ) {
        if (lVar10 == 0) {
          *(undefined4 *)(plVar6 + 0x3481) = 0x40;
          if (*plVar20 == 0) {
            *plVar20 = (long)plVar6;
            *plVar2 = 0;
          }
          else {
            *plVar2 = *plVar20;
            *plVar20 = (long)plVar6;
          }
          goto LAB_034138a8;
        }
        lVar10 = lVar10 + -1;
        plVar15 = plVar15 + 0xd2;
        if (plVar6[0x3482] == 0) break;
        *plVar15 = plVar6[0x3482];
        plVar6[0x3482] = (long)plVar15;
      }
    } while( true );
  }
LAB_03413ff4:
  uVar17 = 0x34;
LAB_03413ff8:
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return uVar17;
LAB_034138a8:
  plVar15 = (long *)plVar6[0x3482];
  if (plVar15 != (long *)0x0) {
    if (*plVar15 == 0) {
      plVar6[0x3482] = 0;
    }
    else {
      plVar6[0x3482] = *plVar15;
    }
    *(int *)(plVar6 + 0x3481) = (int)plVar6[0x3481] + -1;
    *(undefined1 *)(plVar15 + 9) = 0;
    plVar15[10] = 0;
    plVar15[0xb] = 0;
    plVar15[6] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[0x11] = (long)&PTR_LAB_047bf500;
    plVar15[8] = 0;
    *(undefined4 *)(plVar15 + 0x17) = 0xffffffff;
    *(undefined8 *)((long)plVar15 + 0xc4) = 0;
    *(undefined8 *)((long)plVar15 + 0xbc) = 0x3f800000;
    *(undefined4 *)(plVar15 + 7) = 0;
    *(undefined1 *)(plVar15 + 0xc) = 1;
    *(undefined4 *)(plVar15 + 0x14) = 0;
    *(undefined1 *)(plVar15 + 0x36) = 0;
    plVar15[2] = 0;
    plVar15[3] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[0x15] = 0;
    plVar15[0x16] = 0;
    plVar15[0x12] = 0;
    plVar15[0x13] = 0;
    plVar15[0xf] = 0;
    plVar15[0x10] = 0;
    plVar15[0xd] = param_2;
    plVar15[0xe] = 0;
    plVar15[0x20] = 0;
    plVar15[0x21] = 0;
    plVar15[0x34] = 0;
    plVar15[0x35] = 0;
    plVar15[0x37] = 0;
    plVar15[0x38] = 0;
    *(undefined8 *)((long)plVar15 + 0x1c5) = 0;
    plVar15[0x44] = 0;
    plVar15[0x45] = 0;
    *(undefined1 *)(plVar15 + 0x46) = 0;
    memset(plVar15 + 0x3a,0,0x49);
    plVar15[0x47] = 0;
    plVar15[0x48] = 0;
    *(undefined8 *)((long)plVar15 + 0x245) = 0;
    plVar15[0x54] = 0;
    plVar15[0x55] = 0;
    *(undefined1 *)(plVar15 + 0x56) = 0;
    memset(plVar15 + 0x4a,0,0x49);
    plVar15[0x57] = 0;
    plVar15[0x58] = 0;
    *(undefined8 *)((long)plVar15 + 0x2c5) = 0;
    plVar15[100] = 0;
    plVar15[0x65] = 0;
    *(undefined1 *)(plVar15 + 0x66) = 0;
    memset(plVar15 + 0x5a,0,0x49);
    plVar15[0x68] = 0;
    *(undefined8 *)((long)plVar15 + 0x345) = 0;
    plVar15[0x67] = 0;
    plVar15[0x6a] = 0;
    memset(plVar15 + 0x28,0,0x59);
    *(undefined1 *)((long)plVar15 + 0x1cc) = 1;
    *(undefined1 *)((long)plVar15 + 0x24c) = 1;
    *(undefined1 *)((long)plVar15 + 0x2cc) = 1;
    *(undefined1 *)((long)plVar15 + 0x34c) = 1;
    plVar15[0x72] = 0;
    plVar15[0x73] = 0;
    plVar15[0x86] = 0;
    plVar15[0x87] = 0;
    *(undefined1 *)(plVar15 + 0x88) = 0;
    plVar15[0x89] = 0;
    plVar15[0x8a] = 0;
    *(undefined8 *)((long)plVar15 + 0x455) = 0;
    plVar15[0x96] = 0;
    plVar15[0x97] = 0;
    *(undefined1 *)(plVar15 + 0x98) = 0;
    memset(plVar15 + 0x8c,0,0x49);
    plVar15[0x99] = 0;
    plVar15[0x9a] = 0;
    *(undefined8 *)((long)plVar15 + 0x4d5) = 0;
    plVar15[0xa6] = 0;
    plVar15[0xa7] = 0;
    *(undefined1 *)(plVar15 + 0xa8) = 0;
    memset(plVar15 + 0x9c,0,0x49);
    plVar15[0xa9] = 0;
    plVar15[0xaa] = 0;
    *(undefined8 *)((long)plVar15 + 0x555) = 0;
    plVar15[0xb6] = 0;
    plVar15[0xb7] = 0;
    *(undefined1 *)(plVar15 + 0xb8) = 0;
    memset(plVar15 + 0xac,0,0x49);
    plVar15[0xb9] = 0;
    plVar15[0xba] = 0;
    *(undefined8 *)((long)plVar15 + 0x5d5) = 0;
    plVar15[0xbc] = 0;
    memset(plVar15 + 0x7a,0,0x59);
    *(undefined1 *)((long)plVar15 + 0x45c) = 1;
    *(undefined1 *)((long)plVar15 + 0x4dc) = 1;
    *(undefined1 *)((long)plVar15 + 0x55c) = 1;
    *(undefined1 *)((long)plVar15 + 0x5dc) = 1;
    plVar15[0xbe] = 0;
    plVar15[0xbf] = 0;
    plVar15[0xc1] = 0;
    plVar15[0xc2] = 0;
    *(undefined4 *)(plVar15 + 0xc3) = 0;
    plVar15[200] = 0;
    plVar15[0xc9] = 0;
    *(undefined4 *)(plVar15 + 0xca) = 0;
    plVar15[0xcb] = 0;
    *(undefined1 *)(plVar15 + 0xcc) = 0;
    plVar15[0xc4] = 0;
    plVar15[0xc5] = 0;
    plVar15[0xc6] = 0;
    plVar15[0xd0] = 0;
    plVar15[0xcf] = 0;
    puVar5 = PTR_DAT_047e2fd0;
    plVar15[0xce] = 0;
    plVar15[0xcd] = 0;
    lVar10 = (**(code **)(puVar5 + 0x10))(9,0x10);
    plVar15[10] = lVar10;
    if (lVar10 != 0) {
      *(undefined4 *)((long)plVar15 + 0x5c) = 2;
    }
    uVar19 = *(uint *)(param_1 + 0x20);
    if (uVar19 == 0) {
LAB_03413b80:
      uVar22 = 0x1d;
      goto LAB_03413b84;
    }
    fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x28));
    if (fVar23 / (float)uVar19 <= 0.9) {
LAB_03413c4c:
      uVar7 = 0;
      if (uVar19 != 0) {
        uVar7 = *(uint *)(plVar15 + 0xd) / uVar19;
      }
      uVar19 = *(uint *)(plVar15 + 0xd) - uVar7 * uVar19;
      plVar15[0xe] = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar19 * 8);
      *(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar19 * 8) = plVar15;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_03413c7c:
      FUN_034235e0(plVar15,param_3);
      uVar19 = *(uint *)(plVar15 + 0xb);
      if (uVar19 != 0) {
        plVar20 = (long *)plVar15[10];
        plVar6 = plVar20;
        do {
          lVar10 = *plVar20;
          uVar7 = *(uint *)(lVar10 + 0x58);
          if (uVar7 != 0) {
            lVar18 = (ulong)uVar7 << 3;
            puVar14 = *(undefined8 **)(lVar10 + 0x50);
LAB_03413cb4:
            if ((long *)*puVar14 != plVar15) goto code_r0x03413cc0;
            puVar11 = *(undefined8 **)(lVar10 + 0x50) + ((ulong)uVar7 - 1);
            if (puVar14 < puVar11) {
              do {
                puVar12 = puVar14 + 1;
                *puVar14 = *puVar12;
                puVar14 = puVar12;
              } while (puVar12 < puVar11);
              uVar7 = *(uint *)(lVar10 + 0x58);
            }
            *(uint *)(lVar10 + 0x58) = uVar7 - 1;
            *(undefined1 *)(lVar10 + 0x60) = 1;
            plVar6 = (long *)plVar15[10];
            uVar19 = *(uint *)(plVar15 + 0xb);
          }
LAB_03413d0c:
          plVar20 = plVar20 + 1;
        } while (plVar20 != plVar6 + uVar19);
      }
      *(undefined4 *)(plVar15 + 0xb) = 0;
      *(undefined1 *)(plVar15 + 0xc) = 1;
      lVar10 = FUN_03412c3c(param_1,*(undefined8 *)(param_3 + 0x48));
      if (lVar10 != 0) {
        FUN_034135a0(plVar15,lVar10,1);
        lVar10 = FUN_03412c3c(param_1,*(undefined8 *)(param_3 + 0x50));
        if (lVar10 != 0) {
          uVar17 = 1;
          FUN_034135a0(plVar15,lVar10,1);
          goto LAB_03413ff8;
        }
      }
      uVar19 = *(uint *)(param_1 + 0x20);
      if (uVar19 != 0) {
        uVar7 = 0;
        if (uVar19 != 0) {
          uVar7 = uVar16 / uVar19;
        }
        uVar22 = (ulong)(uVar16 - uVar7 * uVar19);
        lVar10 = *(long *)(*plVar8 + uVar22 * 8);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x68) == param_2) {
            *(undefined8 *)(*plVar8 + uVar22 * 8) = *(undefined8 *)(lVar10 + 0x70);
          }
          else {
            do {
              lVar18 = lVar10;
              lVar10 = *(long *)(lVar18 + 0x70);
              if (lVar10 == 0) goto LAB_03413dd0;
            } while (*(long *)(lVar10 + 0x68) != param_2);
            *(undefined8 *)(lVar18 + 0x70) = *(undefined8 *)(lVar10 + 0x70);
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        }
      }
LAB_03413dd0:
      FUN_03415fd0(plVar15);
      plVar8 = (long *)(param_1 + 0x60);
      plVar20 = (long *)*plVar8;
      if (plVar20 == (long *)0x0) {
LAB_03413f0c:
        if (_DAT_0001a410 == (long *)0x0) {
          _DAT_0001a410 = plVar15;
          *plVar15 = 0;
        }
        else {
          *plVar15 = (long)_DAT_0001a410;
          _DAT_0001a410 = plVar15;
        }
        _DAT_0001a408 = _DAT_0001a408 + 1;
      }
      else {
        if ((plVar15 < plVar20) || (plVar20 + 0x3480 <= plVar15)) {
          do {
            plVar6 = plVar20;
            plVar20 = (long *)plVar6[0x3480];
            if (plVar20 == (long *)0x0) goto LAB_03413f0c;
          } while (plVar15 < plVar20 || plVar20 + 0x3480 <= plVar15);
        }
        else {
          plVar6 = (long *)0x0;
        }
        if (plVar20[0x3482] == 0) {
          plVar20[0x3482] = (long)plVar15;
          *plVar15 = 0;
        }
        else {
          *plVar15 = plVar20[0x3482];
          plVar20[0x3482] = (long)plVar15;
        }
        iVar1 = (int)plVar20[0x3481] + 1;
        *(int *)(plVar20 + 0x3481) = iVar1;
        if (iVar1 == 0x40) {
          if ((long *)*plVar8 != plVar20) {
            plVar8 = plVar6 + 0x3480;
          }
          *plVar8 = plVar20[0x3480];
          pcVar9 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
          goto LAB_03413fec;
        }
      }
    }
    else {
      if (uVar19 < 0x1d) goto LAB_03413b80;
      if (uVar19 < 0x35) {
        uVar22 = 0x35;
LAB_03413b84:
        lVar18 = *(long *)(param_1 + 0x18);
        uVar3 = *(undefined4 *)(param_1 + 0x24);
        *plVar8 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        lVar10 = (**(code **)(puVar5 + 0x20))(10,0,uVar22 << 3);
        if (lVar10 != 0) {
          uVar21 = (uint)uVar22;
          *(long *)(param_1 + 0x18) = lVar10;
          *(uint *)(param_1 + 0x24) = uVar21;
          uVar7 = uVar21;
          while( true ) {
            uVar7 = uVar7 - 1;
            uVar4 = *(uint *)(param_1 + 0x20);
            if (uVar4 < (uint)uVar22) {
              *(uint *)(param_1 + 0x20) = uVar4 + 1;
              if (*(long *)(param_1 + 0x18) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 8) = 0;
              }
            }
            if (uVar7 == 0) break;
            uVar22 = (ulong)*(uint *)(param_1 + 0x24);
          }
          if (uVar19 != 0) {
            uVar22 = 0;
            do {
              lVar10 = *(long *)(lVar18 + uVar22 * 8);
              while (lVar10 != 0) {
                uVar7 = 0;
                if (uVar21 != 0) {
                  uVar7 = *(uint *)(lVar10 + 0x68) / uVar21;
                }
                lVar13 = *(long *)(lVar10 + 0x70);
                uVar7 = *(uint *)(lVar10 + 0x68) - uVar7 * uVar21;
                *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(*plVar8 + (ulong)uVar7 * 8);
                *(long *)(*plVar8 + (ulong)uVar7 * 8) = lVar10;
                lVar10 = lVar13;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar19);
          }
          if (lVar18 != 0) {
            (**(code **)(puVar5 + 0x30))(10,lVar18);
          }
          goto LAB_03413c44;
        }
        if (*plVar8 != 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          (**(code **)(puVar5 + 0x30))(10);
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
        *(long *)(param_1 + 0x18) = lVar18;
        *(uint *)(param_1 + 0x20) = uVar19;
        *(undefined4 *)(param_1 + 0x24) = uVar3;
      }
      else {
        if (uVar19 < 0x61) {
          uVar22 = 0x61;
          goto LAB_03413b84;
        }
        if (uVar19 < 0xc1) {
          uVar22 = 0xc1;
          goto LAB_03413b84;
        }
        if (uVar19 < 0x185) {
          uVar22 = 0x185;
          goto LAB_03413b84;
        }
        if (uVar19 < 0x301) {
          uVar22 = 0x301;
          goto LAB_03413b84;
        }
        if (uVar19 < 0x607) {
          uVar22 = 0x607;
          goto LAB_03413b84;
        }
        if (uVar19 < 0xc07) {
          uVar22 = 0xc07;
          goto LAB_03413b84;
        }
        uVar22 = 0x1807;
        if (uVar19 < 0x1807) goto LAB_03413b84;
        if (uVar19 < 0x3001) {
          uVar22 = 0x3001;
          goto LAB_03413b84;
        }
        uVar22 = 0x6011;
        if ((((uVar19 < 0x6011) || (uVar22 = 0xc005, uVar19 < 0xc005)) ||
            (uVar22 = 0x1800d, uVar19 < 0x1800d)) ||
           ((uVar22 = 0x30005, uVar19 < 0x30005 || (uVar22 = 0x60019, uVar19 < 0x60019))))
        goto LAB_03413b84;
        if (uVar19 < 0xc0001) {
          uVar22 = 0xc0001;
          goto LAB_03413b84;
        }
        uVar22 = 0x180005;
        if (((((uVar19 < 0x180005) || (uVar22 = 0x30000b, uVar19 < 0x30000b)) ||
             ((uVar22 = 0x60000d, uVar19 < 0x60000d ||
              (((uVar22 = 0xc00005, uVar19 < 0xc00005 || (uVar22 = 0x1800013, uVar19 < 0x1800013))
               || (uVar22 = 0x3000005, uVar19 < 0x3000005)))))) ||
            ((uVar22 = 0x6000017, uVar19 < 0x6000017 || (uVar22 = 0xc000013, uVar19 < 0xc000013))))
           || ((uVar22 = 0x18000005, uVar19 < 0x18000005 ||
               ((uVar22 = 0x30000059, uVar19 < 0x30000059 ||
                (uVar22 = 0x60000005, uVar19 < 0x60000005)))))) goto LAB_03413b84;
LAB_03413c44:
        uVar19 = *(uint *)(param_1 + 0x20);
      }
      if (uVar19 != 0) goto LAB_03413c4c;
      FUN_03415fd0(plVar15);
      plVar8 = (long *)*plVar20;
      if (plVar8 == (long *)0x0) goto LAB_03413f0c;
      if ((plVar15 < plVar8) || (plVar8 + 0x3480 <= plVar15)) {
        do {
          plVar6 = plVar8;
          plVar8 = (long *)plVar6[0x3480];
          if (plVar8 == (long *)0x0) goto LAB_03413f0c;
        } while (plVar15 < plVar8 || plVar8 + 0x3480 <= plVar15);
      }
      else {
        plVar6 = (long *)0x0;
      }
      if (plVar8[0x3482] == 0) {
        plVar8[0x3482] = (long)plVar15;
        *plVar15 = 0;
      }
      else {
        *plVar15 = plVar8[0x3482];
        plVar8[0x3482] = (long)plVar15;
      }
      iVar1 = (int)plVar8[0x3481] + 1;
      *(int *)(plVar8 + 0x3481) = iVar1;
      if (iVar1 != 0x40) goto LAB_03413ff4;
      if ((long *)*plVar20 != plVar8) {
        plVar20 = plVar6 + 0x3480;
      }
      *plVar20 = plVar8[0x3480];
      pcVar9 = *(code **)(puVar5 + 0x30);
LAB_03413fec:
      (*pcVar9)(10);
    }
  }
  goto LAB_03413ff4;
code_r0x03413cc0:
  puVar14 = puVar14 + 1;
  lVar18 = lVar18 + -8;
  if (lVar18 == 0) goto LAB_03413d0c;
  goto LAB_03413cb4;
}


