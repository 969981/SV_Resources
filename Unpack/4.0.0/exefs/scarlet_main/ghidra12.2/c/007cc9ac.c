/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cc9ac; name: FUN_007cc9ac
 */


void FUN_007cc9ac(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar10 = (ulong)uVar2;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar2 == uVar3) {
    if (0 < (int)uVar2) {
      lVar7 = *param_1;
      uVar5 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        puVar8 = (undefined8 *)(lVar7 + 0x10);
        do {
          *(undefined8 *)puVar8[-2] = 0;
          *(undefined8 *)puVar8[-1] = 0;
          *(undefined8 *)*puVar8 = 0;
          puVar1 = puVar8 + 1;
          uVar9 = uVar9 + 4;
          puVar8 = puVar8 + 4;
          *(undefined8 *)*puVar1 = 0;
        } while ((uVar10 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        puVar8 = (undefined8 *)(lVar7 + uVar9 * 8);
        do {
          uVar5 = uVar5 - 1;
          *(undefined8 *)*puVar8 = 0;
          puVar8 = puVar8 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  else if (0 < (int)uVar2) {
    iVar4 = *(int *)((long)param_1 + 0xc);
    uVar10 = (ulong)iVar4;
    if (iVar4 < (int)uVar3) {
      lVar7 = *param_1;
      uVar9 = ~uVar10;
      uVar5 = (ulong)(uVar3 - iVar4) & 3;
      if ((uVar3 - iVar4 & 3) != 0) {
        do {
          lVar6 = uVar10 * 8;
          uVar10 = uVar10 + 1;
          uVar5 = uVar5 - 1;
          **(undefined8 **)(lVar7 + lVar6) = 0;
        } while (uVar5 != 0);
      }
      if (2 < uVar9 + (long)(int)uVar3) {
        lVar6 = (long)(int)uVar3 - uVar10;
        puVar8 = (undefined8 *)(lVar7 + uVar10 * 8 + 0x10);
        do {
          *(undefined8 *)puVar8[-2] = 0;
          *(undefined8 *)puVar8[-1] = 0;
          *(undefined8 *)*puVar8 = 0;
          puVar1 = puVar8 + 1;
          lVar6 = lVar6 + -4;
          puVar8 = puVar8 + 4;
          *(undefined8 *)*puVar1 = 0;
        } while (lVar6 != 0);
      }
    }
  }
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}


