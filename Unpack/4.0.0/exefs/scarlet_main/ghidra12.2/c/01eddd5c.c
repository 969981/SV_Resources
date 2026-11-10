/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eddd5c; name: FUN_01eddd5c
 */


void FUN_01eddd5c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_258;
  char *pcStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  char *pcStack_230;
  undefined8 local_228;
  long *local_220;
  undefined8 local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (DAT_04839fbe == '\x01') {
    *param_1 = 0;
    return;
  }
  if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
      (((uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0 || (DAT_04839fc0 != 3)) &&
       ((((DAT_04839fc0 == 1 || (DAT_0485e950 != '\x01')) ||
         (uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0)) || (DAT_04839fc0 != 4)))))) ||
     ((DAT_0485e950 != '\x01' || (uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0)))) {
    uVar6 = FUN_01b60f20();
    if ((uVar6 & 1) == 0) {
      local_58 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,1);
      FUN_01b61a00((ulong)&local_78 | 4);
    }
    DAT_04839fc0 = 0;
    DAT_04839fbe = '\x01';
    FUN_019877e0(&local_d0);
    local_f0 = 0x3c51125c3625acf4;
    pcStack_e8 = "NetworkUse";
    local_e0 = 10;
    local_d8 = (long *)0x0;
    FUN_01ede4cc(&local_c8,local_d0,&local_f0,0);
    local_110 = 0xa3e633b966319eea;
    pcStack_108 = "InitializeSocket";
    local_100 = 0x10;
    local_f8 = (long *)0x0;
    FUN_0198dd40(&local_c0,local_c8,&local_110);
    local_130 = 0xfca4122845e77334;
    pcStack_128 = "InititializeCurl";
    local_120 = 0x10;
    local_118 = (long *)0x0;
    FUN_01edeca0(&local_b8,local_c0,&local_130);
    local_150 = 0x36ccf9bde9583765;
    pcStack_148 = "EnsureNsaTokenId";
    local_140 = 0x10;
    local_138 = (long *)0x0;
    FUN_01edf45c(&local_b0,local_b8,&local_150);
    plVar5 = local_b0;
    local_170 = 0xb70d18694d5eebde;
    pcStack_168 = "InitializeNplnManager";
    local_160 = 0x15;
    local_158 = (long *)0x0;
    memcpy(auStack_198,&local_78,0x24);
    FUN_01edfc24(&local_a8,plVar5,&local_170,auStack_198);
    local_1b8 = 0x7519e79c21344471;
    pcStack_1b0 = "WaitTimer";
    local_1a8 = 9;
    local_1a0 = (long *)0x0;
    FUN_01ee03e8(&local_a0,local_a8,&local_1b8,3000);
    local_1d8 = 0x65cf9bd33f8da31e;
    pcStack_1d0 = "SaveNplnUserId";
    local_1c8 = 0xe;
    local_1c0 = (long *)0x0;
    FUN_01ee0b40(&local_98,local_a0,&local_1d8);
    local_1f8 = 0xc30d97f731a10e1c;
    pcStack_1f0 = "Commit";
    local_1e8 = 6;
    local_1e0 = (long *)0x0;
    FUN_01ee1294(&local_90,local_98,&local_1f8);
    local_218 = 0x82907e5d5ae21583;
    pcStack_210 = "RecoverNetwork";
    local_208 = 0xe;
    local_200 = (long *)0x0;
    FUN_01ee134c(&local_88,local_90,&local_218);
    local_238 = 0x9a1b9ce665afc7d1;
    pcStack_230 = "Failure";
    local_228 = 7;
    local_220 = (long *)0x0;
    FUN_01ee17b4(&local_80,local_88,&local_238);
    local_258 = 0x3f5fb39981c8b74b;
    pcStack_250 = "FinalizeToInternet";
    local_248 = 0x12;
    uStack_240 = 0;
    FUN_01ee1efc(param_1,local_80,&local_258);
    if (local_80 != (long *)0x0) {
      lVar7 = local_80[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_220 != (long *)0x0) {
      (**(code **)(*local_220 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      lVar7 = local_88[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_88 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      lVar7 = local_90[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 0x20))();
    }
    if (local_98 != (long *)0x0) {
      lVar7 = local_98[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    if (local_a0 != (long *)0x0) {
      lVar7 = local_a0[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_a0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      lVar7 = local_a8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      lVar7 = local_b0[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_b0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      lVar7 = local_b8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_b8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      lVar7 = local_c0[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_c0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      lVar7 = local_c8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_c8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01ede280;
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_d0 == (long *)0x0) {
      return;
    }
    lVar7 = local_d0[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
LAB_01ede280:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
    pcVar8 = *(code **)(*local_d0 + 0x50);
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
    pcVar8 = *(code **)(*local_38 + 0x20);
  }
  (*pcVar8)();
  return;
}


