/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01678b8c; name: FUN_01678b8c
 */


void FUN_01678b8c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 auStack_18 [8];
  
  if (*(char *)(param_3 + 3) != '\0') {
    local_60 = *param_3;
    local_50 = param_3[1];
    uStack_58 = param_3[2];
    uStack_48 = param_3[4];
    local_40 = param_3[5];
    local_38 = 0;
    FUN_01679a98(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x8a0),auStack_18,&local_60);
    return;
  }
  switch(*(undefined1 *)((long)param_3 + 0x19)) {
  case 1:
    FUN_0298ace0(param_1,*param_3,param_3[2],param_3[5]);
    break;
  case 2:
    FUN_016799a8(param_1,param_3[1],*param_3,param_3[2],param_3[5]);
    break;
  case 3:
    FUN_0298ad80(param_1,*param_3,param_3[2],param_3[5]);
    break;
  case 5:
    FUN_0298ad14(param_1,param_3[1],*param_3,param_3[2],param_3[5]);
    break;
  case 10:
    FUN_0298adb4(param_1,*param_3,param_3[2]);
    break;
  case 0xb:
  case 0xd:
    FUN_0167fd04(param_1,*param_3,param_3[2],param_3[5]);
    break;
  case 0xc:
    FUN_0298ad48(param_1,*param_3,param_3[2],param_3[5]);
  }
  uVar3 = *param_3;
  uVar2 = param_3[2];
  uVar1 = FUN_01246e90(param_1);
  FUN_01680120(uVar1,uVar2,uVar3);
  return;
}


