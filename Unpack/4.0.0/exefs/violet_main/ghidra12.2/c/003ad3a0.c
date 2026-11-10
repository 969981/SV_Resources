/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ad3a0; name: FUN_003ad3a0
 */


undefined8 FUN_003ad3a0(undefined4 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *__s;
  undefined1 auVar6 [16];
  undefined4 local_218 [2];
  long local_210;
  undefined8 uStack_208;
  undefined4 local_200 [2];
  long local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8 [2];
  char *local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0 [2];
  char *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8 [2];
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0 [2];
  long local_198;
  undefined8 uStack_190;
  undefined4 local_188 [2];
  char *local_180;
  undefined8 uStack_178;
  undefined1 local_16c [4];
  undefined4 local_168 [2];
  undefined1 *local_160;
  undefined8 uStack_158;
  undefined4 local_150 [2];
  undefined4 *local_148;
  undefined8 uStack_140;
  undefined4 local_138 [2];
  undefined4 *local_130;
  undefined8 uStack_128;
  undefined4 local_120 [2];
  undefined4 *local_118;
  undefined8 uStack_110;
  ushort local_104 [2];
  undefined4 local_100 [2];
  ushort *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 *puStack_d8;
  undefined4 *local_d0;
  undefined4 *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 *local_a0;
  ulong uStack_98;
  undefined4 *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  undefined4 *local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined4 *puStack_48;
  undefined8 local_40;
  undefined4 *puStack_38;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x7c) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x7e);
    if (uVar4 == 0) {
      return 0;
    }
    local_e4 = *param_1;
  }
  else {
    local_e4 = *param_1;
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x7c) + 0x18);
  }
  puStack_38 = (undefined4 *)0x0;
  local_40 = 0;
  puStack_48 = (undefined4 *)0x0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = (undefined4 *)0x0;
  puStack_68 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  puStack_78 = (undefined4 *)0x0;
  local_80 = 0;
  lStack_88 = 0;
  local_90 = (undefined4 *)0x0;
  local_c0 = 0;
  puStack_d8 = (undefined4 *)0x0;
  local_e8 = 1;
  local_104[0] = (ushort)(uVar4 >> 8) & 0xff | (ushort)(((uint)uVar4 & 0xff00ff) << 8);
  local_100[0] = 2;
  local_f8 = local_104;
  uStack_f0 = 0;
  local_e0 = local_100;
  if (param_1[0x7a] != 0) {
    local_16c[0] = (undefined1)param_1[0x7a];
    local_160 = local_16c;
    uStack_158 = 0;
    puStack_d8 = local_168;
    local_168[0] = 1;
  }
  local_118 = param_1 + 0x14;
  local_120[0] = (undefined4)*(undefined8 *)(param_1 + 2);
  uStack_110 = 0;
  local_d0 = local_120;
  local_130 = param_1 + 0x56;
  uStack_128 = 0;
  puStack_c8 = local_138;
  local_148 = param_1 + 0x60;
  local_138[0] = (undefined4)*(undefined8 *)(param_1 + 0x54);
  uStack_140 = 0;
  local_a0 = local_150;
  local_150[0] = (undefined4)*(undefined8 *)(param_1 + 0x5e);
  auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x76),*(undefined1 (*) [16])(param_1 + 0x76),8,
                    1);
  local_b0 = auVar6._8_8_;
  uStack_b8 = auVar6._0_8_;
  uStack_98 = *(ulong *)(param_1 + 0x72) & 0xffffffff;
  uStack_a8 = *(undefined8 *)(param_1 + 0x6e);
  pcVar5 = *(char **)(param_1 + 0x86);
  if (pcVar5 == (char *)0x0) {
    local_90 = (undefined4 *)0x0;
    lVar3 = *(long *)(param_1 + 0x88);
  }
  else {
    sVar1 = strlen(pcVar5);
    local_90 = local_188;
    local_188[0] = (undefined4)sVar1;
    uStack_178 = 0;
    lVar3 = *(long *)(param_1 + 0x88);
    local_180 = pcVar5;
  }
  if (lVar3 != 0) {
    uStack_190 = 0;
    puStack_78 = local_1a0;
    local_1a0[0] = (undefined4)*(undefined8 *)(param_1 + 0x8a);
    local_198 = lVar3;
  }
  if (*(long *)(param_1 + 0x8c) != 0) {
    lStack_88 = *(long *)(param_1 + 0x8c);
  }
  uVar4 = (ulong)local_80 >> 0x20;
  local_80 = CONCAT44((int)uVar4,param_1[0x8e]);
  pcVar5 = *(char **)(param_1 + 0x68);
  if (pcVar5 == (char *)0x0) {
    local_70 = (undefined4 *)0x0;
    __s = *(char **)(param_1 + 0x6a);
  }
  else {
    sVar1 = strlen(pcVar5);
    local_70 = local_1e8;
    local_1e8[0] = (undefined4)sVar1;
    uStack_1d8 = 0;
    __s = *(char **)(param_1 + 0x6a);
    local_1e0 = pcVar5;
  }
  if (__s == (char *)0x0) {
    puStack_68 = (undefined4 *)0x0;
    pcVar5 = *(char **)(param_1 + 0x96);
  }
  else {
    sVar1 = strlen(__s);
    puStack_68 = local_1d0;
    local_1d0[0] = (undefined4)sVar1;
    uStack_1c0 = 0;
    pcVar5 = *(char **)(param_1 + 0x96);
    local_1c8 = __s;
  }
  if (pcVar5 == (char *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    sVar1 = strlen(pcVar5);
    local_60 = local_1b8;
    local_1b8[0] = (undefined4)sVar1;
    uStack_1a8 = 0;
    local_1b0 = pcVar5;
  }
  uStack_58 = (ulong)(uint)param_1[0x9c];
  local_50 = CONCAT44(local_50._4_4_,param_1[0x8f]);
  puStack_48 = (undefined4 *)0x0;
  if (*(long *)(param_1 + 0x90) != 0) {
    uStack_1f0 = 0;
    puStack_48 = local_200;
    local_200[0] = (undefined4)*(undefined8 *)(param_1 + 0x92);
    local_1f8 = *(long *)(param_1 + 0x90);
  }
  local_40 = CONCAT44(local_40._4_4_,(uint)*(byte *)(param_1 + 0x94));
  puStack_38 = (undefined4 *)0x0;
  if (*(long *)(param_1 + 0x98) != 0) {
    uStack_208 = 0;
    puStack_38 = local_218;
    local_218[0] = (undefined4)*(undefined8 *)(param_1 + 0x9a);
    local_210 = *(long *)(param_1 + 0x98);
  }
  uVar2 = FUN_003e3920(&local_e8,param_2,&DAT_0449b8b8);
  return uVar2;
}


