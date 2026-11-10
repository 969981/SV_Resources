/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014119f0; name: FUN_014119f0
 */


undefined1  [16] FUN_014119f0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long *local_70 [4];
  long *local_50;
  long *local_28;
  
  puVar9 = (uint *)*param_3;
  plVar11 = *(long **)(param_2 + 0x10);
  if (puVar9 != (uint *)0x0) {
    piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 != 0)) {
      puVar9 = (uint *)((long)piVar2 + uVar10);
      local_28 = (long *)((long)puVar9 + (ulong)*puVar9);
      FUN_00cf95c4(local_70,&local_28);
      plVar12 = (long *)plVar11[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x158,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_01411dc4(plVar7,local_70);
      *(undefined4 *)(plVar7 + 3) = 0x80158;
      plVar7[1] = (long)plVar12;
      plVar7[2] = (long)plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar6 = plVar7[0x13];
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar8;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar12 = plVar7 + 4;
      (**(code **)(*plVar12 + 0xe8))(plVar12,plVar11);
      (**(code **)(*plVar12 + 0x68))(plVar12);
      local_28 = plVar7;
      FUN_00df8c30(plVar11 + 0x21,&local_28);
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[0x13];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar12);
      plVar7 = plVar11 + 0x88;
      lVar14 = *plVar7;
      lVar6 = nn::os::GetCurrentThread();
      if (lVar6 != lVar14) {
        lVar6 = nn::os::GetCurrentThread();
LAB_01411b78:
        if (*plVar7 == 0) goto code_r0x01411b80;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
        do {
          if (*plVar7 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
              while (*plVar7 == 0) {
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar13) {
                  *plVar7 = lVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01411b88;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar13) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01411b88:
        bVar13 = false;
        goto LAB_01411b8c;
      }
      plVar7 = (long *)0x0;
      bVar13 = true;
LAB_01411b8c:
      if ((*(byte *)(plVar11 + 0x8b) >> 2 & 1) == 0) {
        FUN_00d37964(plVar11,0,0);
      }
      else {
        (**(code **)(*plVar12 + 0xf8))(plVar12);
      }
      if (!bVar13) {
        *plVar7 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (local_70[0] != (long *)0x0) {
        (**(code **)(*local_70[0] + 0x20))();
      }
    }
  }
  auVar15._0_8_ = (ulong)(plVar11 != (long *)0x0) << 1;
  auVar15._8_8_ = plVar11;
  return auVar15;
code_r0x01411b80:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar13) {
    *plVar7 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01411b88;
  goto LAB_01411b78;
}


