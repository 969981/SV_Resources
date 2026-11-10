/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e7fa0; name: FUN_003e7fa0
 */


uint FUN_003e7fa0(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = 0;
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    lVar7 = *(long *)(param_1 + 0x38);
    if ((lVar7 == 0) || (*(long *)(param_1 + 0x40) == 0)) {
      uVar6 = 0;
    }
    else {
      FUN_003e8cb0(param_1,0xf);
      iVar2 = *(int *)(lVar7 + 0x20);
      iVar4 = *(int *)(lVar7 + 0x24);
      iVar5 = iVar4 + iVar2;
      uVar3 = *(int *)(lVar7 + 4) - iVar5;
      if ((int)uVar3 < param_3) {
        uVar6 = 0;
        do {
          if (iVar2 != 0) {
            if (0 < (int)uVar3) {
              memcpy((void *)(*(long *)(lVar7 + 0x18) + (long)iVar5),param_2,(ulong)uVar3);
              iVar4 = *(int *)(lVar7 + 0x24);
              param_2 = (void *)((long)param_2 + (ulong)uVar3);
              param_3 = param_3 - uVar3;
              uVar6 = uVar3 + uVar6;
              *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + uVar3;
            }
            do {
              uVar3 = FUN_003e8f00(*(undefined8 *)(param_1 + 0x40),
                                   *(long *)(lVar7 + 0x18) + (long)iVar4);
              if ((int)uVar3 < 1) {
                FUN_003e9940(param_1);
                if (-1 < (int)uVar3) {
                  return uVar6;
                }
                if ((int)uVar6 < 1) {
                  uVar6 = uVar3;
                }
                return uVar6;
              }
              iVar4 = *(int *)(lVar7 + 0x24) + uVar3;
              iVar5 = *(int *)(lVar7 + 0x20) - uVar3;
              *(int *)(lVar7 + 0x20) = iVar5;
              *(int *)(lVar7 + 0x24) = iVar4;
            } while (iVar5 != 0);
          }
          *(undefined4 *)(lVar7 + 0x24) = 0;
          while (*(int *)(lVar7 + 4) <= param_3) {
            uVar3 = FUN_003e8f00(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
            if ((int)uVar3 < 1) {
              FUN_003e9940(param_1);
              uVar1 = uVar6;
              if ((int)uVar6 < 1) {
                uVar1 = uVar3;
              }
              if ((uVar3 & 0x80000000) != 0) {
                uVar6 = uVar1;
              }
              return uVar6;
            }
            param_2 = (void *)((long)param_2 + (ulong)uVar3);
            uVar6 = uVar3 + uVar6;
            param_3 = param_3 - uVar3;
            if (param_3 == 0) {
              return uVar6;
            }
          }
          iVar2 = *(int *)(lVar7 + 0x20);
          iVar4 = *(int *)(lVar7 + 0x24);
          iVar5 = iVar4 + iVar2;
          uVar3 = *(int *)(lVar7 + 4) - iVar5;
        } while ((int)uVar3 < param_3);
      }
      else {
        uVar6 = 0;
      }
      memcpy((void *)(*(long *)(lVar7 + 0x18) + (long)iVar5),param_2,(long)param_3);
      *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + param_3;
      uVar6 = uVar6 + param_3;
    }
  }
  return uVar6;
}


