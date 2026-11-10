/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7500; name: FUN_007f7500
 */


void FUN_007f7500(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 byte param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047d1578 + 0x10);
  param_1[1] = 0;
  param_1[4] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
  lVar1 = (**(code **)(*param_2 + 0x78))(param_2);
  param_1[1] = lVar1;
  uVar2 = FUN_0078a12c();
  lVar1 = FUN_007bf9f0(0x718,uVar2);
  if (lVar1 != 0) {
    FUN_007f8e24(lVar1);
  }
  param_1[3] = lVar1;
  FUN_007f8e70(local_80,lVar1,param_1[1],param_4,10,param_8,param_6,param_9 & 1);
  FUN_018ff39c(local_70,local_80);
  *(undefined4 *)(param_1[3] + 0xb4) = 5;
  lVar1 = (**(code **)(*param_2 + 0x80))(param_2);
  param_1[2] = lVar1;
  uVar2 = FUN_0078a12c();
  lVar1 = FUN_007bf9f0(0x718,uVar2);
  if (lVar1 != 0) {
    FUN_007f7ccc(lVar1);
  }
  param_1[4] = lVar1;
  FUN_007f7d18(local_80,lVar1,param_1[2],param_3,10,param_7,param_5,param_9 & 1);
  FUN_018ff39c(local_70,local_80);
  *(undefined4 *)(param_1[4] + 0xb4) = 5;
  return;
}


