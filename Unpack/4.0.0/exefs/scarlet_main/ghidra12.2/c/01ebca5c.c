/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebca5c; name: FUN_01ebca5c
 */


void FUN_01ebca5c(long param_1,long *param_2)

{
  short *psVar1;
  long lVar2;
  ushort *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ushort *puVar8;
  short sVar9;
  long *plVar10;
  
  if ((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar7 != lVar2) {
      do {
        if ((((*(long *)(lVar7 + 0x78) != 0) && (*(short *)(*(long *)(lVar7 + 0x78) + 0x1a) != 0))
            && (*(char *)(lVar7 + 0x71) == '\0')) && (*(long *)(lVar7 + 0x78) == *param_2))
        goto LAB_01ebcae0;
        lVar7 = lVar7 + 0xd0;
      } while (lVar2 != lVar7);
      lVar7 = lVar2;
LAB_01ebcae0:
      if (lVar7 != *(long *)(param_1 + 0x58)) {
        lVar7 = *(long *)(lVar7 + 0xb8);
        if (lVar7 == 0) {
          return;
        }
        if (*(short *)(lVar7 + 0x1a) == 0) {
          return;
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar9 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar9) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01ebcb28;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01ebcb28:
            bVar6 = false;
          }
          if (bVar6) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 == 0) {
              return;
            }
            plVar10 = (long *)(lVar7 + -0x28);
            FUN_01ebcf2c(plVar10);
            lVar7 = *(long *)(lVar7 + 0x70);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar9 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ebcc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x50))(plVar10);
              return;
            }
            if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return;
          }
          sVar9 = sVar4;
          if (sVar4 == 0) {
            return;
          }
        } while( true );
      }
    }
    puVar8 = *(ushort **)(param_1 + 0x88);
    puVar3 = *(ushort **)(param_1 + 0x90);
    if (puVar8 != puVar3) {
      do {
        if (((*(long *)(puVar8 + 0x3c) != 0) && (*(short *)(*(long *)(puVar8 + 0x3c) + 0x1a) != 0))
           && (*(long *)(puVar8 + 0x3c) == *param_2)) goto LAB_01ebcb88;
        puVar8 = puVar8 + 0x60;
      } while (puVar3 != puVar8);
      puVar8 = puVar3;
LAB_01ebcb88:
      if (puVar8 != *(ushort **)(param_1 + 0x90)) {
        if (*(char *)(param_1 + 0xc0) == '\0') {
          *(uint *)(param_1 + 0xc2) = (uint)*puVar8;
          *(undefined1 *)(param_1 + 0xc0) = 1;
        }
        else {
          *(ushort *)(param_1 + 0xc2) = *puVar8;
          *(undefined1 *)(param_1 + 0xc4) = 0;
        }
      }
    }
  }
  return;
}


