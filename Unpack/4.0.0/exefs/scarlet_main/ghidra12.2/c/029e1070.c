/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e1070; name: FUN_029e1070
 */


undefined4 FUN_029e1070(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  FUN_0135d328(auStack_50,param_3,0);
  local_f8 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0x3f800000;
  local_160 = 0;
  local_158 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0x3f800000;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0x3f800000;
  local_230 = 0;
  local_228 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0x3f800000;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_100 = 0x7ffffffffffffff;
  local_e8 = 0;
  local_d8 = 0x7ffffffffffffff;
  uStack_d0 = 0;
  local_180 = 0;
  uStack_178 = 0;
  uStack_168 = 0x7ffffffffffffff;
  local_150 = 0;
  local_140 = 0x7ffffffffffffff;
  uStack_138 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x7ffffffffffffff;
  local_1b8 = 0;
  local_1a8 = 0x7ffffffffffffff;
  uStack_1a0 = 0;
  local_250 = 0;
  uStack_248 = 0;
  uStack_238 = 0x7ffffffffffffff;
  local_220 = 0;
  local_210 = 0x7ffffffffffffff;
  uStack_208 = 0;
  lVar9 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  local_240 = param_3;
  uStack_218 = param_3;
  local_1d8 = param_3;
  uStack_1b0 = param_3;
  local_170 = param_3;
  uStack_148 = param_3;
  local_108 = param_3;
  uStack_e0 = param_3;
  do {
    if (lVar9 == lVar2) {
      uVar6 = FUN_029e6570(param_2,&local_68,&local_80,&local_98,&local_b0);
      FUN_029e6674(&local_250);
      FUN_029e6674(&local_1e8);
      FUN_029e6674(&local_180);
      FUN_029e6674(&local_118);
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        operator_delete(local_b0);
      }
      if (local_98 != (void *)0x0) {
        local_90 = local_98;
        operator_delete(local_98);
      }
      if (local_80 != (void *)0x0) {
        local_78 = local_80;
        operator_delete(local_80);
      }
      if (local_68 != (void *)0x0) {
        local_60 = local_68;
        operator_delete(local_68);
      }
      FUN_0135d2ec(auStack_50);
      return uVar6;
    }
    lVar7 = *(long *)(lVar9 + 0x20);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_029e1248;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_029e1248:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -8);
            FUN_029e683c(&local_68,param_2,plVar10,&local_118);
            FUN_029e6a40(&local_80,param_2,plVar10,&local_180);
            FUN_029e6c44(&local_98,param_2,plVar10,&local_1e8);
            FUN_029e6e48(&local_b0,param_2,plVar10,&local_250);
            (**(code **)(*plVar10 + 0x18))(plVar10);
          }
          break;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    lVar9 = lVar9 + 0x30;
  } while( true );
}


