/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ee2644; name: FUN_01ee2644
 */


void FUN_01ee2644(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_318;
  char *pcStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  char *pcStack_2f0;
  undefined8 local_2e8;
  long *local_2e0;
  undefined8 local_2d8;
  char *pcStack_2d0;
  undefined8 local_2c8;
  long *local_2c0;
  undefined8 local_2b8;
  char *pcStack_2b0;
  undefined8 local_2a8;
  long *local_2a0;
  undefined8 local_298;
  char *pcStack_290;
  undefined8 local_288;
  long *local_280;
  undefined8 local_278;
  char *pcStack_270;
  undefined8 local_268;
  long *local_260;
  undefined8 local_258;
  char *pcStack_250;
  undefined8 local_248;
  long *local_240;
  undefined8 local_238;
  char *pcStack_230;
  undefined8 local_228;
  long *local_220;
  undefined8 local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  char *pcStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *local_178;
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
  long *local_110;
  long *local_108;
  long *local_100;
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
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (DAT_04839fbe == '\x01') {
    local_50 = 0xc437672bf8d5c64f;
    pcStack_48 = "DuplicatedRun";
    local_40 = 0xd;
    local_38 = (long *)0x0;
    FUN_01ee2ff0(param_1,&local_50,&DAT_03d5bad0);
    plVar5 = local_38;
  }
  else {
    if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
        (uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0)) ||
       (((DAT_04839fc0 != 4 || (DAT_0485e950 != '\x01')) ||
        (uVar6 = nn::nifm::IsNetworkAvailable(), (uVar6 & 1) == 0)))) {
      uVar6 = FUN_01b60f20();
      if ((uVar6 & 1) == 0) {
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,1);
        FUN_01b61a00((ulong)&local_98 | 4);
      }
      DAT_04839fc0 = 0;
      DAT_04839fbe = '\x01';
      FUN_019877e0(&local_110);
      local_130 = 0x3c51125c3625acf4;
      pcStack_128 = "NetworkUse";
      local_120 = 10;
      local_118 = (long *)0x0;
      FUN_01ede4cc(&local_108,local_110,&local_130,0);
      local_150 = 0xa3e633b966319eea;
      pcStack_148 = "InitializeSocket";
      local_140 = 0x10;
      local_138 = (long *)0x0;
      FUN_0198dd40(&local_100,local_108,&local_150);
      local_170 = 0x5960a746f76a6d09;
      pcStack_168 = "InitializeCurl";
      local_160 = 0xe;
      local_158 = (long *)0x0;
      FUN_01edeca0(&local_f8,local_100,&local_170);
      local_190 = 0x36ccf9bde9583765;
      pcStack_188 = "EnsureNsaTokenId";
      local_180 = 0x10;
      local_178 = (long *)0x0;
      FUN_01edf45c(&local_f0,local_f8,&local_190);
      local_1b0 = 0x9d8ea5d066d20b85;
      pcStack_1a8 = "CheckNSO";
      local_1a0 = 8;
      local_198 = (long *)0x0;
      FUN_01ee31e8(&local_e8,local_f0,&local_1b0);
      plVar5 = local_e8;
      local_1d0 = 0xb70d18694d5eebde;
      pcStack_1c8 = "InitializeNplnManager";
      local_1c0 = 0x15;
      local_1b8 = (long *)0x0;
      memcpy(auStack_1f8,&local_98,0x24);
      FUN_01edfc24(&local_e0,plVar5,&local_1d0,auStack_1f8);
      local_218 = 0x8ee92bf71a80ae1b;
      pcStack_210 = "InitializePia";
      local_208 = 0xd;
      local_200 = (long *)0x0;
      FUN_0198e998(&local_d8,local_e0,&local_218,2);
      local_238 = 0x1b6ef9b03def9f73;
      pcStack_230 = "LoginInternet";
      local_228 = 0xd;
      local_220 = (long *)0x0;
      FUN_01ee39b0(&local_d0,local_d8,&local_238);
      local_258 = 0x7519e79c21344471;
      pcStack_250 = "WaitTimer";
      local_248 = 9;
      local_240 = (long *)0x0;
      FUN_01ee03e8(&local_c8,local_d0,&local_258,3000);
      local_278 = 0x65cf9bd33f8da31e;
      pcStack_270 = "SaveNplnUserId";
      local_268 = 0xe;
      local_260 = (long *)0x0;
      FUN_01ee416c(&local_c0,local_c8,&local_278);
      local_298 = 0x324218bec327901c;
      pcStack_290 = "ActivateNplnClients";
      local_288 = 0x13;
      local_280 = (long *)0x0;
      FUN_01ee48c0(&local_b8,local_c0,&local_298);
      local_2b8 = 0xc30d97f731a10e1c;
      pcStack_2b0 = "Commit";
      local_2a8 = 6;
      local_2a0 = (long *)0x0;
      FUN_01ee518c(&local_b0,local_b8,&local_2b8);
      local_2d8 = 0x82907e5d5ae21583;
      pcStack_2d0 = "RecoverNetwork";
      local_2c8 = 0xe;
      local_2c0 = (long *)0x0;
      FUN_01ee5244(&local_a8,local_b0,&local_2d8);
      local_2f8 = 0x9a1b9ce665afc7d1;
      pcStack_2f0 = "Failure";
      local_2e8 = 7;
      local_2e0 = (long *)0x0;
      FUN_01ee56ac(&local_a0,local_a8,&local_2f8);
      local_318 = 0xc8e10530c919699d;
      pcStack_310 = "FinalizeToInternetWithGS";
      local_308 = 0x18;
      uStack_300 = 0;
      FUN_01ee5df4(param_1,local_a0,&local_318);
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_2e0 != (long *)0x0) {
        (**(code **)(*local_2e0 + 0x20))();
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_2c0 != (long *)0x0) {
        (**(code **)(*local_2c0 + 0x20))();
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_2a0 != (long *)0x0) {
        (**(code **)(*local_2a0 + 0x20))();
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_280 != (long *)0x0) {
        (**(code **)(*local_280 + 0x20))();
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_260 != (long *)0x0) {
        (**(code **)(*local_260 + 0x20))();
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
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_240 != (long *)0x0) {
        (**(code **)(*local_240 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
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
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*local_d0 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_220 != (long *)0x0) {
        (**(code **)(*local_220 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        lVar7 = local_d8[6];
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
          (**(code **)(*local_d8 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_200 != (long *)0x0) {
        (**(code **)(*local_200 + 0x20))();
      }
      if (local_e0 != (long *)0x0) {
        lVar7 = local_e0[6];
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
          (**(code **)(*local_e0 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_1b8 != (long *)0x0) {
        (**(code **)(*local_1b8 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        lVar7 = local_e8[6];
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
          (**(code **)(*local_e8 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        lVar7 = local_f0[6];
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
          (**(code **)(*local_f0 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        lVar7 = local_f8[6];
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
          (**(code **)(*local_f8 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      if (local_100 != (long *)0x0) {
        lVar7 = local_100[6];
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
          (**(code **)(*local_100 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_108 != (long *)0x0) {
        lVar7 = local_108[6];
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
          (**(code **)(*local_108 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01ee2d44;
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_110 == (long *)0x0) {
        return;
      }
      lVar7 = local_110[6];
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
LAB_01ee2d44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
      pcVar8 = *(code **)(*local_110 + 0x50);
      goto LAB_01ee2fe8;
    }
    local_70 = 0x575e748b9e7916a3;
    pcStack_68 = "NoNeedToConnect";
    local_60 = 0xf;
    local_58 = (long *)0x0;
    FUN_01987400(param_1,&local_70,&DAT_03d5bad0);
    plVar5 = local_58;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  pcVar8 = *(code **)(*plVar5 + 0x20);
LAB_01ee2fe8:
  (*pcVar8)();
  return;
}


