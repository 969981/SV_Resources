/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f6610; name: FUN_018f6610
 */


void FUN_018f6610(long param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  byte bVar2;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x4c) != 0) {
    return;
  }
  bVar2 = FUN_018f6730();
  if (bVar2 == 0) {
    return;
  }
  *(uint *)(*(long *)(param_1 + 0x48) + 0x4c) = (uint)bVar2;
  FUN_01852230(param_1,param_2);
  local_5c = 0;
  local_40 = 0;
  local_38 = 0;
  local_56 = 0x82;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = param_2;
  local_58 = param_3;
  local_54 = param_2;
  FUN_01907920(param_1,&local_60);
  uVar1 = 0x41d;
  switch((uint)bVar2) {
  case 1:
    break;
  case 2:
    uVar1 = 0x41e;
    break;
  case 3:
    uVar1 = 0x41f;
    break;
  case 4:
    uVar1 = 0x420;
    break;
  case 5:
    uVar1 = 0x421;
    break;
  default:
    goto switchD_018f66b4_default;
  }
  local_88 = uVar1;
  local_8c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_86 = 0x82;
  local_90 = param_2;
  local_84 = param_2;
  FUN_01907920(param_1,&local_90);
switchD_018f66b4_default:
  FUN_01852150(param_1,param_2);
  return;
}


