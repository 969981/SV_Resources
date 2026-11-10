/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019870e4; name: FUN_019870e4
 */


void FUN_019870e4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_8;
  
  if (DAT_04839fbe == '\x01') {
    *param_1 = 0;
    return;
  }
  if ((DAT_04839fc0 == 1) ||
     (((DAT_0485e950 == '\x01' && (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) != 0)) &&
      (DAT_04839fc0 == 1)))) {
    local_40 = 0x1f69f761cb4fb0da;
    pcStack_38 = "NothingToDo";
    local_30 = 0xb;
    local_28 = (long *)0x0;
    FUN_01987400(param_1,&local_40,&DAT_03d5bad0);
    if (local_28 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_28 + 0x20);
  }
  else {
    DAT_04839fc0 = 0;
    DAT_04839fbe = '\x01';
    FUN_019877e0(&local_58);
    local_78 = 0xa3e633b966319eea;
    pcStack_70 = "InitializeSocket";
    local_68 = 0x10;
    local_60 = (long *)0x0;
    FUN_0198dd40(&local_50,local_58,&local_78);
    local_98 = 0x8ee92bf71a80ae1b;
    pcStack_90 = "InitializePia";
    local_88 = 0xd;
    local_80 = (long *)0x0;
    FUN_0198e998(&local_48,local_50,&local_98,1);
    local_b8 = 0xc30d97f731a10e1c;
    pcStack_b0 = "Commit";
    local_a8 = 6;
    local_a0 = (long *)0x0;
    FUN_01987594(&local_8,local_48,&local_b8);
    local_d8 = 0x2e535eb7bf3c0f91;
    pcStack_d0 = "FinalizeToLocal";
    local_c8 = 0xf;
    uStack_c0 = 0;
    FUN_0198d4f0(param_1,local_8,&local_d8);
    if (local_8 != (long *)0x0) {
      lVar6 = local_8[6];
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
        (**(code **)(*local_8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_019873d8;
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      lVar6 = local_48[6];
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
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_019873d8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[6];
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
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_019873d8;
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_58 == (long *)0x0) {
      return;
    }
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
    if (sVar2 != 1) {
      if (sVar2 != 0) {
        return;
      }
LAB_019873d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    pcVar7 = *(code **)(*local_58 + 0x50);
  }
  (*pcVar7)();
  return;
}


