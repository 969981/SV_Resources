/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019826d8; name: FUN_019826d8
 */


undefined8 FUN_019826d8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  long *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  int local_38 [2];
  
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 1) {
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
    uVar6 = FUN_00f63380(uVar10,uVar11,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00f63380(uVar10,uVar11,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00f63380(uVar10,uVar11,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00f63380(uVar10,uVar11,3);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00f63380(uVar10,uVar11,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
LAB_019828c0:
    FUN_01497d74(param_1);
    return 0;
  }
  if (iVar5 != 2) {
    if (iVar5 != 0) {
      return 2;
    }
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
    local_270 = (long *)0x0;
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
    local_3c = 0;
    local_40 = 0;
    FUN_0123bac0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),&local_270);
    FUN_0123bab8(&local_288,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),0x25);
    *(undefined1 *)(param_1 + 0x90) = local_278;
    *(undefined8 *)(param_1 + 0x80) = local_288;
    *(undefined8 *)(param_1 + 0x88) = uStack_280;
    goto LAB_019828c0;
  }
  if (*(char *)(param_1 + 0x78) == '\b') {
    FUN_01982e24(param_1);
    return 2;
  }
  iVar5 = FUN_01982b14(param_1);
  local_38[0] = 0x35;
  if (iVar5 != 0) {
    local_38[0] = iVar5;
  }
  local_288 = *(undefined8 *)(param_1 + 0x40);
  FUN_01982bb8(&local_270,*(undefined8 *)(param_1 + 8),&local_288,local_38);
  plVar7 = local_270;
  if (local_270 == (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar7 != (long *)0x0) {
      lVar12 = plVar7[6];
      psVar1 = (short *)(lVar12 + 0x1a);
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
        *(undefined8 *)(lVar12 + 0x10) = 0;
        pcVar9 = *(code **)(*plVar7 + 0x50);
        goto LAB_01982aa0;
      }
      if (sVar2 == 0) {
        pcVar8 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
        ;
        goto LAB_019829d0;
      }
    }
LAB_01982984:
    if (local_270 == (long *)0x0) {
      return 2;
    }
    lVar12 = local_270[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_270 + 0x50))();
      return 2;
    }
    if (sVar2 != 0) {
      return 2;
    }
  }
  else {
    lVar12 = local_270[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar10;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_014985a8(param_1 + 0x70,plVar7);
    lVar12 = plVar7[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      pcVar9 = *(code **)(*plVar7 + 0x50);
LAB_01982aa0:
      (*pcVar9)(plVar7);
      goto LAB_01982984;
    }
    if (sVar2 != 0) goto LAB_01982984;
  }
  pcVar8 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
  ;
LAB_019829d0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",pcVar8,0x60,
             "Reference counter underflows.");
}


