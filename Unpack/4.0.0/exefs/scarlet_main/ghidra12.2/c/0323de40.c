/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323de40; name: FUN_0323de40
 */


void FUN_0323de40(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)(param_1 + 5);
  if (uVar4 == 0xffffffff) {
    uVar4 = *(uint *)(param_1 + 4);
    uVar11 = (ulong)(int)uVar4;
    uVar3 = *(uint *)((long)param_1 + 0x24) & 0x7fffffff;
    plVar1 = param_1 + 3;
    if ((int)uVar3 <= (int)uVar4) {
      FUN_0323e13c(plVar1,uVar11 + 1);
      uVar3 = *(uint *)((long)param_1 + 0x24) & 0x7fffffff;
    }
    uVar5 = (ulong)uVar3;
    uVar9 = (uint)(uVar11 + 1);
    if ((int)uVar3 <= (int)uVar4 || (int)uVar9 < (int)uVar3) {
      uVar9 = uVar3;
    }
    *(uint *)(param_1 + 4) = uVar9;
    if ((int)uVar4 < (int)uVar3) {
      uVar7 = ~uVar11;
      if ((uVar3 - uVar4 & 1) != 0) {
        lVar8 = uVar11 * 0x14;
        uVar11 = uVar11 + 1;
        *(int *)(*plVar1 + lVar8 + 0x10) = (int)uVar11;
      }
      if (uVar7 + uVar5 != 0) {
        lVar8 = uVar11 * 0x14;
        do {
          iVar10 = (int)uVar11;
          uVar11 = uVar11 + 2;
          *(int *)(*plVar1 + lVar8 + 0x10) = iVar10 + 1;
          lVar6 = *plVar1 + lVar8;
          lVar8 = lVar8 + 0x28;
          *(int *)(lVar6 + 0x24) = (int)uVar11;
        } while (uVar5 != uVar11);
      }
    }
    *(undefined4 *)(param_1[3] + uVar5 * 0x14 + -4) = 0xffffffff;
    *(uint *)(param_1 + 5) = uVar4;
  }
  lVar8 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2) + (long)(int)uVar4;
  lVar6 = param_1[3] + lVar8 * 4;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((long)param_1 + 0x2c);
  lVar6 = param_1[3];
  piVar2 = (int *)(lVar6 + lVar8 * 4);
  *(uint *)((long)param_1 + 0x2c) = uVar4;
  *piVar2 = param_2;
  piVar2[1] = param_3;
  lVar8 = *param_1 + (long)param_2 * 0x18;
  piVar2[3] = *(int *)(lVar8 + 8);
  *(uint *)(lVar8 + 8) = uVar4;
  if (param_3 != -1) {
    lVar8 = *param_1 + (long)param_3 * 0x18;
    *(undefined4 *)(lVar6 + (long)(int)uVar4 * 0x14 + 8) = *(undefined4 *)(lVar8 + 0xc);
    *(uint *)(lVar8 + 0xc) = uVar4;
  }
  return;
}


