/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01086c3c; name: FUN_01086c3c
 */


void FUN_01086c3c(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar4 = PTR_LAB_047d3900;
  plVar9 = *(long **)(param_1 + 8);
  if (param_2 != param_3) {
    do {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      lVar7 = *param_2;
      *plVar9 = lVar7;
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x28);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      *(int *)(plVar9 + 1) = (int)param_2[1];
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      param_2 = param_2 + 2;
      plVar9 = plVar9 + 2;
    } while (param_2 != param_3);
  }
  *(long **)(param_1 + 8) = plVar9;
  return;
}


