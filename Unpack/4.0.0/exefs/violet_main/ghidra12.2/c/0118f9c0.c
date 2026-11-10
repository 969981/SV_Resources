/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118f9c0; name: FUN_0118f9c0
 */


void FUN_0118f9c0(long *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d8e30;
  puVar7 = PTR_DAT_047d8e28;
  puVar6 = PTR_DAT_047d3910;
  if (param_1 != param_2) {
    do {
      lVar16 = *param_1;
      if (lVar16 != 0) {
        puVar17 = (undefined8 *)(lVar16 + 8);
        puVar10 = (undefined8 *)(**(code **)*puVar17)(puVar17);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar9 != 0)) {
            uVar12 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar12;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar8 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar7);
        }
        if (puVar10 != (undefined8 *)0x0) {
LAB_0118fa40:
          if (puVar10 != (undefined8 *)puVar8) goto code_r0x0118fa48;
          uVar11 = (**(code **)(*(long *)*param_1 + 0xc0))();
          if ((uVar11 & 1) != 0) goto LAB_0118fa50;
          lVar13 = *param_3;
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00c43ef0(&local_78,lVar16 + 0x78);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          if ((undefined8 *)local_78[2] == puVar17) {
            FUN_00d94688(&local_88,&local_78);
          }
          puVar10 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
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
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar16 = *(long *)puVar6;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_68 = *puVar10;
                FUN_00c44438(lVar16 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) goto LAB_0118fba4;
          }
          plVar18 = *(long **)(lVar13 + 0x3e0);
          plVar15 = *(long **)(lVar13 + 1000);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00d4ca00(&local_78,&local_88);
          puVar10 = local_78;
          if ((plVar18 != plVar15) && ((undefined8 *)*plVar18 != local_78)) {
            do {
              plVar14 = plVar18 + 3;
              plVar18 = plVar15;
              if (plVar15 == plVar14) break;
              plVar18 = plVar14;
            } while ((undefined8 *)*plVar14 != local_78);
          }
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
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
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar16 = *(long *)puVar6;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_68 = *puVar10;
                FUN_00c44438(lVar16 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) goto LAB_0118fba4;
          }
          if (*(long **)(lVar13 + 1000) == plVar18) {
            FUN_0119039c(lVar13 + 0x3e0,&local_88);
          }
          puVar10 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_88 + 3);
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
              piVar2 = (int *)((long)local_88 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar16 = *(long *)puVar6;
                *(long *)PTR_DAT_047d3918 = lVar16;
                local_68 = *puVar10;
                FUN_00c44438(lVar16 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) {
LAB_0118fba4:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
      }
LAB_0118fa50:
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
code_r0x0118fa48:
  puVar10 = (undefined8 *)*puVar10;
  if (puVar10 == (undefined8 *)0x0) goto LAB_0118fa50;
  goto LAB_0118fa40;
}


