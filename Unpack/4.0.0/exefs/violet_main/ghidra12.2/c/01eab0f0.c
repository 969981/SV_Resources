/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eab0f0; name: FUN_01eab0f0
 */


void FUN_01eab0f0(long param_1)

{
  short *psVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  short sVar17;
  undefined8 *local_80;
  undefined8 uStack_78;
  char local_70 [2];
  undefined2 local_6e;
  undefined8 local_68;
  
  puVar11 = PTR_LAB_047d3de8;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  pcVar3 = *(char **)(param_1 + 200);
  pcVar4 = *(char **)(param_1 + 0xd0);
  do {
    if (pcVar3 == pcVar4) {
      return;
    }
    if ((*pcVar3 == '\0') && (FUN_01077654(local_70), local_70[0] != '\0')) {
      if (*pcVar3 == '\0') {
        *(undefined2 *)(pcVar3 + 2) = local_6e;
        *pcVar3 = '\x01';
      }
      else {
        *(undefined2 *)(pcVar3 + 2) = local_6e;
      }
      if (((pcVar3[0x60] != '\0') && (lVar15 = *(long *)(pcVar3 + 8), lVar15 != 0)) &&
         (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar17 = *(short *)(lVar15 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar17) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar17 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_01eab21c;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01eab21c:
            bVar7 = false;
          }
          if (bVar7) {
            lVar15 = *(long *)(lVar15 + 0x10);
            if (lVar15 != 0) {
              local_80 = (undefined8 *)0x0;
              uStack_78 = 0;
              FUN_00ca1a48(&local_80);
              uVar14 = 3;
              if (*(int *)(pcVar3 + 0x40) != 1) {
                uVar14 = 4;
              }
              FUN_01833968((ulong)local_70 | 2,&local_80,uVar14);
              puVar12 = local_80;
              if (local_80 != (undefined8 *)0x0) {
                psVar1 = (short *)(local_80 + 3);
                do {
                  sVar17 = *psVar1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar7) {
                    *psVar1 = sVar17 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar17 == 1) {
                  piVar2 = (int *)((long)local_80 + 0x1c);
                  do {
                    iVar13 = *piVar2;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar7) {
                      *piVar2 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar13 != -1) {
                    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0))
                    {
                      FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
                      __cxa_guard_release(puVar8);
                    }
                    lVar16 = *(long *)puVar9;
                    *(long *)puVar10 = lVar16;
                    local_68 = *puVar12;
                    FUN_00c44438(lVar16 + 0x8040,&local_68);
                  }
                }
                else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
              FUN_01eaba98(param_1,pcVar3);
              if (*(long *)(pcVar3 + 0x18) != 0) {
                FUN_01837b34(*(long *)(pcVar3 + 0x18),1);
              }
              lVar16 = *(long *)(lVar15 + 8);
              psVar1 = (short *)(lVar16 + 0x1a);
              do {
                sVar17 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar17 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar17 == 1) {
                *(undefined8 *)(lVar16 + 0x10) = 0;
                (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
              }
              else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar17 = sVar5;
        } while (sVar5 != 0);
      }
      if (local_70[0] != '\0') {
        local_70[0] = '\0';
      }
    }
    pcVar3 = pcVar3 + 0x68;
  } while( true );
}


