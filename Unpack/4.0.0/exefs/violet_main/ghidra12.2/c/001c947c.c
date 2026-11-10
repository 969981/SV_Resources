/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c947c; name: FUN_001c947c
 */


ulong FUN_001c947c(long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int local_54;
  long local_38;
  
  local_38 = 0;
  lVar5 = *param_1;
  *param_4 = 0;
  if (*(long *)(lVar5 + 0xe8) != 0) {
    FUN_001dc298(lVar5,3,2);
  }
  lVar2 = FUN_001c9140(param_1,param_2,param_3);
  local_38 = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    FUN_001db818(lVar5,"Hostname %s was found in DNS cache\n",param_2);
    uVar4 = 0;
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  if (*(long *)(lVar5 + 0xe8) != 0) {
    FUN_001dc2d8(lVar5,3);
  }
  if (lVar2 == 0) {
    local_54 = 0;
    uVar3 = FUN_001c8e70(param_1);
    if ((uVar3 & 1) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar5 + 0xf00) != 0) {
      FUN_001d14e0(lVar5,1);
      iVar1 = (**(code **)(lVar5 + 0xf00))
                        (*(undefined8 *)(lVar5 + 0x1288),0,*(undefined8 *)(lVar5 + 0xf08));
      FUN_001d14e0(lVar5,0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((*(byte *)(lVar5 + 0xf47) & 1) == 0) {
      lVar2 = thunk_FUN_001c7ac0(param_1,param_2,param_3,&local_54);
    }
    else {
      lVar2 = FUN_001c9be4(param_1,param_2,param_3,&local_54);
    }
    if (lVar2 == 0) {
      if (local_54 != 0) {
        iVar1 = FUN_001c966c(param_1,&local_38);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar4 = (ulong)(local_38 == 0);
      }
    }
    else {
      if (*(long *)(lVar5 + 0xe8) != 0) {
        FUN_001dc298(lVar5,3,2);
      }
      local_38 = FUN_001c9228(lVar5,lVar2,param_2,param_3);
      if (*(long *)(lVar5 + 0xe8) != 0) {
        FUN_001dc2d8(lVar5,3);
      }
      if (local_38 == 0) {
        FUN_001c7e00(lVar2);
      }
      else {
        uVar4 = 0;
      }
    }
    lVar2 = local_38;
  }
  *param_4 = lVar2;
  return uVar4;
}


