/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00facfc8; name: FUN_00facfc8
 */


uint FUN_00facfc8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined1 *param_8,byte param_9
                 )

{
  uint uVar1;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_48;
  byte local_47;
  undefined1 local_46;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  
  local_118 = 0x3f8000003f800000;
  uStack_110 = 0;
  local_47 = param_9 & 1;
  local_f8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xffffffff00000000;
  local_120 = auStack_150 +
              -((long)*(int *)PTR_DAT_047d2270 * 0x30 + (long)*(int *)PTR_DAT_047d2288 * 8 +
                (long)*(int *)PTR_DAT_047d2278 * 0x18 + (long)*(int *)PTR_DAT_047d2280 * 0x68 +
                0x4fU & 0xfffffffffffffff0);
  local_128 = (undefined8 *)0x0;
  local_78 = &local_148;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_70 = param_8[0x19];
  local_48 = *param_8;
  local_46 = param_8[0x18];
  local_68 = *(undefined8 *)(param_8 + 8);
  uStack_60 = *(undefined8 *)(param_8 + 0x10);
  local_44 = *(undefined4 *)(param_7 + 8);
  local_40 = param_8[0x1a];
  local_3f = param_8[0x1b];
  local_3e = param_8[0x1c];
  local_3d = param_8[0x1d];
  local_3c = param_8[0x1e];
  local_3b = param_8[0x1f];
  local_3a = param_8[0x20];
  local_39 = param_8[0x21];
  local_38 = 0;
  local_108 = param_5;
  uStack_100 = param_6;
  plStack_f0 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x70))();
  if ((local_128 != (undefined8 *)0x0) &&
     (FUN_00896f20(&local_148,param_3), local_128 != (undefined8 *)0x0)) {
    *local_128 = 0;
    local_128[2] = 0;
    local_128[4] = 0;
  }
  return uVar1 & 1;
}


