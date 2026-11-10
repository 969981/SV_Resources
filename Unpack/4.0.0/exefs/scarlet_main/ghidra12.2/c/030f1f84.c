/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f1f84; name: FUN_030f1f84
 */


void FUN_030f1f84(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar3 = FUN_030f3338();
  if (lVar3 == 0) {
    uVar7 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)(lVar3 + 4);
    uVar7 = ((int)lVar3 - (int)param_1[2]) * 0x20000000;
  }
  uVar8 = uVar8 | uVar7;
  if (-1 < (int)uVar8) {
    lVar3 = *param_1;
    iVar4 = *(int *)(lVar3 + (long)(int)uVar8 * 0x28 + 0x10);
    uVar7 = iVar4 - 1;
    if (0 < iVar4) {
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      do {
        lVar11 = *(long *)(*(long *)(lVar3 + (long)(int)uVar8 * 0x28 + 8) +
                           ((long)((ulong)uVar7 << 0x20) >> 0x1c) + 8);
        iVar5 = *(int *)(lVar11 + 0x48);
        iVar4 = iVar5 + -1;
        if (0 < iVar5) {
          lVar9 = (long)(int)param_3[1];
          do {
            puVar6 = (undefined8 *)(*(long *)(lVar11 + 0x40) + (long)iVar4 * 0xc);
            uVar10 = *puVar6;
            uVar2 = *(undefined4 *)(puVar6 + 1);
            iVar5 = (int)lVar9;
            if ((long)((ulong)*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= lVar9) {
              FUN_030f22a8(param_3,puVar1,lVar9 + 1);
              iVar5 = (int)param_3[1];
            }
            puVar6 = (undefined8 *)(*param_3 + (long)iVar5 * 0xc);
            *puVar6 = uVar10;
            *(undefined4 *)(puVar6 + 1) = uVar2;
            *(int *)(param_3 + 1) = (int)lVar9 + 1;
            iVar4 = iVar4 + -1;
            lVar9 = lVar9 + 1;
          } while (-1 < iVar4);
        }
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  return;
}


