/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292b9f8; name: FUN_0292b9f8
 */


void FUN_0292b9f8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x30;
  long *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  long *local_40;
  ulong local_38;
  long *local_30;
  undefined1 auStack_28 [8];
  
  switch(*(undefined1 *)(param_1 + 0x2b0)) {
  case 1:
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_38 = FUN_01498338();
    FUN_0292a980(&local_30,uVar6,&local_38,auStack_28);
    local_40 = local_30;
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01498340(param_1,&local_40);
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292bc18;
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0292bc18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  case 2:
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_38 = FUN_01498338();
    FUN_00f7dbc0(&local_30,uVar6,&local_38,auStack_28);
    local_40 = local_30;
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01498340(param_1,&local_40);
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292c22c;
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0292c22c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  case 3:
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_38 = FUN_01498338();
    FUN_0292aa54(&local_30,uVar6,&local_38,auStack_28);
    local_40 = local_30;
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01498340(param_1,&local_40);
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292bdb8;
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0292bdb8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  case 4:
    local_260 = 0;
    local_250 = 0;
    local_240 = 0;
    local_230 = 0;
    local_220 = 0;
    local_210 = 0;
    local_200 = 0;
    local_1f0 = 0;
    local_1e0 = 0;
    local_1d0 = 0;
    local_1c0 = 0;
    local_1b0 = 0;
    local_1a0 = 0;
    local_190 = 0;
    local_180 = 0;
    local_170 = 0;
    local_160 = 0;
    local_150 = 0;
    local_140 = 0;
    local_130 = 0;
    local_120 = 0;
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_80 = 0;
    local_70 = 0;
    local_60 = 0;
    local_50 = 0;
    local_40 = (long *)((ulong)local_40 & 0xffffffff00000000);
    local_268 = 0;
    local_258 = 0;
    local_248 = 0;
    local_238 = 0;
    local_228 = 0;
    local_218 = 0;
    local_208 = 0;
    local_1f8 = 0;
    local_1e8 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_198 = 0;
    local_188 = 0;
    local_178 = 0;
    local_168 = 0;
    local_158 = 0;
    local_148 = 0;
    local_138 = 0;
    local_128 = 0;
    local_118 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_88 = 0;
    local_78 = 0;
    local_68 = 0;
    local_58 = 0;
    local_48 = 0;
    local_38 = local_38 & 0xffffff0000000000;
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_270 = FUN_01498338();
    FUN_0292934c(auStack_28 + 0x10,uVar6,&local_270,&local_268);
    local_278 = unaff_x30;
    if (unaff_x30 != (long *)0x0) {
      lVar7 = unaff_x30[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01498340(param_1,&local_278);
    if (local_278 != (long *)0x0) {
      lVar7 = local_278[6];
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
        (**(code **)(*local_278 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292c08c;
    }
    if (unaff_x30 != (long *)0x0) {
      lVar7 = unaff_x30[6];
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
        (**(code **)(*unaff_x30 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0292c08c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  case 5:
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_38 = FUN_01498338();
    FUN_0292ab28(&local_30,uVar6,&local_38,auStack_28);
    local_40 = local_30;
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01498340(param_1,&local_40);
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292c3cc;
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0292c3cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  default:
    return;
  case 7:
    uVar5 = FUN_00f7e8a0(param_1);
    if ((uVar5 & 1) != 0) {
      return;
    }
    FUN_00f7d510(param_1);
    break;
  case 8:
    FUN_00f7de34(param_1);
    return;
  case 9:
    uVar6 = FUN_01497d84(param_1);
    FUN_00f7d570(uVar6,6,3,0);
  }
  FUN_017e4fe4(param_1);
  FUN_00f7d4c8();
  FUN_00f7d7f4(param_1);
  return;
}


