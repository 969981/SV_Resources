/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00791d04; name: FUN_00791d04
 */


void FUN_00791d04(undefined8 param_1,undefined1 *param_2,long param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x10)) {
    local_40[0] = 0x10407;
  }
  else {
    FUN_007938f0(param_3,*param_2);
    FUN_007938f0(param_3 + 1,param_2[1]);
    FUN_007938f0(param_3 + 2,param_2[2]);
    FUN_007938f0(param_3 + 3,param_2[3]);
    FUN_007938d0(param_3 + 4,*(undefined2 *)(param_2 + 4));
    FUN_007938f0(param_3 + 6,param_2[6]);
    FUN_007938f0(param_3 + 7,param_2[7]);
    FUN_007938b0(param_3 + 8,*(undefined4 *)(param_2 + 8));
    FUN_007938f0(param_3 + 0xc,param_2[0xc]);
    FUN_007938f0(param_3 + 0xd,param_2[0xd]);
    FUN_007938f0(param_3 + 0xe,param_2[0xe]);
    FUN_007938f0(param_3 + 0xf,param_2[0xf]);
    *param_4 = 0x10;
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


