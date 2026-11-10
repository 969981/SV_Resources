/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8d9d0; name: FUN_02e8d9d0
 */


void FUN_02e8d9d0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulong uVar11;
  
  puVar4 = PTR_PTR_047d1a50;
  if (param_2 < 5) {
    param_2 = 4;
  }
  uVar3 = param_2 * 2 - 1;
  uVar3 = uVar3 | (int)uVar3 >> 0x10;
  uVar3 = uVar3 | (int)uVar3 >> 8;
  uVar3 = uVar3 | (int)uVar3 >> 4;
  uVar3 = uVar3 | (int)uVar3 >> 2;
  uVar3 = uVar3 | (int)uVar3 >> 1;
  uVar1 = uVar3 + 1;
  uVar11 = (ulong)uVar1;
  lVar5 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                    (PTR_PTR_047d1a50,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
  if (-1 < (int)uVar3) {
    uVar7 = uVar11 & 3;
    if (uVar11 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      puVar9 = (undefined4 *)(lVar5 + 0x14);
      do {
        uVar8 = uVar8 + 4;
        puVar9[-4] = 0xffffffff;
        puVar9[-2] = 0xffffffff;
        *puVar9 = 0xffffffff;
        puVar9[2] = 0xffffffff;
        puVar9 = puVar9 + 8;
      } while ((uVar11 & 0xfffffffc) != uVar8);
    }
    if ((uVar1 & 3) != 0) {
      puVar9 = (undefined4 *)(lVar5 + uVar8 * 8 + 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 2;
      } while (uVar7 != 0);
    }
  }
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 4) == -2)) {
    *param_1 = lVar5;
    *(uint *)(param_1 + 1) = uVar3;
    return;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *param_1 = lVar5;
  *(uint *)(param_1 + 1) = uVar3;
  if (-1 < (int)uVar1) {
    lVar5 = 0;
    do {
      iVar2 = *(int *)(lVar6 + lVar5 * 8 + 4);
      if (-1 < iVar2) {
        uVar3 = *(uint *)(lVar6 + lVar5 * 8);
        uVar11 = (ulong)(*(uint *)(param_1 + 1) & uVar3);
        while (piVar10 = (int *)(*param_1 + uVar11 * 8 + 4), -1 < *piVar10) {
          uVar11 = uVar11 + 1 & (long)(int)*(uint *)(param_1 + 1);
        }
        *(uint *)(*param_1 + uVar11 * 8) = uVar3;
        *piVar10 = iVar2;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != (ulong)uVar1 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x02e8db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(puVar4[8],lVar6,0);
  return;
}


