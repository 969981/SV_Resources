/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014425f4; name: FUN_014425f4
 */


undefined8 FUN_014425f4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *local_48;
  
  local_48 = (long *)0x0;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    plVar6 = (long *)FUN_01dc987c(*(undefined8 *)(param_1 + 8));
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 5;
      do {
        iVar4 = (int)*plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = iVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      break;
    }
    goto LAB_01442fa0;
  case 2:
    plVar6 = (long *)FUN_01dc9a50(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 3:
    plVar6 = (long *)FUN_01dc9c1c(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  default:
    goto switchD_0144263c_caseD_4;
  case 5:
    plVar6 = (long *)FUN_01dc9de8(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 6:
    plVar6 = (long *)FUN_01dc9fbc(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 7:
    plVar6 = (long *)FUN_01dca190(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 8:
    plVar6 = (long *)FUN_01dca35c(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 10:
    plVar6 = (long *)FUN_01dca530(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0xb:
    plVar6 = (long *)FUN_01dca704(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0xc:
    plVar6 = (long *)FUN_01dca8d0(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x11:
    plVar6 = (long *)FUN_01dcaaa4(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x12:
    plVar6 = (long *)FUN_01dcac7c(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x13:
    plVar6 = (long *)FUN_01dcae50(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x14:
    plVar6 = (long *)FUN_01dcb024(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x15:
    plVar6 = (long *)FUN_01dcb208(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x16:
    plVar6 = (long *)FUN_01dcb3dc(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x17:
    plVar6 = (long *)FUN_01dcb5b0(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x18:
    plVar6 = (long *)FUN_01dcb78c(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x19:
    plVar6 = (long *)FUN_01dcb958(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1a:
    plVar6 = (long *)FUN_01dcbb24(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1b:
    plVar6 = (long *)FUN_01dcbcf0(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1c:
    plVar6 = (long *)FUN_01dcbed0(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1d:
    plVar6 = (long *)FUN_01dcc0c0(*(undefined8 *)(param_1 + 8));
    if (plVar6 == (long *)0x0) goto LAB_01442fa0;
    plVar8 = plVar6 + 5;
    do {
      iVar4 = (int)*plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1e:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01443450:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
    if (plVar6 == (long *)0x0) {
LAB_01443454:
      (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    memset(plVar6 + 1,0,0x70);
    puVar3 = PTR_DAT_047d66f8;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f10;
    *(undefined4 *)((long)plVar6 + 0x6c) = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    *(undefined1 *)(plVar6 + 0xe) = 0;
    plVar6[0xc] = 0;
    *(undefined2 *)(plVar6 + 0xd) = 0;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80078;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x1f:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01443450;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x48,8);
    if (plVar6 == (long *)0x0) goto LAB_01443454;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *plVar6 = (long)(PTR_DAT_047d66f8 + 0x10);
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f20;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80048;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x20:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01443450;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x60,8);
    if (plVar6 == (long *)0x0) goto LAB_01443454;
    memset(plVar6 + 1,0,0x58);
    puVar3 = PTR_DAT_047d66f8;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f08;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    plVar6[10] = 0;
    *(undefined2 *)(plVar6 + 0xb) = 0;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80060;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x21:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01443450;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x48,8);
    if (plVar6 == (long *)0x0) goto LAB_01443454;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *plVar6 = (long)(PTR_DAT_047d66f8 + 0x10);
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f28;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80048;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x22:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01443450;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
    if (plVar6 == (long *)0x0) goto LAB_01443454;
    memset(plVar6 + 1,0,0x70);
    puVar3 = PTR_DAT_047d66f8;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f30;
    *(undefined4 *)((long)plVar6 + 0x6c) = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    *(undefined1 *)(plVar6 + 0xe) = 0;
    plVar6[0xc] = 0;
    *(undefined2 *)(plVar6 + 0xd) = 0;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80078;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    break;
  case 0x23:
    plVar8 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_01443450;
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x48,8);
    if (plVar6 == (long *)0x0) goto LAB_01443454;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    *plVar6 = (long)(PTR_DAT_047d66f8 + 0x10);
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    nn::os::GetTlsValue(DAT_04865a30);
    plVar7 = plVar6 + 5;
    *(int *)plVar7 = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    puVar3 = PTR_DAT_047d8f18;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[4] = (long)(puVar3 + 0x60);
    *plVar6 = (long)(puVar3 + 0x10);
    plVar6[1] = (long)plVar8;
    plVar6[2] = (long)plVar6;
    *(undefined4 *)(plVar6 + 3) = 0x80048;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    do {
      iVar4 = (int)*plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01442fa0:
  FUN_00a69180(&local_48);
  local_48 = plVar6;
switchD_0144263c_caseD_4:
  plVar8 = local_48;
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  FUN_00a691f4((long *)(param_1 + 0x38),plVar8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar5 = *plVar6;
      iVar4 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 0;
}


