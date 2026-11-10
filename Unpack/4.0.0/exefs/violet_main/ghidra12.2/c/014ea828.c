/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ea828; name: FUN_014ea828
 */


uint FUN_014ea828(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,int param_6,undefined4 param_7)

{
  short *psVar1;
  long *plVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  int *piVar19;
  ushort *puVar20;
  ushort uVar21;
  short sVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined2 local_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  ushort uStack_74;
  long local_68;
  
  uVar12 = param_1._0_8_;
  param_4[1] = param_1._8_8_;
  *param_4 = uVar12;
  if (*(long *)(param_3 + 0x230) != 0) {
    memset(&local_e0,0,0x4c);
    local_88 = 0;
    local_7c = (undefined2)param_7;
    uStack_7a = (undefined2)((uint)param_7 >> 0x10);
    bVar7 = 0.0 < (float)((ulong)*(undefined8 *)(param_3 + 0x248) >> 0x20);
    if (bVar7) {
      local_e0 = *(undefined8 *)(param_3 + 0x240);
      uStack_d8 = *(undefined8 *)(param_3 + 0x248);
    }
    uStack_74 = (ushort)bVar7;
    local_b0 = uVar12;
    local_90 = param_5;
    local_80 = param_6;
    uStack_78 = param_2;
    if (((&DAT_0456f72e)[(long)param_6 * 0x10] != '\0') && (*(long *)(param_3 + 0x1e8) != 0)) {
      FUN_016a8c68(&local_f0);
      plVar11 = local_f0;
      if (local_f0 != (long *)0x0) {
        if (*(short *)((long)local_f0 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_f0 + 0x1a);
          sVar22 = *(short *)((long)local_f0 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar22) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar22 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_014eaeb8;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_014eaeb8:
              bVar7 = false;
            }
            if (bVar7) {
              plVar13 = (long *)0x0;
              if (local_f0[2] != 0) {
                plVar13 = (long *)(local_f0[2] + -0x28);
              }
              goto LAB_014eaef4;
            }
            sVar22 = sVar4;
          } while (sVar4 != 0);
        }
        plVar13 = (long *)0x0;
LAB_014eaef4:
        plVar2 = local_f0 + 3;
        do {
          sVar22 = (short)*plVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(short *)plVar2 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          piVar19 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar9 = *piVar19;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar7) {
              *piVar19 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_68 = *plVar11;
            FUN_00c44438(lVar18 + 0x8040,&local_68);
          }
        }
        else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar13 != (long *)0x0) {
          fVar24 = *(float *)(plVar13 + 0x13);
          if (*(float *)(plVar13 + 0x13) <= *(float *)(plVar13 + 0x12)) {
            fVar24 = *(float *)(plVar13 + 0x12);
          }
          local_a0 = *(float *)((long)plVar13 + 0xa4);
          if (*(float *)((long)plVar13 + 0xa4) <= *(float *)((long)plVar13 + 0x9c)) {
            local_a0 = *(float *)((long)plVar13 + 0x9c);
          }
          uStack_74 = uStack_74 | 8;
          if (local_a0 <= fVar24) {
            local_a0 = fVar24;
          }
          lVar18 = plVar13[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar22 = *psVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar22 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))();
          }
          else if (sVar22 == 0) goto LAB_014eaf70;
        }
      }
    }
    if ((((&DAT_0456f72d)[(long)param_6 * 0x10] != '\0') &&
        (lVar18 = *(long *)(param_3 + 0x208), lVar18 != 0)) && (*(short *)(lVar18 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar18 + 0x1a);
      sVar22 = *(short *)(lVar18 + 0x1a);
LAB_014eb0a8:
      sVar4 = *psVar1;
      if (sVar4 == sVar22) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014eb0cc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014eb0cc:
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x014eb0d4;
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        if (*(char *)(lVar18 + 0x98) != '\0') {
          local_d0 = *(undefined8 *)(lVar18 + 0xa8);
          uStack_c8 = CONCAT44(*(undefined4 *)(lVar18 + 0x138),(int)*(undefined8 *)(lVar18 + 0xb0));
          uStack_74 = uStack_74 | 2;
        }
        lVar10 = *(long *)(lVar18 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar22 = *psVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
        }
        else if (sVar22 == 0) goto LAB_014eaf70;
      }
    }
LAB_014ea904:
    iVar9 = CONCAT22(uStack_7a,local_7c);
    if (iVar9 - 0xbU < 2) {
LAB_014ea924:
      FUN_00c9e664(&local_f0,param_3 + 0xe8);
      if (local_e8 == (long *)0x0) {
        lVar18 = 0;
      }
      else {
        lVar18 = local_e8[9];
      }
      plVar11 = (long *)(lVar18 + 0x110);
      lVar23 = *plVar11;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 == lVar23) {
        bVar7 = true;
      }
      else {
        lVar10 = nn::os::GetCurrentThread();
        do {
          if (*plVar11 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x118));
              while (*plVar11 == 0) {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar7) {
                  *plVar11 = lVar10;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_014ea968;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_014ea968:
        bVar7 = false;
      }
      plVar11 = (long *)FUN_00c943e0(*(undefined8 *)(lVar18 + 0x128),*(undefined8 *)(lVar18 + 0x130)
                                    );
      if ((*(long **)(lVar18 + 0x130) == plVar11) || (*plVar11 == 0)) {
        plVar11 = (long *)FUN_00c943e0(*(undefined8 *)(lVar18 + 0x160),
                                       *(undefined8 *)(lVar18 + 0x168));
        if (*(long **)(lVar18 + 0x168) == plVar11) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if (*plVar11 != 0) {
            lVar10 = *plVar11 + -0x20;
          }
        }
      }
      else {
        lVar10 = *plVar11 + -0x20;
      }
      if (!bVar7) {
        *(undefined8 *)(lVar18 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x118));
      }
      if (local_e8 != (long *)0x0) {
        plVar11 = local_e8 + 5;
        do {
          lVar18 = *plVar11;
          iVar6 = (int)lVar18 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *(int *)plVar11 = iVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        else if ((int)lVar18 == 0) {
          pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar15 = "DecrementReferenceInternal";
          pcVar16 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
          ;
          pcVar17 = "Reference counter underflows.";
          goto LAB_014eb200;
        }
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x60))();
      }
      if (lVar10 == 0) {
        if (iVar9 == 4) goto LAB_014eaa6c;
        goto LAB_014eac54;
      }
      if (iVar9 < 0xc) {
        if (iVar9 == 4) goto LAB_014eaa6c;
        if (iVar9 == 0xb) {
          piVar19 = *(int **)(lVar10 + 0x160);
          if (piVar19 != (int *)0x0) {
            puVar20 = (ushort *)((long)piVar19 - (long)*piVar19);
            uVar21 = *puVar20;
            if (uVar21 < 0x1d) goto LAB_014eabfc;
            uVar3 = puVar20[0xe];
            goto joined_r0x014eaa18;
          }
          goto LAB_014eb11c;
        }
        goto LAB_014eac54;
      }
      if (iVar9 == 0xc) {
        piVar19 = *(int **)(lVar10 + 0x160);
        if (piVar19 == (int *)0x0) {
LAB_014eb11c:
          local_9c = 0.0;
          goto LAB_014eac54;
        }
        puVar20 = (ushort *)((long)piVar19 - (long)*piVar19);
        uVar21 = *puVar20;
        if (uVar21 < 0x1b) {
LAB_014eabfc:
          fVar24 = *(float *)(lVar10 + 0x200) * 0.0;
          if (6 < uVar21) goto LAB_014eab4c;
          fVar27 = 1.2;
          fVar26 = 0.8;
        }
        else {
          uVar3 = puVar20[0xd];
joined_r0x014eaa18:
          if ((ulong)uVar3 == 0) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = *(float *)((long)piVar19 + (ulong)uVar3);
          }
          fVar24 = fVar24 * *(float *)(lVar10 + 0x200);
LAB_014eab4c:
          if ((ulong)puVar20[3] == 0) {
            fVar26 = 0.8;
          }
          else {
            fVar26 = *(float *)((long)piVar19 + (ulong)puVar20[3]);
          }
          if ((uVar21 < 9) || ((ulong)puVar20[4] == 0)) {
            fVar27 = 1.2;
          }
          else {
            fVar27 = *(float *)((long)piVar19 + (ulong)puVar20[4]);
          }
        }
        fVar25 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
        local_9c = fVar24 / (fVar26 + (fVar27 - fVar26) * fVar25);
        goto LAB_014eac54;
      }
      if ((iVar9 != 0xf) || (plVar11 = *(long **)(param_3 + 0x200), plVar11 == (long *)0x0))
      goto LAB_014eac54;
      lVar18 = plVar11[6];
      if (*(long *)(lVar18 + 0x10) == 0) goto LAB_014eb19c;
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar12;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
LAB_014eab08:
        if ((char)plVar11[8] == '\0') {
          fVar24 = 0.0;
        }
        else {
          fVar24 = *(float *)(plVar11[0xf] + 0x114);
        }
        local_9c = fVar24 * *(float *)(lVar10 + 0x200) * -0.35;
        lVar18 = plVar11[6];
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar22 = *psVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar22 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar22 == 0) goto LAB_014eaf70;
        goto LAB_014eac54;
      }
      if (sVar22 != -1) goto LAB_014eab08;
LAB_014eb1bc:
      pcVar14 = "count != 0";
      pcVar15 = "AddReference";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar17 = "Reference counter overflows.";
LAB_014eb200:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
    }
    if (iVar9 == 4) {
LAB_014eaa6c:
      if ((*(char *)(*(long *)(param_3 + 0x200) + 0x40) != '\0') &&
         (*(uint *)(&DAT_03d30718 +
                   (long)*(int *)(*(long *)(*(long *)(param_3 + 0x200) + 0x78) + 0x2a0) * 0x1c) < 6
          && (1 << (ulong)(*(uint *)(&DAT_03d30718 +
                                    (long)*(int *)(*(long *)(*(long *)(param_3 + 0x200) + 0x78) +
                                                  0x2a0) * 0x1c) & 0x1f) & 0x29U) != 0)) {
        uStack_74 = uStack_74 | 0x10;
      }
    }
    else if (iVar9 == 0xf) goto LAB_014ea924;
LAB_014eac54:
    fVar24 = param_1._4_4_;
    plVar11 = *(long **)(param_3 + 0x200);
    if (plVar11 != (long *)0x0) {
      lVar18 = plVar11[6];
      if (*(long *)(lVar18 + 0x10) == 0) {
LAB_014eb19c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar22 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar12;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar22 == -1) goto LAB_014eb1bc;
      local_98 = fVar24;
      if ((char)plVar11[8] != '\0') {
        lVar18 = plVar11[0xf];
        if ((((*(char *)(lVar18 + 0x150) == '\0') && (*(char *)(lVar18 + 0x14a) == '\0')) &&
            (*(char *)(lVar18 + 0x149) == '\0')) && (*(char *)(lVar18 + 0x148) != '\0')) {
          uVar21 = 0x300;
          if (((char)plVar11[8] != '\0') && (uVar21 = 0x300, 0.5 <= *(float *)(lVar18 + 0x118))) {
            uVar21 = 0xc80;
          }
          uStack_74 = uVar21 | uStack_74 & 0xf03f | 0x20;
          if ((char)plVar11[8] == '\0') goto LAB_014ead6c;
        }
        if (*(char *)(lVar18 + 0x151) == '\0') {
          uStack_74 = uStack_74 | 0x2000;
          bVar7 = (char)plVar11[8] == '\0';
        }
        else {
          bVar7 = false;
        }
        if (((!bVar7) && (DAT_04544b61 != '\0')) &&
           ((lVar18 = plVar11[0xf], (0x10408U >> ((ulong)*(uint *)(lVar18 + 0x2a0) & 0x3f) & 1) != 0
            && (*(char *)(lVar18 + 0x14b) != '\0')))) {
          local_98 = *(float *)(lVar18 + 0x290);
          if (*(float *)(lVar18 + 0x290) < *(float *)(lVar18 + 0x294)) {
            local_98 = *(float *)(lVar18 + 0x294);
          }
        }
      }
LAB_014ead6c:
      uStack_74 = uStack_74 | 0x4000;
      lVar18 = plVar11[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar22 == 0) {
LAB_014eaf70:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (*(long *)(param_3 + 0x138) == 0) {
      uVar8 = *(uint *)(param_3 + 0x120);
    }
    else {
      uVar8 = FUN_00cf44f4(*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x70));
      uVar8 = uVar8 & 0xffff;
    }
    if ((*(int *)(param_3 + 0x148) == 3) || ((uVar8 != 0x1bd && (uVar8 != 0x1ce)))) {
      uStack_74 = uStack_74 | 0x1000;
    }
    if (((*PTR_DAT_047d9210 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9210);
    }
    lVar18 = *(long *)PTR_DAT_047d9218;
    *(long *)PTR_DAT_047d9220 = lVar18;
    lVar18 = *(long *)(lVar18 + 0x30);
    if (lVar18 != 0) {
      lVar18 = *(long *)(lVar18 + 0x30);
      uVar8 = 0;
      if (lVar18 != 0) {
        uVar8 = FUN_01110a40(lVar18,param_4,&local_e0);
      }
      goto LAB_014eae30;
    }
  }
  uVar8 = 0;
LAB_014eae30:
  return uVar8 & 1;
code_r0x014eb0d4:
  sVar22 = sVar4;
  if (sVar4 == 0) goto LAB_014ea904;
  goto LAB_014eb0a8;
}


