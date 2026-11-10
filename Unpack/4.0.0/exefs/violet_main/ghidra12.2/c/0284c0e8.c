/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284c0e8; name: FUN_0284c0e8
 */


void FUN_0284c0e8(undefined8 param_1,long param_2,void *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  void *__src;
  ulong uVar3;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == (void *)0x0) {
    local_48[0] = 0x10407;
  }
  else {
    iVar1 = FUN_0284c1b8(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0) {
      local_48[0] = 0x10408;
    }
    else {
      uVar2 = FUN_0284c1b8(*(undefined8 *)(param_2 + 8));
      if (param_4 < uVar2) {
        local_48[0] = 0x10404;
      }
      else {
        __src = (void *)FUN_019dabd0(*(undefined8 *)(param_2 + 8));
        uVar3 = FUN_0284c1b8(*(undefined8 *)(param_2 + 8));
        memcpy(param_3,__src,uVar3 & 0xffffffff);
        local_48[0] = 0;
      }
    }
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


