/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012425b0; name: FUN_012425b0
 */


void FUN_012425b0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2d0 [8];
  undefined8 local_2c8;
  undefined8 *puStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
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
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN_012427fc();
  if (*(int *)(lVar2 + 0x7c) == 0) {
    lVar2 = FUN_012427fc(param_1);
    FUN_0106dd84(lVar2,0);
    if ((*(int *)(lVar2 + 0x7c) != 0) && (uVar3 = FUN_01242804(lVar2), (uVar3 & 1) == 0)) {
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_0124fb2c(lVar2,&local_80);
      uVar1 = *(uint *)(lVar2 + 0x7c);
      local_2b0 = 0;
      local_2a0 = 0;
      local_290 = 0;
      local_280 = 0;
      local_270 = 0;
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
      local_2b8 = 0;
      local_2a8 = 0;
      local_298 = 0;
      local_288 = 0;
      local_278 = 0;
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
      local_84 = 0;
      local_88 = 0;
      if ((uVar1 != 0) &&
         ((FUN_0106fc54(&local_248,&local_80), uVar1 != 1 &&
          (FUN_0106fc54(&local_238,&local_70), uVar1 != 2)))) {
        puVar5 = &local_228;
        lVar2 = (ulong)uVar1 - 2;
        puVar6 = &local_60;
        do {
          FUN_0106fc54(puVar5,puVar6);
          lVar2 = lVar2 + -1;
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + 2;
        } while (lVar2 != 0);
      }
      local_88._0_2_ = CONCAT11((char)uVar1,(undefined1)local_88);
      local_2c8 = FUN_01249340(param_1);
      puStack_2c0 = &local_2b8;
      FUN_01461214(param_1);
      uVar4 = FUN_01245bd8();
      FUN_01245be0(uVar4,auStack_2d0,&local_2c8);
    }
  }
  return;
}


