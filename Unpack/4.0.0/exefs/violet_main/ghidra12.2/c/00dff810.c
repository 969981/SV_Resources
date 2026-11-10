/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dff810; name: FUN_00dff810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dff810(undefined1 param_1 [16],long *param_2,long *param_3,undefined4 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *param_2 = (long)(PTR_DAT_047d66f8 + 0x10);
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = (long)&PTR_LAB_045d28f0;
  param_2[1] = lVar8;
  param_2[4] = (long)&PTR_LAB_045d2930;
  lVar8 = _UNK_03cabf48;
  lVar6 = _DAT_03cabf40;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 1;
  param_2[0xb] = lVar8;
  param_2[10] = lVar6;
  lVar6 = *param_3;
  if (lVar6 == 0) {
    param_2[6] = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar7 = (long *)param_2[6];
    param_2[6] = lVar6;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  lVar6 = *param_3;
  *(undefined4 *)(param_2 + 0xc) = param_4;
  param_2[8] = lVar6;
  param_2[0xb] = param_1._8_8_;
  param_2[10] = param_1._0_8_;
  return;
}


