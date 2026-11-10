/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e4294; name: FUN_034e4294
 */


undefined8 FUN_034e4294(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (param_2 == 0) {
    return 0x34;
  }
  uVar19 = *(uint *)(param_1 + 4);
  plVar15 = param_1 + 3;
  uVar17 = (uint)param_2;
  if (uVar19 != 0) {
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = uVar17 / uVar19;
    }
    for (plVar16 = *(long **)(*plVar15 + (ulong)(uVar17 - uVar6 * uVar19) * 8);
        plVar16 != (long *)0x0; plVar16 = (long *)plVar16[1]) {
      if (*plVar16 == param_2) {
        uVar19 = *(uint *)(param_1 + 1);
        if (uVar19 == 0) goto LAB_034e456c;
        uVar6 = *(uint *)(plVar16 + 2);
        uVar20 = 0;
        if (uVar19 != 0) {
          uVar20 = uVar6 / uVar19;
        }
        puVar8 = *(uint **)(*param_1 + (ulong)(uVar6 - uVar20 * uVar19) * 8);
        goto joined_r0x034e4444;
      }
    }
  }
  plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x18);
  bVar5 = true;
  if (plVar16 == (long *)0x0) goto LAB_034e46c4;
  *(undefined1 *)((long)plVar16 + 0x14) = 1;
  *plVar16 = param_2;
  *(undefined4 *)(plVar16 + 2) = param_3;
  uVar19 = *(uint *)(param_1 + 4);
  if (uVar19 == 0) {
LAB_034e4358:
    uVar21 = 0x1d;
    goto LAB_034e435c;
  }
  fVar22 = (float)NEON_ucvtf((int)param_1[5]);
  if (fVar22 / (float)uVar19 <= 0.9) {
    lVar4 = param_2;
LAB_034e4498:
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = (uint)lVar4 / uVar19;
    }
    uVar19 = (uint)lVar4 - uVar6 * uVar19;
    plVar16[1] = *(long *)(param_1[3] + (ulong)uVar19 * 8);
    *(long **)(param_1[3] + (ulong)uVar19 * 8) = plVar16;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
  else {
    if (uVar19 < 0x1d) goto LAB_034e4358;
    if (uVar19 < 0x35) {
      uVar21 = 0x35;
LAB_034e435c:
      lVar18 = param_1[3];
      uVar2 = *(undefined4 *)((long)param_1 + 0x24);
      *plVar15 = 0;
      param_1[4] = 0;
      lVar4 = (**(code **)(puVar3 + 0x20))(0,0,uVar21 << 3);
      if (lVar4 != 0) {
        uVar20 = (uint)uVar21;
        param_1[3] = lVar4;
        *(uint *)((long)param_1 + 0x24) = uVar20;
        uVar6 = uVar20;
        while( true ) {
          uVar6 = uVar6 - 1;
          uVar9 = *(uint *)(param_1 + 4);
          if (uVar9 < (uint)uVar21) {
            *(uint *)(param_1 + 4) = uVar9 + 1;
            if (param_1[3] != 0) {
              *(undefined8 *)(param_1[3] + (ulong)uVar9 * 8) = 0;
            }
          }
          if (uVar6 == 0) break;
          uVar21 = (ulong)*(uint *)((long)param_1 + 0x24);
        }
        if (uVar19 != 0) {
          uVar21 = 0;
          do {
            puVar8 = *(uint **)(lVar18 + uVar21 * 8);
            while (puVar8 != (uint *)0x0) {
              uVar6 = 0;
              if (uVar20 != 0) {
                uVar6 = *puVar8 / uVar20;
              }
              puVar14 = *(uint **)(puVar8 + 2);
              uVar6 = *puVar8 - uVar6 * uVar20;
              *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(*plVar15 + (ulong)uVar6 * 8);
              *(uint **)(*plVar15 + (ulong)uVar6 * 8) = puVar8;
              puVar8 = puVar14;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar19);
        }
        if (lVar18 != 0) {
          (**(code **)(puVar3 + 0x30))(0,lVar18);
        }
        goto LAB_034e441c;
      }
      if (*plVar15 != 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        (**(code **)(puVar3 + 0x30))(0);
        param_1[3] = 0;
        *(undefined4 *)((long)param_1 + 0x24) = 0;
      }
      param_1[3] = lVar18;
      *(uint *)(param_1 + 4) = uVar19;
      *(undefined4 *)((long)param_1 + 0x24) = uVar2;
    }
    else {
      if (uVar19 < 0x61) {
        uVar21 = 0x61;
        goto LAB_034e435c;
      }
      if (uVar19 < 0xc1) {
        uVar21 = 0xc1;
        goto LAB_034e435c;
      }
      if (uVar19 < 0x185) {
        uVar21 = 0x185;
        goto LAB_034e435c;
      }
      if (uVar19 < 0x301) {
        uVar21 = 0x301;
        goto LAB_034e435c;
      }
      if (uVar19 < 0x607) {
        uVar21 = 0x607;
        goto LAB_034e435c;
      }
      if (uVar19 < 0xc07) {
        uVar21 = 0xc07;
        goto LAB_034e435c;
      }
      uVar21 = 0x1807;
      if (uVar19 < 0x1807) goto LAB_034e435c;
      if (uVar19 < 0x3001) {
        uVar21 = 0x3001;
        goto LAB_034e435c;
      }
      uVar21 = 0x6011;
      if ((((uVar19 < 0x6011) || (uVar21 = 0xc005, uVar19 < 0xc005)) ||
          (uVar21 = 0x1800d, uVar19 < 0x1800d)) ||
         ((uVar21 = 0x30005, uVar19 < 0x30005 || (uVar21 = 0x60019, uVar19 < 0x60019))))
      goto LAB_034e435c;
      if (uVar19 < 0xc0001) {
        uVar21 = 0xc0001;
        goto LAB_034e435c;
      }
      uVar21 = 0x180005;
      if (((((uVar19 < 0x180005) || (uVar21 = 0x30000b, uVar19 < 0x30000b)) ||
           ((uVar21 = 0x60000d, uVar19 < 0x60000d ||
            (((uVar21 = 0xc00005, uVar19 < 0xc00005 || (uVar21 = 0x1800013, uVar19 < 0x1800013)) ||
             (uVar21 = 0x3000005, uVar19 < 0x3000005)))))) ||
          ((uVar21 = 0x6000017, uVar19 < 0x6000017 || (uVar21 = 0xc000013, uVar19 < 0xc000013)))) ||
         ((uVar21 = 0x18000005, uVar19 < 0x18000005 ||
          ((uVar21 = 0x30000059, uVar19 < 0x30000059 || (uVar21 = 0x60000005, uVar19 < 0x60000005)))
          ))) goto LAB_034e435c;
LAB_034e441c:
      uVar19 = *(uint *)(param_1 + 4);
    }
    if (uVar19 != 0) {
      lVar4 = *plVar16;
      goto LAB_034e4498;
    }
  }
LAB_034e4570:
  lVar4 = FUN_034e4978(param_1,param_3);
  if (lVar4 != 0) {
    uVar19 = *(uint *)(lVar4 + 0x30);
    lVar18 = *(long *)(lVar4 + 0x28);
    if (uVar19 == 0) {
      if (lVar18 == 0) {
        if (*(int *)(lVar4 + 0x34) == 0) {
          lVar18 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,8);
          if (lVar18 == 0) goto LAB_034e46c0;
          *(long *)(lVar4 + 0x28) = lVar18;
          *(undefined4 *)(lVar4 + 0x34) = 1;
        }
        else {
          lVar18 = 0;
        }
        puVar7 = (undefined8 *)(lVar18 + (ulong)*(uint *)(lVar4 + 0x30) * 8);
        *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) + 1;
        bVar5 = false;
        if (puVar7 != (undefined8 *)0x0) goto LAB_034e46b4;
        goto LAB_034e46c4;
      }
      uVar6 = 0;
    }
    else {
      uVar20 = 0;
      uVar9 = uVar19;
      do {
        uVar6 = uVar20 + (uVar9 >> 1);
        plVar12 = *(long **)(lVar18 + (long)(int)uVar6 * 8);
        if (plVar12 == plVar16) goto LAB_034e45d0;
        if (plVar12 < plVar16) {
          uVar20 = uVar6 + 1;
        }
        uVar9 = uVar9 - (plVar12 < plVar16) >> 1;
      } while (uVar9 != 0);
      uVar6 = uVar20;
    }
LAB_034e45d0:
    uVar20 = *(uint *)(lVar4 + 0x34);
    if (uVar20 <= uVar19) {
      iVar11 = uVar20 + (uVar20 >> 1);
      if (uVar20 == 0) {
        iVar11 = 1;
      }
      uVar20 = iVar11 + uVar20;
      lVar18 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar18,(ulong)uVar20 << 3);
      if (lVar18 == 0) goto LAB_034e46c0;
      *(long *)(lVar4 + 0x28) = lVar18;
      *(uint *)(lVar4 + 0x34) = uVar20;
    }
    if (uVar19 < uVar20) {
      uVar19 = *(uint *)(lVar4 + 0x30);
      *(uint *)(lVar4 + 0x30) = uVar19 + 1;
      if (uVar6 < uVar19) {
        puVar13 = (undefined8 *)(lVar18 + (ulong)uVar19 * 8);
        do {
          puVar10 = puVar13 + -1;
          *puVar13 = *puVar10;
          puVar7 = (undefined8 *)(*(long *)(lVar4 + 0x28) + (ulong)uVar6 * 8);
          puVar13 = puVar10;
        } while (puVar7 < puVar10);
      }
      else {
        puVar7 = (undefined8 *)(lVar18 + (ulong)uVar6 * 8);
      }
      if (puVar7 != (undefined8 *)0x0) {
LAB_034e46b4:
        *puVar7 = plVar16;
        return 1;
      }
      bVar5 = false;
      goto LAB_034e46c4;
    }
  }
LAB_034e46c0:
  bVar5 = false;
LAB_034e46c4:
  uVar19 = *(uint *)(param_1 + 4);
  if (uVar19 != 0) {
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = uVar17 / uVar19;
    }
    plVar15 = (long *)(*plVar15 + (ulong)(uVar17 - uVar6 * uVar19) * 8);
    plVar12 = (long *)*plVar15;
    if (plVar12 != (long *)0x0) {
      if (*plVar12 != param_2) {
        do {
          plVar15 = plVar12;
          plVar12 = (long *)plVar15[1];
          if (plVar12 == (long *)0x0) goto LAB_034e4720;
        } while (*plVar12 != param_2);
        plVar15 = plVar15 + 1;
      }
      *plVar15 = plVar12[1];
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
    }
  }
LAB_034e4720:
  if (!bVar5) {
    uVar19 = *(uint *)(param_1 + 1);
    if (uVar19 != 0) {
      uVar17 = *(uint *)(plVar16 + 2);
      uVar6 = 0;
      if (uVar19 != 0) {
        uVar6 = uVar17 / uVar19;
      }
      for (puVar8 = *(uint **)(*param_1 + (ulong)(uVar17 - uVar6 * uVar19) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
        if (*puVar8 == uVar17) {
          uVar19 = puVar8[0xc];
          if (uVar19 != 0) {
            lVar4 = *(long *)(puVar8 + 10);
            iVar11 = 0;
            uVar17 = uVar19;
            goto LAB_034e4770;
          }
          break;
        }
      }
    }
LAB_034e47d4:
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,plVar16);
  }
  return 0x34;
joined_r0x034e4444:
  if (puVar8 == (uint *)0x0) goto LAB_034e456c;
  if (*puVar8 == uVar6) {
    uVar19 = puVar8[0xc];
    if (uVar19 != 0) {
      lVar4 = *(long *)(puVar8 + 10);
      iVar11 = 0;
      uVar6 = uVar19;
      goto LAB_034e44e8;
    }
    goto LAB_034e456c;
  }
  puVar8 = *(uint **)(puVar8 + 2);
  goto joined_r0x034e4444;
LAB_034e44e8:
  iVar1 = iVar11 + (uVar6 >> 1);
  plVar12 = *(long **)(lVar4 + (long)iVar1 * 8);
  if (plVar12 != plVar16) goto code_r0x034e44fc;
  puVar13 = (undefined8 *)((lVar4 + (ulong)uVar19 * 8) - 8);
  puVar7 = (undefined8 *)(lVar4 + (long)iVar1 * 8);
  if (puVar7 < puVar13) {
    do {
      puVar10 = puVar7 + 1;
      *puVar7 = *puVar10;
      puVar7 = puVar10;
    } while (puVar10 < puVar13);
    uVar19 = puVar8[0xc];
  }
  puVar8[0xc] = uVar19 - 1;
LAB_034e456c:
  *(undefined4 *)(plVar16 + 2) = param_3;
  goto LAB_034e4570;
code_r0x034e44fc:
  if (plVar12 < plVar16) {
    iVar11 = iVar1 + 1;
  }
  uVar6 = uVar6 - (plVar12 < plVar16) >> 1;
  if (uVar6 == 0) goto LAB_034e456c;
  goto LAB_034e44e8;
LAB_034e4770:
  iVar1 = iVar11 + (uVar17 >> 1);
  plVar15 = *(long **)(lVar4 + (long)iVar1 * 8);
  if (plVar15 != plVar16) goto code_r0x034e4784;
  puVar13 = (undefined8 *)((lVar4 + (ulong)uVar19 * 8) - 8);
  puVar7 = (undefined8 *)(lVar4 + (long)iVar1 * 8);
  if (puVar7 < puVar13) {
    do {
      puVar10 = puVar7 + 1;
      *puVar7 = *puVar10;
      puVar7 = puVar10;
    } while (puVar10 < puVar13);
    uVar19 = puVar8[0xc];
  }
  puVar8[0xc] = uVar19 - 1;
  goto LAB_034e47d4;
code_r0x034e4784:
  if (plVar15 < plVar16) {
    iVar11 = iVar1 + 1;
  }
  uVar17 = uVar17 - (plVar15 < plVar16) >> 1;
  if (uVar17 == 0) goto LAB_034e47d4;
  goto LAB_034e4770;
}


