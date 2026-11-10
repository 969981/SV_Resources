/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd2bd0; name: FUN_02fd2bd0
 */


void FUN_02fd2bd0(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined2 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  
  do {
    uVar12 = (int)(param_2 + param_3) >> 1;
    iVar3 = *(int *)(param_1 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3))
    ;
    uVar7 = (ulong)param_3;
    uVar12 = param_2;
    do {
      puVar5 = (undefined2 *)(param_1 + -4 + (long)(int)uVar12 * 8);
      do {
        uVar9 = uVar12;
        puVar8 = puVar5;
        puVar5 = puVar8 + 4;
        uVar12 = uVar9 + 1;
      } while (iVar3 < *(int *)(puVar8 + 2));
      uVar10 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
      uVar7 = (ulong)((int)uVar7 + 1);
      do {
        piVar1 = (int *)(param_1 + uVar10);
        uVar10 = uVar10 - 8;
        iVar6 = (int)uVar7;
        uVar4 = iVar6 - 1;
        uVar7 = (ulong)uVar4;
      } while (*piVar1 < iVar3);
      uVar12 = uVar9;
      if ((int)uVar9 <= (int)uVar4) {
        if (uVar9 != uVar4) {
          lVar2 = param_1 + uVar10;
          uVar11 = *(undefined8 *)(lVar2 + 8);
          *(int *)(lVar2 + 8) = *(int *)(puVar8 + 2);
          *(undefined2 *)(lVar2 + 0xc) = *puVar5;
          *(undefined1 *)(lVar2 + 0xe) = *(undefined1 *)(puVar8 + 5);
          *(int *)(puVar8 + 2) = (int)uVar11;
          *puVar5 = (short)((ulong)uVar11 >> 0x20);
          *(char *)(puVar8 + 5) = (char)((ulong)uVar11 >> 0x30);
        }
        uVar7 = (ulong)(iVar6 - 2);
        uVar12 = uVar9 + 1;
      }
    } while ((int)uVar12 <= (int)uVar7);
    if ((int)param_2 < (int)uVar7) {
      FUN_02fd2bd0(param_1);
    }
    param_2 = uVar12;
  } while ((int)uVar12 < (int)param_3);
  return;
}


