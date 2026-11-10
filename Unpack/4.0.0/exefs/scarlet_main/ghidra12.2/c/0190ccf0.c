/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190ccf0; name: FUN_0190ccf0
 */


undefined1  [16] FUN_0190ccf0(char *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined1 auVar9 [16];
  
  cVar2 = *param_1;
  lVar5 = (long)param_3 >> 1;
  if (cVar2 != '\x03') {
    if (cVar2 == '\x02') {
      auVar9 = ZEXT816(0);
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), auVar9 = ZEXT816(0), lVar4 != 0)) {
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)(lVar4 + lVar5 + -0x28));
        }
        auVar9 = (*param_2)(0);
      }
      return auVar9;
    }
    if (((cVar2 == '\x01') || (auVar9 = ZEXT816(0), cVar2 == '\0')) &&
       (auVar9 = ZEXT816(0), *(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + lVar5));
      }
      auVar9 = (*param_2)(0);
    }
    return auVar9;
  }
  lVar4 = *(long *)(param_1 + 8);
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar8 = *(short *)(lVar4 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0190cdb8;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0190cdb8:
        bVar7 = false;
      }
      if (bVar7) {
        lVar4 = *(long *)(lVar4 + 0x10);
        plVar6 = (long *)(lVar4 + -0x28);
        if (lVar4 == 0) {
          return ZEXT816(0);
        }
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)((long)plVar6 + lVar5));
        }
        auVar9 = (*param_2)(0);
        lVar5 = *(long *)(lVar4 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          return auVar9;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",auVar9._0_8_);
        }
        return auVar9;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return ZEXT816(0);
}


