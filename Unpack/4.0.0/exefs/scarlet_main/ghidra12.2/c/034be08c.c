/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034be08c; name: FUN_034be08c
 */


undefined8 FUN_034be08c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  
  lVar8 = *param_1;
  uVar6 = *(uint *)(param_1 + 1);
  if (lVar8 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar4 = uVar6;
    if (0 < (int)uVar6) {
      iVar10 = 0;
      do {
        iVar1 = iVar10 + uVar4;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        lVar5 = *(long *)(lVar8 + (long)(int)uVar3 * 0x10 + 8);
        if ((*(ulong *)(lVar5 + 0x10) < *(ulong *)(param_2 + 0x10)) ||
           ((*(ulong *)(lVar5 + 0x10) == *(ulong *)(param_2 + 0x10) &&
            ((*(uint *)(lVar5 + 0x18) < *(uint *)(param_2 + 0x18) ||
             ((*(uint *)(lVar5 + 0x18) == *(uint *)(param_2 + 0x18) &&
              ((*(uint *)(lVar5 + 0x20) < *(uint *)(param_2 + 0x20) ||
               ((*(uint *)(lVar5 + 0x20) == *(uint *)(param_2 + 0x20) &&
                (((*(char *)(lVar5 + 0x28) + 1U & 0x1f) < (*(char *)(param_2 + 0x28) + 1U & 0x1f) ||
                 ((*(char *)(lVar5 + 0x28) == *(char *)(param_2 + 0x28) &&
                  (((byte)(*(char *)(lVar5 + 0x30) + 1U) < (byte)(*(char *)(param_2 + 0x30) + 1U) ||
                   ((*(char *)(lVar5 + 0x30) == *(char *)(param_2 + 0x30) &&
                    (*(ulong *)(lVar5 + 0x38) < *(ulong *)(param_2 + 0x38))))))))))))))))))))) {
          iVar10 = uVar3 + 1;
        }
        else {
          uVar4 = uVar3;
        }
      } while (iVar10 < (int)uVar4);
    }
    puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar4 * 0x10);
  }
  puVar2 = (undefined8 *)(lVar8 + (ulong)uVar6 * 0x10);
  if (puVar9 != puVar2) {
    do {
      lVar8 = puVar9[1];
      if (*(long *)(lVar8 + 0x10) != *(long *)(param_2 + 0x10)) {
        return 0;
      }
      if (*(int *)(lVar8 + 0x18) != *(int *)(param_2 + 0x18)) {
        return 0;
      }
      if (*(int *)(lVar8 + 0x20) != *(int *)(param_2 + 0x20)) {
        return 0;
      }
      if (*(char *)(lVar8 + 0x28) != *(char *)(param_2 + 0x28)) {
        return 0;
      }
      if (*(char *)(lVar8 + 0x30) != *(char *)(param_2 + 0x30)) {
        return 0;
      }
      if (*(long *)(lVar8 + 0x38) != *(long *)(param_2 + 0x38)) {
        return 0;
      }
      if (lVar8 == param_2) {
        if (puVar9 < puVar2 + -2) {
          do {
            puVar7 = puVar9 + 2;
            *puVar9 = *puVar7;
            puVar9[1] = puVar9[3];
            puVar9 = puVar7;
          } while (puVar7 < puVar2 + -2);
          uVar6 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar6 - 1;
        return 1;
      }
      puVar9 = puVar9 + 2;
    } while (puVar2 != puVar9);
  }
  return 0;
}


