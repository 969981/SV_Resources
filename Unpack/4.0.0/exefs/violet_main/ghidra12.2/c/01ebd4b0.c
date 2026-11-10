/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebd4b0; name: FUN_01ebd4b0
 */


void FUN_01ebd4b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  long *local_40 [4];
  undefined8 local_8;
  
  local_8 = param_4;
  FUN_01267a34(local_40,param_2,param_3);
  if (local_40[0] != (long *)0x0) {
    lVar2 = local_40[0][2];
    bVar1 = *(byte *)(*local_40[0] + lVar2);
    local_40[0][2] = lVar2 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*local_40[0] + lVar2 + 1);
        local_40[0][2] = lVar2 + 2;
      }
      switch(bVar1) {
      case 1:
        FUN_01ebd5f0(param_1,local_40,&local_8);
        break;
      case 2:
        FUN_01ebd994(param_1,local_40);
        break;
      case 3:
        FUN_01ebdaa4(param_1,local_40);
        break;
      case 4:
        FUN_01ebdb78(param_1,local_40);
        break;
      case 5:
        FUN_01ebdc20(param_1,local_40,&local_8);
        break;
      case 6:
        FUN_01ebdcdc(param_1,local_40);
        break;
      case 7:
        FUN_01ebdd70(param_1,local_40);
        break;
      case 8:
        FUN_01ebde84(param_1,local_40,&local_8);
        break;
      case 9:
        FUN_01ebdfb0(param_1,local_40);
        break;
      case 10:
        FUN_01ebe02c(param_1,local_40);
      }
    }
  }
  FUN_01267b4c(local_40);
  return;
}


