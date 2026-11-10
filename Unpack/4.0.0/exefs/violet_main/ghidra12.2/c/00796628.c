/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796628; name: FUN_00796628
 */


void FUN_00796628(undefined8 param_1,long *param_2,void *param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (void *)0x0) || (param_4 == (undefined4 *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x20))(), param_5 < uVar1)) {
    local_48[0] = 0x10407;
  }
  else {
    memcpy(param_3,param_2 + 1,0x10);
    *(ushort *)((long)param_3 + 0x10) =
         *(ushort *)(param_2 + 3) >> 8 | *(ushort *)(param_2 + 3) << 8;
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    *param_4 = uVar2;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


