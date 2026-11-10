/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2260; name: FUN_026f2260
 */


void FUN_026f2260(long *param_1,long *param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  undefined2 uVar9;
  ushort uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  if (((*param_1 == 0) || (plVar11 = (long *)FUN_026e4c70(*param_1 + 8), plVar11 == (long *)0x0)) ||
     (uVar12 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar12 & 1) != 0)) {
    return;
  }
  lVar16 = *param_2;
  uVar12 = (**(code **)(*plVar11 + 0x130))(plVar11);
  puVar2 = (undefined8 *)(lVar16 + 0x48);
  if ((uVar12 & 1) == 0) {
    puVar2 = (undefined8 *)(lVar16 + 0x50);
  }
  plVar14 = (long *)*puVar2;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar13;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  (**(code **)(*plVar11 + 0x140))(plVar11);
  uVar12 = (**(code **)(*plVar11 + 0x148))(plVar11);
  if ((uVar12 & 1) != 0) {
    do {
      uVar6 = *(undefined2 *)(param_2[2] + 8);
      uVar9 = FUN_026f20f4(plVar11);
      *(undefined2 *)(lVar16 + 0x68) = uVar6;
      *(undefined2 *)(lVar16 + 0x6a) = uVar9;
      uVar10 = (**(code **)(*plVar11 + 0x150))(plVar11,lVar16 + 0x6c,0x7ffc);
      if (uVar10 != 0) {
        lVar15 = *(long *)(param_2[1] + 0x20);
        lVar5 = *(long *)(param_2[1] + 0x28);
        lVar3 = lVar15;
        if (lVar5 != 0) {
          lVar3 = lVar15 + lVar5 * 8;
        }
        if (lVar15 != lVar3) {
          do {
            uVar12 = FUN_026f253c(*(undefined8 *)param_2[3],lVar15);
            if (((uVar12 & 1) != 0) ||
               (uVar12 = (**(code **)(*plVar11 + 0x138))(plVar11), (uVar12 & 1) != 0)) {
              (**(code **)(*plVar14 + 0x68))(plVar14,lVar16 + 0x68,uVar10 + 4,lVar15);
            }
            lVar15 = lVar15 + 8;
          } while (lVar3 != lVar15);
        }
      }
      uVar12 = (**(code **)(*plVar11 + 0x148))(plVar11);
    } while ((uVar12 & 1) != 0);
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x026f24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x50))(plVar14);
      return;
    }
    if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


