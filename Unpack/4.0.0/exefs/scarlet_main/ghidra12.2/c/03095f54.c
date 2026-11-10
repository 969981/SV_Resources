/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03095f54; name: FUN_03095f54
 */


void FUN_03095f54(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  sVar5 = (short)param_2[2];
  uVar1 = (int)sVar5 & 0xfffffffe;
  puVar6 = (undefined8 *)*param_3;
  iVar8 = *param_2;
  lVar9 = (long)iVar8;
  if (0 < (int)uVar1) {
    uVar10 = 0;
    lVar11 = lVar9 * 0x14;
    puVar7 = puVar6;
    lVar13 = lVar9;
    do {
      if (lVar13 < *(int *)(param_1 + 0x30)) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar12 = (int)lVar13;
        }
        else {
          iVar12 = *(int *)(*(long *)(param_1 + 0x70) + lVar13 * 4);
        }
        if (iVar12 == -1) {
          piVar14 = (int *)(*(long *)(param_1 + 0x28) + (uVar10 + lVar9) * 0x14);
        }
        else {
          piVar14 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar12 * 0x14);
        }
      }
      else {
        piVar14 = (int *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_1 + 0x30) * -0x14 +
                         lVar11);
      }
      iVar12 = *piVar14;
      iVar3 = piVar14[1];
      uVar10 = uVar10 + 2;
      lVar11 = lVar11 + 0x28;
      iVar4 = *(int *)(param_1 + 0x40);
      lVar13 = lVar13 + 2;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar12 * 0x10);
      if (iVar4 <= iVar12) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar12 - iVar4) * 0x10);
      }
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar3 * 0x10);
      if (iVar4 <= iVar3) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0xf0) + (long)(iVar3 - iVar4) * 0x10);
      }
      uVar15 = *puVar2;
      uVar17 = puVar6[1];
      uVar16 = *puVar6;
      puVar6 = puVar7 + 4;
      puVar7[1] = puVar2[1];
      *puVar7 = uVar15;
      puVar7[3] = uVar17;
      puVar7[2] = uVar16;
      puVar7 = puVar6;
    } while (uVar10 < uVar1);
  }
  if (((int)sVar5 & 1U) != 0) {
    iVar8 = iVar8 + sVar5 + -1;
    if (iVar8 < *(int *)(param_1 + 0x30)) {
      lVar9 = *(long *)(param_1 + 0x28);
      iVar12 = iVar8;
      if (*(int *)(param_1 + 0x78) != 0) {
        iVar12 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar8 * 4);
      }
      if (iVar12 != -1) {
        lVar9 = *(long *)(param_1 + 0xc0);
        iVar8 = iVar12;
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0xe0);
      iVar8 = iVar8 - *(int *)(param_1 + 0x30);
    }
    iVar8 = *(int *)(lVar9 + (long)iVar8 * 0x14);
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar8 * 0x10);
    if (*(int *)(param_1 + 0x40) <= iVar8) {
      puVar7 = (undefined8 *)
               (*(long *)(param_1 + 0xf0) + (long)(iVar8 - *(int *)(param_1 + 0x40)) * 0x10);
    }
    uVar15 = *puVar7;
    puVar6[1] = puVar7[1];
    *puVar6 = uVar15;
  }
  puVar6 = (undefined8 *)*param_3;
  lVar9 = param_3[1];
  uVar15 = *puVar6;
  puVar6[(long)(int)lVar9 * 2 + -1] = puVar6[1];
  puVar6[(long)(int)lVar9 * 2 + -2] = uVar15;
  return;
}


