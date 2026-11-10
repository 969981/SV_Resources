/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d9fc4; name: FUN_008d9fc4
 */


void FUN_008d9fc4(long *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = param_3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_008da160(param_1,&local_90,&local_50);
  uVar4 = FUN_00fac5d0(&local_90);
  FUN_00fac5dc(param_1 + 1,param_1 + 0x10,uVar4);
  FUN_00fad338(param_1 + 1,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0145b670(&local_90);
  lVar6 = *param_1;
  uVar1 = local_90._4_2_ & 0xfffc;
  local_90._0_6_ =
       CONCAT24(uVar1 | *(char *)(lVar6 + 1) != '\0' | (ushort)(*(char *)(lVar6 + 3) != '\0') << 1,
                (undefined4)local_90);
  switch(*(undefined1 *)(lVar6 + 2)) {
  case 0:
    local_90 = (ulong)local_90._1_7_ << 8;
    goto switchD_008da0a0_default;
  case 1:
    uVar5 = 1;
    break;
  case 2:
    uVar5 = 2;
    break;
  case 3:
    uVar5 = 3;
    break;
  case 4:
    uVar5 = 4;
    break;
  case 5:
    uVar5 = 5;
    break;
  case 6:
    uVar5 = 6;
    break;
  case 7:
    uVar5 = 7;
    break;
  default:
    goto switchD_008da0a0_default;
  }
  local_90 = CONCAT71(local_90._1_7_,uVar5);
switchD_008da0a0_default:
  FUN_0145b6a4(param_1 + 6,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_00fab5ec(&local_90);
  uVar4 = local_90;
  uVar3 = local_90._4_2_;
  uVar5 = 2;
  if (*(char *)(*param_1 + 7) != '\x01') {
    uVar5 = *(char *)(*param_1 + 7) == '\x02';
  }
  local_90._0_3_ = CONCAT12(uVar5,(undefined2)local_90);
  uVar2 = local_90;
  local_90._6_2_ = SUB82(uVar4,6);
  local_90._0_4_ = (undefined4)uVar2;
  local_90 = CONCAT26(local_90._6_2_,CONCAT24(uVar3,(undefined4)local_90)) & 0xfffffff3ffffffff |
             0x800000000;
  FUN_00facacc((long)param_1 + 0x4c,param_2,&local_90);
  return;
}


