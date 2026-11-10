/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a79b8; name: FUN_014a79b8
 */


void FUN_014a79b8(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *local_1e0;
  char *apcStack_1d8 [2];
  long *local_1c8 [2];
  char *pcStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_1c8[1] = (long *)0x7a6fd1f85d7c26b8;
  pcStack_1b8 = "UI_DOWN";
  local_1a0 = 0xad0bf3b5c7f13d7d;
  pcStack_198 = "UI_LEFT";
  local_180 = 0x57aa5aa4b608f856;
  pcStack_178 = "UI_RIGHT";
  local_160 = 0xfd71cdfaf415524c;
  pcStack_158 = "UI_DECIDE";
  local_150 = 9;
  uStack_148 = 0;
  local_130 = 9;
  uStack_128 = 0;
  local_140 = 0xe3b55b156f2b05ae;
  pcStack_138 = "UI_CANCEL";
  local_120 = 0x6db078b8701f693b;
  pcStack_118 = "UI_SP_1";
  local_100 = 0x6db079b8701f6aee;
  pcStack_f8 = "UI_SP_2";
  local_e0 = 0x96790fd49339a7c0;
  puStack_d8 = &DAT_03c18f86;
  local_c0 = 0x96792dd49339daba;
  puStack_b8 = &DAT_03c271ba;
  local_d0 = 4;
  uStack_c8 = 0;
  local_b0 = 4;
  uStack_a8 = 0;
  local_a0 = 0xe9a8b6362b3811ea;
  pcStack_98 = "UI_ZL";
  apcStack_1d8[1] = (char *)0x5;
  local_1c8[0] = (long *)0x0;
  local_90 = 5;
  uStack_88 = 0;
  local_70 = 5;
  uStack_68 = 0;
  local_1b0 = 7;
  uStack_1a8 = 0;
  local_190 = 7;
  uStack_188 = 0;
  local_110 = 7;
  uStack_108 = 0;
  local_f0 = 7;
  uStack_e8 = 0;
  local_80 = 0xe9a8b8362b381550;
  pcStack_78 = "UI_ZR";
  local_50 = 7;
  uStack_48 = 0;
  local_60 = 0x2429249f3137fe7c;
  pcStack_58 = "UI_PLUS";
  local_1e0 = (long *)0xe9b2cc362b408bd1;
  apcStack_1d8[0] = "UI_UP";
  local_170 = 8;
  uStack_168 = 0;
  local_40 = 0x5912f12035c58a34;
  pcStack_38 = "UI_MINUS";
  local_30 = 8;
  uStack_28 = 0;
  if (param_2 < 0xe) {
    uVar3 = (ulong)param_2;
    pcVar1 = apcStack_1d8[uVar3 * 4];
    *param_1 = (&local_1e0)[uVar3 * 4];
    param_1[1] = pcVar1;
    plVar2 = local_1c8[uVar3 * 4];
    param_1[2] = apcStack_1d8[uVar3 * 4 + 1];
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  else {
    *param_1 = 0xe9b2cc362b408bd1;
    param_1[1] = "UI_UP";
    param_1[2] = 5;
    param_1[3] = 0;
  }
  if (local_1c8[0] != (long *)0x0) {
    (**(code **)(*local_1c8[0] + 0x20))();
  }
  return;
}


