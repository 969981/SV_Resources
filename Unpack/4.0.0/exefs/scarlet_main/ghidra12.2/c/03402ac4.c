/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03402ac4; name: FUN_03402ac4
 */


uint * FUN_03402ac4(long *param_1,long param_2,ulong *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  ulong local_70;
  undefined1 local_68;
  int local_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  puVar4 = PTR_DAT_047e2fd0;
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 != 0) {
    uVar15 = *(uint *)(param_2 + 0x90);
    uVar17 = 0;
    if (uVar9 != 0) {
      uVar17 = uVar15 / uVar9;
    }
    for (puVar10 = *(uint **)(*param_1 + (ulong)(uVar15 - uVar17 * uVar9) * 8);
        puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
      if (*puVar10 == uVar15) {
        puVar10[0x1c] = puVar10[0x1c] + 1;
        puVar10 = puVar10 + 0x1e;
        goto LAB_03402e8c;
      }
    }
  }
  puVar6 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xc0);
  if (puVar6 != (uint *)0x0) {
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    uVar8 = 0x12;
    puVar6[10] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x1a] = 0;
    puVar16 = puVar6 + 0x14;
    puVar16[0] = 0;
    puVar16[1] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x24] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x19] = *(uint *)(param_2 + 0x8c);
    uVar2 = *(undefined1 *)(param_2 + 0x60);
    uVar9 = 1 << (ulong)(*(byte *)(param_2 + 0x94) & 0x1f);
    uVar15 = 1 << (ulong)(*(byte *)(param_2 + 0x95) & 0x1f);
    puVar10 = puVar6 + 0x1e;
    *puVar10 = uVar9;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x1f] = uVar15;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    if ((((int)uVar15 < 0x2001) && (0x3f < (int)uVar9)) && ((int)uVar9 <= (int)uVar15)) {
      local_70 = *param_3 & 0xfffffffffffffffc;
      uVar9 = (uint)*param_3 & 3;
      local_64 = (int)param_3[1] + uVar9;
      local_68 = (undefined1)(uVar9 << 3);
      iVar5 = FUN_0340b170(puVar6,uVar2,&local_70);
      if (iVar5 == 0) {
        puVar6[0x1c] = puVar6[0x1c] + 1;
        uVar9 = *(uint *)(param_2 + 0x90);
        *puVar6 = uVar9;
        uVar15 = *(uint *)(param_1 + 1);
        if (uVar15 == 0) {
LAB_03402d90:
          uVar18 = 0x1d;
          goto LAB_03402d94;
        }
        fVar19 = (float)NEON_ucvtf((int)param_1[2]);
        if (0.9 < fVar19 / (float)uVar15) {
          if (uVar15 < 0x1d) goto LAB_03402d90;
          if (uVar15 < 0x35) {
            uVar18 = 0x35;
LAB_03402d94:
            uVar8 = *(undefined4 *)((long)param_1 + 0xc);
            lVar14 = *param_1;
            *param_1 = 0;
            param_1[1] = 0;
            lVar7 = (**(code **)(puVar4 + 0x20))(0,0,uVar18 << 3);
            if (lVar7 != 0) {
              uVar17 = (uint)uVar18;
              *param_1 = lVar7;
              *(uint *)((long)param_1 + 0xc) = uVar17;
              uVar9 = uVar17;
              while( true ) {
                uVar9 = uVar9 - 1;
                uVar1 = *(uint *)(param_1 + 1);
                if (uVar1 < (uint)uVar18) {
                  *(uint *)(param_1 + 1) = uVar1 + 1;
                  if (*param_1 != 0) {
                    *(undefined8 *)(*param_1 + (ulong)uVar1 * 8) = 0;
                  }
                }
                if (uVar9 == 0) break;
                uVar18 = (ulong)*(uint *)((long)param_1 + 0xc);
              }
              if (uVar15 != 0) {
                uVar18 = 0;
                do {
                  puVar3 = *(uint **)(lVar14 + uVar18 * 8);
                  while (puVar3 != (uint *)0x0) {
                    uVar9 = 0;
                    if (uVar17 != 0) {
                      uVar9 = *puVar3 / uVar17;
                    }
                    puVar12 = *(uint **)(puVar3 + 2);
                    uVar9 = *puVar3 - uVar9 * uVar17;
                    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(*param_1 + (ulong)uVar9 * 8);
                    *(uint **)(*param_1 + (ulong)uVar9 * 8) = puVar3;
                    puVar3 = puVar12;
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar18 != uVar15);
              }
              if (lVar14 != 0) {
                (**(code **)(puVar4 + 0x30))(0,lVar14);
              }
              goto LAB_03402e58;
            }
            if (*param_1 != 0) {
              *(undefined4 *)(param_1 + 1) = 0;
              (**(code **)(puVar4 + 0x30))(0);
              *param_1 = 0;
              *(undefined4 *)((long)param_1 + 0xc) = 0;
            }
            *param_1 = lVar14;
            *(uint *)(param_1 + 1) = uVar15;
            *(undefined4 *)((long)param_1 + 0xc) = uVar8;
          }
          else {
            if (uVar15 < 0x61) {
              uVar18 = 0x61;
              goto LAB_03402d94;
            }
            if (uVar15 < 0xc1) {
              uVar18 = 0xc1;
              goto LAB_03402d94;
            }
            if (uVar15 < 0x185) {
              uVar18 = 0x185;
              goto LAB_03402d94;
            }
            if (uVar15 < 0x301) {
              uVar18 = 0x301;
              goto LAB_03402d94;
            }
            if (uVar15 < 0x607) {
              uVar18 = 0x607;
              goto LAB_03402d94;
            }
            if (uVar15 < 0xc07) {
              uVar18 = 0xc07;
              goto LAB_03402d94;
            }
            uVar18 = 0x1807;
            if (uVar15 < 0x1807) goto LAB_03402d94;
            if (uVar15 < 0x3001) {
              uVar18 = 0x3001;
              goto LAB_03402d94;
            }
            uVar18 = 0x6011;
            if (((uVar15 < 0x6011) || (uVar18 = 0xc005, uVar15 < 0xc005)) ||
               ((uVar18 = 0x1800d, uVar15 < 0x1800d ||
                ((uVar18 = 0x30005, uVar15 < 0x30005 || (uVar18 = 0x60019, uVar15 < 0x60019))))))
            goto LAB_03402d94;
            if (uVar15 < 0xc0001) {
              uVar18 = 0xc0001;
              goto LAB_03402d94;
            }
            uVar18 = 0x180005;
            if (((((((uVar15 < 0x180005) || (uVar18 = 0x30000b, uVar15 < 0x30000b)) ||
                   (uVar18 = 0x60000d, uVar15 < 0x60000d)) ||
                  ((uVar18 = 0xc00005, uVar15 < 0xc00005 || (uVar18 = 0x1800013, uVar15 < 0x1800013)
                   ))) || ((uVar18 = 0x3000005, uVar15 < 0x3000005 ||
                           ((uVar18 = 0x6000017, uVar15 < 0x6000017 ||
                            (uVar18 = 0xc000013, uVar15 < 0xc000013)))))) ||
                (uVar18 = 0x18000005, uVar15 < 0x18000005)) ||
               ((uVar18 = 0x30000059, uVar15 < 0x30000059 ||
                (uVar18 = 0x60000005, uVar15 < 0x60000005)))) goto LAB_03402d94;
LAB_03402e58:
            uVar15 = *(uint *)(param_1 + 1);
          }
          if (uVar15 == 0) {
            uVar8 = 0x55;
            goto LAB_03402c2c;
          }
          uVar9 = *puVar6;
        }
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar9 / uVar15;
        }
        uVar9 = uVar9 - uVar17 * uVar15;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(*param_1 + (ulong)uVar9 * 8);
        *(uint **)(*param_1 + (ulong)uVar9 * 8) = puVar6;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        goto LAB_03402e8c;
      }
      uVar8 = 0x55;
      if (iVar5 != -0x8b) {
        uVar8 = 0x12;
      }
    }
LAB_03402c2c:
    *param_4 = uVar8;
    lVar7 = *(long *)(puVar6 + 0x2e);
    if (lVar7 != 0) {
      if (0 < (int)puVar6[0x24]) {
        lVar13 = 0;
        lVar14 = 0;
        do {
          if (*(long *)(lVar7 + lVar13) != 0) {
            (**(code **)(puVar4 + 0x30))(5,*(long *)(lVar7 + lVar13));
            lVar7 = *(long *)(puVar6 + 0x2e);
          }
          lVar11 = *(long *)(lVar7 + lVar13 + 0x10);
          if (lVar11 != 0) {
            (**(code **)(puVar4 + 0x30))(5,lVar11);
            lVar7 = *(long *)(puVar6 + 0x2e);
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x20;
        } while (lVar14 < (int)puVar6[0x24]);
        if (lVar7 == 0) goto LAB_03402cb0;
      }
      (**(code **)(puVar4 + 0x30))(5);
    }
LAB_03402cb0:
    if (*(long *)puVar16 != 0) {
      (**(code **)(puVar4 + 0x30))(5);
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x18] = 0;
      puVar6[0x19] = 0;
      puVar16[0] = 0;
      puVar16[1] = 0;
    }
    if (*(long *)(puVar6 + 0x10) != 0) {
      (**(code **)(puVar4 + 0x30))(5);
    }
    if (*(long *)(puVar6 + 0xc) != 0) {
      (**(code **)(puVar4 + 0x30))(5);
    }
    if (*(long *)(puVar6 + 8) != 0) {
      (**(code **)(puVar4 + 0x30))(5);
    }
    if (*(long *)(puVar6 + 4) != 0) {
      (**(code **)(puVar4 + 0x30))(5);
    }
    (**(code **)(puVar4 + 0x30))(5,puVar6);
  }
  puVar10 = (uint *)0x0;
LAB_03402e8c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return puVar10;
}


