/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff3bc; name: FUN_007ff3bc
 */


void FUN_007ff3bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_68 [4];
  undefined4 local_58 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x13b0) == 0) {
    local_58[0] = 0x10408;
  }
  else {
    if ((*(char *)(*(long *)(param_2 + 0x13b0) + 8) == '\x02') &&
       (uVar2 = FUN_0078a324(param_4), (uVar2 & 1) != 0)) {
      FUN_0284e39c(param_2 + 0x1350,param_4);
      local_38 = 0;
      uStack_30 = 0;
      FUN_0078a1c0(local_58,param_4);
      FUN_0078c18c(local_58);
      FUN_0078a390(local_68,local_58,&local_38);
      uVar1 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
      local_28[0] = 0;
      *(uint *)(PTR_DAT_047d0868 + 400) = uVar1 >> 0x10 | uVar1 << 0x10;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_28);
      FUN_00cbd7c0(param_1,local_68);
      FUN_0284e3d4(local_58);
      return;
    }
    local_58[0] = 0x6c93;
  }
  local_38 = (ulong)local_38._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)&local_38);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


