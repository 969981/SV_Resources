/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275906c; name: FUN_0275906c
 */


ulong FUN_0275906c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long local_70 [3];
  long *local_58;
  
  puVar8 = (undefined8 *)FUN_01df7f84(*(undefined8 *)(param_1 + 0x38));
  plVar9 = (long *)*puVar8;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  puVar7 = PTR_DAT_047d8b70;
  if ((short)((short)((uint)((int)plVar9[0x4a] - (int)plVar9[0x49]) >> 4) * -0x5555) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 1;
    do {
      FUN_00e1561c(local_70,plVar9,uVar10);
      lVar6 = local_70[0];
      plVar1 = (long *)puVar7;
      if (*(long *)(param_1 + 0x60) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x60) + 0x30);
      }
      lVar12 = *plVar1;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (lVar6 == lVar12) goto LAB_02759164;
      uVar5 = (uint)(short)((short)uVar10 + 1);
      uVar10 = (ulong)uVar5;
    } while ((int)uVar5 <
             (int)(short)((short)((uint)((int)plVar9[0x4a] - (int)plVar9[0x49]) >> 4) * -0x5555));
  }
  uVar11 = 0;
LAB_02759164:
  plVar1 = plVar9 + 5;
  do {
    lVar6 = *plVar1;
    iVar4 = (int)lVar6 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar11 | (uVar10 & 0xffff) << 0x10;
}


