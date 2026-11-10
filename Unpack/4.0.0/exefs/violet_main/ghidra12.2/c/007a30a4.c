/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a30a4; name: FUN_007a30a4
 */


void FUN_007a30a4(undefined8 param_1,long *param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (undefined4 *)0x0)) ||
     (uVar1 = (**(code **)(*param_2 + 0x20))(), param_5 < uVar1)) {
    local_48[0] = 0x10407;
  }
  else {
    *param_3 = (char)param_2[1];
    param_3[1] = *(undefined1 *)((long)param_2 + 9);
    *(ushort *)(param_3 + 2) =
         *(ushort *)((long)param_2 + 10) >> 8 | *(ushort *)((long)param_2 + 10) << 8;
    *param_4 = 4;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


