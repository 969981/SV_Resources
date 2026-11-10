/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a8bc8; name: FUN_029a8bc8
 */


void FUN_029a8bc8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 *puVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  byte bVar17;
  undefined8 uVar18;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [24];
  long *local_80;
  undefined8 *local_78 [3];
  
  puVar10 = PTR_DAT_047d8290;
  puVar9 = PTR_DAT_047d8288;
  puVar8 = PTR_DAT_047d8280;
  if (*(char *)(param_1 + 0x158) == '\0') {
    plVar16 = *(long **)(param_1 + 0x120);
    plVar4 = *(long **)(param_1 + 0x128);
    if (((plVar4 != plVar16) && (*plVar16 != 0)) && (**(char **)(*plVar16 + 0x38) != '\0')) {
      if (plVar16 == plVar4) {
        bVar17 = 1;
      }
      else {
        bVar17 = 1;
        do {
          FUN_029a8e38(local_78,param_1);
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d89a8,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          uVar18 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar10 = uVar18;
          FUN_0135d26c(auStack_98,plVar16);
          uVar5 = *(undefined1 *)(param_1 + 0x11e);
          local_110 = 0;
          uStack_108 = 0;
          local_120 = 0;
          local_118 = (code *)0x0;
          FUN_029a8fa0(&local_120,local_78);
          bVar13 = FUN_01478e28(uVar18,auStack_98,uVar5,&local_120,param_1);
          pcVar11 = local_118;
          if (local_118 != (code *)0x0) {
            local_110 = 0;
            uStack_108 = 0;
            local_120 = 0;
            local_118 = (code *)0x0;
            (*pcVar11)(auStack_100);
          }
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          puVar12 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78[0] + 3);
            do {
              sVar3 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_78[0] + 0x1c);
              do {
                iVar14 = *piVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar14 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_120 = *puVar12;
                FUN_00c44438(lVar15 + 0x8040,&local_120);
              }
            }
            else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          plVar16 = plVar16 + 1;
          bVar17 = bVar17 & bVar13;
        } while (plVar16 != plVar4);
      }
      *(byte *)(param_1 + 0x158) = bVar17;
    }
  }
  return;
}


