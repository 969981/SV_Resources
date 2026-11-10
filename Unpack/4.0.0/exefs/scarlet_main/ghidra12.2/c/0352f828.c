/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352f828; name: FUN_0352f828
 */


undefined8 FUN_0352f828(long *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  short sVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  char local_7c [4];
  long *local_78;
  ulong local_70;
  char local_64 [4];
  
  if ((int)param_1[3] != 0) {
    plVar20 = (long *)param_1[2];
    do {
      if (((long *)plVar20[2] != (long *)0x0) && ((*(uint *)(*plVar20 + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(*(long *)plVar20[2] + 0x10))();
      }
      plVar20[2] = 0;
      plVar20 = plVar20 + 3;
    } while (plVar20 != (long *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((int)param_1[7] != 0) {
    lVar21 = param_1[6];
    do {
      (**(code **)(**(long **)(lVar21 + 8) + 0x10))();
      lVar21 = lVar21 + 0x18;
    } while (lVar21 != param_1[6] + (ulong)*(uint *)(param_1 + 7) * 0x18);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    FUN_0352eab8(param_1,param_3 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  local_78 = (long *)0x0;
  local_70 = 0;
  local_7c[0] = '\0';
  iVar6 = FUN_0352ff48(*param_1 + 0x140,param_2,&local_78,local_7c);
  plVar20 = local_78;
  if ((iVar6 == 1) && (local_7c[0] != '\0')) {
    uVar16 = local_70 & 0xffffffff;
    if ((int)local_70 == 0) goto LAB_0352fcf8;
    plVar17 = (long *)*local_78;
    uVar7 = (**(code **)(*plVar17 + 0x10))(plVar17);
    if ((uVar7 & 1) == 0) {
      plVar8 = plVar20;
      do {
        iVar6 = FUN_0352ebf8(param_1,plVar17);
        if (iVar6 != 1) {
          FUN_0352ef88(param_1);
          goto LAB_0352fcf8;
        }
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar20 + uVar16) {
          uVar16 = (ulong)*(uint *)(param_1 + 3);
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined1 *)(param_1 + 5) = 1;
          if (*(uint *)(param_1 + 3) == 0) goto LAB_0352ff30;
          lVar21 = param_1[2];
          plVar17 = *(long **)(lVar21 + uVar16 * 0x18 + -0x18);
          local_64[0] = '\x01';
          if (plVar17 == (long *)0x0) goto LAB_0352ff30;
          goto LAB_0352fd74;
        }
        lVar21 = *plVar8;
        lVar18 = *(long *)(lVar21 + 8);
        if (*(uint *)(lVar18 + 0x30) < 2) {
          if (*(uint *)(lVar18 + 0x28) == 0) {
            sVar10 = 0;
          }
          else {
            plVar17 = *(long **)(lVar18 + 0x20);
            lVar18 = (ulong)*(uint *)(lVar18 + 0x28) << 3;
            iVar6 = (int)lVar18;
            sVar10 = 0;
            do {
              if (*plVar17 == lVar21) goto LAB_0352fac0;
              sVar10 = sVar10 + 1;
              plVar17 = plVar17 + 1;
              lVar18 = lVar18 + -8;
            } while (lVar18 != 0);
            sVar10 = (short)(iVar6 + 0x7fff8U >> 3) + 1;
          }
LAB_0352fac0:
          lVar21 = *(long *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18 + -8);
          if (lVar21 != 0) {
            *(short *)(lVar21 + 10) = sVar10;
          }
        }
        else if (*(uint *)(lVar18 + 0x30) - 2 < 2) {
          plVar22 = (long *)(lVar18 + 0x20);
          plVar17 = (long *)*plVar22;
          if (*(uint *)(lVar18 + 0x28) == 0) {
            uVar7 = 0;
          }
          else {
            lVar12 = (ulong)*(uint *)(lVar18 + 0x28) << 3;
            iVar6 = (int)lVar12;
            uVar7 = 0;
            do {
              if (*plVar17 == lVar21) goto LAB_0352fa40;
              uVar7 = (ulong)((int)uVar7 + 1);
              plVar17 = plVar17 + 1;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
            uVar7 = (ulong)((iVar6 + 0x7fff8U >> 3) + 1);
          }
LAB_0352fa40:
          lVar21 = *(long *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18 + -8);
          if (lVar21 != 0) {
            uVar13 = uVar7 >> 3 & 0x1fff;
            *(byte *)(*(long *)(lVar21 + 0x30) + uVar13) =
                 *(byte *)(*(long *)(lVar21 + 0x30) + uVar13) & ((byte)(1 << (uVar7 & 7)) ^ 0xff);
            puVar11 = *(ushort **)(lVar21 + 0x18);
            uVar9 = *(uint *)(lVar21 + 0x20);
            puVar15 = puVar11 + uVar9;
            if (uVar9 != 0) {
              if ((uint)*puVar11 != ((uint)uVar7 & 0xffff)) {
                lVar12 = (ulong)uVar9 * 2;
                do {
                  lVar12 = lVar12 + -2;
                  if (lVar12 == 0) {
                    puVar11 = puVar15;
                    break;
                  }
                  puVar2 = puVar11 + 1;
                  puVar14 = puVar11 + 1;
                  puVar11 = puVar2;
                } while ((uint)*puVar14 != ((uint)uVar7 & 0xffff));
              }
            }
            if (puVar15 != puVar11) {
              if (puVar11 < puVar15 + -1) {
                do {
                  puVar14 = puVar11 + 1;
                  *puVar11 = *puVar14;
                  puVar11 = puVar14;
                } while (puVar14 < puVar15 + -1);
                uVar9 = *(uint *)(lVar21 + 0x20);
              }
              *(uint *)(lVar21 + 0x20) = uVar9 - 1;
            }
            *(short *)(lVar21 + 0x12) = (short)*(undefined4 *)(lVar18 + 0x28);
            uVar9 = *(uint *)(lVar18 + 0x28);
            memset(*(void **)(lVar21 + 0x28),0,(ulong)uVar9 + 7 >> 3);
            iVar6 = *(int *)(lVar21 + 8);
            sVar10 = (short)uVar9;
            *(short *)(lVar21 + 0x10) = sVar10;
            *(int *)(lVar21 + 0xc) = iVar6;
            uVar9 = *(uint *)(lVar21 + 0x20);
            if (uVar9 != 0) {
              puVar15 = *(ushort **)(lVar21 + 0x18);
              uVar13 = (ulong)uVar9 * 2 - 2;
              uVar1 = ((uint)(uVar13 >> 1) & 0x7fffffff) + 1;
              if ((uVar1 & 3) == 0) {
                puVar11 = puVar15;
              }
              else {
                lVar12 = -((ulong)uVar1 & 3);
                puVar14 = puVar15;
                do {
                  puVar11 = puVar14 + 1;
                  bVar5 = lVar12 != -1;
                  lVar12 = lVar12 + 1;
                  iVar6 = iVar6 - *(int *)(*(long *)(*plVar22 + (ulong)*puVar14 * 8) + 0x1c);
                  *(int *)(lVar21 + 0xc) = iVar6;
                  puVar14 = puVar11;
                } while (bVar5);
              }
              if (5 < uVar13) {
                do {
                  iVar6 = iVar6 - *(int *)(*(long *)(*plVar22 + (ulong)*puVar11 * 8) + 0x1c);
                  *(int *)(lVar21 + 0xc) = iVar6;
                  iVar6 = iVar6 - *(int *)(*(long *)(*plVar22 + (ulong)puVar11[1] * 8) + 0x1c);
                  *(int *)(lVar21 + 0xc) = iVar6;
                  iVar6 = iVar6 - *(int *)(*(long *)(*plVar22 + (ulong)puVar11[2] * 8) + 0x1c);
                  *(int *)(lVar21 + 0xc) = iVar6;
                  puVar14 = puVar11 + 3;
                  puVar11 = puVar11 + 4;
                  iVar6 = iVar6 - *(int *)(*(long *)(*plVar22 + (ulong)*puVar14 * 8) + 0x1c);
                  *(int *)(lVar21 + 0xc) = iVar6;
                } while (puVar11 != puVar15 + uVar9);
              }
            }
            *(short *)(lVar21 + 0x10) = sVar10 - (short)uVar9;
            FUN_03530080(lVar18,uVar7,plVar22,lVar21);
          }
        }
        plVar17 = (long *)*plVar8;
        uVar7 = (**(code **)(*plVar17 + 0x10))(plVar17);
      } while ((uVar7 & 1) == 0);
    }
    if (plVar17 == (long *)0x0) goto LAB_0352fcf8;
    lVar21 = plVar17[4];
    *(int *)(param_1 + 4) = (int)lVar21;
    *(bool *)(param_1 + 5) = (int)lVar21 != 0;
    *(int *)((long)param_1 + 0x24) = (int)plVar17[2];
    sVar10 = *(short *)((long)plVar17 + 0x14);
    if (sVar10 == 0) {
      sVar10 = 0;
    }
    else if ((short)plVar17[3] != 0 || *(short *)((long)plVar17 + 0x16) != 0) {
      iVar6 = (int)*(short *)((long)plVar17 + 0x16) + (int)sVar10;
      iVar4 = (int)(short)iVar6;
      if (iVar6 < 1) {
        iVar4 = 1;
      }
      sVar3 = (short)plVar17[3] + sVar10;
      if (iVar4 != sVar3) {
        lVar21 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        iVar6 = (sVar3 - iVar4) + 1;
        *(long *)PTR_DAT_047e7068 = lVar21;
        sVar10 = 0;
        uVar16 = (ulong)lVar21 >> 0x21;
        if (iVar6 != 0) {
          sVar10 = (short)((int)(uint)uVar16 / iVar6);
        }
        sVar10 = ((short)uVar16 - sVar10 * (short)iVar6) + (short)iVar4;
      }
    }
    uVar19 = 1;
    *(short *)((long)param_1 + 0x2a) = sVar10;
  }
  else {
LAB_0352fcf8:
    uVar19 = 2;
  }
  if (plVar20 == (long *)0x0) {
    return uVar19;
  }
LAB_0352fcfc:
  local_70 = local_70 & 0xffffffff00000000;
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar20);
  return uVar19;
LAB_0352fd74:
  uVar16 = FUN_0352f160(param_1,lVar21 + uVar16 * 0x18 + -0x18,local_64);
  if (local_64[0] != '\0') {
    lVar21 = param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x18;
    plVar17 = (long *)plVar17[1];
    plVar8 = *(long **)(lVar21 + -8);
    while( true ) {
      if ((plVar8 != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar21 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(*plVar8 + 0x10))();
      }
      ((long *)(lVar21 + -0x18))[2] = 0;
      uVar9 = (int)param_1[3] - 1;
      *(uint *)(param_1 + 3) = uVar9;
      if (plVar17 == (long *)0x0) goto LAB_0352ff30;
      if ((*(uint *)(plVar17 + 6) & 0xfffffffd) == 0) goto LAB_0352fe64;
      lVar21 = param_1[2] + (ulong)uVar9 * 0x18;
      sVar10 = *(short *)(lVar21 + -0x10);
      if (sVar10 == 0) goto LAB_0352fe64;
      if (1 < sVar10) break;
      plVar17 = (long *)plVar17[1];
      plVar8 = *(long **)(lVar21 + -8);
    }
    *(short *)(lVar21 + -0x10) = sVar10 + -1;
LAB_0352fe64:
    lVar21 = param_1[2];
    uVar16 = (ulong)*(uint *)(param_1 + 3);
    goto LAB_0352fd74;
  }
  plVar17 = *(long **)(plVar17[4] + (uVar16 & 0xffff) * 8);
  uVar16 = (**(code **)(*plVar17 + 0x10))(plVar17);
  if ((uVar16 & 1) == 0) {
    iVar6 = FUN_0352ebf8(param_1,plVar17);
    if (iVar6 != 1) {
      FUN_0352ef88(param_1);
      goto LAB_0352ff30;
    }
    local_64[0] = '\x01';
    if (plVar17 == (long *)0x0) goto LAB_0352ff30;
    goto LAB_0352fe64;
  }
  if (plVar17 != (long *)0x0) {
    lVar21 = plVar17[4];
    *(int *)(param_1 + 4) = (int)lVar21;
    *(bool *)(param_1 + 5) = (int)lVar21 != 0;
    *(int *)((long)param_1 + 0x24) = (int)plVar17[2];
    sVar10 = *(short *)((long)plVar17 + 0x14);
    if (sVar10 == 0) {
      sVar10 = 0;
    }
    else if ((short)plVar17[3] != 0 || *(short *)((long)plVar17 + 0x16) != 0) {
      iVar6 = (int)*(short *)((long)plVar17 + 0x16) + (int)sVar10;
      iVar4 = (int)(short)iVar6;
      if (iVar6 < 1) {
        iVar4 = 1;
      }
      sVar3 = (short)plVar17[3] + sVar10;
      if (iVar4 != sVar3) {
        lVar21 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        iVar6 = (sVar3 - iVar4) + 1;
        *(long *)PTR_DAT_047e7068 = lVar21;
        sVar10 = 0;
        uVar16 = (ulong)lVar21 >> 0x21;
        if (iVar6 != 0) {
          sVar10 = (short)((int)(uint)uVar16 / iVar6);
        }
        sVar10 = ((short)uVar16 - sVar10 * (short)iVar6) + (short)iVar4;
      }
    }
    *(short *)((long)param_1 + 0x2a) = sVar10;
    uVar19 = 1;
    goto LAB_0352fcfc;
  }
LAB_0352ff30:
  uVar19 = 2;
  goto LAB_0352fcfc;
}


