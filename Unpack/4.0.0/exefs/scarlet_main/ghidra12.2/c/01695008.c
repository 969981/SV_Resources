/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01695008; name: FUN_01695008
 */


undefined4 FUN_01695008(long param_1,long *param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  if ((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar7 != lVar2) {
      do {
        if (((*(long *)(lVar7 + 0x78) != 0) && (*(short *)(*(long *)(lVar7 + 0x78) + 0x1a) != 0)) &&
           (*(long *)(lVar7 + 0x78) == *param_2)) goto LAB_01695074;
        lVar7 = lVar7 + 0xd0;
      } while (lVar2 != lVar7);
      lVar7 = lVar2;
LAB_01695074:
      if (lVar7 != *(long *)(param_1 + 0x58)) {
        lVar7 = *(long *)(lVar7 + 0xb8);
        if (lVar7 == 0) {
          return 1;
        }
        if (*(short *)(lVar7 + 0x1a) == 0) {
          return 1;
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0169513c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0169513c:
            bVar5 = false;
          }
          if (bVar5) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 == 0) {
              return 1;
            }
            plVar9 = (long *)(lVar7 + -0x28);
            uVar6 = FUN_01ebcf38(plVar9);
            lVar7 = *(long *)(lVar7 + 0x70);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar8 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
              return uVar6;
            }
            if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return uVar6;
          }
          sVar8 = sVar3;
          if (sVar3 == 0) {
            return 1;
          }
        } while( true );
      }
    }
    lVar7 = *(long *)(param_1 + 0x88);
    lVar2 = *(long *)(param_1 + 0x90);
    if (lVar7 != lVar2) {
      do {
        if (((*(long *)(lVar7 + 0x78) != 0) && (*(short *)(*(long *)(lVar7 + 0x78) + 0x1a) != 0)) &&
           (*(long *)(lVar7 + 0x78) == *param_2)) goto LAB_016950f0;
        lVar7 = lVar7 + 0xc0;
      } while (lVar2 != lVar7);
      lVar7 = lVar2;
LAB_016950f0:
      if (lVar7 != *(long *)(param_1 + 0x90)) {
        return *(undefined4 *)(lVar7 + 0xa0);
      }
    }
  }
  return 1;
}


