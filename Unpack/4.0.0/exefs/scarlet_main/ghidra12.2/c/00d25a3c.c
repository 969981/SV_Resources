/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d25a3c; name: FUN_00d25a3c
 */


long FUN_00d25a3c(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 *param_6)

{
  long *plVar1;
  char *__s;
  long *plVar2;
  short *psVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  uint *local_170;
  undefined8 *local_160 [2];
  char local_14c [12];
  undefined8 *local_140 [2];
  char local_12c [12];
  undefined8 *local_120 [2];
  char local_10c [12];
  long *local_100 [2];
  char local_ec [12];
  long *local_e0 [2];
  char local_cc [12];
  long *local_c0;
  char *pcStack_b8;
  size_t local_b0;
  long *local_a8;
  long *local_a0 [2];
  char local_8c [12];
  long *local_80 [2];
  
  *(undefined8 *)(param_1 + 8) = param_2;
  *(int **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  if (param_3 == (int *)0x0) {
    return param_1;
  }
  puVar16 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar16 < 7) {
    lVar19 = 0;
    uVar24 = 0;
  }
  else {
    if ((ulong)puVar16[3] == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)((long)param_3 + (ulong)puVar16[3]);
    }
    if (*puVar16 < 9) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      if ((ulong)puVar16[4] != 0) {
        puVar4 = (uint *)((long)param_3 + (ulong)puVar16[4]);
        lVar19 = (long)puVar4 + (ulong)*puVar4;
      }
    }
  }
  local_c0 = (long *)0x0;
  if (lVar19 != 0) {
    local_c0 = (long *)(lVar19 + 4);
  }
  puVar13 = param_6 + 4;
  (*(code *)*param_6)(local_a0,puVar13,&local_c0);
  if (local_a0[0] == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = uVar24;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (((*(short *)((long)local_a0[0] + 0x1a) == 0) || (local_8c[0] == '\0')) ||
       (FUN_00c90ab8(&local_c0,local_a0), local_c0 == (long *)0x0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = (**(code **)(*local_c0 + 0x180))(local_c0,local_8c);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
    }
    *(undefined4 *)(param_1 + 0x30) = uVar24;
    *(undefined8 *)(param_1 + 0x38) = uVar23;
    if (local_a0[0] != (long *)0x0) {
      plVar1 = local_a0[0] + 3;
      do {
        sVar7 = (short)*plVar1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *(short *)plVar1 = sVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar7 == 1) {
        piVar5 = (int *)((long)local_a0[0] + 0x1c);
        do {
          iVar12 = *piVar5;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar11) {
            *piVar5 = -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar19 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_c0 = (long *)*local_a0[0];
          FUN_00c44438(lVar19 + 0x8040,&local_c0);
        }
      }
      else if (sVar7 == 0) goto LAB_00d25b5c;
    }
  }
  puVar16 = (ushort *)((long)param_3 - (long)*param_3);
  uVar9 = *puVar16;
  if (uVar9 < 0x17) {
    if (10 < uVar9) goto LAB_00d25e4c;
    lVar19 = 0;
    uVar24 = 0;
  }
  else {
    if ((ulong)puVar16[0xb] == 0) {
      local_170 = (uint *)0x0;
    }
    else {
      local_170 = (uint *)((long)param_3 + (ulong)puVar16[0xb]);
      local_170 = (uint *)((long)local_170 + (ulong)*local_170);
    }
    if ((uVar9 < 0x19) || (uVar21 = (ulong)puVar16[0xc], uVar21 == 0)) {
      if (local_170 != (uint *)0x0) goto LAB_00d26568;
    }
    else if (local_170 != (uint *)0x0) {
      uVar17 = (ulong)*(uint *)((long)param_3 + uVar21);
      puVar4 = (uint *)((long)((long)param_3 + uVar21) + uVar17);
      if (*puVar4 != 0) {
        if (*local_170 == 0) {
          return param_1;
        }
        uVar22 = 0;
        lVar19 = (long)param_3 + uVar17 + uVar21 + 9;
        do {
          uVar15 = local_170[uVar22 + 1];
          puVar6 = puVar4 + uVar22 + 1;
          uVar21 = (ulong)*puVar6;
          __s = (char *)((long)puVar6 + uVar21 + 4);
          local_b0 = strlen(__s);
          bVar8 = *(byte *)((long)puVar6 + uVar21 + 4);
          local_c0 = (long *)&DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            local_c0 = (long *)&DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar19 + uVar21);
            do {
              local_c0 = (long *)(((ulong)local_c0 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar8 != 0);
          }
          local_a8 = (long *)0x0;
          pcStack_b8 = __s;
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          if (local_c0 == *(long **)PTR_DAT_047d3e30) {
            if (local_a8 == (long *)0x0) {
              return param_1;
            }
            (**(code **)(*local_a8 + 0x20))();
            return param_1;
          }
          piVar5 = (int *)((long)(local_170 + uVar22 + 1) + (ulong)uVar15);
          puVar16 = (ushort *)((long)piVar5 - (long)*piVar5);
          if (*puVar16 < 5) {
            lVar18 = 0;
            uVar24 = 0x3f800000;
          }
          else {
            uVar24 = 0x3f800000;
            if ((ulong)puVar16[2] != 0) {
              uVar24 = *(undefined4 *)((long)piVar5 + (ulong)puVar16[2]);
            }
            if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) {
              lVar18 = 0;
            }
            else {
              puVar6 = (uint *)((long)piVar5 + (ulong)puVar16[3]);
              lVar18 = (long)puVar6 + (ulong)*puVar6;
            }
          }
          local_80[0] = (long *)0x0;
          if (lVar18 != 0) {
            local_80[0] = (long *)(lVar18 + 4);
          }
          (*(code *)*param_6)(local_e0,puVar13,local_80);
          uVar23 = 0;
          if (((local_e0[0] != (long *)0x0) &&
              (uVar23 = 0, *(short *)((long)local_e0[0] + 0x1a) != 0)) && (local_cc[0] != '\0')) {
            FUN_00c90ab8(local_80,local_e0);
            if (local_80[0] == (long *)0x0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (**(code **)(*local_80[0] + 0x180))(local_80[0],local_cc);
              if (local_80[0] != (long *)0x0) {
                (**(code **)(*local_80[0] + 0x18))();
              }
            }
          }
          puVar14 = (undefined4 *)FUN_00d26978(param_1 + 0x40,&local_c0);
          plVar1 = local_e0[0];
          *puVar14 = uVar24;
          *(undefined8 *)(puVar14 + 2) = uVar23;
          if (local_e0[0] != (long *)0x0) {
            plVar2 = local_e0[0] + 3;
            do {
              sVar7 = (short)*plVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar11) {
                *(short *)plVar2 = sVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 1) {
              piVar5 = (int *)((long)local_e0[0] + 0x1c);
              do {
                iVar12 = *piVar5;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar11) {
                  *piVar5 = -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_80[0] = (long *)*plVar1;
                FUN_00c44438(lVar18 + 0x8040,local_80);
              }
            }
            else if (sVar7 == 0) goto LAB_00d25b5c;
          }
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          uVar22 = uVar22 + 1;
          if (*local_170 <= uVar22) {
            return param_1;
          }
          lVar19 = lVar19 + 4;
          if (*puVar4 <= uVar22) {
            return param_1;
          }
        } while( true );
      }
LAB_00d26568:
      uVar15 = *local_170;
      if (uVar15 == 0) {
        return param_1;
      }
      uVar21 = 0;
      do {
        if (uVar21 < 3) {
          piVar5 = (int *)((long)(local_170 + uVar21 + 1) + (ulong)local_170[uVar21 + 1]);
          iVar12 = (int)uVar21;
          if (iVar12 == 1) {
            local_c0 = (long *)&DAT_ea8325e5dbb45b47;
            pcStack_b8 = "Wind";
            local_b0 = 4;
            local_a8 = (long *)0x0;
          }
          else if (iVar12 == 0) {
            local_c0 = (long *)0x898255d4ad0f6542;
            pcStack_b8 = "Physics";
            local_b0 = 7;
            local_a8 = (long *)0x0;
          }
          else if (iVar12 == 2) {
            local_c0 = (long *)0xaa95b52d79d5cd73;
            pcStack_b8 = "WindNoise";
            local_b0 = 9;
            local_a8 = (long *)0x0;
          }
          else {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_c0 = *(long **)PTR_DAT_047d3e30;
            pcStack_b8 = *(char **)(PTR_DAT_047d3e30 + 8);
            local_b0 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_a8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x18))();
            }
          }
          puVar16 = (ushort *)((long)piVar5 - (long)*piVar5);
          if (*puVar16 < 5) {
            lVar19 = 0;
            uVar24 = 0x3f800000;
          }
          else {
            uVar24 = 0x3f800000;
            if ((ulong)puVar16[2] != 0) {
              uVar24 = *(undefined4 *)((long)piVar5 + (ulong)puVar16[2]);
            }
            if (*puVar16 < 7) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              if ((ulong)puVar16[3] != 0) {
                puVar4 = (uint *)((long)piVar5 + (ulong)puVar16[3]);
                lVar19 = (long)puVar4 + (ulong)*puVar4;
              }
            }
          }
          local_80[0] = (long *)0x0;
          if (lVar19 != 0) {
            local_80[0] = (long *)(lVar19 + 4);
          }
          (*(code *)*param_6)(local_100,puVar13,local_80);
          uVar23 = 0;
          if (((local_100[0] != (long *)0x0) &&
              (uVar23 = 0, *(short *)((long)local_100[0] + 0x1a) != 0)) && (local_ec[0] != '\0')) {
            FUN_00c90ab8(local_80,local_100);
            if (local_80[0] == (long *)0x0) {
              uVar23 = 0;
            }
            else {
              uVar23 = (**(code **)(*local_80[0] + 0x180))(local_80[0],local_ec);
              if (local_80[0] != (long *)0x0) {
                (**(code **)(*local_80[0] + 0x18))();
              }
            }
          }
          puVar14 = (undefined4 *)FUN_00d26978(param_1 + 0x40,&local_c0);
          plVar1 = local_100[0];
          *puVar14 = uVar24;
          *(undefined8 *)(puVar14 + 2) = uVar23;
          if (local_100[0] != (long *)0x0) {
            plVar2 = local_100[0] + 3;
            do {
              sVar7 = (short)*plVar2;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar11) {
                *(short *)plVar2 = sVar7 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (sVar7 == 1) {
              piVar5 = (int *)((long)local_100[0] + 0x1c);
              do {
                iVar12 = *piVar5;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar11) {
                  *piVar5 = -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_80[0] = (long *)*plVar1;
                FUN_00c44438(lVar19 + 0x8040,local_80);
              }
            }
            else if (sVar7 == 0) goto LAB_00d25b5c;
          }
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          uVar15 = *local_170;
        }
        uVar21 = uVar21 + 1;
        if (uVar15 <= uVar21) {
          return param_1;
        }
      } while( true );
    }
LAB_00d25e4c:
    if ((ulong)puVar16[5] == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)((long)param_3 + (ulong)puVar16[5]);
    }
    if (uVar9 < 0xd) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      if ((ulong)puVar16[6] != 0) {
        puVar4 = (uint *)((long)param_3 + (ulong)puVar16[6]);
        lVar19 = (long)puVar4 + (ulong)*puVar4;
      }
    }
  }
  local_c0 = (long *)0x0;
  if (lVar19 != 0) {
    local_c0 = (long *)(lVar19 + 4);
  }
  (*(code *)*param_6)(local_120,puVar13,&local_c0);
  uVar23 = 0;
  if (local_120[0] != (undefined8 *)0x0) {
    if (((*(short *)((long)local_120[0] + 0x1a) == 0) || (local_10c[0] == '\0')) ||
       (FUN_00c90ab8(&local_c0,local_120), local_c0 == (long *)0x0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = (**(code **)(*local_c0 + 0x180))(local_c0,local_10c);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
    }
  }
  local_c0 = (long *)0x898255d4ad0f6542;
  pcStack_b8 = "Physics";
  lVar19 = param_1 + 0x40;
  local_b0 = 7;
  local_a8 = (long *)0x0;
  puVar14 = (undefined4 *)FUN_00d27094(lVar19,&local_c0);
  *puVar14 = uVar24;
  *(undefined8 *)(puVar14 + 2) = uVar23;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_120[0] != (undefined8 *)0x0) {
    psVar3 = (short *)(local_120[0] + 3);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_120[0] + 0x1c);
      do {
        iVar12 = *piVar5;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar11) {
          *piVar5 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_c0 = (long *)*local_120[0];
        FUN_00c44438(lVar18 + 0x8040,&local_c0);
      }
    }
    else if (sVar7 == 0) goto LAB_00d25b5c;
  }
  puVar16 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar16 < 0xf) {
    lVar18 = 0;
    uVar24 = 0;
  }
  else {
    if ((ulong)puVar16[7] == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)((long)param_3 + (ulong)puVar16[7]);
    }
    if (*puVar16 < 0x11) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if ((ulong)puVar16[8] != 0) {
        puVar4 = (uint *)((long)param_3 + (ulong)puVar16[8]);
        lVar18 = (long)puVar4 + (ulong)*puVar4;
      }
    }
  }
  local_c0 = (long *)0x0;
  if (lVar18 != 0) {
    local_c0 = (long *)(lVar18 + 4);
  }
  (*(code *)*param_6)(local_140,puVar13,&local_c0);
  uVar23 = 0;
  if (local_140[0] != (undefined8 *)0x0) {
    if (((*(short *)((long)local_140[0] + 0x1a) == 0) || (local_12c[0] == '\0')) ||
       (FUN_00c90ab8(&local_c0,local_140), local_c0 == (long *)0x0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = (**(code **)(*local_c0 + 0x180))(local_c0,local_12c);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
    }
  }
  local_c0 = (long *)&DAT_ea8325e5dbb45b47;
  pcStack_b8 = "Wind";
  local_b0 = 4;
  local_a8 = (long *)0x0;
  puVar14 = (undefined4 *)FUN_00d27094(lVar19,&local_c0);
  *puVar14 = uVar24;
  *(undefined8 *)(puVar14 + 2) = uVar23;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_140[0] != (undefined8 *)0x0) {
    psVar3 = (short *)(local_140[0] + 3);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_140[0] + 0x1c);
      do {
        iVar12 = *piVar5;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar11) {
          *piVar5 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_c0 = (long *)*local_140[0];
        FUN_00c44438(lVar18 + 0x8040,&local_c0);
      }
    }
    else if (sVar7 == 0) goto LAB_00d25b5c;
  }
  puVar16 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar16 < 0x13) {
    lVar18 = 0;
    uVar24 = 0;
  }
  else {
    if ((ulong)puVar16[9] == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)((long)param_3 + (ulong)puVar16[9]);
    }
    if (*puVar16 < 0x15) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      if ((ulong)puVar16[10] != 0) {
        puVar4 = (uint *)((long)param_3 + (ulong)puVar16[10]);
        lVar18 = (long)puVar4 + (ulong)*puVar4;
      }
    }
  }
  local_c0 = (long *)0x0;
  if (lVar18 != 0) {
    local_c0 = (long *)(lVar18 + 4);
  }
  (*(code *)*param_6)(local_160,puVar13,&local_c0);
  uVar23 = 0;
  if (local_160[0] != (undefined8 *)0x0) {
    if (((*(short *)((long)local_160[0] + 0x1a) == 0) || (local_14c[0] == '\0')) ||
       (FUN_00c90ab8(&local_c0,local_160), local_c0 == (long *)0x0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = (**(code **)(*local_c0 + 0x180))(local_c0,local_14c);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))();
      }
    }
  }
  local_c0 = (long *)0xaa95b52d79d5cd73;
  pcStack_b8 = "WindNoise";
  local_b0 = 9;
  local_a8 = (long *)0x0;
  puVar14 = (undefined4 *)FUN_00d27094(lVar19,&local_c0);
  *puVar14 = uVar24;
  *(undefined8 *)(puVar14 + 2) = uVar23;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_160[0] != (undefined8 *)0x0) {
    psVar3 = (short *)(local_160[0] + 3);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_160[0] + 0x1c);
      do {
        iVar12 = *piVar5;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar11) {
          *piVar5 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_c0 = (long *)*local_160[0];
        FUN_00c44438(lVar19 + 0x8040,&local_c0);
      }
    }
    else if (sVar7 == 0) {
LAB_00d25b5c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return param_1;
}


