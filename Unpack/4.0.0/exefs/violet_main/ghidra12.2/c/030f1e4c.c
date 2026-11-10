/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f1e4c; name: FUN_030f1e4c
 */


void FUN_030f1e4c(long *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_38 [2];
  
  lVar3 = FUN_030f3338();
  if (lVar3 == 0) {
    uVar9 = 0;
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(uint *)(lVar3 + 4);
    uVar9 = ((int)lVar3 - (int)param_1[2]) * 0x20000000;
  }
  uVar5 = uVar5 | uVar9;
  if (-1 < (int)uVar5) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + (long)(int)uVar5 * 0x28 + 0x10);
    uVar9 = iVar2 - 1;
    if (0 < iVar2) {
      do {
        lVar7 = *(long *)(*(long *)(lVar3 + (long)(int)uVar5 * 0x28 + 8) +
                          ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8);
        piVar8 = (int *)(lVar7 + 0x18);
        piVar1 = (int *)(lVar7 + 0x1c);
        if (*piVar8 != *param_2) {
          piVar1 = piVar8;
        }
        local_38[0] = *piVar1;
        lVar7 = FUN_030f3338(param_1,local_38);
        if (lVar7 == 0) {
          uVar6 = 0;
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(lVar7 + 4);
          uVar6 = ((int)lVar7 - (int)param_1[2]) * 0x20000000;
        }
        lVar7 = *param_1 + (long)(int)(uVar10 | uVar6) * 0x28 + 8;
        lVar4 = FUN_030f2f74(lVar7,param_2);
        if (lVar4 != 0) {
          FUN_030f2fe4(lVar7,lVar4);
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    lVar3 = FUN_030f3338(param_1,param_2);
    if (lVar3 != 0) {
      FUN_030f33ac(param_1,lVar3);
    }
  }
  return;
}


