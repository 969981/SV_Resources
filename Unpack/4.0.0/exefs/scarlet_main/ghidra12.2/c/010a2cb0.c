/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a2cb0; name: FUN_010a2cb0
 */


void FUN_010a2cb0(long param_1,undefined8 param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  uint local_74;
  undefined4 uStack_70;
  byte local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  memset(&local_f8,0,0x60);
  local_98 = param_2;
  FUN_010a3c64(&local_90,*(undefined8 *)(param_1 + 0x110));
  FUN_010a3da0(&local_88,*(undefined8 *)(param_1 + 0x118));
  lVar8 = *(long *)(param_1 + 0x38);
  local_80 = *(undefined4 *)(lVar8 + 0x34);
  local_7b = *(undefined1 *)(lVar8 + 0x8d);
  local_7c = *(undefined1 *)(lVar8 + 0x8c);
  uStack_70 = *(undefined4 *)(lVar8 + 0x30);
  local_78 = 0;
  local_74 = (uint)*(byte *)(param_1 + 0x95);
  local_6c = FUN_010a363c(param_1);
  local_6c = local_6c & 1;
  lVar8 = *(long *)(param_1 + 0x38);
  local_6b = *(undefined1 *)(lVar8 + 0x710);
  local_69 = false;
  if (*(char *)(lVar8 + 0x711) != '\0') {
    local_69 = *(char *)(lVar8 + 0x8c) != '\0';
  }
  local_6a = *(char *)(lVar8 + 0x712) != '\0';
  local_68 = *(undefined1 *)(lVar8 + 0x707);
  local_60 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined1 *)(lVar8 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x150);
  local_48 = *(undefined8 *)(param_1 + 0x170);
  local_38 = *(undefined8 *)(param_1 + 0x48);
  local_50 = param_1;
  FUN_010a3824(&local_98,&local_f8);
  if (local_f0 != (long *)0x0) {
    plVar7 = local_f0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = local_f0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_c8 != (long *)0x0) {
    plVar7 = local_c8 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xe0);
  *(long **)(param_1 + 0xe0) = local_c8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_e8 != (long *)0x0) {
    plVar7 = local_e8 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xc0);
  *(long **)(param_1 + 0xc0) = local_e8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_c0 != (long *)0x0) {
    plVar7 = local_c0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = local_c0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_e0 != (long *)0x0) {
    plVar7 = local_e0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 200);
  *(long **)(param_1 + 200) = local_e0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_b8 != (long *)0x0) {
    plVar7 = local_b8 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = local_b8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_d8 != (long *)0x0) {
    plVar7 = local_d8 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = local_d8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_b0 != (long *)0x0) {
    plVar7 = local_b0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xf8);
  *(long **)(param_1 + 0xf8) = local_b0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_d0 != (long *)0x0) {
    plVar7 = local_d0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0xd8);
  *(long **)(param_1 + 0xd8) = local_d0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_a8 != (long *)0x0) {
    plVar7 = local_a8 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_010a3148;
  }
  plVar7 = *(long **)(param_1 + 0x100);
  *(long **)(param_1 + 0x100) = local_a8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_a0 != (long *)0x0) {
    plVar7 = local_a0 + 5;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) {
LAB_010a3148:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x108);
  *(long **)(param_1 + 0x108) = local_a0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  FUN_010a38f8(param_1 + 0xb0,local_f8);
  FUN_010a363c(param_1);
  FUN_010a433c(param_1);
  FUN_010a35c8(param_1);
  if (local_a0 != (long *)0x0) {
    plVar7 = local_a0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_a8 != (long *)0x0) {
    plVar7 = local_a8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_b0 != (long *)0x0) {
    plVar7 = local_b0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_b8 != (long *)0x0) {
    plVar7 = local_b8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_c0 != (long *)0x0) {
    plVar7 = local_c0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_c8 != (long *)0x0) {
    plVar7 = local_c8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_d0 != (long *)0x0) {
    plVar7 = local_d0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_d8 != (long *)0x0) {
    plVar7 = local_d8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_e0 != (long *)0x0) {
    plVar7 = local_e0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_e8 != (long *)0x0) {
    plVar7 = local_e8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_f0 != (long *)0x0) {
    plVar7 = local_f0 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_010a2fc4;
  }
  if (local_f8 != (long *)0x0) {
    plVar7 = local_f8 + 5;
    do {
      lVar8 = *plVar7;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_010a2fc4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_88 != (long *)0x0) {
    lVar8 = local_88[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_010a2f80;
  }
  if (local_90 != (long *)0x0) {
    lVar8 = local_90[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_010a2f80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


