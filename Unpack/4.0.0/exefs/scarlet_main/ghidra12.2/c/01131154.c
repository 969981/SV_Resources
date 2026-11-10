/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01131154; name: FUN_01131154
 */


void FUN_01131154(long *param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  short *psVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  ulong *puVar7;
  short sVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  ulong *puVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  byte *pbVar29;
  uint *puVar30;
  long lVar31;
  long *plVar32;
  uint *puVar33;
  char *pcVar34;
  long *local_190;
  code *local_188;
  undefined1 *local_180;
  long *local_178;
  long *local_170 [12];
  ulong *local_110;
  code *local_108;
  undefined1 *local_100;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  if ((*(long *)(param_2 + 8) == 0) || ((*(byte *)(*(long *)(param_2 + 8) + 0x1e8) & 1) == 0)) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)FUN_011322d4(*(undefined8 *)(param_2 + 8));
  }
  lVar14 = param_1[0xb];
  plVar15 = (long *)FUN_011322b8();
  (**(code **)(*plVar15 + 0x18))(&local_110);
  local_190 = (long *)0x0;
  local_188 = (code *)0x0;
  plVar24 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar24 = plVar15 + 5;
  }
  if ((long *)local_110[2] == plVar24) {
    FUN_00c9ea00(&local_190,&local_110);
  }
  puVar1 = local_110;
  if (local_110 != (ulong *)0x0) {
    puVar22 = local_110 + 3;
    do {
      sVar8 = (short)*puVar22;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar22,0x10);
      if (bVar11) {
        *(short *)puVar22 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      piVar5 = (int *)((long)local_110 + 0x1c);
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
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_88 = (undefined1 *)*puVar1;
        FUN_00c44438(lVar16 + 0x8040,&local_88);
      }
    }
    else if (sVar8 == 0) goto LAB_01131d04;
  }
  FUN_00d0a34c(param_1 + 0x1b,&local_190);
  plVar24 = local_190;
  if (local_190 != (long *)0x0) {
    plVar17 = local_190 + 3;
    do {
      sVar8 = (short)*plVar17;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar11) {
        *(short *)plVar17 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      piVar5 = (int *)((long)local_190 + 0x1c);
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
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (ulong *)*plVar24;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar8 == 0) {
LAB_01131d04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar24 = plVar15 + 0x22;
  lVar31 = *plVar24;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 != lVar31) {
    lVar16 = nn::os::GetCurrentThread();
LAB_01131220:
    if (*plVar24 == 0) goto code_r0x01131228;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
          while (*plVar24 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar11) {
              *plVar24 = lVar16;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_01131230;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar16;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_01131230:
    bVar11 = false;
    goto LAB_01131234;
  }
  bVar11 = true;
LAB_01131234:
  plVar17 = (long *)FUN_01133800(plVar15[0x25],plVar15[0x26]);
  if (((long *)plVar15[0x26] == plVar17) || (*plVar17 == 0)) {
    plVar17 = (long *)FUN_01133800(plVar15[0x2c],plVar15[0x2d]);
    if ((long *)plVar15[0x2d] == plVar17) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      if (*plVar17 != 0) {
        lVar16 = *plVar17 + -0x20;
      }
    }
  }
  else {
    lVar16 = *plVar17 + -0x20;
  }
  if (!bVar11) {
    plVar15[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x23));
  }
  param_1[0x1a] = lVar16;
  plVar17 = (long *)FUN_00d44228();
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if (param_1[0x1a] == 0) {
    plVar32 = plVar17;
  }
  else {
    puVar18 = (undefined8 *)FUN_011322b0();
    plVar32 = (long *)*puVar18;
    if (plVar32 != (long *)0x0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
     (uVar25 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar25 == 0)) {
    puVar33 = (uint *)0x0;
  }
  else {
    puVar33 = (uint *)((long)piVar13 + uVar25);
    puVar33 = (uint *)((long)puVar33 + (ulong)*puVar33);
  }
  if (*puVar33 != 0) {
    uVar25 = 0;
    puVar1 = (ulong *)(PTR_DAT_047d94a8 + 0x10);
    do {
      piVar13 = (int *)((long)(puVar33 + uVar25 + 1) + (ulong)puVar33[uVar25 + 1]);
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
         (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar26 == 0)) {
        plVar17 = (long *)FUN_011322f8(plVar15,plVar15[1]);
      }
      else {
        puVar4 = (uint *)((long)piVar13 + uVar26);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        plVar17 = (long *)FUN_011322f8(plVar15,plVar15[1]);
        if (*puVar4 != 0) {
          puVar30 = puVar4 + 1;
          piVar5 = (int *)((long)puVar30 + (ulong)*puVar30);
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar26 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar26 == 0)) {
            lVar16 = 0;
          }
          else {
            puVar6 = (uint *)((long)piVar5 + uVar26);
            lVar16 = (long)puVar6 + (ulong)*puVar6;
          }
          pcVar34 = (char *)(lVar16 + 4);
          local_78 = strlen(pcVar34);
          bVar9 = *(byte *)(lVar16 + 4);
          local_88 = &DAT_cbf29ce484222645;
          if (bVar9 != 0) {
            local_88 = &DAT_cbf29ce484222645;
            pbVar29 = (byte *)(lVar16 + 5);
            do {
              local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar9) * 0x100000001b3);
              bVar9 = *pbVar29;
              pbVar29 = pbVar29 + 1;
            } while (bVar9 != 0);
          }
          local_70 = (long *)0x0;
          pcStack_80 = pcVar34;
          if (*puVar4 != 0) {
            puVar22 = (ulong *)PTR_DAT_047d8b70;
            if (plVar32 != (long *)0x0) {
              puVar22 = (ulong *)(plVar32 + 6);
            }
            uVar26 = 0;
            do {
              piVar5 = (int *)((long)(puVar30 + uVar26) + (ulong)puVar30[uVar26]);
              if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
                 (uVar27 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar27 == 0)) {
                lVar16 = 0;
              }
              else {
                puVar6 = (uint *)((long)piVar5 + uVar27);
                lVar16 = (long)puVar6 + (ulong)*puVar6;
              }
              if (*(char *)(lVar16 + 4) == '\0') {
                puVar23 = (ulong *)FUN_00d44228();
                if (puVar23 != (ulong *)0x0) {
                  (**(code **)(*puVar23 + 0x18))(puVar23);
                }
              }
              else {
                if (((*PTR_DAT_047d4240 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d4240);
                }
                uVar19 = *(undefined8 *)PTR_DAT_047d4248;
                *(undefined8 *)PTR_DAT_047d4250 = uVar19;
                FUN_00cf9884(&local_110,uVar19,(char *)(lVar16 + 4));
                puVar23 = local_110;
              }
              uVar27 = *puVar22;
              puVar7 = (ulong *)PTR_DAT_047d8b70;
              if (puVar23 != (ulong *)0x0) {
                puVar7 = puVar23 + 6;
              }
              uVar28 = *puVar7;
              if (puVar23 != (ulong *)0x0) {
                (**(code **)(*puVar23 + 0x20))(puVar23);
              }
              if (uVar27 == uVar28) {
                if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
                   (uVar27 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar27 == 0)) {
                  lVar16 = 0;
                }
                else {
                  puVar6 = (uint *)((long)piVar5 + uVar27);
                  lVar16 = (long)puVar6 + (ulong)*puVar6;
                }
                pcVar34 = (char *)(lVar16 + 4);
                local_78 = strlen(pcVar34);
                plVar20 = local_70;
                bVar9 = *(byte *)(lVar16 + 4);
                local_88 = &DAT_cbf29ce484222645;
                if (bVar9 != 0) {
                  local_88 = &DAT_cbf29ce484222645;
                  pbVar29 = (byte *)(lVar16 + 5);
                  do {
                    local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar9) * 0x100000001b3);
                    bVar9 = *pbVar29;
                    pbVar29 = pbVar29 + 1;
                  } while (bVar9 != 0);
                }
                local_70 = (long *)0x0;
                pcStack_80 = pcVar34;
                if (plVar20 != (long *)0x0) {
                  (**(code **)(*plVar20 + 0x20))();
                }
                local_70 = (long *)0x0;
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 < *puVar4);
          }
          local_108 = (code *)0x0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = (long *)0x0;
          uStack_e8 = 0;
          local_100 = (undefined1 *)0x0;
          local_f8 = (long *)0x0;
          local_110 = puVar1;
          if (*(long *)(param_2 + 8) == 0) {
            lVar16 = FUN_00da5204();
          }
          else {
            lVar16 = *(long *)(param_2 + 8) + 0x40;
          }
          FUN_00f2b7b8(&local_190,lVar16,&local_88,&DAT_03c886bc);
          FUN_010c7efc(&local_110,0,&local_190,0,param_1[1]);
          FUN_010ff8f0(plVar17,&local_110);
          if (((10 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
              (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[5], uVar26 != 0)) &&
             (*(char *)((long)piVar13 + uVar26) != '\0')) {
            FUN_01101dbc(plVar17,1,0);
          }
          if (local_170[0] != (long *)0x0) {
            (**(code **)(*local_170[0] + 0x20))();
          }
          if (local_190 != (long *)0x0) {
            (**(code **)(*local_190 + 0x20))();
          }
          FUN_00f43db0(&local_110);
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
        }
      }
      if ((8 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
         (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[4], uVar26 != 0)) {
        puVar4 = (uint *)((long)piVar13 + uVar26);
        pcVar34 = (char *)((long)puVar4 + (ulong)*puVar4 + 4);
        if (*pcVar34 == '\0') {
          puVar22 = (ulong *)FUN_00d44228();
          if (puVar22 != (ulong *)0x0) {
            (**(code **)(*puVar22 + 0x18))(puVar22);
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar19 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar19;
          FUN_00cf9884(&local_110,uVar19,pcVar34);
          puVar22 = local_110;
        }
        if ((puVar22 != (ulong *)0x0) &&
           (cVar10 = *(char *)puVar22[7], (**(code **)(*puVar22 + 0x20))(puVar22), cVar10 != '\0'))
        {
          if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 9) ||
             (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[4], uVar26 == 0)) {
            lVar16 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar13 + uVar26);
            lVar16 = (long)puVar4 + (ulong)*puVar4;
          }
          if (*(char *)(lVar16 + 4) == '\0') {
            plVar20 = (long *)FUN_00d44228();
            if (plVar20 != (long *)0x0) {
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar19 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar19;
            FUN_00cf9884(&local_190,uVar19,(char *)(lVar16 + 4));
            plVar20 = local_190;
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (plVar20 != (long *)0x0) {
            plVar21 = plVar20 + 6;
          }
          local_110 = (ulong *)*plVar21;
          plVar21 = (long *)PTR_PTR_047d4508;
          if (plVar20 != (long *)0x0) {
            plVar21 = plVar20 + 7;
          }
          local_108 = (code *)*plVar21;
          if (plVar20 == (long *)0x0) {
            local_100 = (undefined1 *)0x0;
            local_f8 = (long *)0x0;
          }
          else {
            local_100 = (undefined1 *)plVar20[8];
            (**(code **)(*plVar20 + 0x18))(plVar20);
            local_f8 = plVar20;
          }
          FUN_012a26c4(plVar17,&local_110,1);
          if (local_f8 != (long *)0x0) {
            (**(code **)(*local_f8 + 0x20))();
          }
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar26 == 0)) {
        lVar16 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar13 + uVar26);
        lVar16 = (long)puVar4 + (ulong)*puVar4;
      }
      pcVar2 = (code *)(lVar16 + 4);
      local_100 = (undefined1 *)strlen((char *)pcVar2);
      bVar9 = *(byte *)(lVar16 + 4);
      local_110 = (ulong *)&DAT_cbf29ce484222645;
      if (bVar9 != 0) {
        local_110 = (ulong *)&DAT_cbf29ce484222645;
        pbVar29 = (byte *)(lVar16 + 5);
        do {
          local_110 = (ulong *)(((ulong)local_110 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (bVar9 != 0);
      }
      local_f8 = (long *)0x0;
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 0xb) ||
         (uVar26 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[5], uVar26 == 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = *(char *)((long)piVar13 + uVar26) != '\0';
      }
      local_108 = pcVar2;
      if (plVar17 == (long *)0x0) {
        plVar20 = (long *)FUN_011325f4(param_1 + 0xd,&local_110);
      }
      else {
        (**(code **)(*plVar17 + 0x58))(plVar17);
        plVar20 = (long *)FUN_011325f4(param_1 + 0xd,&local_110);
        (**(code **)(*plVar17 + 0x58))(plVar17);
      }
      plVar21 = (long *)*plVar20;
      *plVar20 = (long)plVar17;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x60))();
      }
      *(bool *)(plVar20 + 1) = bVar11;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x60))(plVar17);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < *puVar33);
  }
  lVar31 = *plVar24;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 != lVar31) {
    lVar16 = nn::os::GetCurrentThread();
LAB_01131848:
    if (*plVar24 == 0) goto code_r0x01131850;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
          while (*plVar24 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar11) {
              *plVar24 = lVar16;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_0113185c;
          }
        } while( true );
      }
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *plVar24 = lVar16;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_0113185c:
    bVar11 = false;
    goto LAB_01131860;
  }
  bVar11 = true;
LAB_01131860:
  plVar24 = (long *)FUN_011338e0(plVar15[0x25],plVar15[0x26]);
  if (((long *)plVar15[0x26] == plVar24) || (*plVar24 == 0)) {
    plVar24 = (long *)FUN_011338e0(plVar15[0x2c],plVar15[0x2d]);
    if ((long *)plVar15[0x2d] == plVar24) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      if (*plVar24 != 0) {
        lVar16 = *plVar24 + -0x20;
      }
    }
  }
  else {
    lVar16 = *plVar24 + -0x20;
  }
  if (!bVar11) {
    plVar15[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x23));
  }
  if (lVar16 == 0) goto LAB_01131c00;
  local_110 = (ulong *)&DAT_afc4d6c05abef19e;
  local_108 = (code *)0x3c7b602;
  local_100 = (undefined1 *)0x7;
  local_f8 = (long *)0x0;
  lVar31 = FUN_01132f14(lVar16,&local_110);
  if (lVar31 == 0) {
    local_90 = (ulong *)0x0;
  }
  else {
    FUN_01133f40(&local_90,lVar31,&local_190);
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_90 == (ulong *)0x0) {
    lVar14 = FUN_01132f14(lVar16,lVar14 + 0x1d0);
    if (lVar14 == 0) {
      local_110 = (ulong *)0x0;
    }
    else {
      FUN_011343b4(&local_110,lVar14,&local_190);
    }
    puVar1 = local_90;
    local_90 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      uVar25 = puVar1[6];
      psVar3 = (short *)(uVar25 + 0x1a);
      do {
        sVar8 = *psVar3;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar8 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(uVar25 + 0x10) = 0;
        (**(code **)(*puVar1 + 0x50))();
      }
      else if (sVar8 == 0) goto LAB_01132288;
    }
    local_90 = local_110;
    if (local_110 != (ulong *)0x0) goto LAB_011318f4;
  }
  else {
LAB_011318f4:
    local_88 = (undefined1 *)0xebcc1dbbdb79fb40;
    pcStack_80 = "Particle/LoopParticle";
    local_78 = 0x15;
    local_70 = (long *)0x0;
    local_110 = (ulong *)&LAB_029cc258;
    local_108 = FUN_02e5645c;
    local_100 = &LAB_02e56460;
    local_f8 = (long *)&LAB_02e5646c;
    local_190 = (long *)&LAB_029cc750;
    local_188 = FUN_02e56478;
    local_180 = &LAB_02e5647c;
    local_178 = (long *)&LAB_02e56488;
    local_170[0] = param_1;
    local_f0 = param_1;
    FUN_00e34b38(local_90,&local_88,&local_110,&local_190);
    pcVar2 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = (undefined1 *)0x0;
      local_178 = (long *)0x0;
      local_190 = (long *)0x0;
      local_188 = (code *)0x0;
      (*pcVar2)(local_170);
    }
    pcVar2 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (ulong *)0x0;
      local_108 = (code *)0x0;
      (*pcVar2)(&local_f0);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    local_190 = (long *)0xffbbc0661df32fde;
    local_188 = (code *)0x3c5ec20;
    local_180 = (undefined1 *)0x18;
    local_178 = (long *)0x0;
    local_110 = (ulong *)&LAB_029ccc48;
    local_108 = FUN_02e56494;
    local_100 = &LAB_02e56498;
    local_f8 = (long *)&LAB_02e564a4;
    local_f0 = param_1;
    FUN_01132f58(local_90,&local_190,&local_110);
    pcVar2 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (ulong *)0x0;
      local_108 = (code *)0x0;
      (*pcVar2)(&local_f0);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    local_190 = (long *)0xbf9d3415a5b1eff8;
    local_188 = (code *)0x3c5855b;
    local_180 = (undefined1 *)0x15;
    local_178 = (long *)0x0;
    local_110 = (ulong *)&LAB_029ccedc;
    local_108 = FUN_02e564b0;
    local_100 = &LAB_02e564b4;
    local_f8 = (long *)&LAB_02e564c0;
    local_f0 = param_1;
    FUN_01132f58(local_90,&local_190,&local_110);
    pcVar2 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (ulong *)0x0;
      local_108 = (code *)0x0;
      (*pcVar2)(&local_f0);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    local_190 = (long *)0xe0e31fc2493aeb6a;
    local_188 = (code *)0x3bd6236;
    local_180 = (undefined1 *)0x15;
    local_178 = (long *)0x0;
    local_110 = (ulong *)&LAB_029cd164;
    local_108 = FUN_02e564cc;
    local_100 = &LAB_02e564d0;
    local_f8 = (long *)&LAB_02e564dc;
    local_f0 = param_1;
    FUN_01132f58(local_90,&local_190,&local_110);
    pcVar2 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (ulong *)0x0;
      local_108 = (code *)0x0;
      (*pcVar2)(&local_f0);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    local_190 = (long *)0x5d9f0c0032873706;
    local_188 = (code *)0x3c9a55e;
    local_180 = (undefined1 *)0x15;
    local_178 = (long *)0x0;
    local_110 = (ulong *)&LAB_012a21b0;
    local_108 = FUN_02e564e8;
    local_100 = &LAB_02e564ec;
    local_f8 = (long *)&LAB_02e564f8;
    local_f0 = param_1;
    FUN_01133d3c(local_90,&local_190,&local_110);
    pcVar2 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (undefined1 *)0x0;
      local_f8 = (long *)0x0;
      local_110 = (ulong *)0x0;
      local_108 = (code *)0x0;
      (*pcVar2)(&local_f0);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
  }
  if (local_90 != (ulong *)0x0) {
    uVar25 = local_90[6];
    psVar3 = (short *)(uVar25 + 0x1a);
    do {
      sVar8 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar8 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(uVar25 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar8 == 0) {
LAB_01132288:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01131c00:
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  return;
code_r0x01131228:
  cVar10 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar11) {
    *plVar24 = lVar16;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_01131230;
  goto LAB_01131220;
code_r0x01131850:
  cVar10 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar11) {
    *plVar24 = lVar16;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_0113185c;
  goto LAB_01131848;
}


