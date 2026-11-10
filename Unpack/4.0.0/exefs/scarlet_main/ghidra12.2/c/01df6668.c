/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df6668; name: FUN_01df6668
 */


undefined1  [16] FUN_01df6668(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  long *local_38;
  
  piVar2 = (int *)((long)*param_3 + (ulong)*(uint *)*param_3);
  plVar11 = *(long **)(param_2 + 0x10);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined1 *)((long)piVar2 + uVar10);
  }
  plVar14 = (long *)plVar11[1];
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
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar14;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x120,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar7,0x80008080);
  *plVar7 = (long)&DAT_04542fd8;
  plVar12 = plVar7 + 4;
  *plVar12 = (long)&PTR_LAB_04543128;
  plVar7[5] = (long)&PTR_LAB_04543250;
  plVar7[6] = (long)&PTR_LAB_045432a8;
  plVar16 = plVar7 + 7;
  *plVar16 = (long)&PTR_LAB_045432d0;
  *(undefined1 *)((long)plVar7 + 0x11e) = uVar17;
  if (((char)plVar7[0xb] != -0x7e) || (*(char *)((long)plVar7 + 0x59) != -0x7e)) {
    lVar15 = plVar7[0xb];
    *(undefined2 *)(plVar7 + 0xb) = 0x8282;
    if (plVar7[9] == 0) {
      ppuVar9 = &PTR_LAB_045432d0;
    }
    else {
      FUN_00c6a584(plVar7[9],plVar16);
      ppuVar9 = (undefined **)*plVar16;
    }
    (*(code *)ppuVar9[4])(plVar16,(short)lVar15);
  }
  *(undefined4 *)(plVar7 + 3) = 0x80120;
  plVar7[1] = (long)plVar14;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  lVar6 = plVar7[0x13];
  if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(plVar7[4] + 0xe8))(plVar12,plVar11);
  (**(code **)(plVar7[4] + 0x68))(plVar12);
  local_38 = plVar7;
  FUN_00df8c30(plVar11 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0x13];
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
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar11 + 0x100))(plVar11,plVar12);
  plVar14 = plVar11 + 0x88;
  lVar15 = *plVar14;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar15) {
    plVar14 = (long *)0x0;
    bVar13 = true;
LAB_01df6860:
    if ((*(byte *)(plVar11 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar11,0,0);
    }
    else {
      (**(code **)(*plVar12 + 0xf8))(plVar12);
    }
    if (!bVar13) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
    auVar18._8_8_ = plVar11;
    auVar18._0_8_ = 2;
    return auVar18;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar13) {
      *plVar14 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01df685c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
        while (*plVar14 == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar13) {
            *plVar14 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01df685c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar13) {
      *plVar14 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01df685c:
  bVar13 = false;
  goto LAB_01df6860;
}


