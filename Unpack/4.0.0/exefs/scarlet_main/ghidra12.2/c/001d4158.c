/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d4158; name: FUN_001d4158
 */


undefined8 FUN_001d4158(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  pbVar1 = (byte *)(lVar4 + 0x1260);
  if ((((*(uint *)((long)param_1 + 0x3fc) ^ 0xffffffff) & 0x120) == 0 ||
       (*(uint *)((long)param_1 + 0x3fc) & 0x80) != 0) || (param_1[0x45] != 0)) {
    lVar3 = *(long *)(lVar4 + 0x1248);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x1250) == 0)) {
      *(long *)(lVar4 + 0x1250) = lVar3;
    }
    lVar3 = *(long *)(lVar4 + 0x1268);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x1270) == 0)) {
      *(long *)(lVar4 + 0x1270) = lVar3;
    }
    if (((*(uint *)((long)param_1 + 0x3fc) >> 5 & 1) == 0) ||
       (((*(uint *)((long)param_1 + 0x3fc) & 0x4000) == 0) == (bool)(param_4 & 1))) {
      *(byte *)(lVar4 + 0x1280) = *(byte *)(lVar4 + 0x1280) | 1;
    }
    else {
      uVar2 = FUN_001d42bc(param_1,(long *)(lVar4 + 0x1268),param_2,param_3,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if (((((*(byte *)(lVar4 + 0x15a4) >> 1 & 1) == 0) ||
         ((*(byte *)((long)param_1 + 0x3fe) >> 4 & 1) != 0)) || (*(long *)(lVar4 + 0x1148) == 0)) ||
       (((*(byte *)(lVar4 + 0xf42) >> 4 & 1) != 0 ||
        (uVar2 = FUN_001e0990(*(long *)(lVar4 + 0x1148),param_1[0x1a]), (int)uVar2 != 0)))) {
      uVar2 = FUN_001d42bc(param_1,(long *)(lVar4 + 0x1248),param_2,param_3,0);
      return uVar2;
    }
    *pbVar1 = *pbVar1 | 1;
  }
  else {
    *pbVar1 = *pbVar1 | 1;
    uVar2 = 0;
    *(byte *)(lVar4 + 0x1280) = *(byte *)(lVar4 + 0x1280) | 1;
  }
  return uVar2;
}


