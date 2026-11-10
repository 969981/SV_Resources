/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00792200; name: FUN_00792200
 */


void FUN_00792200(undefined8 param_1,uint param_2,int param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  switch(param_2) {
  default:
    local_38[0] = 0xc484;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
    param_2 = param_2 | param_3 << 0x10;
    goto LAB_007922dc;
  case 9:
  case 0xe:
  case 0x16:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 99:
    local_38[0] = 0x10407;
    break;
  case 0x10:
    local_38[0] = 0x4c0d;
    break;
  case 0x62:
    local_38[0] = 0xc35;
    break;
  case 100:
  case 0x66:
  case 0x68:
  case 0x6b:
  case 0x6e:
    local_38[0] = 0xc47e;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
LAB_007922dc:
    FUN_00796564(param_1,param_2);
    return;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


