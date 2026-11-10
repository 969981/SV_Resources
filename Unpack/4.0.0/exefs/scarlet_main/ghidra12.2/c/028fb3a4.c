/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fb3a4; name: FUN_028fb3a4
 */


void FUN_028fb3a4(long param_1,long *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(param_1 + 0x170);
  do {
    if (plVar9 == (long *)0x0) {
      return;
    }
    if (plVar9[2] == *param_2) {
      lVar10 = plVar9[6];
      FUN_01185f44(lVar10 + 0x178);
      FUN_01186bfc(lVar10 + 0x180,param_3 + 8);
      lVar8 = *(long *)(param_3 + 0x18);
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar8 + 0x30);
        if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          *(undefined8 *)(lVar7 + 8) = uVar6;
          *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      plVar5 = *(long **)(lVar10 + 400);
      *(long *)(lVar10 + 400) = lVar8;
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      FUN_00cef9d0(lVar10 + 0x198,param_3 + 0x20);
      FUN_00ceffd4(lVar10 + 0x1a8,param_3 + 0x30);
    }
    plVar9 = (long *)*plVar9;
  } while( true );
}


