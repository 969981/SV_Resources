/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00426460; name: FUN_00426460
 */


void FUN_00426460(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [64];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  
  uStack_2a8 = param_2[1];
  local_2b0 = *param_2;
  uStack_298 = param_2[3];
  uStack_2a0 = param_2[2];
  uStack_288 = param_2[5];
  local_290 = param_2[4];
  uStack_278 = param_2[7];
  uStack_280 = param_2[6];
  uStack_268 = param_2[9];
  local_270 = param_2[8];
  uStack_258 = param_2[0xb];
  uStack_260 = param_2[10];
  uStack_248 = param_2[0xd];
  local_250 = param_2[0xc];
  uStack_238 = param_2[0xf];
  uStack_240 = param_2[0xe];
  uStack_228 = param_2[0x11];
  local_230 = param_2[0x10];
  uStack_218 = param_2[0x13];
  uStack_220 = param_2[0x12];
  uStack_208 = param_2[0x15];
  local_210 = param_2[0x14];
  uStack_1f8 = param_2[0x17];
  uStack_200 = param_2[0x16];
  uStack_1e8 = param_2[0x19];
  local_1f0 = param_2[0x18];
  uStack_1d8 = param_2[0x1b];
  uStack_1e0 = param_2[0x1a];
  uStack_1c8 = param_2[0x1d];
  local_1d0 = param_2[0x1c];
  uStack_1b8 = param_2[0x1f];
  uStack_1c0 = param_2[0x1e];
  FUN_0042bb00(auStack_f0,&local_2b0);
  FUN_0042bb00(auStack_1b0,&local_270);
  FUN_0042a790(auStack_70,auStack_f0,auStack_1b0);
  FUN_0042a790(&local_170,&local_270,&local_2b0);
  FUN_0042bb00(auStack_130,&local_170);
  FUN_0042ab30(auStack_130,auStack_130,auStack_70);
  FUN_0042ab30(&local_170,auStack_1b0,auStack_f0);
  FUN_0042bb00(auStack_f0,&local_230);
  FUN_0042a790(auStack_1b0,auStack_f0,auStack_f0);
  FUN_0042ab30(auStack_1b0,auStack_1b0,&local_170);
  FUN_0042b500(auStack_f0,auStack_1b0,auStack_130);
  FUN_0042b500(auStack_130,&local_170,auStack_70);
  FUN_0042b500(&local_170,auStack_70,auStack_1b0);
  FUN_00453300(auStack_70,0x40);
  FUN_0042bb00(auStack_70,&local_170);
  FUN_0042add0(&local_b0,auStack_70);
  FUN_0042bb00(auStack_70,&local_b0);
  FUN_0042b500(&local_b0,auStack_70,&local_170);
  uStack_168 = uStack_a8;
  local_170 = local_b0;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  uStack_148 = uStack_88;
  local_150 = local_90;
  uStack_138 = uStack_78;
  uStack_140 = uStack_80;
  FUN_0042b500(auStack_1b0,auStack_f0,&local_170);
  FUN_0042b500(auStack_f0,auStack_130,&local_170);
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_0042a420(param_1,auStack_f0,1);
  bVar1 = FUN_0042a940(auStack_1b0);
  *(byte *)(param_1 + 0x38) = bVar1 & 0x80 | *(byte *)(param_1 + 0x38);
  FUN_00453300(auStack_f0,0x40);
  FUN_00453300(auStack_130,0x40);
  FUN_00453300(&local_170,0x40);
  FUN_00453300(auStack_1b0,0x40);
  FUN_00453300(&local_2b0,0x100);
  return;
}


