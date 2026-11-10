/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145b560; name: FUN_0145b560
 */


void FUN_0145b560(long param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  lVar5 = param_1 + 0xdf0;
  do {
    uVar8 = (uint)(uVar7 >> 4) & 0xfffffff;
    if (uVar8 == 1) {
      uVar8 = 4;
    }
    else if (uVar8 == 3) {
      uVar8 = 6;
    }
    uVar6 = (uint)uVar7;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_0145b670(&local_a0);
    uVar4 = uStack_98;
    uVar2 = local_a0;
    uVar1 = local_a0._4_2_ & 0xfff8;
    local_a0 = CONCAT71(local_a0._1_7_,(char)uVar8);
    uVar3 = local_a0;
    local_a0._6_2_ = SUB82(uVar2,6);
    local_a0._0_6_ =
         CONCAT24((ushort)(uVar6 >> 1) & 1 | (ushort)((uVar6 & 1) << 1) |
                  (ushort)((uVar7 & 0xc) != 0) << 2 | uVar1,(int)uVar3);
    if ((uVar6 >> 3 & 1) == 0) {
      if ((uVar6 >> 2 & 1) != 0) {
        uStack_98._0_4_ = CONCAT22(0x702,(undefined2)uStack_98);
        goto LAB_0145b610;
      }
    }
    else {
      uStack_98._0_4_ = CONCAT13(5,(undefined3)uStack_98);
LAB_0145b610:
      uStack_98._5_3_ = SUB83(uVar4,5);
      uStack_98._0_5_ = CONCAT14(param_2,(undefined4)uStack_98);
    }
    FUN_0145b6a4(lVar5,&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x30) + 0x30),&local_a0);
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 + 0x1c;
    if (uVar7 == 0x80) {
      return;
    }
  } while( true );
}


