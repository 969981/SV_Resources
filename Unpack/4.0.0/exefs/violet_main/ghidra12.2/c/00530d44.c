/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00530d44; name: FUN_00530d44
 */


long FUN_00530d44(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  uVar3 = param_2 << 3;
  if (lVar7 != 0) {
    if (0x7f < (uVar3 | 3)) {
      uVar6 = (ulong)(uVar3 | 3);
      do {
        FUN_002cdcec(lVar7,(uint)uVar6 | 0xffffff80);
        uVar5 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar5 != 0);
    }
    FUN_002cdcec(lVar7);
  }
  iVar1 = *(int *)(param_4 + 0x58);
  *(int *)(param_4 + 0x58) = iVar1 + -1;
  if (iVar1 < 1) {
    lVar7 = 0;
  }
  else {
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
    lVar4 = FUN_0052ee60(param_1,param_3,param_4);
    *(int *)(param_4 + 0x58) = *(int *)(param_4 + 0x58) + 1;
    *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + -1;
    uVar2 = *(uint *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x50) = 0;
    lVar7 = 0;
    if ((lVar4 != 0) && (uVar2 == (uVar3 | 3))) {
      lVar7 = *param_1;
      if (lVar7 != 0) {
        if (0x7f < (uVar3 | 4)) {
          uVar6 = (ulong)(uVar3 | 4);
          do {
            FUN_002cdcec(lVar7,(uint)uVar6 | 0xffffff80);
            uVar5 = uVar6 >> 0xe;
            uVar6 = uVar6 >> 7;
          } while (uVar5 != 0);
        }
        FUN_002cdcec(lVar7);
      }
      lVar7 = lVar4;
    }
  }
  return lVar7;
}


