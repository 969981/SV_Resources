/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00803f88; name: FUN_00803f88
 */


void FUN_00803f88(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int local_a0 [4];
  undefined2 local_90;
  undefined1 local_8e;
  int local_88 [4];
  undefined4 local_78;
  undefined1 auStack_74 [60];
  undefined4 local_38 [2];
  
  piVar4 = local_a0;
  local_78 = 0;
  uVar1 = 0;
  if ((int)param_3[1] == 7 || (int)param_3[1] == 2) {
    uVar1 = param_5;
  }
  (**(code **)(*param_3 + 0x10))(local_88,param_3,auStack_74,&local_78,0x3a);
  if (local_88[0] == 0) {
    local_8e = 0;
    local_90 = 0x100;
    uVar2 = FUN_007ec544(param_2);
    local_a0[0] = -0x54000000;
    lVar3 = FUN_007ebb00(uVar2,local_a0,param_4,local_78,&local_90,0x1000100);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x6b4) = uVar1;
      uVar2 = FUN_007ec544(param_2);
      FUN_007eba90(local_a0,uVar2,auStack_74);
    }
    local_a0[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_38);
  }
  else {
    piVar4 = local_88;
  }
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


