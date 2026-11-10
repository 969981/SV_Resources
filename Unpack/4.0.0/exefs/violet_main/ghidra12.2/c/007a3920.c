/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a3920; name: FUN_007a3920
 */


void FUN_007a3920(undefined8 param_1,long *param_2,long param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x20))(), param_5 < uVar1)) {
    local_48[0] = 0x10407;
  }
  else {
    uVar1 = (*(uint *)((long)param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_2 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_3 + 4) = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_4 = 8;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


