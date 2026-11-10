/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169d290; name: FUN_0169d290
 */


void FUN_0169d290(long param_1,ushort param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (param_3 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar2) + *(int *)(param_1 + 0x28));
  uVar7 = (ulong)uVar3 & 3;
  if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < uVar7) {
    FUN_0157184c(param_1,uVar7);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
  }
  else {
    puVar4 = (undefined1 *)(lVar2 - uVar7);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if ((uVar3 & 3) == 0) goto LAB_0169d2f0;
  }
  *puVar4 = 0;
  if ((uVar7 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar7 != 2)) {
    uVar5 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
LAB_0169d2f0:
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar7 = FUN_015713f8(param_1,iVar1);
    puVar6 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar6) < 8) {
      FUN_0157184c(param_1,8);
      puVar6 = *(ulong **)(param_1 + 0x38);
    }
    *puVar6 = uVar7 & 0xffffffff | (ulong)param_2 << 0x20;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (param_2 <= *(ushort *)(param_1 + 0x44)) {
      param_2 = *(ushort *)(param_1 + 0x44);
    }
    *(ushort *)(param_1 + 0x44) = param_2;
  }
  return;
}


