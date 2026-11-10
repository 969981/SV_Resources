/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c34c8; name: FUN_031c34c8
 */


void FUN_031c34c8(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar3 = *(uint *)((long)param_1 + 0x1c);
  lVar4 = *param_1;
  if (uVar3 == 0) {
    piVar7 = (int *)(lVar4 + 0x18);
    iVar1 = *piVar7;
    if (1 < iVar1) {
      puVar9 = (undefined8 *)param_1[1];
      iVar2 = *(int *)(puVar9 + 0xb);
      lVar8 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(iVar1 + -2) * 8);
      lVar5 = puVar9[1];
      *(undefined8 *)(lVar5 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(lVar4 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar2 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar5 + (long)(iVar2 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar8 + 8) = 0;
      uVar3 = 0xffffffff;
      goto LAB_031c3584;
    }
  }
  puVar6 = (uint *)param_1[2];
  piVar7 = (int *)(lVar4 + 8);
  lVar4 = param_1[3];
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = *puVar6 & 0xffff0000 | uVar3 & 0xffff;
  *puVar6 = *puVar6 & 0xffff | (int)lVar4 << 0x10;
LAB_031c3584:
  *piVar7 = *piVar7 + uVar3;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}


