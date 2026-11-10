/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00792ae0; name: FUN_00792ae0
 */


void FUN_00792ae0(undefined8 param_1,uint param_2,int param_3)

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
    break;
  case 4:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x69:
    local_38[0] = 0x4c0d;
    goto LAB_00792b60;
  case 9:
  case 0xe:
  case 0x16:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5f:
  case 0x61:
    local_38[0] = 0x10407;
LAB_00792b60:
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
    return;
  case 0x20:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x68:
  case 0x6b:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
    local_38[0] = 0xc47e;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(param_1,local_38);
  }
  FUN_00796564(param_1,param_2);
  return;
}


