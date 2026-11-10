/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104ded0; name: FUN_0104ded0
 */


void FUN_0104ded0(undefined8 *param_1,undefined *param_2,long *param_3,int param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  long lVar21;
  code *pcVar22;
  bool bVar23;
  short sVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_198;
  undefined8 local_190;
  long *local_188;
  long *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long *local_68;
  
  lVar21 = param_1[1];
  if ((lVar21 != 0) && (*(short *)(lVar21 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar21 + 0x1a);
    sVar24 = *(short *)(lVar21 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar24) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar23) {
          *psVar1 = sVar24 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0104df64;
        bVar23 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0104df64:
        bVar23 = false;
      }
      if (bVar23) {
        lVar21 = *(long *)(lVar21 + 0x10);
        if (lVar21 == 0) {
          return;
        }
        plVar25 = (long *)*param_1;
        lVar11 = nn::os::GetCurrentThread();
        goto LAB_0104dfb0;
      }
      sVar24 = sVar3;
    } while (sVar3 != 0);
  }
  return;
LAB_0104dfb0:
  if (DAT_04842718 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)&DAT_04842720);
    do {
      if (DAT_04842718 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)&DAT_04842720);
          while (DAT_04842718 == 0) {
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(0x4842718,0x10);
            if (bVar23) {
              cVar4 = ExclusiveMonitorsStatus();
              DAT_04842718 = lVar11;
            }
            if (cVar4 == '\0') goto LAB_0104dfc0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(0x4842718,0x10);
      if (bVar23) {
        cVar4 = ExclusiveMonitorsStatus();
        DAT_04842718 = lVar11;
      }
    } while (cVar4 != '\0');
LAB_0104dfc0:
    uVar12 = FUN_02255b24(param_2);
    if (((uVar12 & 1) != 0) && (DAT_04842730 != 0)) {
      FUN_019202d0(DAT_04842740,param_2);
      FUN_0109c2c8(DAT_04842730,DAT_04842738,DAT_04842740);
      param_2 = *(undefined **)(DAT_04842738 + 0x30);
    }
    uVar12 = FUN_02255b4c(param_2,0xff,1);
    fVar30 = *(float *)(plVar25 + 0x20);
    if ((uVar12 & 1) == 0) {
      *(ushort *)((long)plVar25 + 0x114) =
           *(ushort *)((long)plVar25 + 0x114) & 0xfffb |
           (*(ushort *)((long)plVar25 + 0x114) >> 2 & 1 | (ushort)(fVar30 != 0.0)) << 2;
      if (fVar30 != 0.0) {
        *(undefined4 *)(plVar25 + 0x20) = 0;
      }
    }
    else {
      *(ushort *)((long)plVar25 + 0x114) =
           *(ushort *)((long)plVar25 + 0x114) & 0xfffb |
           (*(ushort *)((long)plVar25 + 0x114) >> 2 & 1 | (ushort)(fVar30 != 12.0)) << 2;
      if (fVar30 != 12.0) {
        *(undefined4 *)(plVar25 + 0x20) = 0x41400000;
      }
    }
    plVar13 = (long *)FUN_00c81fa0(plVar25);
    if ((plVar13 == (long *)0x0) || (iVar6 = (**(code **)(*plVar13 + 0x48))(), iVar6 != 1)) {
      puVar26 = param_1 + 1;
      local_d0 = *param_1;
      local_c8 = (undefined8 *)0x0;
      iVar6 = DAT_04842748;
      if (param_4 != 10) {
        iVar6 = param_4;
      }
      local_c0 = 0;
      FUN_00c81640(&local_c8,puVar26);
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_188 = *(long **)PTR_DAT_047d3e30;
      local_190 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
      local_198 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
      plVar13 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      uVar28 = local_d0;
      plVar27 = plVar13;
      if ((local_c8 != (undefined8 *)0x0) && (*(short *)((long)local_c8 + 0x1a) != 0)) {
        psVar1 = (short *)((long)local_c8 + 0x1a);
        sVar24 = *(short *)((long)local_c8 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar24) {
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar24 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0104ea68;
            bVar23 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0104ea68:
            bVar23 = false;
          }
          if (bVar23) {
            lVar11 = local_c8[2];
            if (lVar11 == 0) break;
            lVar29 = FUN_00fa5b78(local_d0,&DAT_03c32ba5);
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            lVar14 = FUN_00c81fa0(uVar28);
            if (lVar14 != 0) {
              plVar15 = (long *)FUN_00c81fa0(uVar28);
              iVar7 = (**(code **)(*plVar15 + 0x48))();
              if (iVar7 == 2) goto LAB_0104eae8;
LAB_0104ec00:
              lVar29 = *(long *)(lVar11 + 8);
              psVar1 = (short *)(lVar29 + 0x1a);
              do {
                sVar24 = *psVar1;
                cVar4 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar23) {
                  *psVar1 = sVar24 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar24 == 1) {
                *(undefined8 *)(lVar29 + 0x10) = 0;
                (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
              }
              else if (sVar24 == 0) goto LAB_0104e494;
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
              break;
            }
LAB_0104eae8:
            if (lVar29 == 0) {
              if (((*PTR_DAT_047db110 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047db110);
              }
              *(undefined8 *)PTR_DAT_047db120 = *(undefined8 *)PTR_DAT_047db118;
              FUN_01fb5ed8(&local_98);
            }
            else {
              uVar8 = *(uint *)(lVar29 + 4);
              if (((*PTR_DAT_047db110 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047db110);
              }
              uVar16 = *(undefined8 *)PTR_DAT_047db118;
              *(undefined8 *)PTR_DAT_047db120 = uVar16;
              FUN_02251914(&local_98,uVar16,*(undefined4 *)(lVar29 + (ulong)uVar8));
            }
            plVar27 = local_98;
            local_188 = local_98;
            local_190 = local_90;
            local_198 = local_88;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
            if (((*PTR_DAT_047db110 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047db110);
            }
            uVar16 = *(undefined8 *)PTR_DAT_047db118;
            *(undefined8 *)PTR_DAT_047db120 = uVar16;
            local_b8 = plVar27;
            uStack_b0 = local_90;
            local_a8 = local_88;
            local_a0 = local_80;
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x18))(local_80);
            }
            if (iVar6 - 2U < 8) {
              uVar10 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(iVar6 - 2U) * 4);
            }
            else {
              uVar10 = 0;
            }
            FUN_00c82174(&local_98,uVar16,&local_b8,uVar10);
            plVar15 = local_98;
            if (local_98 == (long *)0x0) {
LAB_0104ebec:
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              lVar29 = FUN_00c81fa0(uVar28);
              plVar27 = local_80;
              if (lVar29 == 0) {
                FUN_02254fa0(uVar28,plVar15 + 8);
              }
              goto LAB_0104ec00;
            }
            plVar27 = local_98 + 5;
            do {
              lVar29 = *plVar27;
              iVar7 = (int)lVar29 + -1;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar23) {
                *(int *)plVar27 = iVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_98 + 0x10))(local_98);
              goto LAB_0104ebec;
            }
            if ((int)lVar29 != 0) goto LAB_0104ebec;
LAB_0104ed9c:
            pcVar17 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar18 = "DecrementReferenceInternal";
            pcVar19 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar20 = "Reference counter underflows.";
LAB_0104ed94:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl(pcVar17,pcVar18,pcVar19,0x58,pcVar20);
          }
          sVar24 = sVar3;
          if (sVar3 == 0) break;
        } while( true );
      }
      puVar5 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_c8 + 3);
        do {
          sVar24 = *psVar1;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar23) {
            *psVar1 = sVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar24 == 1) {
          piVar2 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar23) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_98 = (long *)*puVar5;
            FUN_00c44438(lVar11 + 0x8040,&local_98);
          }
        }
        else if (sVar24 == 0) goto LAB_0104e598;
      }
      lVar11 = FUN_00fa5b78(plVar25,&DAT_03c3608e);
      if (((*PTR_DAT_047db110 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047db110);
      }
      uVar28 = *(undefined8 *)PTR_DAT_047db118;
      *(undefined8 *)PTR_DAT_047db120 = uVar28;
      local_f0 = local_188;
      uStack_e8 = local_190;
      local_e0 = local_198;
      local_d8 = plVar27;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x18))(plVar27);
      }
      uVar8 = iVar6 - 2;
      if (uVar8 < 8) {
        uVar10 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar8 * 4);
      }
      else {
        uVar10 = 0;
      }
      FUN_00c82174(&local_b8,uVar28,&local_f0,uVar10);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        FUN_02254fa0(plVar25,local_b8 + 8);
        local_108 = *param_1;
        local_f8 = 0;
        local_100 = (undefined8 *)0x0;
        FUN_00c81640(&local_100,puVar26);
        local_68 = (long *)*param_3;
        if (local_68 != (long *)0x0) {
          lVar29 = local_68[6];
          if (*(long *)(lVar29 + 0x10) == 0) goto LAB_0104ed54;
          psVar1 = (short *)(lVar29 + 0x1a);
          do {
            sVar24 = *psVar1;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar24 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar24 == 0) {
            uVar28 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
            *(undefined8 *)(lVar29 + 8) = uVar28;
            *(undefined4 *)(lVar29 + 0x1c) = 0xfffffffe;
LAB_0104e1ec:
            plVar13 = local_68;
            FUN_02255ba0(&local_108,param_2,&local_68);
            if (plVar13 != (long *)0x0) {
              lVar29 = plVar13[6];
              psVar1 = (short *)(lVar29 + 0x1a);
              do {
                sVar24 = *psVar1;
                cVar4 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar23) {
                  *psVar1 = sVar24 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar24 == 1) {
                *(undefined8 *)(lVar29 + 0x10) = 0;
                (**(code **)(*plVar13 + 0x50))(plVar13);
              }
              else if (sVar24 == 0) goto LAB_0104e494;
            }
            goto LAB_0104e204;
          }
          if (sVar24 != -1) goto LAB_0104e1ec;
LAB_0104ed74:
          pcVar17 = "count != 0";
          pcVar18 = "AddReference";
          pcVar19 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar20 = "Reference counter overflows.";
          goto LAB_0104ed94;
        }
        FUN_02255ba0(&local_108,param_2,&local_68);
LAB_0104e204:
        puVar5 = local_100;
        if (local_100 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_100 + 3);
          do {
            sVar24 = *psVar1;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar24 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar24 == 1) {
            piVar2 = (int *)((long)local_100 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar23) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar29 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar29;
              local_98 = (long *)*puVar5;
              FUN_00c44438(lVar29 + 0x8040,&local_98);
            }
          }
          else if (sVar24 == 0) goto LAB_0104e598;
        }
        local_120 = *param_1;
        local_110 = 0;
        local_118 = (undefined8 *)0x0;
        FUN_00c81640(&local_118,puVar26);
        local_128 = (long *)*param_3;
        if (local_128 == (long *)0x0) {
          FUN_02256200(&local_120,param_2,&local_128);
        }
        else {
          lVar29 = local_128[6];
          if (*(long *)(lVar29 + 0x10) == 0) {
LAB_0104ed54:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar29 + 0x1a);
          do {
            sVar24 = *psVar1;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar24 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar24 == 0) {
            uVar28 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
            *(undefined8 *)(lVar29 + 8) = uVar28;
            *(undefined4 *)(lVar29 + 0x1c) = 0xfffffffe;
          }
          else if (sVar24 == -1) goto LAB_0104ed74;
          plVar13 = local_128;
          FUN_02256200(&local_120,param_2,&local_128);
          if (plVar13 != (long *)0x0) {
            lVar29 = plVar13[6];
            psVar1 = (short *)(lVar29 + 0x1a);
            do {
              sVar24 = *psVar1;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar23) {
                *psVar1 = sVar24 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar24 == 1) {
              *(undefined8 *)(lVar29 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))(plVar13);
            }
            else if (sVar24 == 0) goto LAB_0104e494;
          }
        }
        puVar5 = local_118;
        if (local_118 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_118 + 3);
          do {
            sVar24 = *psVar1;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar23) {
              *psVar1 = sVar24 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar24 == 1) {
            piVar2 = (int *)((long)local_118 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar23) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar29 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar29;
              local_98 = (long *)*puVar5;
              FUN_00c44438(lVar29 + 0x8040,&local_98);
            }
          }
          else if (sVar24 == 0) goto LAB_0104e598;
        }
        if (lVar11 != 0) {
          fVar32 = *(float *)(lVar11 + (ulong)*(uint *)(lVar11 + 4));
          uVar28 = FUN_00c81fa0(plVar25);
          iVar7 = FUN_01446910(fVar32,param_2,uVar28,0);
          fVar30 = (float)iVar7;
          if (*(float *)(plVar25 + 10) < fVar30) {
            fVar31 = *(float *)(plVar25 + 10) / fVar30;
            fVar30 = -0.05;
            fVar32 = fVar32 * fVar31 + -0.05;
          }
          if (((*PTR_DAT_047db110 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047db110);
          }
          uVar28 = *(undefined8 *)PTR_DAT_047db118;
          *(undefined8 *)PTR_DAT_047db120 = uVar28;
          local_148 = local_188;
          uStack_140 = local_190;
          local_138 = local_198;
          local_130 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          if (uVar8 < 8) {
            uVar10 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar8 * 4);
          }
          else {
            uVar10 = 0;
          }
          local_98._0_4_ = FUN_00f383e0(uVar28,&local_148,uVar10);
          local_98._4_4_ = fVar30;
          if (local_130 != (long *)0x0) {
            (**(code **)(*local_130 + 0x20))();
          }
          local_98 = (long *)CONCAT44(local_98._4_4_,fVar32);
          FUN_02255130(plVar25,&local_98);
        }
        uVar8 = FUN_01aacb90(param_2);
        uVar9 = FUN_0225587c(plVar25);
        if ((uVar9 & 0xffff) < uVar8) {
          param_2 = &DAT_03d317d8;
          pcVar22 = *(code **)(*plVar25 + 0x130);
          uVar10 = 0;
        }
        else {
          if (((*PTR_DAT_047db110 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047db110), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047db110);
          }
          uVar28 = *(undefined8 *)PTR_DAT_047db118;
          *(undefined8 *)PTR_DAT_047db120 = uVar28;
          local_160 = *param_1;
          local_158 = (undefined8 *)0x0;
          uStack_150 = 0;
          FUN_00c81640(&local_158,puVar26);
          uVar10 = FUN_01aacb90(param_2);
          local_180 = local_188;
          uStack_178 = local_190;
          local_170 = local_198;
          local_168 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          FUN_00c81310(uVar28,param_2,&local_160,uVar10,iVar6,&local_180,0);
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x20))();
          }
          puVar26 = local_158;
          if (local_158 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_158 + 3);
            do {
              sVar24 = *psVar1;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar23) {
                *psVar1 = sVar24 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar24 == 1) {
              piVar2 = (int *)((long)local_158 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar23) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_98 = (long *)*puVar26;
                FUN_00c44438(lVar11 + 0x8040,&local_98);
              }
            }
            else if (sVar24 == 0) {
LAB_0104e598:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          uVar10 = FUN_01aacb90(param_2);
          pcVar22 = *(code **)(*plVar25 + 0x130);
        }
        (*pcVar22)(plVar25,param_2,0,uVar10);
        if (local_b8 != (long *)0x0) {
          plVar25 = local_b8 + 5;
          do {
            lVar11 = *plVar25;
            iVar6 = (int)lVar11 + -1;
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar23) {
              *(int *)plVar25 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_0104ed9c;
        }
      }
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))(plVar27);
      }
    }
    else {
      uVar10 = FUN_01aacb90(param_2);
      (**(code **)(*plVar25 + 0x130))(plVar25,param_2,0,uVar10);
    }
    DAT_04842718 = 0;
    nn::os::SignalLightEvent((LightEventType *)&DAT_04842720);
    lVar11 = *(long *)(lVar21 + 8);
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar24 = *psVar1;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar23) {
        *psVar1 = sVar24 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar24 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*(long *)(lVar21 + -0x28) + 0x50))();
      return;
    }
    if (sVar24 != 0) {
      return;
    }
LAB_0104e494:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  cVar4 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(0x4842718,0x10);
  if (bVar23) {
    cVar4 = ExclusiveMonitorsStatus();
    DAT_04842718 = lVar11;
  }
  if (cVar4 == '\0') goto LAB_0104dfc0;
  goto LAB_0104dfb0;
}


