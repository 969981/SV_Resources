/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4cc6c; name: FUN_00a4cc6c
 */


void FUN_00a4cc6c(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if (param_2 == 2) {
    lVar4 = 0x6140;
  }
  else if (param_2 == 1) {
    lVar4 = 0x60d0;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar4 = 0x6060;
  }
  plVar1 = (long *)(param_1 + lVar4);
  lVar4 = param_1 + 0x2c;
  lVar5 = -0x6030;
  plVar1[1] = *plVar1;
  if (param_3 == 0) {
    do {
      lVar2 = lVar4 + lVar5;
      local_60 = *(long **)(lVar2 + 0x6030);
      local_58 = *(undefined8 *)(lVar2 + 0x6038);
      uStack_50 = *(undefined8 *)(lVar2 + 0x6040);
      uVar3 = FUN_00a664ac(&local_60,param_2);
      if (((uVar3 & 1) != 0) &&
         (((uVar3 = FUN_00a65174(&local_60,param_2,0), (uVar3 & 1) != 0 ||
           (uVar3 = FUN_00a65174(&local_60,param_2,1), (uVar3 & 1) != 0)) ||
          (uVar3 = FUN_00a65174(&local_60,param_2,2), (uVar3 & 1) != 0)))) {
        FUN_00a4cf28(plVar1,&local_60);
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0);
  }
  else if (param_3 == 1) {
    do {
      lVar2 = lVar4 + lVar5;
      local_60 = *(long **)(lVar2 + 0x6030);
      local_58 = *(undefined8 *)(lVar2 + 0x6038);
      uStack_50 = *(undefined8 *)(lVar2 + 0x6040);
      uVar3 = FUN_00a664ac(&local_60,param_2);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_00a65174(&local_60,param_2,0);
        if (((uVar3 & 1) == 0) && (uVar3 = FUN_00a65174(&local_60,param_2,1), (uVar3 & 1) == 0)) {
          FUN_00a65174(&local_60,param_2,2);
        }
        else {
          FUN_00a4cf28(plVar1,&local_60);
        }
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0);
  }
  else {
    do {
      lVar2 = lVar4 + lVar5;
      local_60 = *(long **)(lVar2 + 0x6030);
      local_58 = *(undefined8 *)(lVar2 + 0x6038);
      uStack_50 = *(undefined8 *)(lVar2 + 0x6040);
      uVar3 = FUN_00a664ac(&local_60,param_2);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_00a65174(&local_60,param_2,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_00a65174(&local_60,param_2,1);
          if ((uVar3 & 1) == 0) {
            FUN_00a65174(&local_60,param_2,2);
          }
        }
        else {
          FUN_00a4cf28(plVar1,&local_60);
        }
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0);
  }
  lVar4 = *plVar1;
  lVar5 = plVar1[1];
  if (lVar5 != lVar4) {
    switch(param_3) {
    case 0:
      local_60 = &local_48;
      local_48 = CONCAT44(local_48._4_4_,param_2);
      FUN_00a53250(lVar4,lVar5,&local_60);
      break;
    case 1:
      local_60 = &local_48;
      local_48 = param_1;
      FUN_00a54460(lVar4,lVar5,&local_60);
      break;
    case 2:
      local_60 = &local_48;
      local_48 = CONCAT44(local_48._4_4_,param_2);
      FUN_00a55e90(lVar4,lVar5,&local_60);
      break;
    case 3:
      local_60 = &local_48;
      local_48 = CONCAT44(local_48._4_4_,param_2);
      FUN_00a58c40(lVar4,lVar5,&local_60);
      break;
    case 4:
      local_60 = &local_48;
      local_48 = CONCAT44(local_48._4_4_,param_2);
      FUN_00a5b9f0(lVar4,lVar5,&local_60);
      break;
    case 5:
      local_60 = &local_48;
      local_48 = CONCAT44(local_48._4_4_,param_2);
      FUN_00a5d600(lVar4,lVar5,&local_60);
    }
  }
  *(undefined4 *)(param_1 + 0x64b8) = 0;
  return;
}


