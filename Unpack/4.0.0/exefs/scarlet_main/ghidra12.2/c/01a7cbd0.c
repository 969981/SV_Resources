/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7cbd0; name: FUN_01a7cbd0
 */


void FUN_01a7cbd0(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  short sVar15;
  bool bVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  do {
    if (lVar3 == lVar4) {
      return;
    }
    puVar18 = (undefined8 *)*param_1;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00d0a71c(&local_78,lVar3);
    if (local_78 != (undefined8 *)0x0) {
      uVar13 = *puVar18;
      if (*(short *)((long)local_78 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_78 + 0x1a);
        sVar15 = *(short *)((long)local_78 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar15) {
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar15 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_01a7cca4;
            bVar16 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01a7cca4:
            bVar16 = false;
          }
          if (bVar16) {
            lVar14 = local_78[2];
            if (lVar14 == 0) goto LAB_01a7cd4c;
            plVar12 = (long *)(lVar14 + 0xe8);
            lVar17 = *plVar12;
            lVar11 = nn::os::GetCurrentThread();
            if (lVar11 != lVar17) {
              lVar11 = nn::os::GetCurrentThread();
              goto LAB_01a7ce44;
            }
            bVar16 = true;
            goto LAB_01a7ccd8;
          }
          sVar15 = sVar5;
        } while (sVar5 != 0);
LAB_01a7cd44:
        if (local_78 == (undefined8 *)0x0) goto LAB_01a7cc3c;
      }
LAB_01a7cd4c:
      puVar18 = local_78;
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100190(puVar9,puVar8,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar7);
          }
          lVar14 = *(long *)puVar8;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = *puVar18;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_01a7cc3c:
    lVar3 = lVar3 + 0x10;
  } while( true );
LAB_01a7ce44:
  if (*plVar12 == 0) goto code_r0x01a7ce4c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
        while (*plVar12 == 0) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar16) {
            *plVar12 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar16 = false;
          if (cVar6 == '\0') goto LAB_01a7ccd8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
    bVar16 = false;
  } while (cVar6 != '\0');
LAB_01a7ccd8:
  plVar12 = (long *)FUN_01f9d630(*(undefined8 *)(lVar14 + 0x100),*(undefined8 *)(lVar14 + 0x108));
  if ((*(long **)(lVar14 + 0x108) == plVar12) || (*plVar12 == 0)) {
    plVar12 = (long *)FUN_01f9d630(*(undefined8 *)(lVar14 + 0x138),*(undefined8 *)(lVar14 + 0x140));
    if (*(long **)(lVar14 + 0x140) == plVar12) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*plVar12 != 0) {
        lVar11 = *plVar12 + -0x20;
      }
    }
  }
  else {
    lVar11 = *plVar12 + -0x20;
  }
  if (!bVar16) {
    *(undefined8 *)(lVar14 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
  }
  if (lVar11 != 0) {
    FUN_016b3370(lVar11,uVar13,1);
  }
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
  goto LAB_01a7cd44;
code_r0x01a7ce4c:
  cVar6 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar16) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  bVar16 = false;
  if (cVar6 == '\0') goto LAB_01a7ccd8;
  goto LAB_01a7ce44;
}


