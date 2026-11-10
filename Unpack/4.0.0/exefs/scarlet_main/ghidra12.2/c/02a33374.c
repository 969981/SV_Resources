/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a33374; name: FUN_02a33374
 */


void FUN_02a33374(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  
  puVar12 = (undefined8 *)(param_2 + 0x7e8);
  do {
    pcVar2 = (char *)*puVar12;
LAB_02a333b0:
    pcVar13 = pcVar2;
    if (pcVar13 != (char *)puVar12[1]) {
      pcVar2 = pcVar13 + 0xa0;
      do {
        if ((*(long *)(pcVar13 + 0x70) != 0) && (uVar8 = FUN_02a36d94(param_1), (uVar8 & 1) != 0)) {
          plVar9 = *(long **)(pcVar13 + 0x70);
          pcVar13[0x70] = '\0';
          pcVar13[0x71] = '\0';
          pcVar13[0x72] = '\0';
          pcVar13[0x73] = '\0';
          pcVar13[0x74] = '\0';
          pcVar13[0x75] = '\0';
          pcVar13[0x76] = '\0';
          pcVar13[0x77] = '\0';
          if (plVar9 != (long *)0x0) {
            plVar3 = plVar9 + 5;
            do {
              lVar7 = *plVar3;
              iVar6 = (int)lVar7 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            else if ((int)lVar7 == 0) {
LAB_02a33670:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        if ((pcVar13[0x98] != '\0') || (*(long *)(pcVar13 + 0x70) != 0)) goto LAB_02a333b0;
        pcVar15 = (char *)puVar12[1];
        pcVar14 = pcVar13;
        pcVar16 = pcVar2;
        if (pcVar2 == pcVar15) {
LAB_02a335a8:
          do {
            if (pcVar16[-0x28] != '\0') {
              pcVar16[-0x28] = '\0';
            }
            plVar9 = *(long **)(pcVar16 + -0x30);
            if (plVar9 != (long *)0x0) {
              plVar3 = plVar9 + 5;
              do {
                lVar7 = *plVar3;
                iVar6 = (int)lVar7 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
              else if ((int)lVar7 == 0) goto LAB_02a33670;
            }
            pcVar15 = pcVar16 + -0xa0;
            if (*pcVar15 != '\0') {
              if (*(long **)(pcVar16 + -0x88) != (long *)0x0) {
                (**(code **)(**(long **)(pcVar16 + -0x88) + 0x20))();
              }
              *pcVar15 = '\0';
            }
            pcVar16 = pcVar15;
          } while (pcVar15 != pcVar14);
        }
        else {
          do {
            if (*pcVar14 == '\0') {
              if (*pcVar16 != '\0') {
                *(undefined4 *)(pcVar14 + 0x10) = *(undefined4 *)(pcVar16 + 0x10);
                uVar10 = *(undefined8 *)(pcVar16 + 0x18);
                pcVar16[0x18] = '\0';
                pcVar16[0x19] = '\0';
                pcVar16[0x1a] = '\0';
                pcVar16[0x1b] = '\0';
                pcVar16[0x1c] = '\0';
                pcVar16[0x1d] = '\0';
                pcVar16[0x1e] = '\0';
                pcVar16[0x1f] = '\0';
                *(undefined8 *)(pcVar14 + 0x18) = uVar10;
                memcpy(pcVar14 + 0x20,pcVar16 + 0x20,0x48);
                *pcVar14 = '\x01';
              }
            }
            else if (*pcVar16 == '\0') {
              if (*(long **)(pcVar14 + 0x18) != (long *)0x0) {
                (**(code **)(**(long **)(pcVar14 + 0x18) + 0x20))();
              }
              *pcVar14 = '\0';
            }
            else {
              *(undefined4 *)(pcVar14 + 0x10) = *(undefined4 *)(pcVar16 + 0x10);
              plVar9 = *(long **)(pcVar14 + 0x18);
              pcVar14[0x18] = '\0';
              pcVar14[0x19] = '\0';
              pcVar14[0x1a] = '\0';
              pcVar14[0x1b] = '\0';
              pcVar14[0x1c] = '\0';
              pcVar14[0x1d] = '\0';
              pcVar14[0x1e] = '\0';
              pcVar14[0x1f] = '\0';
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x20))();
              }
              uVar10 = *(undefined8 *)(pcVar16 + 0x18);
              pcVar16[0x18] = '\0';
              pcVar16[0x19] = '\0';
              pcVar16[0x1a] = '\0';
              pcVar16[0x1b] = '\0';
              pcVar16[0x1c] = '\0';
              pcVar16[0x1d] = '\0';
              pcVar16[0x1e] = '\0';
              pcVar16[0x1f] = '\0';
              *(undefined8 *)(pcVar14 + 0x18) = uVar10;
              memcpy(pcVar14 + 0x20,pcVar16 + 0x20,0x48);
            }
            plVar9 = *(long **)(pcVar14 + 0x70);
            pcVar14[0x70] = '\0';
            pcVar14[0x71] = '\0';
            pcVar14[0x72] = '\0';
            pcVar14[0x73] = '\0';
            pcVar14[0x74] = '\0';
            pcVar14[0x75] = '\0';
            pcVar14[0x76] = '\0';
            pcVar14[0x77] = '\0';
            if (plVar9 != (long *)0x0) {
              plVar3 = plVar9 + 5;
              do {
                lVar7 = *plVar3;
                iVar6 = (int)lVar7 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
              else if ((int)lVar7 == 0) goto LAB_02a33670;
            }
            uVar10 = *(undefined8 *)(pcVar16 + 0x70);
            pcVar16[0x70] = '\0';
            pcVar16[0x71] = '\0';
            pcVar16[0x72] = '\0';
            pcVar16[0x73] = '\0';
            pcVar16[0x74] = '\0';
            pcVar16[0x75] = '\0';
            pcVar16[0x76] = '\0';
            pcVar16[0x77] = '\0';
            *(undefined8 *)(pcVar14 + 0x70) = uVar10;
            if (pcVar14[0x78] == '\0') {
              if (pcVar16[0x78] != '\0') {
                uVar10 = *(undefined8 *)(pcVar16 + 0x80);
                uVar11 = *(undefined8 *)(pcVar16 + 0x90);
                *(undefined8 *)(pcVar14 + 0x88) = *(undefined8 *)(pcVar16 + 0x88);
                *(undefined8 *)(pcVar14 + 0x90) = uVar11;
                *(undefined8 *)(pcVar14 + 0x80) = uVar10;
                pcVar14[0x78] = '\x01';
              }
            }
            else if (pcVar16[0x78] == '\0') {
              pcVar14[0x78] = '\0';
            }
            else {
              uVar10 = *(undefined8 *)(pcVar16 + 0x80);
              uVar11 = *(undefined8 *)(pcVar16 + 0x90);
              *(undefined8 *)(pcVar14 + 0x88) = *(undefined8 *)(pcVar16 + 0x88);
              *(undefined8 *)(pcVar14 + 0x90) = uVar11;
              *(undefined8 *)(pcVar14 + 0x80) = uVar10;
            }
            pcVar1 = pcVar16 + 0x98;
            pcVar16 = pcVar16 + 0xa0;
            pcVar14[0x98] = *pcVar1;
            pcVar14 = pcVar14 + 0xa0;
          } while (pcVar16 != pcVar15);
          pcVar16 = (char *)puVar12[1];
          if (pcVar16 != pcVar14) goto LAB_02a335a8;
        }
        puVar12[1] = pcVar14;
        if (pcVar13 == pcVar14) break;
      } while( true );
    }
    puVar12 = puVar12 + 7;
    if (puVar12 == (undefined8 *)(param_2 + 0xcf0)) {
      if (*(char *)(param_2 + 0x1662) != '\0') {
        FUN_01fa821c(*(undefined8 *)(param_2 + 8),"RaidGemForceReflection");
        *(char *)(param_2 + 0x1662) = '\0';
      }
      return;
    }
  } while( true );
}


