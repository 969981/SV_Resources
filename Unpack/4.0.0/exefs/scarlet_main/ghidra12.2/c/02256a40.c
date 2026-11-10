/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02256a40; name: FUN_02256a40
 */


long FUN_02256a40(long *param_1,char *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  
  lVar5 = param_1[1];
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar9 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02256aa8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02256aa8:
        bVar8 = false;
      }
      if (bVar8) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        lVar6 = *(long *)(*param_1 + 0x18);
        pcVar4 = strstr((char *)(lVar6 + 0xb0),"all");
        if (pcVar4 == (char *)0x0) {
          lVar6 = *(long *)(lVar6 + 0x18);
          pcVar4 = strstr((char *)(lVar6 + 0xb0),"all");
          if (pcVar4 == (char *)0x0) {
            lVar6 = *(long *)(lVar6 + 0x18);
            pcVar4 = strstr((char *)(lVar6 + 0xb0),"all");
            if (pcVar4 == (char *)0x0) {
              lVar6 = *(long *)(lVar6 + 0x18);
              pcVar4 = strstr((char *)(lVar6 + 0xb0),"all");
              while (pcVar4 == (char *)0x0) {
                lVar6 = *(long *)(lVar6 + 0x18);
                pcVar4 = strstr((char *)(lVar6 + 0xb0),"all");
              }
            }
          }
        }
        while ((lVar6 != 0 &&
               (pcVar4 = strstr((char *)(lVar6 + 0xb0),param_2), pcVar4 == (char *)0x0))) {
          lVar6 = FUN_00faadf0(lVar6);
        }
        lVar7 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
          return lVar6;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return lVar6;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


