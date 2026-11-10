/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026bdd98; name: FUN_026bdd98
 */


void FUN_026bdd98(undefined8 *param_1,byte *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  short sVar11;
  
  if (3 < *param_2) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  lVar7 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar7));
      }
      puVar5 = (undefined8 *)(*param_3)();
      uVar6 = puVar5[1];
      *param_1 = *puVar5;
      param_1[1] = uVar6;
      plVar9 = (long *)puVar5[3];
      param_1[2] = puVar5[2];
      param_1[3] = plVar9;
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026bde50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))();
        return;
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar7));
      }
      puVar5 = (undefined8 *)(*param_3)();
      uVar6 = puVar5[1];
      *param_1 = *puVar5;
      param_1[1] = uVar6;
      plVar9 = (long *)puVar5[3];
      param_1[2] = puVar5[2];
      param_1[3] = plVar9;
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026bded4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))();
        return;
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar8 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar8 + lVar7 + -0x28));
      }
      puVar5 = (undefined8 *)(*param_3)();
      uVar6 = puVar5[1];
      *param_1 = *puVar5;
      param_1[1] = uVar6;
      plVar9 = (long *)puVar5[3];
      param_1[2] = puVar5[2];
      param_1[3] = plVar9;
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026bdf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))();
        return;
      }
    }
    return;
  }
  lVar8 = *(long *)(param_2 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar11 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026be008;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026be008:
        bVar10 = false;
      }
      if (bVar10) {
        lVar8 = *(long *)(lVar8 + 0x10);
        plVar9 = (long *)(lVar8 + -0x28);
        if (lVar8 != 0) {
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)((long)plVar9 + lVar7));
          }
          puVar5 = (undefined8 *)(*param_3)();
          uVar6 = puVar5[1];
          *param_1 = *puVar5;
          param_1[1] = uVar6;
          plVar2 = (long *)puVar5[3];
          param_1[2] = puVar5[2];
          param_1[3] = plVar2;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x18))();
          }
          lVar7 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x026be0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x50))(plVar9);
            return;
          }
          if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


