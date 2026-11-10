/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01637f20; name: FUN_01637f20
 */


void FUN_01637f20(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  plVar11 = *(long **)(param_1 + 0xb8);
  plVar2 = *(long **)(param_1 + 0xc0);
  do {
    if (plVar11 == plVar2) {
      puVar10 = *(undefined8 **)(param_1 + 0xf0);
      puVar3 = *(undefined8 **)(param_1 + 0xf8);
      if (((((puVar10 != puVar3) && ((*(code *)*puVar10)(puVar10 + 4), puVar10 + 0x10 != puVar3)) &&
           ((*(code *)puVar10[0x10])(puVar10 + 0x14), puVar10 + 0x20 != puVar3)) &&
          (((*(code *)puVar10[0x20])(puVar10 + 0x24), puVar10 + 0x30 != puVar3 &&
           ((*(code *)puVar10[0x30])(puVar10 + 0x34), puVar10 + 0x40 != puVar3)))) &&
         ((*(code *)puVar10[0x40])(puVar10 + 0x44), puVar10 + 0x50 != puVar3)) {
        (*(code *)puVar10[0x50])(puVar10 + 0x54);
        for (puVar10 = puVar10 + 0x60; puVar10 != puVar3; puVar10 = puVar10 + 0x10) {
          (*(code *)*puVar10)(puVar10 + 4);
        }
      }
      return;
    }
    if ((*plVar11 != 0) && (*(short *)(*plVar11 + 0x1a) != 0)) {
      lVar7 = *plVar11;
      if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
        plVar9 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar8) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01637fcc;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01637fcc:
            bVar6 = false;
          }
          if (bVar6) {
            plVar9 = (long *)0x0;
            if (*(long *)(lVar7 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
            }
            break;
          }
          plVar9 = (long *)0x0;
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      (**(code **)(*plVar9 + 0x68))(plVar9);
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    plVar11 = plVar11 + 2;
  } while( true );
}


