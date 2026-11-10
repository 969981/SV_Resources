/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6638; name: FUN_007e6638
 */


void FUN_007e6638(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  lVar1 = FUN_007ec544();
  if (((lVar1 == 0) || (*(long *)(param_2 + 0x70) == 0)) ||
     (lVar1 = FUN_007ec4a8(param_2), lVar1 == 0)) {
    local_38[0] = 0x10408;
  }
  else {
    uVar2 = FUN_007efb98(*(undefined8 *)(param_2 + 0x70));
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x2c27;
    }
    else {
      uVar2 = FUN_007f1ef8(*(undefined8 *)(param_2 + 0x70),param_3);
      if ((uVar2 & 1) == 0) {
        local_38[0] = 0x4c0d;
      }
      else {
        local_38[0] = 0;
      }
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


