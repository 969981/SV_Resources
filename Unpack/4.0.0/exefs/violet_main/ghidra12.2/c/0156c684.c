/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156c684; name: FUN_0156c684
 */


long * FUN_0156c684(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *__s;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *local_48;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x260,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(__s,0,0x260);
  FUN_00d1a240(__s,0x80048080);
  plVar7 = __s + 4;
  *plVar7 = (long)&PTR_LAB_045a2360;
  __s[0x2e] = 0;
  __s[0x2f] = 0x3c00000000;
  __s[0x24] = 0;
  *(undefined4 *)(__s + 0x30) = 0x3f800000;
  __s[0x28] = 0;
  __s[0x29] = 0;
  __s[0x2a] = 0;
  __s[0x2b] = 0;
  __s[0x2c] = 0;
  __s[0x2d] = 0;
  __s[0x26] = 0;
  __s[0x27] = (long)&PTR_FUN_045a21f8;
  *(undefined8 *)((long)__s + 0x184) = 0;
  *(undefined8 *)((long)__s + 0x18a) = 0;
  *__s = (long)&PTR_LAB_045a2218;
  __s[7] = (long)&PTR_LAB_045a2508;
  __s[0x34] = 0;
  *(undefined4 *)(__s + 0x35) = 0;
  *(undefined4 *)(__s + 0x3c) = 0;
  __s[0x47] = 0;
  __s[0x46] = 0;
  __s[0x45] = 0;
  __s[0x44] = 0;
  __s[0x43] = 0;
  __s[0x42] = 0;
  __s[0x41] = 0;
  __s[0x40] = (long)&PTR_FUN_045a21f8;
  __s[0x48] = 0;
  *(undefined4 *)((long)__s + 0x254) = 1;
  __s[5] = (long)&DAT_045a2488;
  __s[6] = (long)&PTR_LAB_045a24e0;
  nn::os::InitializeLightEvent(__s + 0x49,0,1);
  *(undefined4 *)(__s + 3) = 0x100260;
  __s[1] = (long)param_2;
  __s[2] = (long)__s;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar5 = __s[0x13];
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    *(undefined8 *)(lVar5 + 8) = uVar6;
    *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(__s[4] + 0xe8))(plVar7,param_1);
  (**(code **)(__s[4] + 0x68))(plVar7);
  local_48 = __s;
  FUN_00df8c30(param_1 + 0x21,&local_48);
  if (local_48 != (long *)0x0) {
    lVar5 = local_48[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar7);
  plVar10 = param_1 + 0x88;
  lVar9 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_0156c894:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar7 + 0xf8))(plVar7);
    }
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return __s;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0156c890;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0156c890;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0156c890:
  bVar8 = false;
  goto LAB_0156c894;
}


