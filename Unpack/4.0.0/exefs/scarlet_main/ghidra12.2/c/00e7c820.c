/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7c820; name: FUN_00e7c820
 */


undefined1  [16] FUN_00e7c820(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 in_q7 [16];
  undefined8 uVar19;
  
  uVar19 = in_q7._8_8_;
  uVar18 = in_q7._0_8_;
  puVar7 = (undefined8 *)FUN_00cb7028(param_1,param_3);
  plVar8 = (long *)*puVar7;
  if (plVar8 == (long *)0x0) {
    uVar13 = 0;
    uVar11 = 0;
  }
  else {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if ((plVar8[0x22] == 0) || (plVar10 = *(long **)(plVar8[0x22] + 0x70), plVar10 == (long *)0x0))
    {
      bVar9 = true;
    }
    else {
      plVar2 = plVar10 + 5;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      puVar7 = (undefined8 *)FUN_00c4c40c(plVar10,param_2);
      fVar14 = (float)*puVar7;
      fVar15 = (float)((ulong)*puVar7 >> 0x20);
      fVar16 = (float)puVar7[1];
      fVar17 = (float)((ulong)puVar7[1] >> 0x20);
      uVar18 = CONCAT44((float)((ulong)plVar10[0x7c] >> 0x20) * fVar14 +
                        (float)((ulong)plVar10[0x7e] >> 0x20) * fVar15 +
                        (float)((ulong)plVar10[0x80] >> 0x20) * fVar16 +
                        (float)((ulong)plVar10[0x82] >> 0x20) * fVar17,
                        (float)plVar10[0x7c] * fVar14 + (float)plVar10[0x7e] * fVar15 +
                        (float)plVar10[0x80] * fVar16 + (float)plVar10[0x82] * fVar17);
      uVar19 = CONCAT44((float)((ulong)plVar10[0x7d] >> 0x20) * fVar14 +
                        (float)((ulong)plVar10[0x7f] >> 0x20) * fVar15 +
                        (float)((ulong)plVar10[0x81] >> 0x20) * fVar16 +
                        (float)((ulong)plVar10[0x83] >> 0x20) * fVar17,
                        (float)plVar10[0x7d] * fVar14 + (float)plVar10[0x7f] * fVar15 +
                        (float)plVar10[0x81] * fVar16 + (float)plVar10[0x83] * fVar17);
      do {
        iVar5 = (int)*plVar2;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if (iVar5 == 0) goto LAB_00e7c9e0;
      bVar9 = false;
    }
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar6 == 0) {
LAB_00e7c9e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    uVar11 = 0;
    uVar13 = 0;
    if (!bVar9) {
      uVar11 = uVar18;
      uVar13 = uVar19;
    }
  }
  auVar12._8_8_ = uVar13;
  auVar12._0_8_ = uVar11;
  return auVar12;
}


