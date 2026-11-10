/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045a040; name: FUN_0045a040
 */


ulong FUN_0045a040(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                  long param_5,code *param_6)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong __n;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = 0;
  if ((param_5 - 0x18U < 0x7ffffff1) && (__n = param_5 - 8, (__n & 7) == 0)) {
    uVar5 = *param_4;
    local_70 = uVar5;
    memmove(param_3,param_4 + 1,__n);
    if (__n != 0) {
      uVar7 = 0;
      puVar4 = (undefined8 *)((long)param_3 + __n);
      uVar6 = (__n >> 3) * 6;
      while( true ) {
        uVar3 = local_70;
        puVar4 = puVar4 + -1;
        bVar2 = (byte)((ulong)uVar5 >> 0x38) ^ (byte)uVar6;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar3,6);
          local_70._5_1_ = SUB81(uVar3,5);
          local_70._4_1_ = SUB81(uVar3,4);
          local_70._0_4_ = (undefined4)uVar3;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        *puVar4 = local_68;
        if (__n <= uVar7) break;
        uVar6 = uVar6 - 1;
        uVar5 = local_70;
      }
      uVar7 = 0;
      lVar10 = -2;
      do {
        uVar5 = local_70;
        uVar1 = uVar6 + lVar10 + 1;
        bVar2 = local_70._7_1_ ^ (byte)uVar1;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar1) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar1 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar1 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar1 >> 0x10)),(undefined5)local_70)
          ;
        }
        lVar11 = lVar10 * 8;
        local_68 = *(undefined8 *)((long)param_3 + lVar11 + param_5);
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        lVar10 = lVar10 + -1;
        *(undefined8 *)((long)param_3 + lVar11 + param_5) = local_68;
      } while (uVar7 < __n);
      uVar7 = 0;
      puVar4 = (undefined8 *)((long)param_3 + param_5 + -0x10);
      lVar10 = uVar6 + lVar10;
      lVar11 = 0;
      do {
        uVar5 = local_70;
        uVar6 = lVar10 + lVar11 + 1;
        bVar2 = local_70._7_1_ ^ (char)lVar10 + (char)lVar11 + 1U;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar6) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar6 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar6 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar6 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = puVar4[lVar11];
        (*param_6)(&local_70,&local_70,param_1);
        uVar7 = uVar7 + 8;
        lVar8 = lVar11 + -1;
        puVar4[lVar11] = local_68;
        lVar11 = lVar8;
      } while (uVar7 < __n);
      uVar6 = 0;
      uVar7 = lVar10 + lVar8 + 1;
      puVar9 = puVar4;
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar7;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar7) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar7 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar7 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar7 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar9;
        (*param_6)(&local_70,&local_70,param_1);
        uVar6 = uVar6 + 8;
        uVar7 = uVar7 - 1;
        *puVar9 = local_68;
        puVar9 = puVar9 + -1;
      } while (uVar6 < __n);
      uVar6 = 0;
      puVar9 = puVar4;
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar7;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar7) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar7 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar7 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar7 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar9;
        (*param_6)(&local_70,&local_70,param_1);
        uVar6 = uVar6 + 8;
        uVar7 = uVar7 - 1;
        *puVar9 = local_68;
        puVar9 = puVar9 + -1;
      } while (uVar6 < __n);
      uVar6 = 0;
      do {
        uVar5 = local_70;
        bVar2 = local_70._7_1_ ^ (byte)uVar7;
        local_70 = CONCAT17(bVar2,(undefined7)local_70);
        if (0xff < uVar7) {
          local_70._6_1_ = SUB81(uVar5,6);
          local_70._5_1_ = SUB81(uVar5,5);
          local_70._4_1_ = SUB81(uVar5,4);
          local_70._0_4_ = (undefined4)uVar5;
          local_70._0_5_ = CONCAT14(local_70._4_1_ ^ (byte)(uVar7 >> 0x18),(undefined4)local_70);
          local_70 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_70._6_1_ ^ (byte)(uVar7 >> 8)),
                                       local_70._5_1_ ^ (byte)(uVar7 >> 0x10)),(undefined5)local_70)
          ;
        }
        local_68 = *puVar4;
        (*param_6)(&local_70,&local_70,param_1);
        uVar6 = uVar6 + 8;
        uVar7 = uVar7 - 1;
        *puVar4 = local_68;
        puVar4 = puVar4 + -1;
      } while (uVar6 < __n);
      uVar5 = local_70;
    }
    *param_2 = uVar5;
    uVar7 = __n;
  }
  return uVar7;
}


