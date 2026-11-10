/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00375bf4; name: FUN_00375bf4
 */


void FUN_00375bf4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
    lVar4 = (long)param_1 + 9;
LAB_00375c5c:
    uVar1 = FUN_0038cbd0(lVar4,uVar3,*(undefined4 *)PTR_DAT_047cc650);
    lVar4 = param_1[4];
    if (lVar4 != 0) goto LAB_00375c78;
LAB_00375c4c:
    uVar3 = (ulong)*(byte *)(param_1 + 5);
    lVar4 = (long)param_1 + 0x29;
  }
  else {
    if (*(int *)(lVar4 + 8) == 1) {
      uVar1 = *(uint *)(lVar4 + 0x60);
      lVar4 = param_1[4];
    }
    else {
      if (*(int *)(lVar4 + 8) != 0) {
        uVar3 = param_1[1];
        lVar4 = param_1[2];
        goto LAB_00375c5c;
      }
      uVar1 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
      lVar4 = param_1[4];
    }
    if (lVar4 == 0) goto LAB_00375c4c;
LAB_00375c78:
    if (*(int *)(lVar4 + 8) == 1) {
      uVar2 = *(uint *)(lVar4 + 0x60);
      goto LAB_00375cb8;
    }
    if (*(int *)(lVar4 + 8) == 0) {
      uVar2 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
      goto LAB_00375cb8;
    }
    uVar3 = param_1[5];
    lVar4 = param_1[6];
  }
  uVar2 = FUN_0038cbd0(lVar4,uVar3,*(undefined4 *)PTR_DAT_047cc650);
LAB_00375cb8:
  *(uint *)(param_1 + 8) = uVar2 ^ (uVar1 >> 0x1e | uVar1 << 2);
  return;
}


