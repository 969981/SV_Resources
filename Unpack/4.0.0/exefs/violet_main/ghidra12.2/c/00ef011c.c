/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef011c; name: FUN_00ef011c
 */


ulong FUN_00ef011c(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_047d90c8;
  if (0xff < (short)param_1) {
    uVar1 = (uint)param_1 & 0xffff;
    if (uVar1 == 0x100) {
      if (param_2 == 0) {
        iVar3 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x81);
        iVar4 = (**(code **)(*(long *)puVar2 + 0x240))(0x80);
      }
      else {
        iVar3 = FUN_00ef78d8(param_2,0x81);
        iVar4 = FUN_00ef78d8(param_2,0x80);
      }
      param_1 = (ulong)(uint)(iVar4 + iVar3);
    }
    else {
      switch(uVar1) {
      case 0x101:
        if (param_2 == 0) {
          param_1 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x10);
        }
        else {
          param_1 = FUN_00ef78d8(param_2,0x10);
        }
        break;
      case 0x102:
        if (param_2 == 0) {
          iVar3 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
        }
        else {
          iVar3 = FUN_00ef78d8(param_2,0x20);
        }
        param_1 = (ulong)(iVar3 + 0x10);
        break;
      case 0x103:
        if (param_2 == 0) {
          iVar3 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xa0);
        }
        else {
          iVar3 = FUN_00ef78d8(param_2,0xa0);
        }
        param_1 = (ulong)(iVar3 + 0x30);
        break;
      case 0x104:
        if (param_2 == 0) {
          iVar3 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
        }
        else {
          iVar3 = FUN_00ef78d8(param_2,0x20);
        }
        param_1 = (ulong)(iVar3 + 0xd0);
        break;
      case 0x105:
        if (param_2 == 0) {
          iVar3 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x10);
        }
        else {
          iVar3 = FUN_00ef78d8(param_2,0x10);
        }
        param_1 = (ulong)(iVar3 + 0xf0);
        break;
      default:
        param_1 = 0x80;
      }
    }
  }
  return param_1;
}


