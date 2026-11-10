/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc9218; name: FUN_00cc9218
 */


void FUN_00cc9218(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d0ac0;
  param_1[1] = lVar8;
  param_1[4] = (long)&PTR_LAB_045d0af8;
  lVar6 = *param_2;
  param_1[6] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
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
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  FUN_00cc9478(param_1 + 10);
  FUN_00cc93f8(param_1 + 0xe);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00cc9530(param_1 + 0x1d);
  FUN_00cc9438(param_1 + 0x22);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = (long)&DAT_cbf29ce484222645;
  param_1[0x30] = (long)&DAT_03c886bc;
  plVar7 = (long *)FUN_0145966c();
  (**(code **)(*plVar7 + 0x100))(&local_50,plVar7,0);
  plVar7 = (long *)param_1[0x32];
  param_1[0x2f] = local_50;
  param_1[0x30] = local_48;
  param_1[0x31] = local_40;
  param_1[0x32] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  param_1[0x32] = local_38;
  FUN_00cce014(param_1,param_1 + 0x2f);
  return;
}


