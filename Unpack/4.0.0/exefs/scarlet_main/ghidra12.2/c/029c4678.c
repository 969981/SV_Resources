/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c4678; name: FUN_029c4678
 */


void FUN_029c4678(long param_1,ushort param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  
  if (param_3 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  uVar4 = -((*(int *)(param_1 + 0x20) - (int)lVar7) + *(int *)(param_1 + 0x28));
  uVar10 = (ulong)uVar4 & 3;
  if ((ulong)(lVar7 - *(long *)(param_1 + 0x38)) < uVar10) {
    FUN_0157184c(param_1,uVar10);
    puVar5 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar10);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
LAB_029c47e0:
    *puVar5 = 0;
    if ((uVar10 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar10 != 2)) {
      uVar6 = 2;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar6) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar10 != uVar6);
    }
  }
  else {
    puVar5 = (undefined1 *)(lVar7 - uVar10);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
    if ((uVar4 & 3) != 0) goto LAB_029c47e0;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  iVar9 = ((int)*(undefined8 *)(param_1 + 0x20) - (int)lVar7) + (int)*(undefined8 *)(param_1 + 0x28)
  ;
  iVar1 = (iVar9 - param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) == '\0')) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  uVar4 = -iVar9;
  uVar10 = (ulong)uVar4 & 3;
  if ((ulong)(lVar7 - *(long *)(param_1 + 0x38)) < uVar10) {
    FUN_0157184c(param_1,uVar10);
    puVar5 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar10);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
  }
  else {
    puVar5 = (undefined1 *)(lVar7 - uVar10);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
    if ((uVar4 & 3) == 0) goto LAB_029c4724;
  }
  *puVar5 = 0;
  if ((uVar10 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar10 != 2)) {
    uVar6 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar6) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar6);
  }
LAB_029c4724:
  lVar7 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar7 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_0157184c(param_1,4);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar7 + -4;
  *(int *)(lVar7 + -4) = iVar1;
  lVar7 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar2 - (long)puVar8) < 8) {
    FUN_0157184c(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = (lVar7 - lVar2) + lVar3 & 0xffffffffU | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (param_2 <= *(ushort *)(param_1 + 0x44)) {
    param_2 = *(ushort *)(param_1 + 0x44);
  }
  *(ushort *)(param_1 + 0x44) = param_2;
  return;
}


