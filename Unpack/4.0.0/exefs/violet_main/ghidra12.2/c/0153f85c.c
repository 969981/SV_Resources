/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153f85c; name: FUN_0153f85c
 */


void FUN_0153f85c(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = (ulong)*(ushort *)((long)param_2 + (6 - (long)*param_2));
  puVar1 = (uint *)((long)param_2 + uVar4);
  uVar6 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar6);
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (puVar1[1] - 1 < 5) {
      uVar3 = *(uint *)(&DAT_03d6356c + (long)(int)(puVar1[1] - 1) * 4);
    }
    else {
      uVar3 = 0;
    }
    if (uVar2 != 1) {
      switch(puVar1[2]) {
      case 1:
        uVar3 = uVar3 | 1;
        break;
      case 2:
        uVar3 = uVar3 | 2;
        break;
      case 3:
        uVar3 = uVar3 | 4;
        break;
      case 4:
        uVar3 = uVar3 | 8;
        break;
      case 5:
        uVar3 = uVar3 | 0x10;
      }
      if (uVar2 != 2) {
        switch(puVar1[3]) {
        case 1:
          uVar3 = uVar3 | 1;
          break;
        case 2:
          uVar3 = uVar3 | 2;
          break;
        case 3:
          uVar3 = uVar3 | 4;
          break;
        case 4:
          uVar3 = uVar3 | 8;
          break;
        case 5:
          uVar3 = uVar3 | 0x10;
        }
        if (uVar2 != 3) {
          lVar7 = (ulong)uVar2 - 3;
          puVar5 = (undefined4 *)((long)param_2 + uVar6 + uVar4 + 0x10);
          do {
            switch(*puVar5) {
            case 1:
              uVar3 = uVar3 | 1;
              break;
            case 2:
              uVar3 = uVar3 | 2;
              break;
            case 3:
              uVar3 = uVar3 | 4;
              break;
            case 4:
              uVar3 = uVar3 | 8;
              break;
            case 5:
              uVar3 = uVar3 | 0x10;
            }
            lVar7 = lVar7 + -1;
            puVar5 = puVar5 + 1;
          } while (lVar7 != 0);
        }
      }
    }
  }
  *(uint *)(param_1 + 0xa0) = uVar3;
  return;
}


