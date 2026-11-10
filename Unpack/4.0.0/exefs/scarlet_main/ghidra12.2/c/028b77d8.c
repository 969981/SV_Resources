/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b77d8; name: FUN_028b77d8
 */


void FUN_028b77d8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ushort uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar2) + *(int *)(param_1 + 0x28));
  uVar8 = (ulong)uVar3 & 3;
  if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < uVar8) {
    FUN_0157184c(param_1,uVar8);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar8);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
  }
  else {
    puVar4 = (undefined1 *)(lVar2 - uVar8);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if ((uVar3 & 3) == 0) goto LAB_028b7834;
  }
  *puVar4 = 0;
  if ((uVar8 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar8 != 2)) {
    uVar5 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
  }
LAB_028b7834:
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_2) + 4;
  if ((iVar1 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar8 = FUN_015713f8(param_1,iVar1);
    puVar6 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar6) < 8) {
      FUN_0157184c(param_1,8);
      puVar6 = *(ulong **)(param_1 + 0x38);
    }
    *puVar6 = uVar8 & 0xffffffff | 0x2200000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar7 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar7 < 0x23) {
      uVar7 = 0x22;
    }
    *(ushort *)(param_1 + 0x44) = uVar7;
  }
  return;
}


