/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148a6bc; name: FUN_0148a6bc
 */


undefined1  [16] FUN_0148a6bc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  bool bVar18;
  uint *puVar19;
  undefined1 auVar20 [16];
  long *local_38;
  
  plVar15 = *(long **)(param_2 + 0x10);
  plVar17 = plVar15 + 0x22;
  puVar19 = (uint *)*param_3;
  uVar6 = *puVar19;
  lVar16 = *plVar17;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    lVar10 = nn::os::GetCurrentThread();
LAB_0148a6fc:
    if (*plVar17 == 0) goto code_r0x0148a704;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x23));
          while (*plVar17 == 0) {
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar18) {
              *plVar17 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0148a70c;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar18) {
        *plVar17 = lVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0148a70c:
    bVar18 = false;
    goto LAB_0148a710;
  }
  bVar18 = true;
LAB_0148a710:
  puVar4 = (undefined8 *)plVar15[0x25];
  puVar5 = (undefined8 *)plVar15[0x26];
  if (puVar4 != puVar5) {
    uVar12 = FUN_0148ac48(puVar4);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*(long *)*puVar4 + 0xa8))();
      plVar15[0x36] = (long)PTR_FUN_047d9428;
      plVar15[0x37] = 0;
    }
    puVar2 = puVar4 + 1;
    if (puVar2 != puVar5) {
      uVar12 = FUN_0148ac48(puVar2);
      if ((uVar12 & 1) != 0) {
        (**(code **)(*(long *)*puVar2 + 0xa8))();
        plVar15[0x36] = (long)PTR_FUN_047d9428;
        plVar15[0x37] = 0;
      }
      puVar8 = PTR_FUN_047d9428;
      for (puVar4 = puVar4 + 2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
        uVar12 = FUN_0148ac48(puVar4);
        if ((uVar12 & 1) != 0) {
          (**(code **)(*(long *)*puVar4 + 0xa8))();
          plVar15[0x36] = (long)puVar8;
          plVar15[0x37] = 0;
        }
      }
    }
  }
  puVar4 = (undefined8 *)plVar15[0x2c];
  puVar5 = (undefined8 *)plVar15[0x2d];
  if (puVar4 != puVar5) {
    uVar12 = FUN_0148ac48(puVar4);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*(long *)*puVar4 + 0xa8))();
      plVar15[0x36] = (long)PTR_FUN_047d9428;
      plVar15[0x37] = 0;
    }
    puVar2 = puVar4 + 1;
    if (puVar2 != puVar5) {
      uVar12 = FUN_0148ac48(puVar2);
      if ((uVar12 & 1) != 0) {
        (**(code **)(*(long *)*puVar2 + 0xa8))();
        plVar15[0x36] = (long)PTR_FUN_047d9428;
        plVar15[0x37] = 0;
      }
      puVar8 = PTR_FUN_047d9428;
      for (puVar4 = puVar4 + 2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
        uVar12 = FUN_0148ac48(puVar4);
        if ((uVar12 & 1) != 0) {
          (**(code **)(*(long *)*puVar4 + 0xa8))();
          plVar15[0x36] = (long)puVar8;
          plVar15[0x37] = 0;
        }
      }
    }
  }
  if ((*(byte *)(plVar15 + 0x6c) & 7) != 0) {
    pcVar14 = (code *)plVar15[0x36];
    if ((plVar15[0x37] & 1U) != 0) {
      pcVar14 = *(code **)(pcVar14 + *(long *)((long)(plVar15 + 0x21) + (plVar15[0x37] >> 1)));
    }
    (*pcVar14)();
  }
  if (!bVar18) {
    plVar15[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 0x23));
  }
  plVar17 = (long *)plVar15[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar17;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x400,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0148ad88(plVar11,(long)puVar19 + (ulong)uVar6);
  *(undefined4 *)(plVar11 + 3) = 0x100400;
  plVar11[1] = (long)plVar17;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = plVar11[0x13];
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar18) {
      *psVar1 = sVar3 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar3 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar13;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar17 = plVar11 + 4;
  (**(code **)(*plVar17 + 0xe8))(plVar17,plVar15);
  (**(code **)(*plVar17 + 0x68))(plVar17);
  local_38 = plVar11;
  FUN_00df8c30(plVar15 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0x13];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar15 + 0x100))(plVar15,plVar17);
  plVar11 = plVar15 + 0x88;
  lVar16 = *plVar11;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar16) {
    plVar11 = (long *)0x0;
    bVar18 = true;
LAB_0148a874:
    if ((*(byte *)(plVar15 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar15,0,0);
    }
    else {
      (**(code **)(*plVar17 + 0xf8))(plVar17);
    }
    if (!bVar18) {
      *plVar11 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    }
    auVar20._8_8_ = plVar15;
    auVar20._0_8_ = 2;
    return auVar20;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar18) {
      *plVar11 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0148a870;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x89));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar15 + 0x89));
        while (*plVar11 == 0) {
          cVar7 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar18) {
            *plVar11 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0148a870;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar18) {
      *plVar11 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0148a870:
  bVar18 = false;
  goto LAB_0148a874;
code_r0x0148a704:
  cVar7 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar18) {
    *plVar17 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0148a70c;
  goto LAB_0148a6fc;
}


