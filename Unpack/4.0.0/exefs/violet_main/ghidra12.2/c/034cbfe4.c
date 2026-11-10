/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cbfe4; name: FUN_034cbfe4
 */


void FUN_034cbfe4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  if (((*(long *)(param_2 + 8) != 0) &&
      (uVar1 = *(uint *)(*(long *)(*(long *)(param_2 + 8) + 0x170) + 0x18), uVar1 != 0)) &&
     (uVar5 = *(uint *)(param_1 + 0x28), uVar5 != 0)) {
    iVar7 = 0;
    do {
      uVar10 = iVar7 + (uVar5 >> 1);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x20) +
                       (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3));
      if (uVar2 == uVar1) {
        lVar9 = *(long *)(param_1 + 0x20) + (long)(int)uVar10 * 8;
        iVar7 = *(int *)(lVar9 + 4) + -1;
        *(int *)(lVar9 + 4) = iVar7;
        if (iVar7 != 0) goto LAB_034cc04c;
        uVar5 = *(uint *)(param_1 + 0x28);
        if (uVar5 == 0) goto LAB_034cc04c;
        lVar9 = *(long *)(param_1 + 0x20);
        iVar7 = 0;
        uVar10 = uVar5;
        goto LAB_034cc070;
      }
      if (uVar2 < uVar1) {
        iVar7 = uVar10 + 1;
      }
      uVar5 = uVar5 - (uVar2 < uVar1) >> 1;
    } while (uVar5 != 0);
  }
  return;
LAB_034cc070:
  uVar2 = iVar7 + (uVar10 >> 1);
  uVar3 = *(uint *)(lVar9 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3));
  if (uVar3 == uVar1) {
    puVar4 = (undefined8 *)((lVar9 + (ulong)uVar5 * 8) - 8);
    puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8);
    if (puVar8 < puVar4) {
      do {
        puVar6 = puVar8 + 1;
        *puVar8 = *puVar6;
        puVar8 = puVar6;
      } while (puVar6 < puVar4);
      uVar5 = *(uint *)(param_1 + 0x28);
    }
    *(uint *)(param_1 + 0x28) = uVar5 - 1;
LAB_034cc04c:
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    return;
  }
  if (uVar3 < uVar1) {
    iVar7 = uVar2 + 1;
  }
  uVar10 = uVar10 - (uVar3 < uVar1) >> 1;
  if (uVar10 == 0) goto LAB_034cc04c;
  goto LAB_034cc070;
}


