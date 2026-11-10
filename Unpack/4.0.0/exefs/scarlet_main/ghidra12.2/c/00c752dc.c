/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c752dc; name: FUN_00c752dc
 */


void FUN_00c752dc(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  int *piVar14;
  ulong local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined4 local_308;
  ulong local_300 [2];
  int local_2f0 [4];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  long local_170;
  undefined1 local_80 [16];
  long local_70;
  
  local_1e8 = 0;
  local_300[1] = 0;
  local_2f0[0] = 0;
  local_2f0[1] = 0;
  local_1f0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_188 = 0;
  local_190 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_208 = 0;
  uStack_200 = 0;
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar11 = 0;
    uVar6 = 0;
    do {
      plVar7 = (long *)(param_2 + uVar6 * 0x48);
      piVar14 = (int *)*plVar7;
      piVar2 = (int *)plVar7[1];
      if (piVar14 == piVar2) {
        uVar4 = 0;
      }
      else {
        iVar12 = (int)uVar6;
        if (*piVar14 != 0) {
          *(int *)(local_300 + uVar11 * 3) = *piVar14;
          local_2f0[uVar11 * 6] = piVar14[1];
          local_2f0[uVar11 * 6 + 1] = iVar12;
          local_300[uVar11 * 3 + 1] = 0;
          uVar11 = (ulong)((int)uVar11 + 1);
        }
        uVar4 = FUN_00c75660(piVar14[1]);
        uVar4 = uVar4 & 0xffffffff;
        if (piVar14 + 2 != piVar2) {
          iVar3 = piVar14[2];
          if (iVar3 != 0) {
            *(int *)(local_300 + uVar11 * 3) = iVar3;
            local_2f0[uVar11 * 6] = piVar14[3];
            local_2f0[uVar11 * 6 + 1] = iVar12;
            local_300[uVar11 * 3 + 1] = uVar4;
            uVar11 = (ulong)((int)uVar11 + 1);
          }
          uVar5 = FUN_00c75660(piVar14[3]);
          uVar4 = uVar4 + (uVar5 & 0xffffffff);
          if (piVar14 + 4 != piVar2) {
            iVar3 = piVar14[4];
            if (iVar3 != 0) {
              *(int *)(local_300 + uVar11 * 3) = iVar3;
              local_2f0[uVar11 * 6] = piVar14[5];
              local_2f0[uVar11 * 6 + 1] = iVar12;
              local_300[uVar11 * 3 + 1] = uVar4;
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            uVar5 = FUN_00c75660(piVar14[5]);
            uVar4 = uVar4 + (uVar5 & 0xffffffff);
            if (piVar14 + 6 != piVar2) {
              uVar5 = uVar11;
              piVar14 = piVar14 + 7;
              do {
                uVar11 = uVar5;
                if (piVar14[-1] != 0) {
                  uVar11 = (ulong)((int)uVar5 + 1);
                  *(int *)(local_300 + uVar5 * 3) = piVar14[-1];
                  local_2f0[uVar5 * 6] = *piVar14;
                  local_2f0[uVar5 * 6 + 1] = iVar12;
                  local_300[uVar5 * 3 + 1] = uVar4;
                }
                uVar5 = FUN_00c75660(*piVar14);
                uVar4 = uVar4 + (uVar5 & 0xffffffff);
                piVar1 = piVar14 + 1;
                uVar5 = uVar11;
                piVar14 = piVar14 + 2;
              } while (piVar1 != piVar2);
            }
          }
        }
      }
      uVar9 = (uint)uVar11;
      uVar5 = uVar6 + 1;
      (&local_400)[uVar6 * 2] = uVar4;
      uVar6 = uVar5;
    } while (uVar5 != param_3);
  }
  memset(local_180,0,0x100);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar11 = (ulong)uVar9;
    puVar13 = local_300 + 1;
    do {
      uVar6 = (**(code **)(*DAT_0485a020 + 0x10))
                        (DAT_0485a020,(int)puVar13[-1],*(undefined4 *)(param_1 + 0x100));
      if ((uVar6 & 0xff) != 0) {
        uVar4 = puVar13[1];
        uVar9 = (uint)(uVar6 >> 0x20);
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        *(ulong *)(local_180 + (uVar6 >> 0x20) * 0x10) = *puVar13;
        *(ulong *)(local_180 + ((uVar6 >> 0x20) * 2 + 1) * 8) = uVar4;
        uVar10 = uVar9;
      }
      uVar11 = uVar11 - 1;
      puVar13 = puVar13 + 3;
    } while (uVar11 != 0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  local_80._0_8_ = *(undefined8 *)(lVar8 + 8);
  local_80._8_8_ = *(undefined8 *)(lVar8 + 0x6098);
  local_70 = lVar8 + 0x10;
  local_80 = FUN_00c7642c(*(undefined8 *)(lVar8 + 0x6180),local_80,local_180,uVar10 + 1);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
  local_180._0_8_ = *(undefined8 *)(lVar8 + 8);
  local_180._8_8_ = *(undefined8 *)(lVar8 + 0x6098);
  local_170 = lVar8 + 0x10;
  local_180 = FUN_00c76ba4(*(undefined8 *)(lVar8 + 0x61a0),local_180,&local_400,param_3);
  FUN_00c77db8(*(undefined8 *)(param_1 + 200),local_80,local_180);
  return;
}


