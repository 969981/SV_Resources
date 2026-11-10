/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d58b4; name: FUN_007d58b4
 */


byte * FUN_007d58b4(undefined8 param_1,byte *param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  long local_40 [4];
  
  FUN_00796868(local_40,param_3);
  bVar2 = FUN_0078a34c(local_40);
  *param_2 = bVar2 & 1;
  uVar3 = FUN_0078a34c(local_40);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0078b12c(local_40);
    if ((uVar3 & 1) == 0) {
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      local_44 = 0;
      (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 5,&local_44,2);
      pbVar1 = param_2 + 7;
    }
    else {
      local_44 = 0;
      (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 1,&local_44,6);
      pbVar1 = param_2 + 7;
    }
  }
  else {
    local_44 = 0;
    (**(code **)(local_40[0] + 0x10))(auStack_58,local_40,param_2 + 1,&local_44,0x12);
    pbVar1 = param_2 + 0x13;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)pbVar1 - (int)param_2;
  }
  FUN_0284e3d4(local_40);
  return pbVar1;
}


