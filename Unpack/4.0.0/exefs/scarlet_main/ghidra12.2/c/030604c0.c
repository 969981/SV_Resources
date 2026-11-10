/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030604c0; name: FUN_030604c0
 */


void FUN_030604c0(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 < (int)param_3) {
    if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) < (int)param_3) {
      FUN_03060d68((long *)(param_1 + 0xc0),(long)(int)param_3);
      iVar3 = *(int *)(param_1 + 200);
    }
    puVar2 = PTR_PTR_047d1a50;
    if (iVar3 < (int)param_3) {
      lVar7 = *(long *)(param_1 + 0xc0);
      *(uint *)(param_1 + 200) = param_3;
      puVar4 = (undefined8 *)(lVar7 + (long)iVar3 * 0x10);
      do {
        puVar5 = puVar4 + 2;
        *puVar4 = 0;
        puVar4[1] = 0x8000000000000000;
        puVar4 = puVar5;
      } while (puVar5 != (undefined8 *)(lVar7 + (long)(int)param_3 * 0x10));
    }
    else if ((int)param_3 < iVar3) {
      *(uint *)(param_1 + 200) = param_3;
      puVar9 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (long)iVar3 * 0x10 + -8);
      lVar7 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4) +
              (long)iVar3 * -0x10;
      do {
        *puVar9 = 0;
        if ((-1 < (int)puVar9[1]) && (*(long *)(puVar9 + -2) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(puVar9 + -2),(ulong)(uint)puVar9[1] << 2);
        }
        *(undefined8 *)(puVar9 + -2) = 0;
        lVar7 = lVar7 + 0x10;
        puVar9[1] = 0x80000000;
        puVar9 = puVar9 + -4;
      } while (lVar7 != 0);
    }
  }
  lVar7 = *(long *)(param_1 + 0xc0) + (long)(int)param_3 * 0x10;
  piVar8 = (int *)(lVar7 + -8);
  iVar3 = *piVar8;
  lVar6 = (long)iVar3;
  uVar1 = *param_2;
  if ((int)(*(uint *)(lVar7 + -4) & 0x7fffffff) <= iVar3) {
    FUN_0133bb88((long *)(lVar7 + -0x10),PTR_PTR_047d1a50,lVar6 + 1);
    iVar3 = *piVar8;
  }
  *(undefined4 *)(*(long *)(lVar7 + -0x10) + (long)iVar3 * 4) = uVar1;
  *piVar8 = (int)(lVar6 + 1);
  return;
}


