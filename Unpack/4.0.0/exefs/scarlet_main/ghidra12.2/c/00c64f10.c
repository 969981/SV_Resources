/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c64f10; name: FUN_00c64f10
 */


void FUN_00c64f10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_628;
  long local_620;
  undefined1 local_618;
  undefined8 local_610;
  undefined4 local_608;
  long local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568;
  undefined1 auStack_564 [260];
  undefined8 local_460;
  undefined1 local_458;
  undefined1 local_450;
  undefined1 local_440;
  undefined1 local_430;
  undefined1 local_420;
  undefined1 local_410;
  undefined1 local_400;
  undefined1 local_3f0;
  undefined1 local_3e0;
  undefined1 local_3d0;
  undefined1 local_3c0;
  undefined1 local_3b0;
  undefined1 local_3a0;
  undefined1 local_390;
  undefined1 local_380;
  undefined1 local_370;
  undefined1 local_360;
  undefined4 local_350;
  undefined1 local_348;
  undefined4 local_338;
  undefined1 local_328;
  undefined1 local_310;
  undefined1 local_300;
  undefined1 local_2f0;
  undefined1 local_2e0;
  undefined1 local_2d0;
  undefined1 local_2c0;
  undefined4 local_2b0;
  undefined1 local_2a8;
  undefined1 local_298;
  undefined1 local_288;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined1 local_250;
  undefined1 local_240;
  undefined1 local_230;
  undefined1 local_220;
  undefined1 local_210;
  undefined1 local_200;
  undefined1 local_1f0;
  undefined1 local_1e0;
  undefined1 local_1d0;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  ulong local_50;
  ulong uStack_48;
  
  puVar6 = *(undefined8 **)(param_1 + 0x208);
  if ((puVar6 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x210) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x30) + 0x10))
              (*puVar6,puVar6[2],puVar6[4],puVar6[6],puVar6[8],puVar6[10],puVar6[0xc],puVar6[0xe]);
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
  FUN_00c4fa44(*(undefined8 *)(param_1 + 0x58),uVar11,
               *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x110));
  local_198 = local_198 & 0xffffffffffffff00;
  local_188 = local_188 & 0xffffffffffffff00;
  local_178 = local_178 & 0xffffffffffffff00;
  local_168 = local_168 & 0xffffffffffffff00;
  local_158 = local_158 & 0xffffffffffffff00;
  local_148 = local_148 & 0xffffffffffffff00;
  local_138 = local_138 & 0xffffffffffffff00;
  local_128 = local_128 & 0xffffffffffffff00;
  local_118 = local_118 & 0xffffffffffffff00;
  local_108 = local_108 & 0xffffffffffffff00;
  local_f8 = local_f8 & 0xffffffffffffff00;
  local_e8 = local_e8 & 0xffffffffffffff00;
  local_d8 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_50 = local_50 & 0xffffffffffffff00;
  lVar4 = param_1;
  do {
    puVar5 = *(ulong **)(*(long *)(lVar4 + 0x58) + 0x180);
    if (puVar5 != (ulong *)0x0) {
      if ((char)local_198 == '\0') {
        local_198 = *puVar5;
        local_190 = puVar5[1];
      }
      if ((char)local_188 == '\0') {
        local_188 = puVar5[9];
        uStack_180 = puVar5[10];
      }
      if ((char)local_178 == '\0') {
        local_178 = puVar5[0x14];
        uStack_170 = puVar5[0x15];
      }
      if ((char)local_168 == '\0') {
        local_168 = puVar5[0x1b];
        uStack_160 = puVar5[0x1c];
      }
      if ((char)local_158 == '\0') {
        local_158 = puVar5[0x22];
        uStack_150 = puVar5[0x23];
      }
      if ((char)local_148 == '\0') {
        local_148 = puVar5[0x24];
        uStack_140 = puVar5[0x25];
      }
      if ((char)local_138 == '\0') {
        local_138 = puVar5[0x26];
        uStack_130 = puVar5[0x27];
      }
      if ((char)local_128 == '\0') {
        local_128 = puVar5[0x28];
        uStack_120 = puVar5[0x29];
      }
      if ((char)local_118 == '\0') {
        local_118 = puVar5[0x2a];
        uStack_110 = puVar5[0x2b];
      }
      if ((char)local_108 == '\0') {
        local_108 = puVar5[0x2c];
        uStack_100 = puVar5[0x2d];
      }
      if ((char)local_f8 == '\0') {
        local_f8 = puVar5[0x2e];
        uStack_f0 = puVar5[0x2f];
      }
      if ((char)local_e8 == '\0') {
        local_e8 = puVar5[0x30];
        uStack_e0 = puVar5[0x31];
      }
      if ((char)local_50 == '\0') {
        local_50 = puVar5[0x3b];
        uStack_48 = puVar5[0x3c];
      }
    }
    lVar4 = *(long *)(lVar4 + 0x148);
  } while (lVar4 != 0);
  plVar1 = (long *)(param_1 + 0x2e8);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00c65128;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c65128;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00c65128:
  piVar7 = *(int **)(param_1 + 0x2b8);
  piVar9 = *(int **)(param_1 + 0x2b0);
  local_d8 = piVar7 != piVar9;
  if ((bool)local_d8) {
    *(int *)((long)&local_d4 + (ulong)(uint)(*piVar9 << 2) * 4) = piVar9[1];
    *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 1) * 4) = piVar9[2];
    *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 2) * 4) = piVar9[3];
    *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 3) * 4) = piVar9[4];
    while (piVar9 = piVar9 + 5, piVar9 != piVar7) {
      *(int *)((long)&local_d4 + (ulong)(uint)(*piVar9 << 2) * 4) = piVar9[1];
      *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 1) * 4) = piVar9[2];
      *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 2) * 4) = piVar9[3];
      *(int *)((long)&local_d4 + (ulong)(*piVar9 << 2 | 3) * 4) = piVar9[4];
    }
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  local_620 = 0;
  local_618 = 0;
  local_610 = 0;
  local_608 = 0;
  local_450 = 0;
  local_568 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_628 = uVar11;
  memset(auStack_564,0,0x101);
  local_350 = 2;
  local_338 = 1;
  local_2b0 = 4;
  local_268 = 0xffffffffffffffff;
  local_270 = 0xffffffffffffffff;
  local_278 = 0xffffffffffffffff;
  local_1c0 = 0xbf800000;
  local_460 = 0;
  local_458 = 0;
  local_440 = 0;
  local_430 = 0;
  local_420 = 0;
  local_410 = 0;
  local_400 = 0;
  local_3f0 = 0;
  local_3e0 = 0;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3b0 = 0;
  local_3a0 = 0;
  local_390 = 0;
  local_380 = 0;
  local_370 = 0;
  local_360 = 0;
  local_348 = 0;
  local_328 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_298 = 0;
  local_288 = 0;
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
  local_1bc = 0;
  local_1b4 = 0;
  local_1b0 = 0x3f800000bf800000;
  local_1a8 = 0x3f800000;
  local_1a0 = 0;
  pcVar8 = (char *)(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x18);
  local_600 = *(long *)(pcVar8 + 8);
  local_618 = 0;
  if (*pcVar8 != '\0') {
    *(undefined8 *)(local_600 + 0x140) = 0;
    FUN_00c50980(local_600);
    FUN_00c50d00(local_600);
    if (local_600 != 0) {
      local_620 = local_600;
      (**(code **)PTR_DAT_047e0c70)(local_600);
      lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x180);
      if (lVar4 == 0) {
        if (*(long *)(*(long *)(param_1 + 0x58) + 0x1c0) != 0) {
          FUN_00c56860(0,&local_628,&local_198);
        }
      }
      else {
        FUN_00c51134(lVar4,&local_628,&local_198);
      }
      uVar11 = (**(code **)PTR_DAT_047e0c78)(local_600);
      *(undefined8 *)(local_620 + 0xa0) = uVar11;
      pcVar8 = (char *)(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x18);
      uVar11 = 0;
      if ((*pcVar8 != '\0') && (lVar4 = *(long *)(pcVar8 + 8), lVar4 != 0)) {
        uVar11 = *(undefined8 *)(lVar4 + 0xa0);
      }
      if (*(undefined8 **)(param_1 + 0xe0) != *(undefined8 **)(param_1 + 0xd8)) {
        **(undefined8 **)(param_1 + 0xd8) = uVar11;
        if (2 < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
          *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x10) = uVar11;
          if (4 < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
            *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x20) = uVar11;
            if (6 < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
              *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x30) = uVar11;
              if (8 < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
                *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x40) = uVar11;
                if (10 < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
                  *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x50) = uVar11;
                  if (0xc < (ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3)) {
                    *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x60) = uVar11;
                    lVar4 = *(long *)(param_1 + 0xd8);
                    if (0xe < (ulong)(*(long *)(param_1 + 0xe0) - lVar4 >> 3)) {
                      uVar10 = 0xe;
                      do {
                        *(undefined8 *)(lVar4 + uVar10 * 8) = uVar11;
                        uVar10 = uVar10 + 2;
                        lVar4 = *(long *)(param_1 + 0xd8);
                      } while (uVar10 < (ulong)(*(long *)(param_1 + 0xe0) - lVar4 >> 3));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


