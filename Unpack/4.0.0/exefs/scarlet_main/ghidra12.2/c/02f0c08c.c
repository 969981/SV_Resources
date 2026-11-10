/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0c08c; name: FUN_02f0c08c
 */


void FUN_02f0c08c(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_3 + 0x42) >> 2 & 1) == 0) {
    *(uint *)(param_3 + 0x44) = param_2;
    return;
  }
  uVar2 = *(uint *)(param_3 + 0x34);
  if (uVar2 != 0x7fffffff) {
    if (uVar2 == param_2) {
      return;
    }
    *(undefined4 *)(param_3 + 0x44) = 0x7fffffff;
    lVar4 = *(long *)(param_1 + 0x38) + (long)(int)uVar2 * 0x38;
    iVar3 = *(int *)(lVar4 + 0x1c) + -1;
    *(int *)(lVar4 + 0x1c) = iVar3;
    piVar1 = (int *)(lVar4 + 0x18);
    if (iVar3 == 0) {
      *piVar1 = 0x7fffffff;
    }
    else {
      if (*piVar1 == *(int *)(param_3 + 0x30)) {
        *piVar1 = *(int *)(param_3 + 0x38);
      }
      lVar6 = *(long *)(param_1 + 8) + (long)*(int *)(param_3 + 0x3c) * 0x68;
      lVar4 = *(long *)(param_1 + 8) + (long)*(int *)(param_3 + 0x38) * 0x68;
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar6 + 0x30);
      *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar4 + 0x30);
    }
    *(undefined4 *)(param_3 + 0x34) = 0x7fffffff;
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
  }
  if (((param_2 != 0x7fffffff) && (param_2 < *(uint *)(param_1 + 0x40))) &&
     (lVar4 = *(long *)(param_1 + 0x38),
     *(int *)(lVar4 + (long)(int)param_2 * 0x38 + 0x14) != 0x7fffffff)) {
    lVar6 = (long)(int)param_2;
    lVar5 = lVar4 + lVar6 * 0x38;
    *(uint *)(param_3 + 0x34) = param_2;
    iVar3 = *(int *)(lVar5 + 0x1c);
    *(int *)(lVar5 + 0x1c) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 *)(lVar4 + lVar6 * 0x38 + 0x18) = *(undefined4 *)(param_3 + 0x30);
      return;
    }
    lVar4 = *(long *)(param_1 + 8) + (long)*(int *)(lVar4 + lVar6 * 0x38 + 0x18) * 0x68;
    lVar6 = *(long *)(param_1 + 8) + (long)*(int *)(lVar4 + 0x38) * 0x68;
    *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar6 + 0x30);
    *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(lVar4 + 0x30);
  }
  return;
}


