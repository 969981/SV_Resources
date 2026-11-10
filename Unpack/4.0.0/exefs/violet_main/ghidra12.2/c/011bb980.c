/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011bb980; name: FUN_011bb980
 */


void FUN_011bb980(long *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *local_b8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_047d8e30;
  puVar9 = PTR_DAT_047d8e28;
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  if (param_1 != param_2) {
    do {
      lVar19 = *param_1;
      if (lVar19 != 0) {
        puVar20 = (undefined8 *)(lVar19 + 8);
        puVar12 = (undefined8 *)(**(code **)*puVar20)(puVar20);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar11 != 0)) {
            uVar14 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar14;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar10 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar9);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_011bba04:
          if (puVar12 != (undefined8 *)puVar10) goto code_r0x011bba0c;
          uVar13 = (**(code **)(*(long *)*param_1 + 0xc0))();
          if ((uVar13 & 1) == 0) {
            lVar15 = *param_3;
            local_90 = (undefined8 *)0x0;
            puStack_88 = (undefined8 *)0x0;
            FUN_00c43ef0(&local_90,lVar19 + 0x78);
            local_a0 = (undefined8 *)0x0;
            uStack_98 = 0;
            if ((undefined8 *)local_90[2] == puVar20) {
              FUN_00d94688(&local_a0,&local_90);
            }
            puVar12 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_90 + 3);
              do {
                sVar3 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)local_90 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar19 = *(long *)puVar6;
                  *(long *)puVar7 = lVar19;
                  local_68 = *puVar12;
                  FUN_00c44438(lVar19 + 0x8040,&local_68);
                }
              }
              else if (sVar3 == 0) goto LAB_011bbc4c;
            }
            uVar13 = *(ulong *)(lVar15 + 1000);
            puVar12 = (undefined8 *)(lVar15 + 0x3f8);
            if (uVar13 < *(ulong *)(lVar15 + 0x3f0)) {
              FUN_029a461c(puVar12,uVar13,&local_a0);
              *(ulong *)(lVar15 + 1000) = uVar13 + 0x18;
            }
            else {
              lVar19 = (long)(uVar13 - *(long *)(lVar15 + 0x3e0)) >> 3;
              uVar18 = *(ulong *)(lVar15 + 0x400);
              uVar13 = lVar19 * -0x5555555555555555 + 1;
              if (0x7ffffffffffffffe < uVar18) {
                uVar18 = 0x7fffffffffffffff;
              }
              if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar16 = (long)(*(ulong *)(lVar15 + 0x3f0) - *(long *)(lVar15 + 0x3e0)) >> 3;
              uVar17 = lVar16 * 0x5555555555555556;
              if (uVar13 <= uVar17) {
                uVar13 = uVar17;
              }
              if (uVar18 >> 1 <= (ulong)(lVar16 * -0x5555555555555555)) {
                uVar13 = uVar18;
              }
              local_78 = (undefined8 *)0x0;
              puStack_70 = puVar12;
              if (uVar13 == 0) {
                local_b8 = (undefined8 *)0x0;
              }
              else {
                local_b8 = (undefined8 *)
                           (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar13 * 0x18,8)
                ;
                if (local_b8 == (undefined8 *)0x0) {
                  (**(code **)(*(long *)*puVar12 + 0xe8))();
                }
              }
              puVar20 = local_b8 + lVar19;
              local_78 = local_b8 + uVar13 * 3;
              local_90 = local_b8;
              puStack_88 = puVar20;
              FUN_029a461c(puVar12,puVar20,&local_a0);
              local_80 = puVar20 + 3;
              FUN_011906cc(lVar15 + 0x3e0,&local_90);
              FUN_01190850(&local_90);
            }
            puVar12 = local_a0;
            if (local_a0 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_a0 + 3);
              do {
                sVar3 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)local_a0 + 0x1c);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                    FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar19 = *(long *)puVar6;
                  *(long *)puVar7 = lVar19;
                  local_90 = (undefined8 *)*puVar12;
                  FUN_00c44438(lVar19 + 0x8040,&local_90);
                }
              }
              else if (sVar3 == 0) {
LAB_011bbc4c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
        }
      }
LAB_011bba14:
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
code_r0x011bba0c:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_011bba14;
  goto LAB_011bba04;
}


