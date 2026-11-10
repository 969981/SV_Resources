/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02116bc8; name: FUN_02116bc8
 */


void FUN_02116bc8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long *local_278;
  uint local_270 [4];
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
  char local_40 [8];
  undefined4 local_38;
  long *local_18;
  
  uVar5 = (ulong)*(byte *)(param_1 + 0x38);
  local_270[2] = 0;
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
  local_270[0] = 0;
  local_270[1] = 0;
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
  local_40[4] = 0;
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_38 = 0x23;
  local_270[uVar5 * 0x1c] = local_270[uVar5 * 0x1c] & 0xfffffff0 | 8;
  local_40[uVar5] = local_40[uVar5] + '\x01';
  FUN_0106f324(&local_18,*(undefined8 *)(param_1 + 0x30));
  if (local_18 != (long *)0x0) {
    FUN_0106fd7c(local_18,0x21);
    lVar7 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))(local_18);
    }
    else if (sVar2 == 0) {
      pcVar6 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
      ;
      goto LAB_02116e54;
    }
  }
  FUN_0106ffb8(&local_278,*(undefined8 *)(param_1 + 0x10),local_270);
  FUN_0106f730(param_1,&local_278);
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
    else if (sVar2 == 0) {
      pcVar6 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
LAB_02116e54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",pcVar6,0x60,
                 "Reference counter underflows.");
    }
  }
  return;
}


