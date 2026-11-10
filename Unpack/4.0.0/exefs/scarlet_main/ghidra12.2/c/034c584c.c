/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c584c; name: FUN_034c584c
 */


undefined8 FUN_034c584c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  float fVar20;
  
  puVar9 = PTR_DAT_047e2fd0;
  uVar15 = *(uint *)(param_1 + 0x38);
  uVar13 = (uint)param_2;
  if (uVar15 != 0) {
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar13 / uVar15;
    }
    for (plVar16 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)(uVar13 - uVar6 * uVar15) * 8);
        plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      if (plVar16[1] == param_2) {
        puVar18 = plVar16 + 2;
        plVar16 = (long *)*puVar18;
        goto joined_r0x034c5a68;
      }
    }
  }
  plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x88);
  if (plVar16 == (long *)0x0) {
    return 2;
  }
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar16[1] = 0;
  plVar16[2] = 0;
  plVar16[0xf] = param_2;
  *(undefined4 *)(plVar16 + 0x10) = 1;
  *(undefined1 *)((long)plVar16 + 0x84) = 1;
  memset(plVar16 + 5,0,0x50);
  *plVar16 = (long)(PTR_DAT_047e72b8 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x38);
  if (uVar15 == 0) {
LAB_034c5930:
    uVar17 = 0x1d;
    goto LAB_034c5934;
  }
  fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40));
  if (fVar20 / (float)uVar15 <= 0.9) {
LAB_034c5a00:
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar13 / uVar15;
    }
    uVar17 = (ulong)(uVar13 - uVar6 * uVar15);
    for (plVar19 = *(long **)(*(long *)(param_1 + 0x30) + uVar17 * 8); plVar19 != (long *)0x0;
        plVar19 = (long *)*plVar19) {
      if (plVar19[1] == param_2) goto LAB_034c5aa8;
    }
    plVar19 = (long *)(**(code **)(puVar9 + 0x10))(0,0x18);
    if (plVar19 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      *plVar19 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar17 * 8);
      plVar19[1] = param_2;
      *(long **)(*(long *)(param_1 + 0x30) + uVar17 * 8) = plVar19;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
LAB_034c5aa8:
      puVar18 = plVar19 + 2;
      *puVar18 = plVar16;
    }
joined_r0x034c5a68:
    if (plVar16 == (long *)0x0) goto LAB_034c5c74;
  }
  else {
    if (uVar15 < 0x1d) goto LAB_034c5930;
    if (uVar15 < 0x35) {
      uVar17 = 0x35;
LAB_034c5934:
      plVar19 = (long *)(param_1 + 0x30);
      lVar14 = *plVar19;
      uVar5 = *(undefined4 *)(param_1 + 0x3c);
      *plVar19 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      lVar10 = (**(code **)(puVar9 + 0x20))(0,0,uVar17 << 3);
      if (lVar10 != 0) {
        iVar12 = (int)uVar17;
        *(long *)(param_1 + 0x30) = lVar10;
        *(int *)(param_1 + 0x3c) = iVar12;
        while( true ) {
          iVar12 = iVar12 + -1;
          uVar6 = *(uint *)(param_1 + 0x38);
          if (uVar6 < (uint)uVar17) {
            *(uint *)(param_1 + 0x38) = uVar6 + 1;
            if (*(long *)(param_1 + 0x30) != 0) {
              *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 8) = 0;
            }
          }
          if (iVar12 == 0) break;
          uVar17 = (ulong)*(uint *)(param_1 + 0x3c);
        }
        if (uVar15 != 0) {
          uVar17 = 0;
          do {
            plVar19 = (long *)*(long *)(lVar14 + uVar17 * 8);
            while (plVar19 != (long *)0x0) {
              uVar6 = *(uint *)(param_1 + 0x38);
              uVar7 = 0;
              if (uVar6 != 0) {
                uVar7 = *(uint *)(plVar19 + 1) / uVar6;
              }
              uVar6 = *(uint *)(plVar19 + 1) - uVar7 * uVar6;
              lVar10 = *plVar19;
              *plVar19 = *(undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 8);
              *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 8) = plVar19;
              plVar19 = (long *)lVar10;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar15);
        }
        if (lVar14 != 0) {
          (**(code **)(puVar9 + 0x30))(0,lVar14);
        }
        goto LAB_034c59f8;
      }
      if (*plVar19 != 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        (**(code **)(puVar9 + 0x30))(0);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      *(long *)(param_1 + 0x30) = lVar14;
      *(uint *)(param_1 + 0x38) = uVar15;
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
    }
    else {
      if (uVar15 < 0x61) {
        uVar17 = 0x61;
        goto LAB_034c5934;
      }
      if (uVar15 < 0xc1) {
        uVar17 = 0xc1;
        goto LAB_034c5934;
      }
      if (uVar15 < 0x185) {
        uVar17 = 0x185;
        goto LAB_034c5934;
      }
      if (uVar15 < 0x301) {
        uVar17 = 0x301;
        goto LAB_034c5934;
      }
      if (uVar15 < 0x607) {
        uVar17 = 0x607;
        goto LAB_034c5934;
      }
      if (uVar15 < 0xc07) {
        uVar17 = 0xc07;
        goto LAB_034c5934;
      }
      uVar17 = 0x1807;
      if (uVar15 < 0x1807) goto LAB_034c5934;
      if (uVar15 < 0x3001) {
        uVar17 = 0x3001;
        goto LAB_034c5934;
      }
      uVar17 = 0x6011;
      if ((((uVar15 < 0x6011) || (uVar17 = 0xc005, uVar15 < 0xc005)) ||
          (uVar17 = 0x1800d, uVar15 < 0x1800d)) ||
         ((uVar17 = 0x30005, uVar15 < 0x30005 || (uVar17 = 0x60019, uVar15 < 0x60019))))
      goto LAB_034c5934;
      if (uVar15 < 0xc0001) {
        uVar17 = 0xc0001;
        goto LAB_034c5934;
      }
      uVar17 = 0x180005;
      if (((((uVar15 < 0x180005) || (uVar17 = 0x30000b, uVar15 < 0x30000b)) ||
           ((uVar17 = 0x60000d, uVar15 < 0x60000d ||
            (((uVar17 = 0xc00005, uVar15 < 0xc00005 || (uVar17 = 0x1800013, uVar15 < 0x1800013)) ||
             (uVar17 = 0x3000005, uVar15 < 0x3000005)))))) ||
          ((uVar17 = 0x6000017, uVar15 < 0x6000017 || (uVar17 = 0xc000013, uVar15 < 0xc000013)))) ||
         ((uVar17 = 0x18000005, uVar15 < 0x18000005 ||
          ((uVar17 = 0x30000059, uVar15 < 0x30000059 || (uVar17 = 0x60000005, uVar15 < 0x60000005)))
          ))) goto LAB_034c5934;
LAB_034c59f8:
      uVar15 = *(uint *)(param_1 + 0x38);
    }
    if (uVar15 != 0) goto LAB_034c5a00;
    puVar18 = (undefined8 *)0x0;
  }
  puVar9 = PTR_DAT_047e2fd0;
  if (plVar16[5] == 0) {
    plVar19 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x58);
    if (plVar19 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      *plVar19 = (long)(PTR_DAT_047e72c0 + 0x10);
      plVar19[1] = 0;
      puVar1 = PTR_DAT_047e6f98;
      lVar10 = *(long *)(PTR_DAT_047e6f98 + 8);
      plVar19[2] = 0;
      plVar19[3] = lVar10;
      plVar4 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar4 = (long *)(lVar10 + 0x10);
      }
      *plVar4 = (long)plVar19;
      *(long **)(puVar1 + 8) = plVar19;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_047e72c8;
      *(undefined2 *)(plVar19 + 7) = 0;
      *plVar19 = (long)(puVar1 + 0x10);
      plVar19[4] = 0;
      *(byte *)((long)plVar19 + 0x3a) = *(byte *)((long)plVar19 + 0x3a) & 0xf8;
      *(undefined4 *)(plVar19 + 10) = 0x3f800000;
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      *(byte *)((long)plVar19 + 0x54) = *(byte *)((long)plVar19 + 0x54) | 1;
      plVar16[5] = (long)plVar19;
      plVar19[1] = (long)plVar16;
      iVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,plVar16[0xf]);
      if (iVar12 == 1) {
        DAT_048b0300 = 0;
        DAT_048b0308 = 0x3ff3f00000000;
        DAT_048b02e8 = DAT_03d98404;
        DAT_048b02f0 = DAT_03d9840c;
        DAT_048b02f4 = DAT_03d98410;
        DAT_048b02fc = DAT_03d98418;
        if ((short)plVar19[7] == 1) {
LAB_034c5e7c:
          lVar10 = 0;
          uVar17 = 0;
          do {
            memcpy((void *)(plVar19[4] + lVar10),(void *)((long)&DAT_048b02e8 + lVar10),0x24);
            *(undefined4 *)(plVar19[4] + lVar10 + 0x24) =
                 *(undefined4 *)((long)&DAT_048b0308 + lVar10 + 4);
            uVar17 = uVar17 + 1;
            lVar10 = lVar10 + 0x28;
          } while (uVar17 < *(ushort *)(plVar19 + 7));
        }
        else {
          if (plVar19[4] != 0) {
            *(undefined2 *)(plVar19 + 7) = 0;
            (**(code **)(puVar9 + 0x30))(5);
            plVar19[4] = 0;
          }
          puVar11 = (undefined8 *)(**(code **)(puVar9 + 0x10))(5,0x28);
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[3] = 0;
            puVar11[4] = 0;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            plVar19[4] = (long)puVar11;
            *(undefined2 *)(plVar19 + 7) = 1;
            goto LAB_034c5e7c;
          }
        }
        *(byte *)((long)plVar19 + 0x3a) = *(byte *)((long)plVar19 + 0x3a) & 0xf8;
        *(byte *)((long)plVar19 + 0x54) = *(byte *)((long)plVar19 + 0x54) | 1;
        goto LAB_034c5ac4;
      }
      (**(code **)*plVar19)(plVar19);
      (**(code **)(puVar9 + 0x30))(4,plVar19);
      bVar8 = false;
      plVar16[5] = 0;
    }
  }
  else {
LAB_034c5ac4:
    bVar8 = true;
  }
  puVar9 = PTR_DAT_047e6d58;
  lVar10 = *(long *)(PTR_DAT_047e6958 + 0x10);
  if (lVar10 != 0) {
    puVar1 = PTR_DAT_047e6d50 + 0x10;
    puVar2 = PTR_DAT_047e6d60 + 0x10;
    do {
      uVar15 = *(uint *)(lVar10 + 0xd8);
      if (uVar15 != 0) {
        iVar12 = 0;
        do {
          iVar3 = iVar12 + (uVar15 >> 1);
          uVar17 = *(ulong *)(*(long *)(lVar10 + 0xd0) + (long)iVar3 * 8);
          if (uVar17 == param_2) {
            plVar19 = (long *)plVar16[8];
            if ((plVar19 == (long *)0x0) &&
               (plVar19 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90),
               plVar19 != (long *)0x0)) {
              *plVar19 = (long)puVar1;
              plVar19[1] = 0;
              lVar14 = *(long *)(puVar9 + 8);
              plVar19[2] = 0;
              plVar19[3] = lVar14;
              plVar4 = (long *)(puVar9 + 0x10);
              if (*(long *)(puVar9 + 0x10) != 0) {
                plVar4 = (long *)(lVar14 + 0x10);
              }
              *plVar4 = (long)plVar19;
              *(int *)puVar9 = *(int *)puVar9 + 1;
              *(long **)(puVar9 + 8) = plVar19;
              *plVar19 = (long)puVar2;
              plVar19[4] = 0;
              plVar19[5] = 0;
              plVar19[6] = 0;
              *(undefined4 *)(plVar19 + 7) = 0;
              *(undefined4 *)((long)plVar19 + 0x84) = 0x3f800000;
              *(undefined1 *)(plVar19 + 0x11) = 1;
              *(undefined8 *)((long)plVar19 + 100) = 0x3f80000000000000;
              *(undefined8 *)((long)plVar19 + 0x6c) = 0x3f80000000000000;
              *(undefined8 *)((long)plVar19 + 0x74) = 0;
              *(undefined8 *)((long)plVar19 + 0x7c) = 0;
              *(undefined8 *)((long)plVar19 + 0x3c) = 0x3f800000;
              *(undefined8 *)((long)plVar19 + 0x44) = 0;
              *(undefined8 *)((long)plVar19 + 0x4c) = 0x3f800000;
              *(undefined8 *)((long)plVar19 + 0x54) = 0;
              *(undefined8 *)((long)plVar19 + 0x5c) = 0x3f800000;
              plVar16[8] = (long)plVar19;
              plVar19[1] = (long)plVar16;
              iVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,plVar16[0xf]);
              if (iVar12 != 1) {
                (**(code **)*plVar19)(plVar19);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,plVar19);
                plVar19 = (long *)0x0;
                plVar16[8] = 0;
              }
            }
            if (plVar19 != (long *)0x0) {
              bVar8 = true;
            }
            break;
          }
          if (uVar17 < param_2) {
            iVar12 = iVar3 + 1;
          }
          uVar15 = uVar15 - (uVar17 < param_2) >> 1;
        } while (uVar15 != 0);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
    } while (lVar10 != 0);
  }
  if (bVar8) {
    return 1;
  }
  (**(code **)*plVar16)(plVar16);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,plVar16);
LAB_034c5c74:
  if ((puVar18 != (undefined8 *)0x0) && (uVar15 = *(uint *)(param_1 + 0x38), uVar15 != 0)) {
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar13 / uVar15;
    }
    uVar17 = (ulong)(uVar13 - uVar6 * uVar15);
    plVar16 = *(long **)(*(long *)(param_1 + 0x30) + uVar17 * 8);
    if (plVar16 != (long *)0x0) {
      if (plVar16[1] == param_2) {
        *(long *)(*(long *)(param_1 + 0x30) + uVar17 * 8) = *plVar16;
      }
      else {
        do {
          plVar19 = plVar16;
          plVar16 = (long *)*plVar19;
          if (plVar16 == (long *)0x0) {
            return 2;
          }
        } while (plVar16[1] != param_2);
        *plVar19 = *plVar16;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
  }
  return 2;
}


