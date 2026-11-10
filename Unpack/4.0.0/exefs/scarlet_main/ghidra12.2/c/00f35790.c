/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f35790; name: FUN_00f35790
 */


void FUN_00f35790(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  undefined1 *puVar13;
  long *plVar14;
  byte *pbVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  uint *puVar22;
  long *plVar23;
  char *__s;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  long local_98;
  long local_90;
  long *local_70;
  long *plStack_68;
  
  piVar17 = *(int **)(param_1 + 0x70);
  if (((piVar17 != (int *)0x0) && (6 < *(ushort *)((long)piVar17 - (long)*piVar17))) &&
     (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar19 != 0)) {
    uVar21 = (ulong)*(uint *)((long)piVar17 + uVar19);
    puVar3 = (uint *)((long)((long)piVar17 + uVar19) + uVar21);
    fVar28 = (float)NEON_ucvtf(*puVar3);
    plVar1 = (long *)(param_1 + 8);
    FUN_00f36164(plVar1,(long)(fVar28 / *(float *)(param_1 + 0x68)));
    puVar22 = puVar3 + 1;
    if ((ulong)*puVar3 != 0) {
      plVar2 = (long *)(param_1 + 0x38);
      puVar3 = puVar22 + *puVar3;
      lVar24 = (long)piVar17 + uVar21 + uVar19 + 9;
      do {
        uVar5 = *puVar22;
        plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
        if (plVar10 == (long *)0x0) {
          plVar27 = (long *)0x0;
          local_98 = 0;
          local_90 = 0;
        }
        else {
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f3604c;
          *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[2] = 0;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          local_98 = 0x18;
          local_90 = 8;
          plVar27 = param_2;
        }
        piVar17 = (int *)((long)puVar22 + (ulong)uVar5);
        if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xd) {
          lVar11 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[6];
          lVar11 = 0;
          if (uVar19 != 0) {
            puVar4 = (uint *)((long)piVar17 + uVar19);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        *plVar10 = lVar11;
        if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) {
          lVar11 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7];
          lVar11 = 0;
          if (uVar19 != 0) {
            puVar4 = (uint *)((long)piVar17 + uVar19);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        plVar10[1] = lVar11;
        if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x11) {
          lVar11 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[8];
          lVar11 = 0;
          if (uVar19 != 0) {
            puVar4 = (uint *)((long)piVar17 + uVar19);
            lVar11 = (long)puVar4 + (ulong)*puVar4;
          }
        }
        plVar10[2] = lVar11;
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar19 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar18 = *(long **)PTR_DAT_047d3e30;
          __s = *(char **)(PTR_DAT_047d3e30 + 8);
          sVar12 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar26 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          plVar23 = param_2;
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x18))(plVar26);
          }
        }
        else {
          uVar21 = (ulong)*(uint *)((long)piVar17 + uVar19);
          plVar23 = (long *)((long)((long)piVar17 + uVar19) + uVar21);
          __s = (char *)((long)plVar23 + 4);
          sVar12 = strlen(__s);
          bVar7 = *(byte *)((long)plVar23 + 4);
          if (bVar7 == 0) {
            plVar26 = (long *)0x0;
            plVar18 = (long *)&DAT_cbf29ce484222645;
          }
          else {
            plVar18 = (long *)&DAT_cbf29ce484222645;
            pbVar15 = (byte *)(lVar24 + uVar21 + uVar19 + (ulong)uVar5);
            do {
              plVar18 = (long *)(((ulong)plVar18 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar7 != 0);
            plVar26 = (long *)0x0;
          }
        }
        plVar25 = *(long **)(param_1 + 0x10);
        if (plVar25 == (long *)0x0) {
LAB_00f359ec:
          plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                      (*(long **)(param_1 + 0x40),0x50,8);
          if (plVar14 == (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x40) + 0xe8))();
          }
          uVar20 = *(undefined8 *)(param_1 + 0x40);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00f3604c:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar20;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          plVar14[2] = (long)plVar18;
          plVar14[3] = (long)__s;
          plVar14[4] = sVar12;
          plVar14[5] = (long)plVar26;
          plVar14[6] = (long)plVar10;
          plVar14[7] = (long)plVar27;
          plVar14[8] = local_98;
          plVar14[9] = local_90;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          *plVar14 = 0;
          plVar14[1] = (long)plVar18;
          fVar28 = (float)(*(long *)(param_1 + 0x60) + 1);
          if ((plVar25 == (long *)0x0) || (*(float *)(param_1 + 0x68) * (float)plVar25 < fVar28)) {
            uVar19 = (ulong)(plVar25 < (long *)0x3 ||
                            ((ulong)plVar25 & (ulong)((long)plVar25 + -1)) != 0) |
                     (long)plVar25 << 1;
            uVar21 = (ulong)(fVar28 / *(float *)(param_1 + 0x68));
            if (uVar21 <= uVar19) {
              uVar21 = uVar19;
            }
            FUN_00f36164(plVar1,uVar21);
            plVar25 = *(long **)(param_1 + 0x10);
            if (((ulong)plVar25 & (ulong)((long)plVar25 + -1)) == 0) {
              plVar23 = (long *)((ulong)((long)plVar25 + -1) & (ulong)plVar18);
            }
            else {
              plVar23 = plVar18;
              if (plVar25 <= plVar18) {
                uVar19 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar19 = (ulong)plVar18 / (ulong)plVar25;
                }
                plVar23 = (long *)((long)plVar18 - uVar19 * (long)plVar25);
              }
            }
          }
          plVar10 = *(long **)(*plVar1 + (long)plVar23 * 8);
          if (plVar10 == (long *)0x0) {
            *plVar14 = *plVar2;
            *plVar2 = (long)plVar14;
            *(long **)(*plVar1 + (long)plVar23 * 8) = plVar2;
            if (*plVar14 != 0) {
              plVar10 = *(long **)(*plVar14 + 8);
              if (((ulong)plVar25 & (ulong)((long)plVar25 + -1)) == 0) {
                plVar10 = (long *)((ulong)plVar10 & (ulong)((long)plVar25 + -1));
              }
              else if (plVar25 <= plVar10) {
                uVar19 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar19 = (ulong)plVar10 / (ulong)plVar25;
                }
                plVar10 = (long *)((long)plVar10 - uVar19 * (long)plVar25);
              }
              plVar10 = (long *)(*plVar1 + (long)plVar10 * 8);
              goto LAB_00f35afc;
            }
          }
          else {
            *plVar14 = *plVar10;
LAB_00f35afc:
            *plVar10 = (long)plVar14;
          }
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
        }
        else {
          puVar13 = (undefined1 *)((long)plVar25 + -1);
          if (((ulong)plVar25 & (ulong)puVar13) == 0) {
            plVar23 = (long *)((ulong)puVar13 & (ulong)plVar18);
            plVar14 = *(long **)(*plVar1 + (long)plVar23 * 8);
            if (plVar14 == (long *)0x0) goto LAB_00f359ec;
            do {
              plVar14 = (long *)*plVar14;
              if ((plVar14 == (long *)0x0) ||
                 ((long *)plVar14[1] != plVar18 &&
                  (long *)((ulong)plVar14[1] & (ulong)puVar13) != plVar23)) goto LAB_00f359ec;
            } while ((long *)plVar14[2] != plVar18);
          }
          else {
            plVar23 = plVar18;
            if (plVar25 <= plVar18) {
              uVar19 = 0;
              if (plVar25 != (long *)0x0) {
                uVar19 = (ulong)plVar18 / (ulong)plVar25;
              }
              plVar23 = (long *)((long)plVar18 - uVar19 * (long)plVar25);
            }
            plVar14 = *(long **)(*plVar1 + (long)plVar23 * 8);
            if (plVar14 == (long *)0x0) goto LAB_00f359ec;
            do {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_00f359ec;
              plVar16 = (long *)plVar14[1];
              if (plVar16 != plVar18) {
                if (plVar25 <= plVar16) {
                  uVar19 = 0;
                  if (plVar25 != (long *)0x0) {
                    uVar19 = (ulong)plVar16 / (ulong)plVar25;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar19 * (long)plVar25);
                }
                if (plVar16 != plVar23) goto LAB_00f359ec;
              }
            } while ((long *)plVar14[2] != plVar18);
          }
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x20))(plVar26);
          }
          if (plVar10 != (long *)0x0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar11 = FUN_00c4e600();
            iVar6 = *(int *)(lVar11 + 0x12c8);
            iVar9 = iVar6 + 1;
            *(int *)(lVar11 + 0x12c8) = iVar9;
            if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
              *(int *)(lVar11 + 0x12cc) = iVar9;
            }
            uVar19 = (**(code **)(*plVar27 + 0xf8))(plVar27);
            if (((uVar19 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar27 + 0x18))(plVar27,plVar10,local_98,local_90);
            }
            else {
              FUN_00c48fe8(plVar27,plVar10,local_98,local_90);
            }
            lVar11 = FUN_00c4e600();
            iVar9 = *(int *)(lVar11 + 0x12c8) + -1;
            *(int *)(lVar11 + 0x12c8) = iVar9;
            if (iVar9 == 0) {
              plVar10 = (long *)FUN_00c4e600();
              if (plVar10[600] != 0) {
                local_70 = plVar10 + plVar10[600] * 3;
                plStack_68 = plVar10;
                FUN_00c4ea30(&plStack_68,&local_70);
                plVar23 = (long *)*plVar10;
                plVar27 = plVar10;
                if (plVar10[600] != 0) {
                  plVar27 = plVar10 + plVar10[600] * 3;
                }
                if (plVar27 == plVar10) {
                  uVar21 = 0;
                  uVar19 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar10 + 0xd0))();
                  if ((long *)*plVar10 != plVar23) {
                    (**(code **)(*plVar23 + 0x100))(plVar23,plVar10,plVar10);
                    plVar23 = (long *)*plVar10;
                  }
                  plVar18 = plVar10 + 3;
                  if (plVar27 == plVar18) {
                    uVar21 = 0;
                    uVar19 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    bVar8 = (long *)*plVar18 != plVar23;
                    if (bVar8) {
                      (**(code **)(*plVar23 + 0x100))(plVar23,plVar10,plVar10 + 3);
                      plVar23 = (long *)plVar10[3];
                    }
                    uVar21 = (ulong)bVar8;
                    plVar18 = plVar10 + 6;
                    if (plVar27 == plVar18) {
                      uVar19 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar18 + 0xd0))();
                      if ((long *)*plVar18 != plVar23) {
                        (**(code **)(*plVar23 + 0x100))(plVar23,plVar10 + uVar21 * 3,plVar10 + 6);
                        plVar23 = (long *)plVar10[6];
                        uVar21 = 2;
                      }
                      plVar18 = plVar10 + 9;
                      if (plVar27 == plVar18) {
                        uVar19 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar23) {
                          (**(code **)(*plVar23 + 0x100))(plVar23,plVar10 + uVar21 * 3,plVar10 + 9);
                          plVar23 = (long *)plVar10[9];
                          uVar21 = 3;
                        }
                        plVar18 = plVar10 + 0xc;
                        if (plVar27 == plVar18) {
                          uVar19 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar18 + 0xd0))();
                          if ((long *)*plVar18 != plVar23) {
                            (**(code **)(*plVar23 + 0x100))
                                      (plVar23,plVar10 + uVar21 * 3,plVar10 + 0xc);
                            plVar23 = (long *)plVar10[0xc];
                            uVar21 = 4;
                          }
                          plVar18 = plVar10 + 0xf;
                          if (plVar27 == plVar18) {
                            uVar19 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar18 + 0xd0))();
                            if ((long *)*plVar18 != plVar23) {
                              (**(code **)(*plVar23 + 0x100))
                                        (plVar23,plVar10 + uVar21 * 3,plVar10 + 0xf);
                              plVar23 = (long *)plVar10[0xf];
                              uVar21 = 5;
                            }
                            uVar19 = 6;
                            for (plVar18 = plVar10 + 0x12; plVar27 != plVar18; plVar18 = plVar18 + 3
                                ) {
                              (**(code **)(*(long *)*plVar18 + 0xd0))();
                              if ((long *)*plVar18 != plVar23) {
                                (**(code **)(*plVar23 + 0x100))
                                          (plVar23,plVar10 + uVar21 * 3,plVar18);
                                plVar23 = (long *)*plVar18;
                                uVar21 = uVar19;
                              }
                              uVar19 = uVar19 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*plVar23 + 0x100))(plVar23,plVar10 + uVar21 * 3,plVar10 + uVar19 * 3);
                plVar10[600] = 0;
              }
              *(undefined4 *)(lVar11 + 0x12cc) = 0;
            }
          }
        }
        puVar22 = puVar22 + 1;
        lVar24 = lVar24 + 4;
      } while (puVar22 != puVar3);
    }
  }
  return;
}


