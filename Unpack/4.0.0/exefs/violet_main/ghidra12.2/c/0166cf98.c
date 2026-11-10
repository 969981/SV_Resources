/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0166cf98; name: FUN_0166cf98
 */


void FUN_0166cf98(long *param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_2c = 0;
  local_60 = 0x3f800000;
  uStack_58 = 0x447a0000;
  local_50 = 0;
  uStack_4c = 7;
  uStack_48 = 7;
  local_30 = 8;
  local_70 = 0x100000001;
  local_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (param_2 == 2) {
    local_68 = 1;
    local_70 = 0x100000001;
  }
  else if (param_2 == 0) {
    local_68 = 0;
    local_70 = 0;
  }
  else if (param_2 == 1) {
    local_70 = 0x100000001;
    local_68 = 0;
  }
  local_44 = 7;
  switch(param_3) {
  case 0:
    uVar2 = 0x700000007;
    break;
  case 1:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0;
    uStack_38 = 0;
    goto switchD_0166d020_default;
  case 2:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0;
    uStack_38 = 0x3f80000000000000;
    goto switchD_0166d020_default;
  case 3:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0x3f8000003f800000;
    uStack_38 = 0x3f800000;
    goto switchD_0166d020_default;
  case 4:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0x3f8000003f800000;
    uStack_38 = 0x3f8000003f800000;
    goto switchD_0166d020_default;
  case 6:
    local_44 = 1;
  case 5:
    uVar2 = 0x100000001;
    break;
  case 7:
    uVar2 = 1;
    goto LAB_0166d124;
  case 8:
    uVar2 = 0x100000007;
    break;
  case 9:
    uVar2 = 0x600000006;
    break;
  case 10:
    uVar2 = 6;
    goto LAB_0166d124;
  case 0xb:
    uVar2 = 0x600000007;
    break;
  case 0xc:
    uVar2 = 3;
LAB_0166d124:
    uVar2 = uVar2 | 0x700000000;
    break;
  case 0xd:
    uVar2 = 0x300000007;
    break;
  default:
    goto switchD_0166d020_default;
  }
  uStack_4c = (undefined4)uVar2;
  uStack_48 = (undefined4)(uVar2 >> 0x20);
switchD_0166d020_default:
  lVar1 = *(long *)(*param_1 + 0x30);
  local_28 = *(undefined8 *)(lVar1 + 8);
  uStack_20 = *(undefined8 *)(lVar1 + 0x6098);
  local_18 = lVar1 + 0x10;
  FUN_00d07784(*(undefined8 *)(lVar1 + 0x6160),&local_28,&local_70);
  return;
}


