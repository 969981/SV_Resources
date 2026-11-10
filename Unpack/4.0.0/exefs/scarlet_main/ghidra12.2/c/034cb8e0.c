/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cb8e0; name: FUN_034cb8e0
 */


void FUN_034cb8e0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStack_24 [4];
  
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar4 != param_2) {
    if ((uVar4 != 0) && (uVar6 = *(uint *)(param_1 + 0x28), uVar6 != 0)) {
      iVar8 = 0;
      do {
        uVar10 = iVar8 + (uVar6 >> 1);
        uVar1 = *(uint *)(*(long *)(param_1 + 0x20) +
                         (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3));
        if (uVar1 == uVar4) {
          lVar3 = *(long *)(param_1 + 0x20) + (long)(int)uVar10 * 8;
          iVar8 = *(int *)(lVar3 + 4) + -1;
          *(int *)(lVar3 + 4) = iVar8;
          if (iVar8 == 0) {
            uVar4 = *(uint *)(param_1 + 0x28);
            if (uVar4 != 0) {
              uVar6 = *(uint *)(param_1 + 0x60);
              iVar8 = 0;
              lVar3 = *(long *)(param_1 + 0x20);
              uVar10 = uVar4;
              goto LAB_034cb9b4;
            }
          }
          break;
        }
        if (uVar1 < uVar4) {
          iVar8 = uVar10 + 1;
        }
        uVar6 = uVar6 - (uVar1 < uVar4) >> 1;
      } while (uVar6 != 0);
    }
LAB_034cb95c:
    if ((param_2 != 0) && (lVar3 = FUN_034ccae0(param_1 + 0x20,param_2,auStack_24), lVar3 != 0)) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    }
    *(uint *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
LAB_034cb9b4:
  uVar1 = iVar8 + (uVar10 >> 1);
  uVar2 = *(uint *)(lVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
  if (uVar2 != uVar6) goto code_r0x034cb9cc;
  puVar7 = (undefined8 *)((lVar3 + (ulong)uVar4 * 8) - 8);
  puVar9 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8);
  if (puVar9 < puVar7) {
    do {
      puVar5 = puVar9 + 1;
      *puVar9 = *puVar5;
      puVar9 = puVar5;
    } while (puVar5 < puVar7);
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x28) = uVar4 - 1;
  goto LAB_034cb95c;
code_r0x034cb9cc:
  if (uVar2 < uVar6) {
    iVar8 = uVar1 + 1;
  }
  uVar10 = uVar10 - (uVar2 < uVar6) >> 1;
  if (uVar10 == 0) goto LAB_034cb95c;
  goto LAB_034cb9b4;
}


