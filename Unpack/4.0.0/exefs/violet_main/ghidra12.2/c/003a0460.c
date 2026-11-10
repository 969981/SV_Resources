/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a0460; name: FUN_003a0460
 */


bool FUN_003a0460(byte *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  bVar1 = *pbVar6;
  if (bVar1 == 0x3a) {
    return false;
  }
  pbVar7 = pbVar6;
  if (bVar1 == 0) {
LAB_003a051c:
    pbVar4 = pbVar7 + -(long)pbVar6;
    if ((long)pbVar4 < 3) {
LAB_003a0528:
      pbVar7 = (byte *)0x0;
      goto LAB_003a0538;
    }
  }
  else {
    if (bVar1 != 0x3c) {
      do {
        uVar5 = 1L << ((ulong)bVar1 & 0x3f);
        if (((bVar1 < 0x40) && ((uVar5 & 0x380000000001) != 0)) ||
           ((bVar1 < 0x40 && ((uVar5 & 0x3ff000000000001) != 0)))) break;
        pbVar7 = pbVar7 + 1;
        bVar1 = *pbVar7;
      } while (bVar1 != 0);
      goto LAB_003a051c;
    }
    pbVar4 = pbVar6 + 1;
    do {
      pbVar7 = pbVar4 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0) goto LAB_003a0528;
      pbVar4 = pbVar7;
    } while (bVar1 != 0x3e);
    uVar5 = ~(ulong)pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar4 = pbVar7 + (uVar5 - 1);
  }
  FUN_0026c6b8(param_2,pbVar6,pbVar4);
LAB_003a0538:
  pbVar6 = (byte *)FUN_003a0670(pbVar7,0,0x18,0xffffffff,param_2 + 0x18);
  if (pbVar6 != (byte *)0x0) {
    bVar1 = *pbVar6;
    if (bVar1 == 0) {
      return true;
    }
    if (bVar1 == 0x3c) {
      pbVar4 = pbVar6 + 1;
      do {
        pbVar7 = pbVar4 + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          return false;
        }
        pbVar4 = pbVar7;
      } while (bVar1 != 0x3e);
      uVar5 = ~(ulong)pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar7 + (uVar5 - 1);
    }
    else {
      pbVar7 = pbVar6;
      do {
        uVar5 = 1L << ((ulong)bVar1 & 0x3f);
        if (((bVar1 < 0x40) && ((uVar5 & 0x380000000001) != 0)) ||
           ((bVar1 < 0x40 && ((uVar5 & 0x3ff000000000001) != 0)))) break;
        pbVar7 = pbVar7 + 1;
        bVar1 = *pbVar7;
      } while (bVar1 != 0);
      pbVar4 = pbVar7 + -(long)pbVar6;
      if ((long)pbVar4 < 3) {
        return false;
      }
    }
    FUN_0026c6b8(param_2 + 0x20,pbVar6,pbVar4);
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x18) + 0xe10;
    if (*pbVar7 != 0x2c) {
      pbVar7 = (byte *)FUN_003a0670(pbVar7,0,0x18,0xffffffff);
    }
    uVar2 = FUN_003a0900(pbVar7,param_2 + 0x3c);
    pcVar3 = (char *)FUN_003a0900(uVar2,param_2 + 0x48);
    if (pcVar3 != (char *)0x0) {
      return *pcVar3 == '\0';
    }
  }
  return false;
}


