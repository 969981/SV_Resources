/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dc6fc; name: FUN_034dc6fc
 */


void FUN_034dc6fc(undefined8 *param_1,int param_2,int param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  long *plVar2;
  uint3 *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 *puVar12;
  long *plVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  ushort *puVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  ushort *puVar22;
  float *pfVar23;
  long lVar24;
  uint uVar25;
  int *piVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  int iVar30;
  long *plVar31;
  float *pfVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  long local_b8;
  long local_b0;
  ulong local_a8;
  float local_a0;
  float fStack_9c;
  int local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined2 local_8b;
  undefined8 local_88;
  
  piVar15 = (int *)*param_1;
  uVar25 = *(uint *)(param_1 + 1);
  if ((uVar25 == 0) || (*piVar15 == param_2)) {
    piVar17 = piVar15;
  }
  else {
    lVar35 = (ulong)uVar25 * 0x10;
    piVar16 = piVar15;
    do {
      lVar35 = lVar35 + -0x10;
      if (lVar35 == 0) {
        return;
      }
      piVar17 = piVar16 + 4;
      piVar26 = piVar16 + 4;
      piVar16 = piVar17;
    } while (*piVar26 != param_2);
  }
  if (piVar17 != piVar15 + (ulong)uVar25 * 4) {
    piVar15 = *(int **)(piVar17 + 2);
    if ((param_5 & 1) == 0) {
      if (piVar15[1] != param_3) {
        plVar11 = param_1 + 2;
        plVar31 = (long *)*plVar11;
        *(undefined1 *)(param_1 + 7) = 1;
        puVar7 = PTR_DAT_047e2fd0;
        uVar8 = local_94;
        while( true ) {
          PTR_DAT_047e2fd0 = puVar7;
          local_94 = uVar8;
          if (plVar31 == (long *)0x0) break;
          if ((*(int *)(plVar31 + 2) == param_2) &&
             (plVar9 = (long *)plVar31[1], plVar9 != (long *)0x0)) {
            local_b0 = 0;
            local_a8 = local_a8 & 0xffffffff00000000;
            local_a0 = 0.0;
            uVar25 = (uint)local_98 >> 8;
            local_98 = CONCAT31((int3)uVar25,0xff);
            local_94._5_3_ = (undefined3)((ulong)uVar8 >> 0x28);
            local_94._0_5_ = CONCAT14(0xff,(int)uVar8);
            local_88 = 0;
            (**(code **)(*plVar9 + 0x10))(plVar9,param_3,&local_b0,0);
          }
          plVar31 = (long *)*plVar31;
          puVar7 = PTR_DAT_047e2fd0;
          uVar8 = local_94;
        }
        if (*(char *)((long)param_1 + 0x39) != '\0') {
          if ((long *)*plVar11 != (long *)0x0) {
            plVar9 = (long *)0x0;
            plVar31 = (long *)*plVar11;
            do {
              plVar13 = (long *)*plVar31;
              if (plVar31[1] == 0) {
                plVar20 = plVar11;
                if ((long *)param_1[2] != plVar31) {
                  plVar20 = plVar9;
                }
                *plVar20 = (long)plVar13;
                if ((long *)param_1[3] == plVar31) {
                  param_1[3] = plVar9;
                }
                if ((plVar31 < (long *)param_1[5]) ||
                   ((long *)param_1[5] + (ulong)*(uint *)(param_1 + 6) * 3 <= plVar31)) {
                  (**(code **)(puVar7 + 0x30))(0);
                }
                else {
                  *plVar31 = param_1[4];
                  param_1[4] = plVar31;
                }
                *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
              }
              else {
                plVar9 = plVar31;
              }
              plVar31 = plVar13;
            } while (plVar13 != (long *)0x0);
          }
          *(undefined1 *)((long)param_1 + 0x39) = 0;
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      if (((*(code **)PTR_DAT_047e7300 != (code *)0x0) && ((param_4 & 1) == 0)) &&
         (uVar10 = (**(code **)PTR_DAT_047e7300)(param_2,param_3), (uVar10 & 1) != 0)) {
        return;
      }
    }
    if ((param_4 & 1) == 0) {
      if (piVar15[1] == param_3) {
        return;
      }
      piVar16 = *(int **)(piVar15 + 4);
      uVar25 = piVar15[6];
      piVar17 = piVar16;
      if (uVar25 != 0) {
        lVar35 = (ulong)uVar25 * 0xc;
        do {
          if ((*piVar17 == piVar15[1]) && (piVar17[1] == param_3)) goto LAB_034dc934;
          lVar35 = lVar35 + -0xc;
          piVar17 = piVar17 + 3;
        } while (lVar35 != 0);
        piVar17 = piVar16 + (ulong)uVar25 * 3;
      }
LAB_034dc934:
      piVar26 = piVar15;
      if (piVar17 != piVar16 + (ulong)uVar25 * 3) {
        piVar26 = piVar17 + 2;
      }
      iVar30 = *piVar26;
    }
    else {
      iVar30 = 0;
    }
    lVar35 = *(long *)(piVar15 + 2);
    if (lVar35 != 0) {
      puVar34 = (undefined8 *)PTR_DAT_047e7038;
LAB_034dc968:
      plVar31 = *(long **)(lVar35 + 0x18);
      *(int *)(lVar35 + 0x3c) = param_3;
      piVar17 = *(int **)(lVar35 + 0x28);
      uVar25 = *(uint *)(lVar35 + 0x30);
      if ((uVar25 == 0) || (*piVar17 == param_3)) {
        piVar16 = piVar17;
      }
      else {
        lVar29 = (ulong)uVar25 * 0x10;
        piVar26 = piVar17;
        do {
          lVar29 = lVar29 + -0x10;
          if (lVar29 == 0) goto LAB_034dc9cc;
          piVar16 = piVar26 + 4;
          piVar1 = piVar26 + 4;
          piVar26 = piVar16;
        } while (*piVar1 != param_3);
      }
      if (piVar16 == piVar17 + (ulong)uVar25 * 4) {
LAB_034dc9cc:
        lVar29 = 0;
      }
      else {
        lVar29 = *(long *)(piVar16 + 2);
      }
      local_b8 = 0;
      plVar11 = (long *)(**(code **)(*plVar31 + 0x38))(plVar31);
      if ((plVar11 != (long *)0x0) && ((int)plVar11[1] != 0)) {
        uVar10 = 0;
        plVar9 = &local_b8;
        if (lVar29 != 0) {
          plVar9 = (long *)(lVar29 + 0x18);
        }
LAB_034dca10:
        puVar3 = (uint3 *)(*plVar11 + uVar10 * 4);
        uVar5 = (ushort)*puVar3;
        puVar18 = *(ushort **)(lVar35 + 0x20);
        iVar14 = 0;
        if (*(char *)((long)puVar3 + 2) != '\x04') {
          iVar14 = iVar30;
        }
        if (puVar18 != (ushort *)0x0) {
          uVar6 = *puVar18;
          uVar25 = (uint)uVar6;
          if (uVar6 < 2) {
            uVar25 = 1;
          }
          uVar27 = (ulong)uVar25;
          pfVar32 = (float *)((long)puVar18 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc));
          puVar22 = puVar18;
          do {
            puVar22 = puVar22 + 1;
            if (*puVar22 == uVar5) goto LAB_034dca78;
            pfVar32 = pfVar32 + 4;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        pfVar32 = (float *)0x0;
LAB_034dca78:
        fVar38 = 1.0;
        if (*(char *)((long)puVar3 + 2) != '\x03') {
          fVar38 = 0.0;
        }
        puVar22 = (ushort *)*plVar9;
        uVar27 = (ulong)*(byte *)((long)puVar3 + 3) & 1;
        fVar37 = fVar38;
        if (puVar22 != (ushort *)0x0) {
          uVar6 = *puVar22;
          uVar25 = (uint)uVar6;
          if (uVar6 < 2) {
            uVar25 = 1;
          }
          uVar19 = (ulong)uVar25;
          pfVar23 = (float *)((long)puVar22 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc));
          do {
            puVar22 = puVar22 + 1;
            if (*puVar22 == uVar5) {
              fVar37 = *pfVar23;
              break;
            }
            pfVar23 = pfVar23 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        uVar19 = (ulong)*puVar3 | uVar27 << 0x18;
        uVar25 = (uint)uVar19;
        if (pfVar32 == (float *)0x0) {
          if (fVar38 == fVar37) goto LAB_034dcec8;
          if (puVar18 == (ushort *)0x0) {
            uVar33 = 0;
          }
          else {
            uVar33 = (ulong)*puVar18;
          }
          uVar21 = (int)uVar33 + 1;
          uVar4 = uVar21 * 2 + 5 & 0x7fffc;
          puVar12 = (undefined2 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar4 + uVar21 * 0x10);
          pfVar32 = (float *)0x0;
          if (puVar12 != (undefined2 *)0x0) {
            if (*(long *)(lVar35 + 0x20) != 0) {
              memcpy(puVar12 + 1,(void *)(*(long *)(lVar35 + 0x20) + 2),uVar33 << 1);
              memcpy((void *)((long)puVar12 + (ulong)uVar4),
                     (void *)(*(long *)(lVar35 + 0x20) + (ulong)((int)uVar33 * 2 + 5U & 0x3fffc)),
                     uVar33 << 4);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(lVar35 + 0x20));
            }
            puVar12[uVar21] = uVar5;
            *puVar12 = (short)uVar21;
            *(undefined2 **)(lVar35 + 0x20) = puVar12;
            pfVar32 = (float *)((long)puVar12 + uVar33 * 0x10 + (ulong)uVar4);
            *pfVar32 = 0.0;
            pfVar32[2] = 0.0;
            pfVar32[3] = 0.0;
          }
          puVar34 = (undefined8 *)PTR_DAT_047e7038;
          if (iVar14 != 0) goto LAB_034dcb34;
LAB_034dcce4:
          puVar18 = *(ushort **)(lVar35 + 0x20);
          uVar25 = uVar25 >> 0x10 & 0xff;
          if (puVar18 != (ushort *)0x0) {
            uVar6 = *puVar18;
            uVar21 = (uint)uVar6;
            if (uVar6 < 2) {
              uVar21 = 1;
            }
            uVar27 = (ulong)uVar21;
            plVar13 = (long *)((long)puVar18 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc) + 8);
            do {
              puVar18 = puVar18 + 1;
              if (*puVar18 == uVar5) goto LAB_034dcd94;
              plVar13 = plVar13 + 2;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
LAB_034dcd84:
          iVar14 = 0;
          uVar36 = 0x3f800000;
          if (uVar25 != 3) {
            uVar36 = 0;
          }
          goto LAB_034dcdb4;
        }
        if (*(long *)(pfVar32 + 2) == 0) {
          if (*pfVar32 == fVar37) goto LAB_034dcec8;
          fVar38 = *pfVar32;
          if (iVar14 == 0) goto LAB_034dcce4;
LAB_034dcb34:
          local_a0 = fVar38;
          local_94 = 0x900000004;
          local_8c = (undefined1)uVar27;
          local_8b = 1;
          local_b0 = lVar35;
          local_a8 = uVar19;
          fStack_9c = fVar37;
          local_98 = iVar14;
          lVar29 = FUN_034e6ab0(*puVar34,&local_b0,1);
          if (pfVar32 != (float *)0x0) {
            *(long *)(pfVar32 + 2) = lVar29;
            if (lVar29 == 0) {
              *pfVar32 = fVar37;
              puVar18 = *(ushort **)(lVar35 + 0x20);
              uVar25 = uVar25 >> 0x10 & 0xff;
              if (puVar18 != (ushort *)0x0) {
                uVar6 = *puVar18;
                uVar21 = (uint)uVar6;
                if (uVar6 < 2) {
                  uVar21 = 1;
                }
                uVar27 = (ulong)uVar21;
                plVar13 = (long *)((long)puVar18 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc) + 8);
                do {
                  puVar18 = puVar18 + 1;
                  if (*puVar18 == uVar5) goto LAB_034dcd94;
                  plVar13 = plVar13 + 2;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              goto LAB_034dcd84;
            }
            uVar27 = (**(code **)(*plVar31 + 0x10))();
            if ((uVar27 & 1) == 0) {
              puVar18 = *(ushort **)(lVar35 + 0x20);
              uVar25 = uVar25 >> 0x10 & 0xff;
              if (puVar18 != (ushort *)0x0) {
                uVar6 = *puVar18;
                uVar21 = (uint)uVar6;
                if (uVar6 < 2) {
                  uVar21 = 1;
                }
                uVar27 = (ulong)uVar21;
                plVar13 = (long *)((long)puVar18 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc) + 8);
                do {
                  puVar18 = puVar18 + 1;
                  if (*puVar18 == uVar5) {
                    uVar36 = (undefined4)plVar13[-1];
                    *(float *)(plVar13 + -1) = fVar37;
                    if (*plVar13 == 0) {
                      iVar14 = 0;
                    }
                    else {
                      iVar14 = 1;
                      *plVar13 = 0;
                    }
                    goto LAB_034dce14;
                  }
                  plVar13 = plVar13 + 2;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              iVar14 = 0;
              uVar36 = 0x3f800000;
              if (uVar25 != 3) {
                uVar36 = 0;
              }
LAB_034dce14:
              plVar13 = *(long **)(lVar35 + 0x18);
              if ((char)plVar13[1] != '\0') {
                (**(code **)(*plVar13 + 0x48))
                          (uVar36,fVar37,plVar13,uVar5,uVar25,*(undefined4 *)(lVar35 + 0x38),iVar14)
                ;
              }
              if (iVar14 != 0) {
                (**(code **)(**(long **)(lVar35 + 0x18) + 0x18))();
              }
              uVar25 = *(uint *)(lVar29 + 0x30);
              if (uVar25 != 0) {
                plVar20 = *(long **)(lVar29 + 0x28);
                plVar13 = plVar20 + uVar25;
                if (*plVar20 != lVar35) {
                  lVar24 = (ulong)uVar25 * 8;
                  do {
                    lVar24 = lVar24 + -8;
                    if (lVar24 == 0) goto LAB_034dce98;
                    plVar28 = plVar20 + 1;
                    plVar2 = plVar20 + 1;
                    plVar20 = plVar28;
                  } while (*plVar2 != lVar35);
                  goto LAB_034dce90;
                }
                goto LAB_034dce9c;
              }
            }
            goto LAB_034dcec8;
          }
          if (lVar29 == 0) goto LAB_034dcec8;
          uVar25 = *(uint *)(lVar29 + 0x30);
          if (uVar25 == 0) goto LAB_034dcec8;
          plVar20 = *(long **)(lVar29 + 0x28);
          plVar13 = plVar20 + uVar25;
          if (*plVar20 != lVar35) {
            lVar24 = (ulong)uVar25 * 8;
            do {
              lVar24 = lVar24 + -8;
              if (lVar24 == 0) goto LAB_034dce98;
              plVar28 = plVar20 + 1;
              plVar2 = plVar20 + 1;
              plVar20 = plVar28;
            } while (*plVar2 != lVar35);
LAB_034dce90:
            plVar20 = plVar28;
          }
          goto LAB_034dce9c;
        }
        FUN_034e6c0c(fVar37,*puVar34,*(long *)(pfVar32 + 2),uVar19,iVar14,4,0);
        goto LAB_034dcec8;
      }
      goto LAB_034dcef8;
    }
LAB_034dcf00:
    piVar15[1] = param_3;
  }
  return;
LAB_034dcd94:
  uVar36 = (undefined4)plVar13[-1];
  *(float *)(plVar13 + -1) = fVar37;
  if (*plVar13 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1;
    *plVar13 = 0;
  }
LAB_034dcdb4:
  plVar13 = *(long **)(lVar35 + 0x18);
  if ((char)plVar13[1] != '\0') {
    (**(code **)(*plVar13 + 0x48))
              (uVar36,fVar37,plVar13,uVar5,uVar25,*(undefined4 *)(lVar35 + 0x38),iVar14);
  }
  if (iVar14 != 0) {
    (**(code **)(**(long **)(lVar35 + 0x18) + 0x18))();
  }
LAB_034dcec8:
  uVar10 = uVar10 + 1;
  if (*(uint *)(plVar11 + 1) <= uVar10) goto code_r0x034dced8;
  goto LAB_034dca10;
LAB_034dce98:
  plVar20 = plVar13;
LAB_034dce9c:
  if (plVar13 != plVar20) {
    if (uVar25 < 2) {
      iVar14 = 0;
    }
    else {
      *plVar20 = plVar13[-1];
      iVar14 = *(int *)(lVar29 + 0x30) + -1;
    }
    *(int *)(lVar29 + 0x30) = iVar14;
  }
  goto LAB_034dcec8;
code_r0x034dced8:
  if (local_b8 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
LAB_034dcef8:
  lVar35 = *(long *)(lVar35 + 8);
  if (lVar35 == 0) goto LAB_034dcf00;
  goto LAB_034dc968;
}


