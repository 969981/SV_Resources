/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f334; name: FUN_0078f334
 */


void FUN_0078f334(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0078f9d4();
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0078f9d4();
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_007935cc(param_1 + 8);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0xb),(Result *)local_38);
  FUN_0078cfe4(param_1 + 0xd,0);
  *(undefined4 *)((long)param_1 + 0x14) = 0x18;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x18;
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bf9f0(0x188,uVar1);
  if (lVar2 != 0) {
    FUN_0078f5b8(lVar2,param_2,param_1 + 0xd,param_3);
  }
  param_1[0x11] = lVar2;
  FUN_0078c2d8();
  return;
}


