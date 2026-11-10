/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f1368; name: FUN_030f1368
 */


void FUN_030f1368(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int local_58 [2];
  
  plVar1 = (long *)(param_1 + 8);
  lVar4 = FUN_030f2f00(plVar1);
  if (lVar4 == 0) {
    uVar10 = 0;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 4);
    uVar10 = ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000;
  }
  uVar6 = uVar6 | uVar10;
  if (-1 < (int)uVar6) {
    lVar4 = *plVar1;
    iVar3 = *(int *)(lVar4 + (long)(int)uVar6 * 0x68 + 0x50);
    uVar10 = iVar3 - 1;
    if (0 < iVar3) {
      do {
        lVar8 = *(long *)(*(long *)(lVar4 + (long)(int)uVar6 * 0x68 + 0x48) +
                          ((long)((ulong)uVar10 << 0x20) >> 0x1c) + 8);
        piVar9 = (int *)(lVar8 + 0x18);
        piVar2 = (int *)(lVar8 + 0x1c);
        if (*piVar9 != *param_2) {
          piVar2 = piVar9;
        }
        local_58[0] = *piVar2;
        lVar8 = FUN_030f2f00(plVar1,local_58);
        if (lVar8 == 0) {
          uVar7 = 0;
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = *(uint *)(lVar8 + 4);
          uVar7 = ((int)lVar8 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000;
        }
        lVar8 = *plVar1 + (long)(int)(uVar11 | uVar7) * 0x68 + 0x48;
        lVar5 = FUN_030f2f74(lVar8,param_2);
        if (lVar5 != 0) {
          FUN_030f2fe4(lVar8,lVar5);
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    lVar4 = FUN_030f2f00(plVar1,param_2);
    if (lVar4 != 0) {
      FUN_030f312c(plVar1,lVar4);
    }
  }
  return;
}


