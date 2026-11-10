/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019565cc; name: FUN_019565cc
 */


uint FUN_019565cc(undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],
                 undefined4 param_4,long param_5,undefined8 *param_6,undefined8 param_7,int param_8,
                 undefined4 param_9)

{
  short *psVar1;
  long *plVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  int *piVar20;
  ushort *puVar21;
  ushort uVar22;
  short sVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
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
  
  uVar13 = param_1._0_8_;
  param_6[1] = param_1._8_8_;
  *param_6 = uVar13;
  if (*(long *)(param_5 + 0x230) != 0) {
    uVar7 = param_3._0_8_;
    memset(&local_e0,0,0x4c);
    local_88 = 0;
    local_7c = (undefined2)param_9;
    uStack_7a = (undefined2)((uint)param_9 >> 0x10);
    if ((float)((ulong)*(undefined8 *)(param_5 + 0x248) >> 0x20) <= 0.0) {
      uStack_74 = 4;
    }
    else {
      uStack_74 = 5;
      local_e0 = *(undefined8 *)(param_5 + 0x240);
      uStack_d8 = *(undefined8 *)(param_5 + 0x248);
    }
    uStack_b8 = CONCAT44(param_4,param_3._8_4_);
    local_c0 = uVar7;
    local_b0 = uVar13;
    local_90 = param_7;
    local_80 = param_8;
    uStack_78 = param_2;
    if (((&DAT_0456f72e)[(long)param_8 * 0x10] != '\0') && (*(long *)(param_5 + 0x1e8) != 0)) {
      FUN_016a8c68(&local_f0);
      plVar12 = local_f0;
      if (local_f0 != (long *)0x0) {
        if (*(short *)((long)local_f0 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_f0 + 0x1a);
          sVar23 = *(short *)((long)local_f0 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar23) {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar23 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_01956c74;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01956c74:
              bVar8 = false;
            }
            if (bVar8) {
              plVar14 = (long *)0x0;
              if (local_f0[2] != 0) {
                plVar14 = (long *)(local_f0[2] + -0x28);
              }
              goto LAB_01956cb0;
            }
            sVar23 = sVar4;
          } while (sVar4 != 0);
        }
        plVar14 = (long *)0x0;
LAB_01956cb0:
        plVar2 = local_f0 + 3;
        do {
          sVar23 = (short)*plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(short *)plVar2 = sVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar23 == 1) {
          piVar20 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar10 = *piVar20;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar8) {
              *piVar20 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar19 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar19;
            local_68 = *plVar12;
            FUN_00c44438(lVar19 + 0x8040,&local_68);
          }
        }
        else if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar14 != (long *)0x0) {
          fVar25 = *(float *)(plVar14 + 0x13);
          if (*(float *)(plVar14 + 0x13) <= *(float *)(plVar14 + 0x12)) {
            fVar25 = *(float *)(plVar14 + 0x12);
          }
          local_a0 = *(float *)((long)plVar14 + 0xa4);
          if (*(float *)((long)plVar14 + 0xa4) <= *(float *)((long)plVar14 + 0x9c)) {
            local_a0 = *(float *)((long)plVar14 + 0x9c);
          }
          uStack_74 = uStack_74 | 8;
          if (local_a0 <= fVar25) {
            local_a0 = fVar25;
          }
          lVar19 = plVar14[6];
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar23 = *psVar1;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar23 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))();
          }
          else if (sVar23 == 0) goto LAB_01956d2c;
        }
      }
    }
    if ((((&DAT_0456f72d)[(long)param_8 * 0x10] != '\0') &&
        (lVar19 = *(long *)(param_5 + 0x208), lVar19 != 0)) && (*(short *)(lVar19 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar19 + 0x1a);
      sVar23 = *(short *)(lVar19 + 0x1a);
LAB_01956e64:
      sVar4 = *psVar1;
      if (sVar4 == sVar23) {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01956e88;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01956e88:
        bVar8 = false;
      }
      if (!bVar8) goto code_r0x01956e90;
      lVar19 = *(long *)(lVar19 + 0x10);
      if (lVar19 != 0) {
        if (*(char *)(lVar19 + 0x98) != '\0') {
          local_d0 = *(undefined8 *)(lVar19 + 0xa8);
          uStack_c8 = CONCAT44(*(undefined4 *)(lVar19 + 0x138),(int)*(undefined8 *)(lVar19 + 0xb0));
          uStack_74 = uStack_74 | 2;
        }
        lVar11 = *(long *)(lVar19 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar23 = *psVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar23 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*(long *)(lVar19 + -0x28) + 0x50))();
        }
        else if (sVar23 == 0) goto LAB_01956d2c;
      }
    }
LAB_019566c8:
    iVar10 = CONCAT22(uStack_7a,local_7c);
    if (iVar10 - 0xbU < 2) {
LAB_019566e8:
      FUN_00c9e664(&local_f0,param_5 + 0xe8);
      if (local_e8 == (long *)0x0) {
        lVar19 = 0;
      }
      else {
        lVar19 = local_e8[9];
      }
      plVar12 = (long *)(lVar19 + 0x110);
      lVar24 = *plVar12;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 == lVar24) {
        bVar8 = true;
      }
      else {
        lVar11 = nn::os::GetCurrentThread();
        do {
          if (*plVar12 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
              while (*plVar12 == 0) {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar8) {
                  *plVar12 = lVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_0195672c;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *plVar12 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_0195672c:
        bVar8 = false;
      }
      plVar12 = (long *)FUN_00c943e0(*(undefined8 *)(lVar19 + 0x128),*(undefined8 *)(lVar19 + 0x130)
                                    );
      if ((*(long **)(lVar19 + 0x130) == plVar12) || (*plVar12 == 0)) {
        plVar12 = (long *)FUN_00c943e0(*(undefined8 *)(lVar19 + 0x160),
                                       *(undefined8 *)(lVar19 + 0x168));
        if (*(long **)(lVar19 + 0x168) == plVar12) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*plVar12 != 0) {
            lVar11 = *plVar12 + -0x20;
          }
        }
      }
      else {
        lVar11 = *plVar12 + -0x20;
      }
      if (!bVar8) {
        *(undefined8 *)(lVar19 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x118));
      }
      if (local_e8 != (long *)0x0) {
        plVar12 = local_e8 + 5;
        do {
          lVar19 = *plVar12;
          iVar6 = (int)lVar19 + -1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar8) {
            *(int *)plVar12 = iVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        else if ((int)lVar19 == 0) {
          pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar16 = "DecrementReferenceInternal";
          pcVar17 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
          ;
          pcVar18 = "Reference counter underflows.";
          goto LAB_01956fbc;
        }
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x60))();
      }
      if (lVar11 == 0) {
        if (iVar10 == 4) goto LAB_01956830;
        goto LAB_01956a10;
      }
      if (iVar10 < 0xc) {
        if (iVar10 == 4) goto LAB_01956830;
        if (iVar10 == 0xb) {
          piVar20 = *(int **)(lVar11 + 0x160);
          if (piVar20 != (int *)0x0) {
            puVar21 = (ushort *)((long)piVar20 - (long)*piVar20);
            uVar22 = *puVar21;
            if (uVar22 < 0x1d) goto LAB_019569b8;
            uVar3 = puVar21[0xe];
            goto joined_r0x019567dc;
          }
          goto LAB_01956ed8;
        }
        goto LAB_01956a10;
      }
      if (iVar10 == 0xc) {
        piVar20 = *(int **)(lVar11 + 0x160);
        if (piVar20 == (int *)0x0) {
LAB_01956ed8:
          local_9c = 0.0;
          goto LAB_01956a10;
        }
        puVar21 = (ushort *)((long)piVar20 - (long)*piVar20);
        uVar22 = *puVar21;
        if (uVar22 < 0x1b) {
LAB_019569b8:
          fVar25 = *(float *)(lVar11 + 0x200) * 0.0;
          if (6 < uVar22) goto LAB_01956910;
          fVar28 = 1.2;
          fVar27 = 0.8;
        }
        else {
          uVar3 = puVar21[0xd];
joined_r0x019567dc:
          if ((ulong)uVar3 == 0) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = *(float *)((long)piVar20 + (ulong)uVar3);
          }
          fVar25 = fVar25 * *(float *)(lVar11 + 0x200);
LAB_01956910:
          if ((ulong)puVar21[3] == 0) {
            fVar27 = 0.8;
          }
          else {
            fVar27 = *(float *)((long)piVar20 + (ulong)puVar21[3]);
          }
          if ((uVar22 < 9) || ((ulong)puVar21[4] == 0)) {
            fVar28 = 1.2;
          }
          else {
            fVar28 = *(float *)((long)piVar20 + (ulong)puVar21[4]);
          }
        }
        fVar26 = (float)(**(code **)PTR_PTR_047d9248)(0x3f000000);
        local_9c = fVar25 / (fVar27 + (fVar28 - fVar27) * fVar26);
        goto LAB_01956a10;
      }
      if ((iVar10 != 0xf) || (plVar12 = *(long **)(param_5 + 0x200), plVar12 == (long *)0x0))
      goto LAB_01956a10;
      lVar19 = plVar12[6];
      if (*(long *)(lVar19 + 0x10) == 0) goto LAB_01956f58;
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar23 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar13;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
LAB_019568cc:
        if ((char)plVar12[8] == '\0') {
          fVar25 = 0.0;
        }
        else {
          fVar25 = *(float *)(plVar12[0xf] + 0x114);
        }
        local_9c = fVar25 * *(float *)(lVar11 + 0x200) * -0.5;
        lVar19 = plVar12[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar23 = *psVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar23 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar23 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar23 == 0) goto LAB_01956d2c;
        goto LAB_01956a10;
      }
      if (sVar23 != -1) goto LAB_019568cc;
LAB_01956f78:
      pcVar15 = "count != 0";
      pcVar16 = "AddReference";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar18 = "Reference counter overflows.";
LAB_01956fbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
    }
    if (iVar10 == 4) {
LAB_01956830:
      if ((*(char *)(*(long *)(param_5 + 0x200) + 0x40) != '\0') &&
         (*(uint *)(&DAT_03d30718 +
                   (long)*(int *)(*(long *)(*(long *)(param_5 + 0x200) + 0x78) + 0x2a0) * 0x1c) < 6
          && (1 << (ulong)(*(uint *)(&DAT_03d30718 +
                                    (long)*(int *)(*(long *)(*(long *)(param_5 + 0x200) + 0x78) +
                                                  0x2a0) * 0x1c) & 0x1f) & 0x29U) != 0)) {
        uStack_74 = uStack_74 | 0x10;
      }
    }
    else if (iVar10 == 0xf) goto LAB_019566e8;
LAB_01956a10:
    fVar25 = param_1._4_4_;
    plVar12 = *(long **)(param_5 + 0x200);
    if (plVar12 != (long *)0x0) {
      lVar19 = plVar12[6];
      if (*(long *)(lVar19 + 0x10) == 0) {
LAB_01956f58:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar23 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar13;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar23 == -1) goto LAB_01956f78;
      local_98 = fVar25;
      if ((char)plVar12[8] != '\0') {
        lVar19 = plVar12[0xf];
        if ((((*(char *)(lVar19 + 0x150) == '\0') && (*(char *)(lVar19 + 0x14a) == '\0')) &&
            (*(char *)(lVar19 + 0x149) == '\0')) && (*(char *)(lVar19 + 0x148) != '\0')) {
          uVar22 = 0x300;
          if (((char)plVar12[8] != '\0') && (uVar22 = 0x300, 0.5 <= *(float *)(lVar19 + 0x118))) {
            uVar22 = 0xc80;
          }
          uStack_74 = uVar22 | uStack_74 & 0xf03f | 0x20;
          if ((char)plVar12[8] == '\0') goto LAB_01956b28;
        }
        if (*(char *)(lVar19 + 0x151) == '\0') {
          uStack_74 = uStack_74 | 0x2000;
          bVar8 = (char)plVar12[8] == '\0';
        }
        else {
          bVar8 = false;
        }
        if (((!bVar8) && (DAT_04544b61 != '\0')) &&
           ((lVar19 = plVar12[0xf], (0x10408U >> ((ulong)*(uint *)(lVar19 + 0x2a0) & 0x3f) & 1) != 0
            && (*(char *)(lVar19 + 0x14b) != '\0')))) {
          local_98 = *(float *)(lVar19 + 0x290);
          if (*(float *)(lVar19 + 0x290) < *(float *)(lVar19 + 0x294)) {
            local_98 = *(float *)(lVar19 + 0x294);
          }
        }
      }
LAB_01956b28:
      uStack_74 = uStack_74 | 0x4000;
      lVar19 = plVar12[6];
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar23 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar23 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar23 == 0) {
LAB_01956d2c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (*(long *)(param_5 + 0x138) == 0) {
      uVar9 = *(uint *)(param_5 + 0x120);
    }
    else {
      uVar9 = FUN_00cf44f4(*(undefined8 *)(*(long *)(param_5 + 0x138) + 0x70));
      uVar9 = uVar9 & 0xffff;
    }
    if ((*(int *)(param_5 + 0x148) == 3) || ((uVar9 != 0x1bd && (uVar9 != 0x1ce)))) {
      uStack_74 = uStack_74 | 0x1000;
    }
    if (((*PTR_DAT_047d9210 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9210);
    }
    lVar19 = *(long *)PTR_DAT_047d9218;
    *(long *)PTR_DAT_047d9220 = lVar19;
    lVar19 = *(long *)(lVar19 + 0x30);
    if (lVar19 != 0) {
      lVar19 = *(long *)(lVar19 + 0x30);
      uVar9 = 0;
      if (lVar19 != 0) {
        uVar9 = FUN_01110a40(lVar19,param_6,&local_e0);
      }
      goto LAB_01956bec;
    }
  }
  uVar9 = 0;
LAB_01956bec:
  return uVar9 & 1;
code_r0x01956e90:
  sVar23 = sVar4;
  if (sVar4 == 0) goto LAB_019566c8;
  goto LAB_01956e64;
}


