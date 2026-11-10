/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e17178; name: FUN_01e17178
 */


void FUN_01e17178(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  lVar6 = *(long *)(param_3 + 0x80);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e171e8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e171e8:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar9 = (long *)(lVar6 + -0x28);
        plVar5 = (long *)FUN_01e16514();
        lVar7 = *plVar5;
        if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_01e17214;
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        goto LAB_01e17248;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01e17248:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01e1726c;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e1726c:
    bVar4 = false;
  }
  if (bVar4) {
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      *(long *)(lVar6 + 0xc0) = param_1._8_8_;
      *(long *)(lVar6 + 0xb8) = param_1._0_8_;
      if (*(char *)(lVar6 + 0xcc) == '\0') {
        *(undefined1 *)(lVar6 + 0xcc) = 1;
        (**(code **)(*(long *)(lVar6 + -0x28) + 0x78))(plVar9);
        *(undefined8 *)(lVar6 + 0xb0) = uVar11;
        *(undefined8 *)(lVar6 + 0xa8) = uVar10;
        if (*(char *)(lVar6 + 0xcc) == '\0') {
          *(undefined1 *)(lVar6 + 0xcc) = 1;
          (**(code **)(*plVar9 + 0x78))(plVar9);
        }
      }
      else {
        *(undefined8 *)(lVar6 + 0xb0) = uVar11;
        *(undefined8 *)(lVar6 + 0xa8) = uVar10;
      }
      *(undefined4 *)(lVar7 + 0x50) = 0x101;
      *(long *)(lVar7 + 0x60) = param_1._8_8_;
      *(long *)(lVar7 + 0x58) = param_1._0_8_;
      lVar6 = *(long *)(lVar7 + 8);
      psVar1 = (short *)(lVar6 + 0x1a);
      *(undefined8 *)(lVar7 + 0x70) = uVar11;
      *(undefined8 *)(lVar7 + 0x68) = uVar10;
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
      }
      else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    goto LAB_01e17214;
  }
  sVar8 = sVar2;
  if (sVar2 == 0) {
LAB_01e17214:
                    /* WARNING: Could not recover jumptable at 0x01e17234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x60))(plVar9);
    return;
  }
  goto LAB_01e17248;
}


