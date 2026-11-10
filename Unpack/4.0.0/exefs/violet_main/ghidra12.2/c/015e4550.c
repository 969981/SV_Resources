/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e4550; name: FUN_015e4550
 */


undefined8 FUN_015e4550(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  long *local_38;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pbVar9 = (byte *)*puVar4, pbVar9 == (byte *)0x0)) {
    if ((DAT_04851948 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04851948);
      pbVar9 = &DAT_04851920;
      if (iVar3 != 0) {
        DAT_04851920 = 0;
        DAT_04851928 = 0;
        FUN_00100190(FUN_0169c848,&DAT_04851920,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04851948);
      }
    }
    else {
      pbVar9 = &DAT_04851920;
    }
  }
  if (((DAT_04851918 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04851918), iVar3 != 0)) {
    __cxa_guard_release(&DAT_04851918);
  }
  if ((1 < *pbVar9) || (puVar10 = *(undefined **)(pbVar9 + 8), puVar10 == (undefined *)0x0)) {
    if ((DAT_04851960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04851960);
      puVar10 = &DAT_04851950;
      if (iVar3 != 0) {
        DAT_04851958 = 0;
        FUN_00100190(&LAB_02ba01b8,&DAT_04851950,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04851960);
      }
    }
    else {
      puVar10 = &DAT_04851950;
    }
  }
  FUN_015e48cc(&local_38,puVar10);
  if (local_38 == (long *)0x0) {
    FUN_00ca1a30(param_1);
  }
  else {
    plVar1 = local_38 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
      do {
        lVar5 = *plVar1;
        iVar3 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *(int *)plVar1 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    puVar4 = (undefined8 *)FUN_00c5e120(param_1,8,1);
    if (((*PTR_DAT_047d38a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38a0);
    }
    lVar13 = *(long *)PTR_DAT_047d38a8;
    *(long *)PTR_DAT_047d38b0 = lVar13;
    puVar10 = PTR_DAT_047d38f8;
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar11) {
      uVar7 = nn::os::GetCurrentThread();
LAB_015e46fc:
      if (*(long *)puVar10 == 0) goto code_r0x015e4704;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar10 + 8));
      do {
        if (*(long *)puVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar10 + 8));
            while (*(long *)puVar10 == 0) {
              cVar2 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar12) {
                *(undefined8 *)puVar10 = uVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_015e470c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar12) {
          *(undefined8 *)puVar10 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_015e470c:
      bVar12 = false;
      goto LAB_015e4634;
    }
    bVar12 = true;
LAB_015e4634:
    if (*(long *)(lVar13 + 0x28) == *(long *)(lVar13 + 0x30)) {
      puVar6 = (undefined1 *)FUN_00d97840(0x40,8);
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + -8);
      puVar6 = (undefined1 *)*puVar8;
      *(undefined8 **)(lVar13 + 0x30) = puVar8;
    }
    if (!bVar12) {
      *(undefined8 *)puVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar10 + 8));
    }
    *puVar6 = 1;
    *(long **)(puVar6 + 8) = local_38;
    *puVar4 = puVar6;
    FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045c3320);
    FUN_00c5e190(param_1,0xfffffffe);
  }
  return 1;
code_r0x015e4704:
  cVar2 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar10,0x10);
  if (bVar12) {
    *(undefined8 *)puVar10 = uVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_015e470c;
  goto LAB_015e46fc;
}


