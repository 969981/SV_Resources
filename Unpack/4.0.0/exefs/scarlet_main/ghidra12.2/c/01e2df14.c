/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2df14; name: FUN_01e2df14
 */


void FUN_01e2df14(long *param_1,long *param_2,undefined1 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long *local_38;
  
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
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x120,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar7,0x80008080);
  puVar4 = PTR_DAT_047d94e0;
  *plVar7 = (long)(PTR_DAT_047d94e0 + 0x10);
  plVar10 = plVar7 + 4;
  *plVar10 = (long)(puVar4 + 0x160);
  puVar9 = puVar4 + 0x308;
  plVar7[5] = (long)(puVar4 + 0x288);
  plVar7[6] = (long)(puVar4 + 0x2e0);
  plVar13 = plVar7 + 7;
  *plVar13 = (long)puVar9;
  *(undefined1 *)((long)plVar7 + 0x11e) = *param_3;
  if (((char)plVar7[0xb] != -0x7e) || (*(char *)((long)plVar7 + 0x59) != -0x7e)) {
    lVar12 = plVar7[0xb];
    *(undefined2 *)(plVar7 + 0xb) = 0x8282;
    if (plVar7[9] != 0) {
      FUN_00c6a584(plVar7[9],plVar13);
      puVar9 = (undefined *)*plVar13;
    }
    (**(code **)(puVar9 + 0x20))(plVar13,(short)lVar12);
  }
  *(undefined4 *)(plVar7 + 3) = 0x80120;
  plVar7[1] = (long)param_2;
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
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 8) = uVar8;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(plVar7[4] + 0xe8))(plVar10,param_1);
  (**(code **)(plVar7[4] + 0x68))(plVar10);
  local_38 = plVar7;
  FUN_00df8c30(param_1 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0x13];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar10);
  plVar7 = param_1 + 0x88;
  lVar12 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar12) {
    plVar7 = (long *)0x0;
    bVar11 = true;
LAB_01e2e0e4:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar10 + 0xf8))(plVar10);
    }
    if (!bVar11) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e2e0e0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e2e0e0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e2e0e0:
  bVar11 = false;
  goto LAB_01e2e0e4;
}


