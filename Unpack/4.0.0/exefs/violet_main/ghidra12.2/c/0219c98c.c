/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219c98c; name: FUN_0219c98c
 */


void FUN_0219c98c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long *local_28;
  
  *param_1 = &PTR_FUN_045a03e8;
  param_1[4] = &PTR_LAB_045a0420;
  pcVar11 = (code *)param_1[0xe];
  plVar4 = param_1 + 6;
  if (pcVar11 != (code *)0x0) {
    local_28 = plVar4;
    (*pcVar11)(param_1 + 0x12,&local_28);
  }
  pcVar11 = (code *)param_1[0xf];
  if (pcVar11 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar11)(param_1 + 0x12);
  }
  plVar7 = (long *)param_1[9];
  do {
    if (plVar7 == (long *)0x0) {
      lVar12 = *plVar4;
      *plVar4 = 0;
      if (lVar12 != 0) {
        lVar3 = param_1[7];
        plVar4 = (long *)param_1[8];
        uVar9 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar12,lVar3 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar4,lVar12,lVar3 << 3,8);
        }
      }
      return;
    }
    plVar13 = (long *)*plVar7;
    plVar8 = (long *)plVar7[2];
    if (plVar8 != (long *)0x0) {
      lVar12 = plVar8[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar8 = (long *)param_1[10];
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x18,8);
      plVar7 = plVar13;
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0x18,8);
      plVar7 = plVar13;
    }
  } while( true );
}


