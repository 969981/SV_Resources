/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a27ec; name: FUN_007a27ec
 */


void FUN_007a27ec(undefined8 param_1,long param_2)

{
  ErrorResultVariant *this;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  this = (ErrorResultVariant *)((ulong)local_38 | 4);
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  switch(*(undefined1 *)(param_2 + 0x11c8)) {
  case 0:
    local_38[0] = 0;
    break;
  case 1:
  case 3:
    local_38[0] = 0x6468;
    break;
  case 2:
  case 4:
    local_38[0] = 0x6467;
    break;
  case 5:
    local_38[0] = 0x6c1d;
    break;
  case 6:
    local_38[0] = 0x6c4f;
    break;
  case 7:
    local_38[0] = 0x6c4d;
    break;
  case 8:
    local_38[0] = 0x6c3d;
    break;
  default:
    local_38[0] = 0x10408;
    goto LAB_007a28b4;
  }
  this = (ErrorResultVariant *)((ulong)local_38 | 4);
LAB_007a28b4:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
  FUN_018ff39c(param_1,local_38);
  return;
}


