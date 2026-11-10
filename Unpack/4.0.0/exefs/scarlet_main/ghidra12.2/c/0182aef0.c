/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182aef0; name: FUN_0182aef0
 */


void FUN_0182aef0(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_2530;
  undefined1 *local_2528;
  undefined4 local_2520 [2];
  undefined1 auStack_2518 [24];
  long *local_2500;
  undefined1 auStack_24f8 [328];
  undefined1 auStack_23b0 [16];
  undefined1 auStack_23a0 [9016];
  long *local_68;
  
  FUN_0182b12c(&local_68);
  memset(auStack_24f8,0,0x2490);
  plVar2 = local_68;
  lVar9 = 0;
  do {
    lVar7 = plVar2[0xe];
    plVar1 = (long *)(lVar7 + 0x20);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar1 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0182af60;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x28));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x28));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0182af60;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0182af60:
    FUN_00f32a60(lVar7,auStack_24f8 + lVar9 * 0x1d4,auStack_23b0 + lVar9 * 0x1d4);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x28));
    lVar6 = lVar9 * 0x1d4;
    lVar9 = lVar9 + 1;
    memset(auStack_23a0 + lVar6,0,0x7c);
    if (lVar9 == 0x14) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d4ca0;
      *(undefined8 *)PTR_DAT_047d4ca8 = uVar8;
      FUN_00d8fb98(auStack_2518,PTR_DAT_047dcc90);
      uVar8 = FUN_00f844f4(uVar8,auStack_2518);
      local_2520[0] = 0x173304d8;
      local_2528 = auStack_24f8;
      local_2530 = 0x2490;
      FUN_0182b208(uVar8,local_2520,&local_2528,&local_2530);
      if (local_2500 != (long *)0x0) {
        (**(code **)(*local_2500 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        plVar2 = local_68 + 5;
        do {
          lVar9 = *plVar2;
          iVar5 = (int)lVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      return;
    }
  } while( true );
}


