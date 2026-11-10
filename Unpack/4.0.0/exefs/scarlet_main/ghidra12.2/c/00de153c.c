/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00de153c; name: FUN_00de153c
 */


void FUN_00de153c(long param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  char *pcVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  long *local_48;
  
  pcVar11 = *(char **)(param_1 + 200);
  pcVar6 = *(char **)(param_1 + 0xd0);
  pcVar12 = pcVar11;
  if (pcVar11 != pcVar6) {
    do {
      bVar3 = pcVar11[0x20];
      puVar10 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        lVar7 = 0x21;
        puVar10 = &DAT_cbf29ce484222645;
        do {
          puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = pcVar11[lVar7];
          lVar7 = lVar7 + 1;
        } while (bVar3 != 0);
      }
      pcVar12 = pcVar11;
    } while ((puVar10 != (undefined1 *)*param_2) &&
            (pcVar11 = pcVar11 + 0x68, pcVar12 = pcVar6, pcVar11 != pcVar6));
  }
  if (pcVar6 == pcVar12) {
    return;
  }
  if (*pcVar12 != '\0') {
    pcVar11 = pcVar12 + 2;
    FUN_00deaba4(param_1,pcVar11);
    lVar7 = *(long *)(pcVar12 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar9) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00de1690;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00de1690:
          bVar8 = false;
        }
        if (bVar8) {
          lVar7 = *(long *)(lVar7 + 0x10);
          plVar2 = (long *)0x0;
          if (lVar7 != 0) {
            plVar2 = (long *)(lVar7 + -0x28);
          }
          local_48 = plVar2;
          FUN_00deac54(param_1,&local_48,pcVar11);
          if (lVar7 != 0) {
            lVar7 = plVar2[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar2 + 0x50))(plVar2);
            }
            else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          goto LAB_00de1604;
        }
        sVar9 = sVar4;
      } while (sVar4 != 0);
    }
    local_48 = (long *)0x0;
    FUN_00deac54(param_1,&local_48,pcVar11);
  }
LAB_00de1604:
  FUN_00de97a4(pcVar12 + 8);
  FUN_00dea5b4((undefined8 *)(param_1 + 200),pcVar12);
  return;
}


