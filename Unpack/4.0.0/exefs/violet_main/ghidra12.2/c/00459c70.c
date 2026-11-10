/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00459c70; name: FUN_00459c70
 */


long FUN_00459c70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                 ulong param_5,code *param_6)

{
  undefined8 *__dest;
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar3 = 0;
  if ((param_5 - 0x10 < 0x7ffffff1) && ((param_5 & 7) == 0)) {
    __dest = param_3 + 1;
    memmove(__dest,param_4,param_5);
    puVar6 = &DAT_03cfa5a8;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = param_2;
    }
    local_60 = *puVar6;
    uVar5 = 0;
    uVar4 = 1;
    puVar6 = __dest;
    do {
      local_58 = *puVar6;
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
      *puVar6 = local_58;
      puVar6 = puVar6 + 1;
    } while (uVar5 < param_5);
    uVar5 = 0;
    do {
      local_58 = *(undefined8 *)((long)__dest + uVar5);
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      *(undefined8 *)((long)__dest + uVar5) = local_58;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_5);
    uVar5 = 0;
    do {
      local_58 = *(undefined8 *)((long)__dest + uVar5);
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      *(undefined8 *)((long)__dest + uVar5) = local_58;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_5);
    uVar5 = 0;
    do {
      local_58 = *(undefined8 *)((long)__dest + uVar5);
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      *(undefined8 *)((long)__dest + uVar5) = local_58;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_5);
    uVar5 = 0;
    do {
      local_58 = *(undefined8 *)((long)__dest + uVar5);
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      *(undefined8 *)((long)__dest + uVar5) = local_58;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_5);
    uVar5 = 0;
    do {
      local_58 = *(undefined8 *)((long)__dest + uVar5);
      (*param_6)(&local_60,&local_60,param_1);
      uVar2 = local_60;
      bVar1 = local_60._7_1_ ^ (byte)uVar4;
      local_60 = CONCAT17(bVar1,(undefined7)local_60);
      if (0xff < uVar4) {
        local_60._6_1_ = SUB81(uVar2,6);
        local_60._5_1_ = SUB81(uVar2,5);
        local_60._4_1_ = SUB81(uVar2,4);
        local_60._0_4_ = (undefined4)uVar2;
        local_60._0_5_ = CONCAT14(local_60._4_1_ ^ (byte)(uVar4 >> 0x18),(undefined4)local_60);
        local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar4 >> 8)),
                                     local_60._5_1_ ^ (byte)(uVar4 >> 0x10)),(undefined5)local_60);
      }
      *(undefined8 *)((long)__dest + uVar5) = local_58;
      uVar5 = uVar5 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar5 < param_5);
    lVar3 = param_5 + 8;
    *param_3 = local_60;
  }
  return lVar3;
}


