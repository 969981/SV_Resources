/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5f090; name: FUN_00f5f090
 */


void FUN_00f5f090(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar9 = *param_1;
  lVar6 = *(long *)(lVar9 + 0x48);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar8 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00f5f2ec;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5f2ec:
        bVar4 = false;
      }
      if (bVar4) {
        plVar8 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar8 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar8 = (long *)0x0;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  if (*(char *)(lVar9 + 0x69) == '\0') {
    if (plVar8 == (long *)0x0) goto LAB_00f5f1c8;
  }
  else {
    if (plVar8 == (long *)0x0) goto LAB_00f5f1c8;
    local_60 = 0xbe9bce6f2cccbb00;
    puStack_58 = PTR_s_ShadowClipHeight_047db0d8;
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    lVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
    fVar10 = *(float *)(lVar6 + 0x34);
    fVar11 = *(float *)(lVar9 + 0x6c);
    plVar5 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar5 + 0x10))(fVar10 + fVar11,plVar5,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x5767b56044ca12dc;
    puStack_58 = PTR_s_ShadowClipHeightMin_047db0e0;
    local_50 = 0x1f;
    local_48 = (long *)0x0;
    lVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
    fVar10 = *(float *)(lVar6 + 0x34);
    fVar11 = *(float *)(lVar9 + 0x70);
    plVar5 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
    (**(code **)(*plVar5 + 0x10))(fVar10 + fVar11,plVar5,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  lVar6 = plVar8[6];
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar7 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00f5f1c8:
  lVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  if (*(char *)(lVar9 + 0x80) != '\0') {
    fVar10 = (float)((double)*(long *)(lVar6 + 8) / 1000000000.0);
    if ((0.0 < *(float *)(lVar9 + 0x9c)) &&
       (fVar11 = *(float *)(lVar9 + 0x9c) - fVar10, *(float *)(lVar9 + 0x9c) = fVar11, fVar11 < 0.0)
       ) {
      *(undefined4 *)(lVar9 + 0x9c) = 0;
    }
    fVar10 = *(float *)(lVar9 + 0x98) + fVar10;
    *(float *)(lVar9 + 0x98) = fVar10;
    if (1.0 <= fVar10) {
      *(undefined4 *)(lVar9 + 0x98) = 0;
      FUN_00f5f340((char *)(lVar9 + 0x80),0);
      return;
    }
  }
  return;
}


