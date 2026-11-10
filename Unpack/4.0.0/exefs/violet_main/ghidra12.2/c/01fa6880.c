/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa6880; name: FUN_01fa6880
 */


undefined4 FUN_01fa6880(long *param_1)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  undefined4 uVar11;
  long *plVar12;
  
  lVar10 = *param_1;
  lVar8 = *(long *)(lVar10 + 0x18);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return 5;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar9 = *(short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01fa68e8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01fa68e8:
      bVar5 = false;
    }
    if (bVar5) {
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar11 = 5;
      if (lVar8 != 0) {
        plVar12 = (long *)(lVar8 + -0x28);
        uVar2 = *(ushort *)(lVar8 + 0x21c);
        uVar6 = *(uint *)(lVar10 + 0x30);
        if (((uVar2 & 0xff) == 0) || (10 < uVar2 >> 8)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(&DAT_03d5f050 + (long)(char)(uVar2 >> 8) * 4);
        }
        if (uVar6 != uVar7) {
          FUN_00ff4890(plVar12);
          uVar6 = *(uint *)(lVar10 + 0x30);
        }
        lVar8 = *(long *)(lVar8 + 0x70);
        uVar11 = 0;
        if (1 < uVar6) {
          uVar11 = 5;
        }
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 != 1) {
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar11;
        }
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      return uVar11;
    }
    sVar9 = sVar3;
    if (sVar3 == 0) {
      return 5;
    }
  } while( true );
}


