/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d5520; name: FUN_007d5520
 */


void FUN_007d5520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,ulong param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_50 [4];
  undefined4 local_38;
  
  uVar1 = FUN_007ec544();
  local_50[0] = 0x98000000;
  uVar3 = 0x1000000;
  if ((param_6 & 1) == 0) {
    uVar3 = 0;
  }
  local_38 = (uint)local_38._3_1_ << 0x18;
  lVar2 = FUN_007ebb00(uVar1,local_50,param_3,param_5,&local_38,uVar3);
  if (lVar2 == 0) {
    local_38 = 0;
    local_50[0] = 0x4c0d;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_38);
    FUN_00cbd7c0(param_1,local_50);
  }
  else {
    uVar3 = FUN_007ec544(param_2);
    FUN_007eba90(param_1,uVar3,param_4);
  }
  return;
}


