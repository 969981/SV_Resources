/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123bad8; name: FUN_0123bad8
 */


void FUN_0123bad8(undefined1 *param_1,long param_2,undefined4 param_3,uint param_4)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  short sVar9;
  long lVar10;
  long *plVar11;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_5f;
  int local_54;
  long local_50;
  long *local_48;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  local_50 = 0;
  local_54 = 0;
  lVar10 = *(long *)(param_2 + 0x448);
  *(long *)(param_2 + 0x198) = *(long *)(param_2 + 0x198) + 1;
  if (*(long *)(lVar10 + 0x38) == 0) {
LAB_0123bb3c:
    FUN_0123c8a0(lVar10,&local_50,&local_54,param_2 + 0x488,param_3);
  }
  else {
    FUN_00f63734(&local_78);
    plVar11 = (long *)CONCAT44(uStack_74,local_78);
    if (plVar11 == (long *)0x0) goto LAB_0123bb3c;
    local_50 = plVar11[8] + 0x20;
    local_54 = (int)plVar11[9] + -0x20;
    lVar10 = plVar11[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar9 == 0) goto LAB_0123c490;
  }
  local_5f = 5;
  local_70 = *(undefined8 *)(param_2 + 0x198);
  uStack_68 = *(undefined8 *)(param_2 + 0x488);
  plVar11 = *(long **)(param_2 + 8);
  local_78 = param_3;
  local_60 = (char)param_4;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x50,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01327714(plVar6,&local_78,local_50,local_54);
  *(undefined4 *)(plVar6 + 3) = 0x80050;
  plVar6[1] = (long)plVar11;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  lVar10 = plVar6[6];
  if (*(long *)(lVar10 + 0x10) == 0) {
LAB_0123c428:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (sVar9 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar7;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar9 == -1) goto LAB_0123c448;
  if ((param_4 & 0xff) == 5) {
    lVar10 = plVar6[6];
    local_80 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    FUN_0123cd5c(param_2,&local_80);
    if (local_80 != (long *)0x0) {
      lVar10 = local_80[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    bVar3 = true;
  }
  else {
    lVar10 = plVar6[6];
    local_88 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    FUN_0123e17c(param_2,&local_88,param_4);
    if (local_88 != (long *)0x0) {
      lVar10 = local_88[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_88 + 0x50))();
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    bVar3 = false;
  }
  lVar10 = plVar6[6];
  local_90 = plVar6;
  if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (sVar9 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar7;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar9 == -1) goto LAB_0123c448;
  plVar11 = local_90;
  FUN_0123c718(param_2,&local_90);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar9 == 0) goto LAB_0123c490;
  }
  if (bVar3) {
    lVar10 = plVar6[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    lVar10 = plVar6[6];
    local_48 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    plVar11 = local_48;
    FUN_0123c4cc(param_2,&local_48,0);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    lVar10 = plVar6[6];
    local_48 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    plVar11 = local_48;
    FUN_0123c4cc(param_2,&local_48,1);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    lVar10 = plVar6[6];
    local_48 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    plVar11 = local_48;
    FUN_0123c4cc(param_2,&local_48,2);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    lVar10 = plVar6[6];
    local_48 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    plVar11 = local_48;
    FUN_0123c4cc(param_2,&local_48,3);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    lVar10 = plVar6[6];
    local_48 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) {
LAB_0123c448:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar11 = local_48;
    FUN_0123c4cc(param_2,&local_48,4);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_0123c490;
    }
    lVar10 = plVar6[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      pcVar8 = *(code **)(*plVar6 + 0x50);
      plVar11 = plVar6;
LAB_0123c304:
      (*pcVar8)(plVar11);
    }
    else {
LAB_0123bf98:
      if (sVar9 == 0) goto LAB_0123c490;
    }
  }
  else {
    lVar10 = plVar6[6];
    local_98 = plVar6;
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_0123c428;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar9 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar9 == -1) goto LAB_0123c448;
    FUN_0123c4cc(param_2,&local_98,param_4);
    if (local_98 != (long *)0x0) {
      lVar10 = local_98[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        pcVar8 = *(code **)(*local_98 + 0x50);
        plVar11 = local_98;
        goto LAB_0123c304;
      }
      goto LAB_0123bf98;
    }
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x198);
  lVar10 = *(long *)(param_2 + 0x448);
  *param_1 = *(undefined1 *)(lVar10 + 0xc4a5);
  param_1[0x10] = *(undefined1 *)(lVar10 + 0xc4a4);
  lVar10 = plVar6[6];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar6 + 0x50))(plVar6);
  }
  else if (sVar9 == 0) {
LAB_0123c490:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


