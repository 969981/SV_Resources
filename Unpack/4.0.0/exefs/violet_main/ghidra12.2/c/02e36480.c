/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e36480; name: FUN_02e36480
 */


void FUN_02e36480(long param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  
  *(undefined2 *)(param_1 + 0x5b8) = *param_2;
  *(undefined2 *)(param_1 + 0x5ba) = param_2[1];
  *(undefined2 *)(param_1 + 0x5d0) = param_2[0xc];
  uVar8 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x6b8) = param_2[0x80];
  *(undefined8 *)(param_1 + 0x6b0) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x81);
  *(undefined2 *)(param_1 + 0x6c2) = param_2[0x85];
  *(undefined8 *)(param_1 + 0x6ba) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x86);
  *(undefined2 *)(param_1 + 0x6cc) = param_2[0x8a];
  *(undefined8 *)(param_1 + 0x6c4) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x8b);
  *(undefined2 *)(param_1 + 0x6d6) = param_2[0x8f];
  *(undefined8 *)(param_1 + 0x6ce) = uVar8;
  plVar9 = *(long **)(param_2 + 0x10);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x5d8);
    *(long **)(param_1 + 0x5d8) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x60c) = *(undefined1 *)(param_2 + 0x2a);
    *(undefined1 *)(param_1 + 0x60d) = *(undefined1 *)((long)param_2 + 0x55);
    *(undefined1 *)(param_1 + 0x60e) = *(undefined1 *)(param_2 + 0x2b);
    *(undefined1 *)(param_1 + 0x60f) = *(undefined1 *)((long)param_2 + 0x57);
    *(undefined1 *)(param_1 + 0x610) = *(undefined1 *)(param_2 + 0x2c);
    *(undefined2 *)(param_1 + 0x612) = param_2[0x2d];
    *(undefined1 *)(param_1 + 0x614) = *(undefined1 *)(param_2 + 0x2e);
    *(undefined1 *)(param_1 + 0x615) = *(undefined1 *)((long)param_2 + 0x5d);
    *(undefined1 *)(param_1 + 0x616) = *(undefined1 *)(param_2 + 0x2f);
    *(undefined1 *)(param_1 + 0x617) = *(undefined1 *)((long)param_2 + 0x5f);
    *(undefined1 *)(param_1 + 0x618) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x61d) = *(undefined1 *)((long)param_2 + 0x65);
    *(undefined1 *)(param_1 + 0x61e) = *(undefined1 *)(param_2 + 0x33);
    *(undefined2 *)(param_1 + 0x620) = param_2[0x34];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) goto LAB_02e36bc8;
  }
  plVar9 = *(long **)(param_2 + 0x14);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x5e0);
    *(long **)(param_1 + 0x5e0) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x36);
    *(undefined1 *)(param_1 + 0x628) = *(undefined1 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x629) = *(undefined1 *)((long)param_2 + 0x71);
    *(undefined1 *)(param_1 + 0x62a) = *(undefined1 *)(param_2 + 0x39);
    *(undefined1 *)(param_1 + 0x62b) = *(undefined1 *)((long)param_2 + 0x73);
    *(undefined1 *)(param_1 + 0x62c) = *(undefined1 *)(param_2 + 0x3a);
    *(undefined2 *)(param_1 + 0x62e) = param_2[0x3b];
    *(undefined1 *)(param_1 + 0x630) = *(undefined1 *)(param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x631) = *(undefined1 *)((long)param_2 + 0x79);
    *(undefined1 *)(param_1 + 0x632) = *(undefined1 *)(param_2 + 0x3d);
    *(undefined1 *)(param_1 + 0x633) = *(undefined1 *)((long)param_2 + 0x7b);
    *(undefined1 *)(param_1 + 0x634) = *(undefined1 *)(param_2 + 0x3e);
    *(undefined1 *)(param_1 + 0x639) = *(undefined1 *)((long)param_2 + 0x81);
    *(undefined1 *)(param_1 + 0x63a) = *(undefined1 *)(param_2 + 0x41);
    *(undefined2 *)(param_1 + 0x63c) = param_2[0x42];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) goto LAB_02e36bc8;
  }
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x5e8);
    *(long **)(param_1 + 0x5e8) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x44);
    *(undefined1 *)(param_1 + 0x644) = *(undefined1 *)(param_2 + 0x46);
    *(undefined1 *)(param_1 + 0x645) = *(undefined1 *)((long)param_2 + 0x8d);
    *(undefined1 *)(param_1 + 0x646) = *(undefined1 *)(param_2 + 0x47);
    *(undefined1 *)(param_1 + 0x647) = *(undefined1 *)((long)param_2 + 0x8f);
    *(undefined1 *)(param_1 + 0x648) = *(undefined1 *)(param_2 + 0x48);
    *(undefined2 *)(param_1 + 0x64a) = param_2[0x49];
    *(undefined1 *)(param_1 + 0x64c) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined1 *)(param_1 + 0x64d) = *(undefined1 *)((long)param_2 + 0x95);
    *(undefined1 *)(param_1 + 0x64e) = *(undefined1 *)(param_2 + 0x4b);
    *(undefined1 *)(param_1 + 0x64f) = *(undefined1 *)((long)param_2 + 0x97);
    *(undefined1 *)(param_1 + 0x650) = *(undefined1 *)(param_2 + 0x4c);
    *(undefined1 *)(param_1 + 0x655) = *(undefined1 *)((long)param_2 + 0x9d);
    *(undefined1 *)(param_1 + 0x656) = *(undefined1 *)(param_2 + 0x4f);
    *(undefined2 *)(param_1 + 0x658) = param_2[0x50];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) goto LAB_02e36bc8;
  }
  plVar9 = *(long **)(param_2 + 0x1c);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x5f0);
    *(long **)(param_1 + 0x5f0) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 0x52);
    *(undefined1 *)(param_1 + 0x660) = *(undefined1 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0x661) = *(undefined1 *)((long)param_2 + 0xa9);
    *(undefined1 *)(param_1 + 0x662) = *(undefined1 *)(param_2 + 0x55);
    *(undefined1 *)(param_1 + 0x663) = *(undefined1 *)((long)param_2 + 0xab);
    *(undefined1 *)(param_1 + 0x664) = *(undefined1 *)(param_2 + 0x56);
    *(undefined2 *)(param_1 + 0x666) = param_2[0x57];
    *(undefined1 *)(param_1 + 0x668) = *(undefined1 *)(param_2 + 0x58);
    *(undefined1 *)(param_1 + 0x669) = *(undefined1 *)((long)param_2 + 0xb1);
    *(undefined1 *)(param_1 + 0x66a) = *(undefined1 *)(param_2 + 0x59);
    *(undefined1 *)(param_1 + 0x66b) = *(undefined1 *)((long)param_2 + 0xb3);
    *(undefined1 *)(param_1 + 0x66c) = *(undefined1 *)(param_2 + 0x5a);
    *(undefined1 *)(param_1 + 0x671) = *(undefined1 *)((long)param_2 + 0xb9);
    *(undefined1 *)(param_1 + 0x672) = *(undefined1 *)(param_2 + 0x5d);
    *(undefined2 *)(param_1 + 0x674) = param_2[0x5e];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) goto LAB_02e36bc8;
  }
  plVar9 = *(long **)(param_2 + 0x20);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x5f8);
    *(long **)(param_1 + 0x5f8) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x60);
    *(undefined1 *)(param_1 + 0x67c) = *(undefined1 *)(param_2 + 0x62);
    *(undefined1 *)(param_1 + 0x67d) = *(undefined1 *)((long)param_2 + 0xc5);
    *(undefined1 *)(param_1 + 0x67e) = *(undefined1 *)(param_2 + 99);
    *(undefined1 *)(param_1 + 0x67f) = *(undefined1 *)((long)param_2 + 199);
    *(undefined1 *)(param_1 + 0x680) = *(undefined1 *)(param_2 + 100);
    *(undefined2 *)(param_1 + 0x682) = param_2[0x65];
    *(undefined1 *)(param_1 + 0x684) = *(undefined1 *)(param_2 + 0x66);
    *(undefined1 *)(param_1 + 0x685) = *(undefined1 *)((long)param_2 + 0xcd);
    *(undefined1 *)(param_1 + 0x686) = *(undefined1 *)(param_2 + 0x67);
    *(undefined1 *)(param_1 + 0x687) = *(undefined1 *)((long)param_2 + 0xcf);
    *(undefined1 *)(param_1 + 0x688) = *(undefined1 *)(param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x68d) = *(undefined1 *)((long)param_2 + 0xd5);
    *(undefined1 *)(param_1 + 0x68e) = *(undefined1 *)(param_2 + 0x6b);
    *(undefined2 *)(param_1 + 0x690) = param_2[0x6c];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) goto LAB_02e36bc8;
  }
  plVar9 = *(long **)(param_2 + 0x24);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
LAB_02e36ba0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_02e36ba0;
    plVar7 = *(long **)(param_1 + 0x600);
    *(long **)(param_1 + 0x600) = plVar9;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02e36bc8;
    }
    *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_2 + 0x6e);
    *(undefined1 *)(param_1 + 0x698) = *(undefined1 *)(param_2 + 0x70);
    *(undefined1 *)(param_1 + 0x699) = *(undefined1 *)((long)param_2 + 0xe1);
    *(undefined1 *)(param_1 + 0x69a) = *(undefined1 *)(param_2 + 0x71);
    *(undefined1 *)(param_1 + 0x69b) = *(undefined1 *)((long)param_2 + 0xe3);
    *(undefined1 *)(param_1 + 0x69c) = *(undefined1 *)(param_2 + 0x72);
    *(undefined2 *)(param_1 + 0x69e) = param_2[0x73];
    *(undefined1 *)(param_1 + 0x6a0) = *(undefined1 *)(param_2 + 0x74);
    *(undefined1 *)(param_1 + 0x6a1) = *(undefined1 *)((long)param_2 + 0xe9);
    *(undefined1 *)(param_1 + 0x6a2) = *(undefined1 *)(param_2 + 0x75);
    *(undefined1 *)(param_1 + 0x6a3) = *(undefined1 *)((long)param_2 + 0xeb);
    *(undefined1 *)(param_1 + 0x6a4) = *(undefined1 *)(param_2 + 0x76);
    *(undefined1 *)(param_1 + 0x6a9) = *(undefined1 *)((long)param_2 + 0xf1);
    *(undefined1 *)(param_1 + 0x6aa) = *(undefined1 *)(param_2 + 0x79);
    *(undefined2 *)(param_1 + 0x6ac) = param_2[0x7a];
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02e36b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
    if ((int)lVar6 == 0) {
LAB_02e36bc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


