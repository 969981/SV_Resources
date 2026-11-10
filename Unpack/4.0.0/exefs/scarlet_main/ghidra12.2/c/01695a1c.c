/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01695a1c; name: FUN_01695a1c
 */


bool FUN_01695a1c(long param_1,short *param_2,byte *param_3,byte param_4)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  short *psVar15;
  ulong uVar16;
  short sVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  short *psVar21;
  long lVar22;
  long *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  uint local_200;
  ushort local_1fc;
  undefined4 local_1f8;
  undefined3 uStack_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined1 *local_1b8;
  undefined2 local_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  ulong local_190;
  long *local_188;
  undefined8 local_180;
  long *local_178;
  undefined8 uStack_170;
  long *local_168;
  undefined8 uStack_160;
  long *local_158;
  undefined8 **local_148;
  undefined8 *local_140 [2];
  undefined8 *local_130;
  undefined8 uStack_128;
  long local_120 [2];
  undefined1 auStack_110 [120];
  undefined8 *local_98;
  byte local_74 [4];
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar22 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar22;
  puVar7 = PTR_DAT_047d0860;
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x70) == 0)) || (*(long *)PTR_DAT_047d0860 == 0)) ||
     (DAT_045dfcb0 <= (*param_3 & 3))) {
    return false;
  }
  local_120[0] = 0;
  FUN_00da4118(&local_220,*(long *)PTR_DAT_047d0860,local_120);
  lVar13 = local_120[0];
  if ((int)local_220 != 0) {
    return false;
  }
  if (local_120[0] == 0) {
    return false;
  }
  if (*(long *)PTR_DAT_047d0a08 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
  }
  if (*(long *)(lVar22 + 0x70) == 0) {
    return false;
  }
  if (*(long *)puVar7 == 0) {
    return false;
  }
  local_120[0]._0_1_ = 0xfd;
  FUN_00f42ddc(&local_220,*(long *)puVar7,local_120,uVar14);
  if ((int)local_220 != 0) {
    return false;
  }
  if (DAT_045dfcb0 <= (byte)local_120[0]) {
    return false;
  }
  local_74[0] = (byte)local_120[0];
  if ((byte)local_120[0] == 0xfd) {
    return false;
  }
  uVar11 = FUN_0183389c(param_3,local_74);
  psVar21 = *(short **)(param_1 + 0x50);
  psVar15 = *(short **)(param_1 + 0x58);
  if ((psVar21 != psVar15) && (*psVar21 != *param_2)) {
    do {
      psVar21 = psVar21 + 0x68;
      if (psVar15 == psVar21) {
        psVar21 = psVar15;
        goto LAB_01695bc0;
      }
    } while (*psVar21 != *param_2);
  }
LAB_01695bc0:
  local_120[0] = (ulong)local_120[0]._1_7_ << 8;
  if (psVar15 != psVar21) {
    *(byte *)((long)psVar21 + 0x71) = ~param_4 & 1;
    if ((uVar11 & 1) == 0) {
      *(undefined1 *)(psVar21 + 0x38) = 0;
      *(long *)(psVar21 + 4) = lVar13;
      *psVar21 = *(short *)param_3;
      if ((((param_4 & 1) == 0) && (*(long *)(psVar21 + 0x4c) != 0)) &&
         ((*(long *)(*(long *)(psVar21 + 0x4c) + 0x10) != 0 &&
          ((lVar22 = *(long *)(psVar21 + 0x3c), lVar22 != 0 && (*(short *)(lVar22 + 0x1a) != 0))))))
      {
        psVar15 = (short *)(lVar22 + 0x1a);
        sVar17 = *(short *)(lVar22 + 0x1a);
LAB_01696994:
        sVar4 = *psVar15;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_016969b8;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_016969b8:
          bVar9 = false;
        }
        if (!bVar9) goto code_r0x016969c0;
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 != 0) {
          lVar12 = *(long *)(lVar22 + 8);
          if (*(long *)(lVar12 + 0x10) != 0) {
            plVar20 = (long *)(lVar22 + -0x28);
            psVar15 = (short *)(lVar12 + 0x1a);
            do {
              sVar17 = *psVar15;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
              if (bVar9) {
                *psVar15 = sVar17 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
              *(undefined8 *)(lVar12 + 8) = uVar14;
              *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
            }
            else if (sVar17 == -1) goto LAB_01696fbc;
            lVar12 = FUN_00e048ac(lVar22 + 0xe0,&local_220);
            if (((lVar12 != 0) && (*(int *)(lVar12 + 0x2fc) != 0)) &&
               (*(char *)(lVar12 + 0x11e) != '\0')) {
              *(undefined4 *)(lVar12 + 0x2fc) = 2;
              FUN_00e448d4(&local_220,lVar12 + 0x200);
              if ((local_220 != (long *)0x0) &&
                 ((**(code **)(*local_220 + 0x30))(0x40a00000), local_220 != (long *)0x0)) {
                (**(code **)(*local_220 + 0x18))();
              }
            }
            lVar12 = *(long *)(lVar22 + 8);
            psVar15 = (short *)(lVar12 + 0x1a);
            do {
              sVar17 = *psVar15;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
              if (bVar9) {
                *psVar15 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar20 + 0x50))(plVar20);
            }
            else if (sVar17 == 0) goto LAB_0169639c;
            lVar22 = *(long *)(lVar22 + 8);
            psVar15 = (short *)(lVar22 + 0x1a);
            do {
              sVar17 = *psVar15;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
              if (bVar9) {
                *psVar15 = sVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar17 == 1) {
              *(undefined8 *)(lVar22 + 0x10) = 0;
              (**(code **)(*plVar20 + 0x50))(plVar20);
            }
            else if (sVar17 == 0) goto LAB_0169639c;
            goto LAB_01695c34;
          }
          goto LAB_01696f9c;
        }
      }
LAB_01695c34:
      local_130 = (undefined8 *)0x0;
      uStack_128 = 0;
      FUN_00ca1a48(&local_130,psVar21 + 0x3c);
      local_200 = local_200 & 0xf0000000;
      local_1fc = local_1fc & 0xf000;
      local_208 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f0 = 0;
      local_1f8 = 0;
      uStack_1f4 = 0;
      local_1b0 = 0;
      local_1e8 = 0xffffffff;
      local_1b8 = &DAT_cbf29ce484222645;
      local_220 = (long *)((ulong)local_220 & 0xffffffffffff0000);
      local_1c0 = 0;
      local_180._0_4_ = 1;
      local_168 = (long *)0x0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      local_190 = 0;
      local_188 = (long *)0x0;
      local_178 = (long *)0x0;
      uStack_170 = 0;
      memcpy(&local_220,psVar21,0x72);
      FUN_00ca1a48(&local_1a8,psVar21 + 0x3c);
      local_148 = &local_130;
      local_190 = 0;
      local_188 = (long *)0x0;
      local_180 = CONCAT44(local_180._4_4_,1);
      FUN_01ebe518(local_140,&local_148);
      FUN_00c93a38(&local_178,local_140);
      puVar8 = local_140[0];
      if (local_140[0] != (undefined8 *)0x0) {
        psVar15 = (short *)(local_140[0] + 3);
        do {
          sVar17 = *psVar15;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_140[0] + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_70[0] = *puVar8;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      FUN_01ebef24(param_1 + 0x88,&local_220);
      lVar12 = FUN_0159ec20(psVar21 + 0x68,*(undefined8 *)(param_1 + 0x58),psVar21);
      lVar22 = *(long *)(param_1 + 0x58);
      while (lVar22 != lVar12) {
        lVar22 = lVar22 + -0xd0;
        FUN_0159e7d4(lVar22);
      }
      *(long *)(param_1 + 0x58) = lVar12;
      FUN_01ebee64(local_120,&local_220);
      if (local_168 != (long *)0x0) {
        lVar22 = local_168[6];
        psVar21 = (short *)(lVar22 + 0x1a);
        do {
          sVar17 = *psVar21;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar21,0x10);
          if (bVar9) {
            *psVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_168 + 0x50))();
        }
        else if (sVar17 == 0) goto LAB_0169639c;
      }
      plVar20 = local_178;
      if (local_178 != (long *)0x0) {
        plVar1 = local_178 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_178 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      plVar20 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        plVar1 = local_1a8 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_1a8 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      puVar8 = local_130;
      if (local_130 != (undefined8 *)0x0) {
        psVar21 = (short *)(local_130 + 3);
        do {
          sVar17 = *psVar21;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar21,0x10);
          if (bVar9) {
            *psVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_130 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_220 = (long *)*puVar8;
            FUN_00c44438(lVar22 + 0x8040,&local_220);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
    }
    else {
      *(undefined1 *)(psVar21 + 0x38) = 1;
      *(long *)(psVar21 + 4) = lVar13;
      *psVar21 = *(short *)param_3;
      FUN_01ebee64(local_120,psVar21);
    }
  }
  psVar21 = *(short **)(param_1 + 0x88);
  psVar15 = *(short **)(param_1 + 0x90);
  if ((psVar21 != psVar15) && (*psVar21 != *param_2)) {
    do {
      psVar21 = psVar21 + 0x60;
      if (psVar15 == psVar21) {
        psVar21 = psVar15;
        goto LAB_01695e18;
      }
    } while (*psVar21 != *param_2);
  }
LAB_01695e18:
  if (psVar15 != psVar21) {
    *(byte *)((long)psVar21 + 0x71) = ~param_4 & 1;
    if ((uVar11 & 1) == 0) {
      *(undefined1 *)(psVar21 + 0x38) = 0;
      *(long *)(psVar21 + 4) = lVar13;
      *psVar21 = *(short *)param_3;
      FUN_01ebee64(local_120,psVar21);
    }
    else {
      *(undefined1 *)(psVar21 + 0x38) = 1;
      *(long *)(psVar21 + 4) = lVar13;
      *psVar21 = *(short *)param_3;
      if (((((param_4 & 1) != 0) && (*(long *)(psVar21 + 0x54) != 0)) &&
          (*(long *)(*(long *)(psVar21 + 0x54) + 0x10) != 0)) &&
         ((lVar22 = *(long *)(psVar21 + 0x3c), lVar22 != 0 && (*(short *)(lVar22 + 0x1a) != 0)))) {
        psVar15 = (short *)(lVar22 + 0x1a);
        sVar17 = *(short *)(lVar22 + 0x1a);
LAB_016969dc:
        sVar4 = *psVar15;
        if (sVar4 == sVar17) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01696a04;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01696a04:
          bVar9 = false;
        }
        if (!bVar9) goto code_r0x01696a0c;
        lVar22 = *(long *)(lVar22 + 0x10);
        if (lVar22 != 0) {
          lVar13 = *(long *)(lVar22 + 8);
          if (*(long *)(lVar13 + 0x10) == 0) {
LAB_01696f9c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          plVar20 = (long *)(lVar22 + -0x28);
          psVar15 = (short *)(lVar13 + 0x1a);
          do {
            sVar17 = *psVar15;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
            if (bVar9) {
              *psVar15 = sVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar14;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar17 == -1) {
LAB_01696fbc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar13 = FUN_00e048ac(lVar22 + 0xe0,&local_220);
          if ((lVar13 != 0) && (*(char *)(lVar13 + 0x11e) != '\0')) {
            *(undefined4 *)(lVar13 + 0x2fc) = 1;
          }
          lVar13 = *(long *)(lVar22 + 8);
          psVar15 = (short *)(lVar13 + 0x1a);
          do {
            sVar17 = *psVar15;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
            if (bVar9) {
              *psVar15 = sVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar17 == 0) goto LAB_0169639c;
          lVar22 = *(long *)(lVar22 + 8);
          psVar15 = (short *)(lVar22 + 0x1a);
          do {
            sVar17 = *psVar15;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
            if (bVar9) {
              *psVar15 = sVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar17 == 0) goto LAB_0169639c;
        }
      }
LAB_01695e60:
      local_130 = (undefined8 *)0x0;
      uStack_128 = 0;
      FUN_00ca1a48(&local_130,psVar21 + 0x3c);
      local_200 = local_200 & 0xf0000000;
      local_1fc = local_1fc & 0xf000;
      local_208 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = (long *)((ulong)local_220 & 0xffffffffffff0000);
      local_1f8 = 0;
      uStack_1f4 = 0;
      local_1c0 = 0;
      local_1b8 = &DAT_cbf29ce484222645;
      local_1b0 = 0;
      local_190 = local_190 & 0xffffffffffffff00;
      local_158 = (long *)0x0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      local_188 = (long *)0x0;
      local_180 = 0;
      local_178 = (long *)0x0;
      uStack_170 = 0;
      local_168 = (long *)0x0;
      uStack_160 = 0;
      memcpy(&local_220,psVar21,0x72);
      FUN_00ca1a48(&local_1a8,psVar21 + 0x3c);
      local_190 = local_190 & 0xffffffffffffff00;
      local_148 = &local_130;
      FUN_01ebe76c(local_140,&local_148);
      FUN_00c93a38(&local_188,local_140);
      puVar8 = local_140[0];
      if (local_140[0] != (undefined8 *)0x0) {
        psVar15 = (short *)(local_140[0] + 3);
        do {
          sVar17 = *psVar15;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_140[0] + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_70[0] = *puVar8;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      local_148 = &local_130;
      FUN_01ebe9c0(local_140,&local_148);
      FUN_013dc33c(&local_178,local_140);
      puVar8 = local_140[0];
      if (local_140[0] != (undefined8 *)0x0) {
        psVar15 = (short *)(local_140[0] + 3);
        do {
          sVar17 = *psVar15;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_140[0] + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_70[0] = *puVar8;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      local_148 = &local_130;
      FUN_01ebec14(local_140,&local_148);
      FUN_00f5a410(&local_168,local_140);
      puVar8 = local_140[0];
      if (local_140[0] != (undefined8 *)0x0) {
        psVar15 = (short *)(local_140[0] + 3);
        do {
          sVar17 = *psVar15;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar15,0x10);
          if (bVar9) {
            *psVar15 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_140[0] + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_70[0] = *puVar8;
            FUN_00c44438(lVar22 + 0x8040,local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      lVar22 = *(long *)(param_1 + 0x58);
      if (lVar22 == *(long *)(param_1 + 0x60)) {
        uVar11 = *(ulong *)(param_1 + 0x70);
        lVar22 = lVar22 - *(long *)(param_1 + 0x50) >> 4;
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        uVar2 = lVar22 * 0x4ec4ec4ec4ec4ec5 + 1;
        if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar13 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x50) >> 4;
        uVar16 = lVar13 * -0x6276276276276276;
        if (uVar2 <= uVar16) {
          uVar2 = uVar16;
        }
        if (uVar11 >> 1 <= (ulong)(lVar13 * 0x4ec4ec4ec4ec4ec5)) {
          uVar2 = uVar11;
        }
        if (uVar2 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                             (*(long **)(param_1 + 0x68),uVar2 * 0xd0,0x10);
          if (lVar13 == 0) {
            (**(code **)(**(long **)(param_1 + 0x68) + 0xe8))();
          }
        }
        lVar19 = lVar13 + lVar22 * 0x10;
        FUN_00b1ef10(*(undefined8 *)(param_1 + 0x68),lVar19,&local_220);
        lVar12 = *(long *)(param_1 + 0x50);
        lVar18 = *(long *)(param_1 + 0x58);
        lVar22 = lVar19 + 0xd0;
        if (lVar18 == lVar12) {
          lVar18 = lVar12;
        }
        else {
          do {
            lVar19 = lVar19 + -0xd0;
            lVar18 = lVar18 + -0xd0;
            FUN_00b1eb64(*(undefined8 *)(param_1 + 0x68),lVar19,lVar18);
          } while (lVar12 != lVar18);
          lVar12 = *(long *)(param_1 + 0x50);
          lVar18 = *(long *)(param_1 + 0x58);
        }
        *(long *)(param_1 + 0x50) = lVar19;
        *(long *)(param_1 + 0x58) = lVar22;
        lVar22 = *(long *)(param_1 + 0x60);
        *(ulong *)(param_1 + 0x60) = lVar13 + uVar2 * 0xd0;
        while (lVar18 != lVar12) {
          lVar18 = lVar18 + -0xd0;
          FUN_0159e7d4(lVar18);
        }
        if (lVar12 != 0) {
          lVar22 = lVar22 - lVar12;
          plVar20 = *(long **)(param_1 + 0x68);
          uVar11 = (**(code **)(*plVar20 + 0xf8))(plVar20);
          if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar20 + 0x18))(plVar20,lVar12,lVar22,0x10);
          }
          else {
            FUN_00c48fe8(plVar20,lVar12,lVar22,0x10);
          }
        }
      }
      else {
        FUN_00b1ef10(*(undefined8 *)(param_1 + 0x68),lVar22,&local_220);
        *(long *)(param_1 + 0x58) = lVar22 + 0xd0;
      }
      lVar13 = FUN_01ebe260(psVar21 + 0x60,*(undefined8 *)(param_1 + 0x90),psVar21);
      lVar22 = *(long *)(param_1 + 0x90);
      while (lVar22 != lVar13) {
        lVar22 = lVar22 + -0xc0;
        FUN_01a0b710(lVar22);
      }
      *(long *)(param_1 + 0x90) = lVar13;
      FUN_01ebee64(local_120,&local_220);
      if (local_158 != (long *)0x0) {
        lVar22 = local_158[6];
        psVar21 = (short *)(lVar22 + 0x1a);
        do {
          sVar17 = *psVar21;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar21,0x10);
          if (bVar9) {
            *psVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_158 + 0x50))();
        }
        else if (sVar17 == 0) {
LAB_0169639c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar20 = local_168;
      if (local_168 != (long *)0x0) {
        plVar1 = local_168 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_168 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      plVar20 = local_178;
      if (local_178 != (long *)0x0) {
        plVar1 = local_178 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_178 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      plVar20 = local_188;
      if (local_188 != (long *)0x0) {
        plVar1 = local_188 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_188 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      plVar20 = local_1a8;
      if (local_1a8 != (long *)0x0) {
        plVar1 = local_1a8 + 3;
        do {
          sVar17 = (short)*plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(short *)plVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_1a8 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_140[0] = (undefined8 *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,local_140);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
      puVar8 = local_130;
      if (local_130 != (undefined8 *)0x0) {
        psVar21 = (short *)(local_130 + 3);
        do {
          sVar17 = *psVar21;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar21,0x10);
          if (bVar9) {
            *psVar21 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_130 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_220 = (long *)*puVar8;
            FUN_00c44438(lVar22 + 0x8040,&local_220);
          }
        }
        else if (sVar17 == 0) goto LAB_01696e84;
      }
    }
  }
  FUN_01aa2894(param_2,param_3);
  if ((*(code **)(param_1 + 0x240) != (code *)0x0) && ((byte)local_120[0] != '\0')) {
    (**(code **)(param_1 + 0x240))(param_1 + 0x260,param_2,param_3,auStack_110);
  }
  bVar9 = (byte)local_120[0] != '\0';
  if ((byte)local_120[0] == '\0') {
    return false;
  }
  if (local_98 == (undefined8 *)0x0) {
    return bVar9;
  }
  psVar21 = (short *)(local_98 + 3);
  do {
    sVar17 = *psVar21;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar21,0x10);
    if (bVar6) {
      *psVar21 = sVar17 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar17 == 1) {
    piVar3 = (int *)((long)local_98 + 0x1c);
    do {
      iVar10 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) {
      return bVar9;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar22 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar22;
    local_220 = (long *)*local_98;
    FUN_00c44438(lVar22 + 0x8040,&local_220);
    return bVar9;
  }
  if (sVar17 != 0) {
    return bVar9;
  }
LAB_01696e84:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
code_r0x016969c0:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_01695c34;
  goto LAB_01696994;
code_r0x01696a0c:
  sVar17 = sVar4;
  if (sVar4 == 0) goto LAB_01695e60;
  goto LAB_016969dc;
}


