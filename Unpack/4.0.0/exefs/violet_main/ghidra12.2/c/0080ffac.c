/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ffac; name: FUN_0080ffac
 */


void FUN_0080ffac(undefined8 param_1,long param_2)

{
  undefined4 local_68 [4];
  undefined8 local_58;
  undefined4 local_38 [4];
  undefined8 local_28;
  
  local_28 = 0;
  FUN_007935cc(&local_28);
  local_38[0] = 0;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_58);
  FUN_018dd540(&local_58,"nncs1-%.n.n.srv.nintendo.net:10025");
  FUN_0278a178(local_68,param_2 + 0xa80,&local_58);
  FUN_018dd540(&local_58,"nncs2-%.n.n.srv.nintendo.net:10025");
  FUN_0278a178(local_68,param_2 + 0xcb0,&local_58);
  local_58 = 0;
  FUN_007935cc(&local_58);
  FUN_0079365c();
  local_58 = local_58 & 0xffffffff00000000;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_68);
  FUN_00cbd7c0(param_1,&local_58);
  return;
}


