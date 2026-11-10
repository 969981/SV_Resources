/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e7948; name: FUN_015e7948
 */


ulong FUN_015e7948(long param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  ulong unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [20];
  undefined4 local_4c;
  undefined8 local_48;
  
  if ((((*(long *)(param_1 + 0x160) == 0) || (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) == 0))
      || (lVar10 = *(long *)(param_1 + 0x160), lVar10 == 0)) || (*(short *)(lVar10 + 0x1a) == 0)) {
LAB_015e7984:
    uVar8 = 0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_015e79e0;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015e79e0:
        bVar15 = false;
      }
      if (bVar15) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) goto LAB_015e7984;
        local_4c = param_3;
        FUN_00d9ec44(auStack_60,2,*param_2);
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        FUN_00ca1a48(&local_88,param_1 + 0x150);
        local_78[0] = 2;
        local_70 = 0;
        uStack_68 = 0;
        FUN_00ca1ea4(&local_70,&local_88);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar12 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar12;
        if (*(undefined8 **)(lVar10 + 0x28) == (undefined8 *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = **(undefined8 **)(lVar10 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x90) != -1)) {
          *(undefined8 *)(lVar12 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0) = uVar13;
        }
        puVar5 = PTR_DAT_047d38f8;
        lVar14 = *(long *)(lVar10 + 0xd8);
        lVar9 = *(long *)PTR_DAT_047d38f8;
        lVar12 = nn::os::GetCurrentThread();
        if (lVar12 != lVar9) {
          uVar13 = nn::os::GetCurrentThread();
          goto LAB_015e7ba8;
        }
        bVar15 = true;
        goto LAB_015e7ac4;
      }
      uVar8 = 0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_015e7988:
  return uVar8 | (unaff_x20 & 0xff) << 8;
LAB_015e7ba8:
  if (*(long *)puVar5 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar15) {
              *(undefined8 *)puVar5 = uVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_015e7bb8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar15) {
        *(undefined8 *)puVar5 = uVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_015e7bb8:
    bVar15 = false;
LAB_015e7ac4:
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
    uVar8 = FUN_021080e0(uVar13,*(undefined8 *)(lVar14 + 0x80),*(undefined8 *)(lVar10 + 0x98),
                         auStack_60,local_78,&local_4c);
    if ((uVar8 & 1) == 0) {
      unaff_x20 = 0;
    }
    else {
      iVar7 = FUN_00cc4dc0(uVar13,0xffffffff);
      unaff_x20 = (ulong)(iVar7 != 0);
    }
    FUN_00c5db00(uVar13,0);
    if (!bVar15) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    FUN_00cecfd8(local_78);
    puVar6 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar12 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    uVar8 = 1;
    goto LAB_015e7988;
  }
  cVar4 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar15) {
    *(undefined8 *)puVar5 = uVar13;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_015e7bb8;
  goto LAB_015e7ba8;
}


