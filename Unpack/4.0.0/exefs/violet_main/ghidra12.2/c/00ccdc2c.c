/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccdc2c; name: FUN_00ccdc2c
 */


void FUN_00ccdc2c(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_60 [24];
  long *local_48;
  long *local_28;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d1fd8;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_045d2010;
  plVar7 = param_1 + 6;
  *plVar7 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00cce1a4(param_1 + 9);
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x10,0,1);
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  *(undefined4 *)((long)param_1 + 0xcc) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x18,0,1);
  FUN_00ccdf44(param_1 + 0x1a);
  FUN_00ccdf44(param_1 + 0x27);
  FUN_00ccdf44(param_1 + 0x34);
  param_1[0x41] = 0;
  FUN_00ccdf08(plVar7,param_2);
  lVar5 = *param_3;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x10))();
  }
  lVar6 = param_1[0x41];
  param_1[0x41] = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x20) + 0x18))();
  }
  *(undefined1 *)(*plVar7 + 0x20) = 1;
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      FUN_00ccdea4(&local_28);
      plVar7 = local_28;
      (**(code **)(*DAT_0485a020 + 0x100))(auStack_60,DAT_0485a020,lVar5);
      FUN_00cce014(plVar7,auStack_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (local_28 != (long *)0x0) {
        plVar7 = local_28 + 5;
        do {
          lVar6 = *plVar7;
          iVar4 = (int)lVar6 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *(int *)plVar7 = iVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_2);
  }
  return;
}


