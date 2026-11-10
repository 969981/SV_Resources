/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143d3a4; name: FUN_0143d3a4
 */


void FUN_0143d3a4(long param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_047dd330;
  lVar11 = *(long *)(*(long *)(param_1 + 0x138) + 0x210);
  lVar12 = *(long *)(*(long *)(param_1 + 0x138) + 0x218);
  if (lVar11 != lVar12) {
    lVar13 = 0;
    plVar1 = (long *)(PTR_DAT_047dd330 + 0x10);
    do {
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = (long *)0x0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = plVar1;
      FUN_0143d838(param_1 + 0x170,&local_a0);
      FUN_00faeeac(&local_a0);
      lVar9 = *(long *)(param_1 + 0x170) + lVar13 * 0x40;
      FUN_0105016c(&local_a0,lVar11 + 0x20);
      uVar7 = FUN_00f2babc(lVar9,1,&local_a0,0,*(undefined8 *)(param_1 + 0x218));
      if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(lVar9 + 0x20), plVar10 != (long *)0x0)) {
        lVar9 = plVar10[6];
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0143d7c8;
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar8;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_0143d7e8;
        lVar9 = plVar10[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar3 == 0) goto LAB_0143d810;
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      local_a0 = (long *)(puVar6 + 0x10);
      local_70 = 0;
      uStack_68 = 0;
      local_98 = 0;
      local_80 = (long *)0x0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_0143d838(param_1 + 0x1a8,&local_a0);
      FUN_00faeeac(&local_a0);
      lVar9 = *(long *)(param_1 + 0x1a8) + lVar13 * 0x40;
      FUN_0105016c(&local_a0,lVar11 + 0x40);
      uVar7 = FUN_00f2babc(lVar9,1,&local_a0,0,*(undefined8 *)(param_1 + 0x218));
      if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(lVar9 + 0x20), plVar10 != (long *)0x0)) {
        lVar9 = plVar10[6];
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0143d7c8;
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar8;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) goto LAB_0143d7e8;
        lVar9 = plVar10[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar3 == 0) goto LAB_0143d810;
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      local_a0 = (long *)(puVar6 + 0x10);
      local_98 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = (long *)0x0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_0143d838(param_1 + 0x1e0,&local_a0);
      FUN_00faeeac(&local_a0);
      lVar9 = *(long *)(param_1 + 0x1e0) + lVar13 * 0x40;
      FUN_0105016c(&local_a0,lVar11 + 0x60);
      uVar7 = FUN_00f2babc(lVar9,1,&local_a0,0,*(undefined8 *)(param_1 + 0x218));
      if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(lVar9 + 0x20), plVar10 != (long *)0x0)) {
        lVar9 = plVar10[6];
        if (*(long *)(lVar9 + 0x10) == 0) {
LAB_0143d7c8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar8;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
LAB_0143d7e8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar9 = plVar10[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar3 == 0) {
LAB_0143d810:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      lVar11 = lVar11 + 0x88;
      lVar13 = lVar13 + 1;
    } while (lVar11 != lVar12);
  }
  return;
}


