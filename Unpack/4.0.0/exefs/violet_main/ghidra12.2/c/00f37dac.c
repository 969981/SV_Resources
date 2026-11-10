/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f37dac; name: FUN_00f37dac
 */


void FUN_00f37dac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 uVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar5 = PTR_DAT_047d38f8;
  lVar14 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar14) {
    uVar9 = nn::os::GetCurrentThread();
LAB_00f380dc:
    if (*(long *)puVar5 == 0) goto code_r0x00f380e4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar13) {
              *(undefined8 *)puVar5 = uVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f380ec;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar13) {
        *(undefined8 *)puVar5 = uVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00f380ec:
    bVar13 = false;
    goto LAB_00f37df0;
  }
  bVar13 = true;
LAB_00f37df0:
  puVar15 = (undefined8 *)(param_1 + 0x70);
  FUN_00f7d200(*puVar15,&DAT_03c479db,PTR_LAB_047e0b80,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,"package",PTR_LAB_047e0b88,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,"coroutine",PTR_LAB_047e0b90,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,"string",PTR_LAB_047e0b98,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,&DAT_03c5e7b6,PTR_FUN_047e0ba0,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,&DAT_03c935e4,PTR_LAB_047e0ba8,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,"table",PTR_LAB_047e0bb0,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,&DAT_03c8cbfd,PTR_LAB_047e0bb8,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  FUN_00f7d200(*puVar15,"bit32",PTR_LAB_047e0bc0,1);
  FUN_00c5db00(*puVar15,0xfffffffe);
  iVar7 = FUN_00f382a0(*puVar15,param_2,param_3,*(undefined8 *)(param_4 + 8),0);
  uVar9 = *puVar15;
  if (iVar7 == 0) {
    iVar7 = FUN_00c5ddd0(uVar9,0,1,0,0,0);
    if (iVar7 == 0) {
      plVar12 = *(long **)(param_1 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_00d33afc(plVar10,*puVar15,0xffffffff,5);
      puVar6 = PTR_DAT_047e0bc8;
      plVar10[2] = (long)plVar10;
      plVar10[4] = (long)(puVar6 + 0x88);
      plVar10[5] = (long)(puVar6 + 0xd8);
      *plVar10 = (long)(puVar6 + 0x10);
      plVar10[1] = (long)plVar12;
      *(undefined4 *)(plVar10 + 3) = 0x80060;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      lVar8 = plVar10[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar9;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar12 = *(long **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (plVar12 != (long *)0x0) {
        lVar8 = plVar12[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *(long **)(param_1 + 0x78) = plVar10;
      *(long **)(param_1 + 0x80) = plVar10;
      FUN_00c5db00(*(undefined8 *)(param_1 + 0x70),0);
      uVar11 = 1;
      goto LAB_00f38094;
    }
    uVar9 = *puVar15;
  }
  FUN_00c646d0(uVar9,0xffffffff,0);
  uVar11 = 0;
LAB_00f38094:
  *(undefined1 *)(param_1 + 0x40) = uVar11;
  if (bVar13) {
    return;
  }
  *(undefined8 *)puVar5 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  return;
code_r0x00f380e4:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar13) {
    *(undefined8 *)puVar5 = uVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00f380ec;
  goto LAB_00f380dc;
}


