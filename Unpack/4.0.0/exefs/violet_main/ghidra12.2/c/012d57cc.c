/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d57cc; name: FUN_012d57cc
 */


void FUN_012d57cc(long param_1,int *param_2)

{
  short *psVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  short sVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long *local_e8;
  long *local_e0;
  undefined1 *local_d8;
  char *pcStack_d0;
  size_t local_c8;
  long *plStack_c0;
  long *local_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  size_t local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  if (*(long *)(param_1 + 0x140) == 0) {
    local_88 = (long *)FUN_012d9848(*(undefined8 *)(param_1 + 8));
    if (local_88 != (long *)0x0) {
      plVar28 = local_88 + 5;
      do {
        lVar23 = *plVar28;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = (int)lVar23 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar23 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_012d9714(param_1 + 0x140,&local_88);
    if (local_88 != (long *)0x0) {
      plVar28 = local_88 + 5;
      do {
        lVar23 = *plVar28;
        iVar12 = (int)lVar23 + -1;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
      else if ((int)lVar23 == 0) {
        pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar16 = "DecrementReferenceInternal";
        pcVar17 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar18 = "Reference counter underflows.";
LAB_012d60d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
      }
    }
  }
  if ((6 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar21 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar21 != 0)) {
    uVar22 = (ulong)*(uint *)((long)param_2 + uVar21);
    puVar2 = (uint *)((long)((long)param_2 + uVar21) + uVar22);
    if (*puVar2 == 0) {
      bVar11 = true;
    }
    else {
      uVar24 = 0;
      lVar23 = (long)param_2 + uVar22 + uVar21 + 9;
      do {
        uVar27 = (ulong)puVar2[uVar24 + 1];
        piVar3 = (int *)((long)(puVar2 + uVar24 + 1) + uVar27);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar31 = *(undefined1 **)PTR_DAT_047d3e30;
          pcVar15 = *(char **)(PTR_DAT_047d3e30 + 8);
          sVar13 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar28 == (long *)0x0) goto LAB_012d5938;
          (**(code **)(*plVar28 + 0x18))(plVar28);
          local_b0 = puVar31;
          pcStack_a8 = pcVar15;
          local_a0 = sVar13;
          local_98 = plVar28;
          (**(code **)(*plVar28 + 0x18))(plVar28);
          bVar11 = false;
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar30);
          uVar25 = (ulong)*puVar4;
          pcVar15 = (char *)((long)puVar4 + uVar25 + 4);
          sVar13 = strlen(pcVar15);
          bVar7 = *(byte *)((long)puVar4 + uVar25 + 4);
          if (bVar7 == 0) {
            puVar31 = &DAT_cbf29ce484222645;
          }
          else {
            puVar31 = &DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar23 + uVar25 + uVar30 + uVar27);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar7 != 0);
          }
LAB_012d5938:
          plVar28 = (long *)0x0;
          bVar11 = true;
          local_98 = (long *)0x0;
          local_b0 = puVar31;
          pcStack_a8 = pcVar15;
          local_a0 = sVar13;
        }
        FUN_010e2fe4(&local_90,param_1,&local_b0);
        if (local_90 != (long *)0x0) {
          lVar19 = local_90[6];
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*local_90 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_012d606c;
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (!bVar11) {
          (**(code **)(*plVar28 + 0x20))(plVar28);
        }
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 4;
      } while (uVar24 < *puVar2);
      bVar11 = *puVar2 == 0;
    }
    if (!bVar11) {
      uVar24 = 0;
      lVar23 = (long)param_2 + uVar22 + uVar21 + 0xd;
      lVar19 = (long)param_2 + uVar22 + uVar21 + 9;
      do {
        uVar21 = (ulong)puVar2[uVar24 + 1];
        piVar3 = (int *)((long)(puVar2 + uVar24 + 1) + uVar21);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar22 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar31 = *(undefined1 **)PTR_DAT_047d3e30;
          pcVar15 = *(char **)(PTR_DAT_047d3e30 + 8);
          sVar13 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar28 != (long *)0x0) {
            (**(code **)(*plVar28 + 0x18))(plVar28);
          }
        }
        else {
          puVar4 = (uint *)((long)piVar3 + uVar22);
          uVar27 = (ulong)*puVar4;
          pcVar15 = (char *)((long)puVar4 + uVar27 + 4);
          sVar13 = strlen(pcVar15);
          bVar7 = *(byte *)((long)puVar4 + uVar27 + 4);
          if (bVar7 == 0) {
            puVar31 = &DAT_cbf29ce484222645;
          }
          else {
            puVar31 = &DAT_cbf29ce484222645;
            pbVar20 = (byte *)(lVar19 + uVar27 + uVar22 + uVar21);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar7) * 0x100000001b3);
              bVar7 = *pbVar20;
              pbVar20 = pbVar20 + 1;
            } while (bVar7 != 0);
          }
          plVar28 = (long *)0x0;
        }
        local_d8 = puVar31;
        pcStack_d0 = pcVar15;
        local_c8 = sVar13;
        plStack_c0 = plVar28;
        if (plVar28 == (long *)0x0) {
          FUN_010e2d6c(&local_b8,param_1,&local_d8);
        }
        else {
          (**(code **)(*plVar28 + 0x18))(plVar28);
          FUN_010e2d6c(&local_b8,param_1,&local_d8);
          (**(code **)(*plVar28 + 0x20))(plVar28);
        }
        plVar29 = (long *)local_b8[8];
        if (plVar29 == (long *)0x0) {
          local_e0 = (long *)0x0;
          FUN_012d6298(piVar3,&local_e0);
          local_e8 = (long *)0x0;
          FUN_012d6128(piVar3,&local_e8);
          goto LAB_012d5c54;
        }
        lVar26 = plVar29[6];
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_012d6094;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 != 0) {
          if (sVar6 != -1) goto LAB_012d5b58;
LAB_012d60b4:
          pcVar15 = "count != 0";
          pcVar16 = "AddReference";
          pcVar17 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar18 = "Reference counter overflows.";
          goto LAB_012d60d4;
        }
        uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
        *(undefined8 *)(lVar26 + 8) = uVar14;
        *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
LAB_012d5b58:
        lVar26 = plVar29[6];
        local_e0 = plVar29;
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_012d6094;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar14;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) goto LAB_012d60b4;
        plVar10 = local_e0;
        FUN_012d6298(piVar3,&local_e0);
        if (plVar10 != (long *)0x0) {
          lVar26 = plVar10[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar6 == 0) {
LAB_012d606c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        lVar26 = plVar29[6];
        local_e8 = plVar29;
        if (*(long *)(lVar26 + 0x10) == 0) goto LAB_012d6094;
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar14;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) goto LAB_012d60b4;
        plVar10 = local_e8;
        FUN_012d6128(piVar3,&local_e8);
        if (plVar10 != (long *)0x0) {
          lVar26 = plVar10[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar6 == 0) goto LAB_012d606c;
        }
        lVar26 = plVar29[6];
        if (*(long *)(lVar26 + 0x10) == 0) {
LAB_012d6094:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar6 = *psVar1;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar6 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          *(undefined8 *)(lVar26 + 8) = uVar14;
          *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) goto LAB_012d60b4;
LAB_012d5c54:
        if ((0xe < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar22 != 0)) {
          uVar27 = (ulong)*(uint *)((long)piVar3 + uVar22);
          puVar4 = (uint *)((long)((long)piVar3 + uVar22) + uVar27);
          if (*puVar4 != 0) {
            uVar30 = 0;
            lVar26 = lVar23 + uVar27 + uVar22 + uVar21;
            do {
              puVar5 = puVar4 + uVar30 + 1;
              uVar21 = (ulong)*puVar5;
              pcVar15 = (char *)((long)puVar5 + uVar21 + 4);
              local_78 = strlen(pcVar15);
              bVar7 = *(byte *)((long)puVar5 + uVar21 + 4);
              local_88 = (long *)&DAT_cbf29ce484222645;
              if (bVar7 != 0) {
                local_88 = (long *)&DAT_cbf29ce484222645;
                pbVar20 = (byte *)(lVar26 + uVar21);
                do {
                  local_88 = (long *)(((ulong)local_88 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar20;
                  pbVar20 = pbVar20 + 1;
                } while (bVar7 != 0);
              }
              local_70 = (long *)0x0;
              pcStack_80 = pcVar15;
              FUN_012fe7f0(plVar29,&local_88);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              uVar30 = uVar30 + 1;
              lVar26 = lVar26 + 4;
            } while (uVar30 < *puVar4);
          }
        }
        if (plVar29 != (long *)0x0) {
          lVar26 = plVar29[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*plVar29 + 0x50))(plVar29);
          }
          else if (sVar6 == 0) goto LAB_012d606c;
          lVar26 = plVar29[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*plVar29 + 0x50))(plVar29);
          }
          else if (sVar6 == 0) goto LAB_012d606c;
        }
        if (local_b8 != (long *)0x0) {
          lVar26 = local_b8[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*local_b8 + 0x50))();
          }
          else if (sVar6 == 0) goto LAB_012d606c;
        }
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 0x20))(plVar28);
        }
        uVar24 = uVar24 + 1;
        lVar19 = lVar19 + 4;
        lVar23 = lVar23 + 4;
      } while (uVar24 < *puVar2);
    }
  }
  DAT_04865f18 = 1;
  return;
}


