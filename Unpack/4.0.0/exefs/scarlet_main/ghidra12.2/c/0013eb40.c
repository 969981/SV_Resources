/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013eb40; name: FUN_0013eb40
 */


void FUN_0013eb40(long param_1,long *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)((long)param_2 + 0x2c);
  uVar11 = (ulong)uVar4;
  if ((int)param_4 < 0) {
    if (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x10) >> 4 <= (long)(int)uVar4) {
      lVar10 = *(long *)(param_1 + 0x30);
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_0012ac30(param_1);
      }
      FUN_00126e50(param_1,uVar4,1);
      param_3 = *(long *)(param_1 + 0x30) + (param_3 - lVar10);
    }
    *(long *)(param_1 + 0x10) = param_3 + (long)(int)uVar4 * 0x10;
    param_4 = uVar11;
  }
  uVar6 = 0;
  uVar5 = (uint)param_4;
  if ((0 < (int)uVar5) && (0 < (int)uVar4)) {
    uVar6 = uVar5;
    if (uVar4 - 1 <= uVar5 - 1) {
      uVar6 = uVar4;
    }
    uVar8 = 0;
    if (uVar6 != 1) {
      lVar10 = 0;
      uVar8 = 0;
      do {
        puVar1 = (undefined8 *)(*param_2 + uVar11 * -0x10 + lVar10);
        puVar2 = (undefined8 *)(param_3 + lVar10);
        *puVar2 = *puVar1;
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
        lVar3 = *param_2 + uVar11 * -0x10 + lVar10;
        lVar10 = lVar10 + 0x20;
        puVar2[2] = *(undefined8 *)(lVar3 + 0x10);
        uVar8 = uVar8 + 2;
        *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(lVar3 + 0x18);
      } while (((ulong)uVar6 & 0xfffffffe) != uVar8);
    }
    if ((uVar6 & 1) != 0) {
      puVar1 = (undefined8 *)(param_3 + uVar8 * 0x10);
      puVar2 = (undefined8 *)(*param_2 + uVar11 * -0x10 + uVar8 * 0x10);
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    }
  }
  if ((int)uVar6 < (int)uVar5) {
    uVar11 = (ulong)uVar6;
    uVar7 = ~uVar11;
    uVar8 = (ulong)(uVar5 - uVar6) & 3;
    if ((uVar5 - uVar6 & 3) != 0) {
      puVar9 = (undefined1 *)(param_3 + uVar11 * 0x10 + 8);
      do {
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 - 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 0x10;
      } while (uVar8 != 0);
    }
    if (2 < uVar7 + (param_4 & 0xffffffff)) {
      lVar10 = (param_4 & 0xffffffff) - uVar11;
      puVar9 = (undefined1 *)(param_3 + uVar11 * 0x10 + 0x28);
      do {
        puVar9[-0x20] = 0;
        lVar10 = lVar10 + -4;
        puVar9[-0x10] = 0;
        *puVar9 = 0;
        puVar9[0x10] = 0;
        puVar9 = puVar9 + 0x40;
      } while (lVar10 != 0);
    }
  }
  return;
}


