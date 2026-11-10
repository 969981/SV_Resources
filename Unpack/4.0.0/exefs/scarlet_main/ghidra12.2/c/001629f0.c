/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001629f0; name: FUN_001629f0
 */


void FUN_001629f0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)(param_1 + 8);
  uVar4 = (uint)uVar5;
  if ((uVar5 != 0) && (piVar6 = (int *)*puVar2, 0x20 < (int)uVar4)) {
    uVar10 = 1;
    iVar9 = *piVar6;
    piVar11 = piVar6;
    do {
      piVar11 = piVar11 + 2;
      if (*piVar11 == iVar9) break;
      uVar10 = uVar10 + 1;
      iVar9 = *piVar11;
    } while ((uVar5 & 0xffffffff) != uVar10);
    if ((uint)uVar10 != uVar4) {
      uVar5 = (ulong)((uint)uVar10 - 1);
      do {
        iVar9 = *(int *)((long)piVar6 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3));
        iVar7 = (int)uVar10;
        uVar8 = uVar4;
        if ((int)(iVar7 + 0x10U) <= (int)uVar4) {
          uVar8 = iVar7 + 0x10U;
        }
        if (iVar7 < (int)uVar8) {
          uVar10 = (ulong)iVar7;
          piVar11 = piVar6 + (long)iVar7 * 2;
          do {
            if (*piVar11 != iVar9) break;
            uVar10 = uVar10 + 1;
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar1;
            *(undefined8 *)(piVar6 + (long)(int)uVar1 * 2) = *(undefined8 *)piVar11;
            piVar11 = piVar11 + 2;
          } while ((long)uVar10 < (long)(int)uVar8);
          uVar10 = uVar10 & 0xffffffff;
        }
        uVar8 = (uint)uVar10;
        if ((int)uVar8 < (int)uVar4) {
          piVar11 = piVar6 + (long)(int)uVar8 * 2;
          do {
            uVar8 = (uint)uVar10;
            if (*piVar11 != iVar9) break;
            uVar8 = uVar8 + 1;
            uVar10 = (ulong)uVar8;
            piVar11 = piVar11 + 2;
          } while (uVar4 != uVar8);
        }
        if (uVar8 == uVar4) break;
        uVar10 = (ulong)(uVar8 + 1);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        *(undefined8 *)(piVar6 + (long)(int)uVar1 * 2) =
             *(undefined8 *)(piVar6 + (long)(int)uVar8 * 2);
        if ((int)(uVar8 + 1) < (int)uVar4) {
          while( true ) {
            iVar9 = (int)uVar10;
            if (piVar6[(long)iVar9 * 2] ==
                *(int *)((long)piVar6 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)))
            break;
            uVar8 = iVar9 + 1;
            uVar10 = (ulong)uVar8;
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar1;
            *(undefined8 *)(piVar6 + (long)(int)uVar1 * 2) =
                 *(undefined8 *)(piVar6 + (long)iVar9 * 2);
            if (uVar4 == uVar8) goto LAB_00162b4c;
          }
        }
      } while ((uint)uVar10 != uVar4);
LAB_00162b4c:
      uVar10 = *(ulong *)(param_1 + 0x18);
      uVar5 = (ulong)((int)uVar5 + 1);
      if (uVar10 <= uVar5) {
        if ((*(ulong *)(param_1 + 0x10) < uVar5) && (lVar3 = FUN_0016443c(puVar2), lVar3 != 0)) {
          (**(code **)PTR_PTR_047cb898)();
        }
        uVar5 = (uVar5 - uVar10) + *(long *)(param_1 + 0x18);
      }
      *(ulong *)(param_1 + 0x18) = uVar5;
      FUN_001642b0(puVar2);
      return;
    }
  }
  return;
}


