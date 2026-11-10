/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03498000; name: FUN_03498000
 */


undefined8 FUN_03498000(long *param_1,uint param_2,long *param_3)

{
  MutexType *pMVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  
  lVar13 = *(long *)PTR_DAT_047e6f28;
  pMVar1 = (MutexType *)(lVar13 + 0x188);
  nn::os::LockMutex(pMVar1);
  uVar18 = *(uint *)(lVar13 + 0x1b0);
  if (uVar18 != 0) {
    uVar9 = 0;
    if (uVar18 != 0) {
      uVar9 = param_2 / uVar18;
    }
    for (plVar14 = *(long **)(*(long *)(lVar13 + 0x1a8) + (ulong)(param_2 - uVar9 * uVar18) * 8);
        plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
      if (*(uint *)(plVar14 + 2) == param_2) {
        *(int *)((long)plVar14 + 0x14) = *(int *)((long)plVar14 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        puVar6 = PTR_DAT_047e2fd0;
        uVar18 = *(uint *)(param_1 + 1);
        if (uVar18 == 0) goto LAB_034980e4;
        uVar9 = 0;
        uVar19 = (uint)*param_3;
        if (uVar18 != 0) {
          uVar9 = uVar19 / uVar18;
        }
        plVar16 = *(long **)(*param_1 + (ulong)(uVar19 - uVar9 * uVar18) * 8);
        goto joined_r0x034980cc;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 2;
joined_r0x034980cc:
  if (plVar16 == (long *)0x0) goto LAB_034980e4;
  if (plVar16[2] == *param_3) goto LAB_03498240;
  plVar16 = (long *)plVar16[3];
  goto joined_r0x034980cc;
LAB_034980e4:
  plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
  if (plVar16 != (long *)0x0) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    lVar13 = *param_3;
    plVar16[2] = lVar13;
    uVar18 = *(uint *)(param_1 + 1);
    if (uVar18 == 0) {
LAB_03498148:
      uVar20 = 0x1d;
      goto LAB_0349814c;
    }
    fVar21 = (float)NEON_ucvtf((int)param_1[2]);
    if (0.9 < fVar21 / (float)uVar18) {
      if (uVar18 < 0x1d) goto LAB_03498148;
      if (uVar18 < 0x35) {
        uVar20 = 0x35;
LAB_0349814c:
        lVar17 = *param_1;
        uVar3 = *(undefined4 *)((long)param_1 + 0xc);
        *param_1 = 0;
        param_1[1] = 0;
        lVar13 = (**(code **)(puVar6 + 0x20))(0,0,uVar20 << 3);
        if (lVar13 != 0) {
          uVar19 = (uint)uVar20;
          *param_1 = lVar13;
          *(uint *)((long)param_1 + 0xc) = uVar19;
          uVar9 = uVar19;
          while( true ) {
            uVar9 = uVar9 - 1;
            uVar4 = *(uint *)(param_1 + 1);
            if (uVar4 < (uint)uVar20) {
              *(uint *)(param_1 + 1) = uVar4 + 1;
              if (*param_1 != 0) {
                *(undefined8 *)(*param_1 + (ulong)uVar4 * 8) = 0;
              }
            }
            if (uVar9 == 0) break;
            uVar20 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
          if (uVar18 != 0) {
            uVar20 = 0;
            do {
              lVar13 = *(long *)(lVar17 + uVar20 * 8);
              while (lVar13 != 0) {
                uVar9 = 0;
                if (uVar19 != 0) {
                  uVar9 = *(uint *)(lVar13 + 0x10) / uVar19;
                }
                lVar12 = *(long *)(lVar13 + 0x18);
                uVar9 = *(uint *)(lVar13 + 0x10) - uVar9 * uVar19;
                *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(*param_1 + (ulong)uVar9 * 8);
                *(long *)(*param_1 + (ulong)uVar9 * 8) = lVar13;
                lVar13 = lVar12;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar18);
          }
          if (lVar17 != 0) {
            (**(code **)(puVar6 + 0x30))(0,lVar17);
          }
          goto LAB_0349820c;
        }
        if (*param_1 != 0) {
          *(undefined4 *)(param_1 + 1) = 0;
          (**(code **)(puVar6 + 0x30))(0);
          *param_1 = 0;
          *(undefined4 *)((long)param_1 + 0xc) = 0;
        }
        *param_1 = lVar17;
        *(uint *)(param_1 + 1) = uVar18;
        *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      }
      else {
        if (uVar18 < 0x61) {
          uVar20 = 0x61;
          goto LAB_0349814c;
        }
        if (uVar18 < 0xc1) {
          uVar20 = 0xc1;
          goto LAB_0349814c;
        }
        if (uVar18 < 0x185) {
          uVar20 = 0x185;
          goto LAB_0349814c;
        }
        if (uVar18 < 0x301) {
          uVar20 = 0x301;
          goto LAB_0349814c;
        }
        if (uVar18 < 0x607) {
          uVar20 = 0x607;
          goto LAB_0349814c;
        }
        if (uVar18 < 0xc07) {
          uVar20 = 0xc07;
          goto LAB_0349814c;
        }
        uVar20 = 0x1807;
        if (uVar18 < 0x1807) goto LAB_0349814c;
        if (uVar18 < 0x3001) {
          uVar20 = 0x3001;
          goto LAB_0349814c;
        }
        uVar20 = 0x6011;
        if ((((uVar18 < 0x6011) || (uVar20 = 0xc005, uVar18 < 0xc005)) ||
            (uVar20 = 0x1800d, uVar18 < 0x1800d)) ||
           ((uVar20 = 0x30005, uVar18 < 0x30005 || (uVar20 = 0x60019, uVar18 < 0x60019))))
        goto LAB_0349814c;
        if (uVar18 < 0xc0001) {
          uVar20 = 0xc0001;
          goto LAB_0349814c;
        }
        uVar20 = 0x180005;
        if (((((uVar18 < 0x180005) || (uVar20 = 0x30000b, uVar18 < 0x30000b)) ||
             ((uVar20 = 0x60000d, uVar18 < 0x60000d ||
              (((uVar20 = 0xc00005, uVar18 < 0xc00005 || (uVar20 = 0x1800013, uVar18 < 0x1800013))
               || (uVar20 = 0x3000005, uVar18 < 0x3000005)))))) ||
            ((uVar20 = 0x6000017, uVar18 < 0x6000017 || (uVar20 = 0xc000013, uVar18 < 0xc000013))))
           || ((uVar20 = 0x18000005, uVar18 < 0x18000005 ||
               ((uVar20 = 0x30000059, uVar18 < 0x30000059 ||
                (uVar20 = 0x60000005, uVar18 < 0x60000005)))))) goto LAB_0349814c;
LAB_0349820c:
        uVar18 = *(uint *)(param_1 + 1);
      }
      if (uVar18 == 0) {
        (**(code **)(puVar6 + 0x30))(0,plVar16);
        goto LAB_034983b0;
      }
      lVar13 = plVar16[2];
    }
    uVar9 = 0;
    if (uVar18 != 0) {
      uVar9 = (uint)lVar13 / uVar18;
    }
    uVar18 = (uint)lVar13 - uVar9 * uVar18;
    plVar16[3] = *(long *)(*param_1 + (ulong)uVar18 * 8);
    *(long **)(*param_1 + (ulong)uVar18 * 8) = plVar16;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_03498240:
    puVar8 = (undefined8 *)*plVar16;
    uVar18 = *(uint *)(plVar16 + 1);
    if (uVar18 != 0) {
      lVar13 = (ulong)uVar18 << 3;
      puVar11 = puVar8;
      do {
        if ((long *)*puVar11 == plVar14) goto LAB_034982d8;
        lVar13 = lVar13 + -8;
        puVar11 = puVar11 + 1;
      } while (lVar13 != 0);
    }
    uVar9 = *(uint *)((long)plVar16 + 0xc);
    if (uVar9 <= uVar18) {
      iVar10 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar10 = 1;
      }
      uVar9 = iVar10 + uVar9;
      puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar8,(ulong)uVar9 << 3);
      if (puVar8 == (undefined8 *)0x0) goto LAB_034983b0;
      *plVar16 = (long)puVar8;
      *(uint *)((long)plVar16 + 0xc) = uVar9;
    }
    if (uVar18 < uVar9) {
      uVar18 = *(uint *)(plVar16 + 1);
      *(uint *)(plVar16 + 1) = uVar18 + 1;
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[uVar18] = plVar14;
        (**(code **)(*plVar14 + 0x10))(plVar14);
LAB_034982d8:
        uVar20 = (ulong)*(uint *)(plVar14 + 0xd);
        if (*(uint *)(plVar14 + 0xd) != 0) {
          iVar10 = 0;
          do {
            iVar2 = iVar10 + ((uint)uVar20 >> 1);
            plVar16 = *(long **)(plVar14[0xc] + (long)iVar2 * 8);
            if (plVar16 == param_3) goto LAB_034983c4;
            if (((int)plVar16[9] < (int)param_3[9]) ||
               ((plVar16 < param_3 && ((int)plVar16[9] == (int)param_3[9])))) {
              iVar10 = iVar2 + 1;
              uVar20 = (ulong)((uint)uVar20 - 1);
            }
            uVar20 = uVar20 >> 1;
          } while ((int)uVar20 != 0);
        }
        puVar8 = (undefined8 *)FUN_03499160(plVar14 + 0xc,param_3);
        if (puVar8 == (undefined8 *)0x0) {
          uVar15 = 0x34;
        }
        else {
          *puVar8 = param_3;
          bVar5 = *(byte *)(plVar14 + 0xe);
          if (((int)param_3[9] == 1) || (((int)param_3[1] != 7 && ((int)param_3[1] != 0)))) {
            bVar7 = 0;
          }
          else {
            bVar7 = (**(code **)(*plVar14 + 0x38))(plVar14);
            bVar7 = bVar7 & 1;
          }
          *(byte *)(plVar14 + 0xe) = bVar7 | bVar5;
LAB_034983c4:
          uVar15 = 1;
        }
        goto LAB_034983e0;
      }
    }
  }
LAB_034983b0:
  uVar15 = 2;
LAB_034983e0:
  (**(code **)(*plVar14 + 0x18))(plVar14);
  return uVar15;
}


