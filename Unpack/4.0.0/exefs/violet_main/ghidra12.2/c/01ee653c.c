/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ee653c; name: FUN_01ee653c
 */


void FUN_01ee653c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  if (DAT_04839fbe == '\x01') {
    *param_1 = 0;
    return;
  }
  if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
      (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) == 0)) ||
     (((DAT_04839fc0 != 2 || (DAT_0485e950 != '\x01')) ||
      (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) == 0)))) {
    DAT_04839fc0 = 0;
    DAT_04839fbe = '\x01';
    FUN_019877e0(&local_70);
    local_90 = 0x3c51125c3625acf4;
    pcStack_88 = "NetworkUse";
    local_80 = 10;
    local_78 = (long *)0x0;
    FUN_01ede4cc(&local_68,local_70,&local_90,1);
    local_b0 = 0xa3e633b966319eea;
    pcStack_a8 = "InitializeSocket";
    local_a0 = 0x10;
    local_98 = (long *)0x0;
    FUN_0198dd40(&local_60,local_68,&local_b0);
    local_d0 = 0x8ee92bf71a80ae1b;
    pcStack_c8 = "InitializePia";
    local_c0 = 0xd;
    local_b8 = (long *)0x0;
    FUN_0198e998(&local_58,local_60,&local_d0,3);
    local_f0 = 0xc30d97f731a10e1c;
    pcStack_e8 = "Commit";
    local_e0 = 6;
    local_d8 = (long *)0x0;
    FUN_01ee6908(&local_18,local_58,&local_f0);
    local_110 = 0xda650236dc877a15;
    pcStack_108 = "FinalizeToLan";
    local_100 = 0xd;
    uStack_f8 = 0;
    FUN_01ee69c0(param_1,local_18,&local_110);
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ee67b4;
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      lVar6 = local_58[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ee67b4;
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      lVar6 = local_60[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ee67b4;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      lVar6 = local_68[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ee67b4;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_70 == (long *)0x0) {
      return;
    }
    lVar6 = local_70[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 != 1) {
      if (sVar2 != 0) {
        return;
      }
LAB_01ee67b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    pcVar7 = *(code **)(*local_70 + 0x50);
  }
  else {
    local_50 = 0x1f69f761cb4fb0da;
    pcStack_48 = "NothingToDo";
    local_40 = 0xb;
    local_38 = (long *)0x0;
    FUN_01987400(param_1,&local_50,&DAT_03d5bad0);
    if (local_38 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_38 + 0x20);
  }
  (*pcVar7)();
  return;
}


