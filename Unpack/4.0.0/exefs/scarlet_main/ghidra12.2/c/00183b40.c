/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00183b40; name: FUN_00183b40
 */


void FUN_00183b40(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 int *param_7,long param_8,int param_9,int param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if ((0 < param_1) && (param_10 < 1)) {
    lVar7 = (long)param_1;
    lVar11 = lVar7 + -1;
    iVar5 = *(int *)(param_4 + lVar11 * 4);
    if (param_9 * 2 <= iVar5) {
      lVar10 = lVar7 * 4;
      iVar5 = FUN_00184a50((param_8 + *(int *)(param_5 + lVar10)) - (long)param_9,(long)param_9,
                           param_3 + lVar7 * 0x400,(long)*(int *)(param_4 + lVar10),
                           param_3 + lVar11 * 0x400,(long)iVar5);
      if (iVar5 < 0) {
        piVar1 = (int *)(param_6 + (long)*param_7 * 0x20);
        *piVar1 = -iVar5;
        piVar1[1] = param_1;
        piVar1[2] = 0;
        *(ulong *)(piVar1 + 4) =
             (long)*(int *)(param_4 + lVar10) | (ulong)*(uint *)(param_5 + lVar10) << 0x20;
        *(ulong *)(piVar1 + 6) =
             (long)*(int *)(param_4 + lVar11 * 4) | (ulong)*(uint *)(param_5 + lVar11 * 4) << 0x20;
        *param_7 = *param_7 + 1;
        if (param_2 + -1 <= (long)param_1) {
          return;
        }
        goto LAB_00183c08;
      }
    }
  }
  if (param_2 + -1 <= (long)param_1) {
    return;
  }
LAB_00183c08:
  if (-1 < param_10) {
    iVar5 = param_1 + 1;
    iVar6 = *(int *)(param_4 + (long)iVar5 * 4);
    if (param_9 * 2 <= iVar6) {
      lVar7 = (long)param_1 * 4;
      iVar6 = FUN_00184a50(param_8 + *(int *)(param_5 + lVar7) + (long)*(int *)(param_4 + lVar7),
                           (long)param_9,param_3 + (long)param_1 * 0x400,
                           (long)*(int *)(param_4 + lVar7),param_3 + (long)iVar5 * 0x400,(long)iVar6
                          );
      if (iVar6 < 0) {
        piVar1 = (int *)(param_6 + (long)*param_7 * 0x20);
        *piVar1 = -iVar6;
        piVar1[1] = param_1;
        piVar1[2] = 1;
        uVar8 = (long)*(int *)(param_4 + lVar7) | (ulong)*(uint *)(param_5 + lVar7) << 0x20;
        lVar7 = (long)iVar5 * 4;
        *(ulong *)(piVar1 + 4) = uVar8;
        uVar9 = (long)*(int *)(param_4 + lVar7) | (ulong)*(uint *)(param_5 + lVar7) << 0x20;
        *(ulong *)(piVar1 + 6) = uVar9;
        puVar2 = (undefined8 *)(param_6 + (long)*param_7 * 0x20);
        uVar3 = *(undefined8 *)piVar1;
        uVar4 = *(undefined8 *)(piVar1 + 2);
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *param_7 = *param_7 + 1;
      }
    }
  }
  return;
}


