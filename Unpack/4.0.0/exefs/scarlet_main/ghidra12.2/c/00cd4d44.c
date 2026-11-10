/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd4d44; name: FUN_00cd4d44
 */


void FUN_00cd4d44(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  if ((DAT_04859fe0 == (long *)0x0) &&
     ((*DAT_04859f60)(&local_48,&DAT_04859f80), local_48 != (long *)0x0)) {
    local_40 = local_48;
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 4;
    uStack_90 = 4;
    local_58 = 5;
    uStack_50 = 0x10;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_04859fe0;
    DAT_04859fe0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_04859fe0 = plVar6;
    FUN_00cd5448(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_04859fe8;
    DAT_04859fe8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_04859fe8 = plVar6;
    FUN_00cd5634(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_04859ff0;
    DAT_04859ff0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_04859ff0 = plVar6;
    FUN_00cd56b8(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_04859ff8;
    DAT_04859ff8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_04859ff8 = plVar6;
    FUN_00cd573c(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_0485a000;
    DAT_0485a000 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_0485a000 = plVar6;
    FUN_00cd57c0(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_0485a008;
    DAT_0485a008 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_0485a008 = plVar6;
    FUN_00cd5844(plVar6);
    local_78 = 1;
    uStack_70 = 2;
    local_98 = 1;
    uStack_90 = 1;
    local_58 = 5;
    uStack_50 = 0x10;
    local_40 = local_48;
    local_68 = 0x200000025;
    uStack_60 = 0x400000003;
    local_88 = 0;
    uStack_80 = 0x20;
    plVar6 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_00cd5420;
      plVar7 = plVar6;
    }
    FUN_0117e220(plVar7,&local_98,1,1,0);
    plVar7 = DAT_0485a010;
    DAT_0485a010 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_0485a010 = plVar6;
    FUN_00cd55b4(plVar6);
    local_88 = local_88 & 0xffffffff00000000;
    local_98 = 0x4000;
    uStack_90 = 0x100;
    local_40 = local_48;
    plVar7 = (long *)FUN_00cf3764(auStack_38,local_48[1],&local_40);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 5;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
LAB_00cd5420:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_00d560a0(plVar7,&local_98,1,0,0);
    plVar6 = DAT_0485a018;
    DAT_0485a018 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00cd53f8;
    }
    DAT_0485a018 = plVar7;
    FUN_00cd5478(plVar7);
    if (local_48 != (long *)0x0) {
      plVar7 = local_48 + 5;
      do {
        lVar5 = *plVar7;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_00cd53f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


