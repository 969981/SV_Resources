/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01694e64; name: FUN_01694e64
 */


undefined4 FUN_01694e64(long param_1,long *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  
  lVar6 = *(long *)(param_1 + 0x50);
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar6 != lVar7) {
    do {
      if (((*(long *)(lVar6 + 0x78) != 0) && (*(short *)(*(long *)(lVar6 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar6 + 0x78) == *param_2)) goto LAB_01694eb4;
      lVar6 = lVar6 + 0xd0;
    } while (lVar7 != lVar6);
    lVar6 = lVar7;
LAB_01694eb4:
    if (lVar6 != *(long *)(param_1 + 0x58)) {
      lVar6 = *(long *)(lVar6 + 0x98);
      if (lVar6 == 0) {
        return 0;
      }
      if (*(short *)(lVar6 + 0x1a) == 0) {
        return 0;
      }
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar8 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01694f74;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01694f74:
          bVar5 = false;
        }
        if (bVar5) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            return 0;
          }
          uVar2 = *(undefined4 *)(lVar6 + 0x120);
          lVar7 = *(long *)(lVar6 + 0x70);
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
            (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
            return uVar2;
          }
          if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar2;
        }
        sVar8 = sVar3;
        if (sVar3 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  lVar6 = *(long *)(param_1 + 0x88);
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar6 != lVar7) {
    do {
      if (((*(long *)(lVar6 + 0x78) != 0) && (*(short *)(*(long *)(lVar6 + 0x78) + 0x1a) != 0)) &&
         (*(long *)(lVar6 + 0x78) == *param_2)) goto LAB_01694f2c;
      lVar6 = lVar6 + 0xc0;
    } while (lVar7 != lVar6);
    lVar6 = lVar7;
LAB_01694f2c:
    if (lVar6 != *(long *)(param_1 + 0x90)) {
      return *(undefined4 *)(lVar6 + 0x9c);
    }
  }
  return 0;
}


