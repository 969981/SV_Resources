/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038d290; name: FUN_0038d290
 */


ulong FUN_0038d290(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  if (param_1 == 0) {
    *param_2 = 0x30;
    param_2[1] = 0;
    return 1;
  }
  if (param_1 < 0) {
    uVar6 = 0;
    lVar10 = param_1;
    do {
      uVar1 = lVar10 + 9;
      uVar5 = uVar6 + 1;
      param_2[uVar6] = ((char)(lVar10 / 10) * '\n' - (char)lVar10) + '0';
      uVar6 = uVar5;
      lVar10 = lVar10 / 10;
    } while (0x12 < uVar1);
  }
  else {
    uVar6 = 0;
    lVar10 = param_1;
    do {
      uVar1 = lVar10 + 9;
      uVar5 = uVar6 + 1;
      param_2[uVar6] = (char)lVar10 + (char)(lVar10 / 10) * -10 + '0';
      uVar6 = uVar5;
      lVar10 = lVar10 / 10;
    } while (0x12 < uVar1);
  }
  uVar4 = (uint)uVar5;
  if (param_1 < 0) {
    param_2[uVar5 & 0xffffffff] = 0x2d;
    uVar4 = uVar4 + 1;
    uVar5 = (ulong)uVar4;
  }
  puVar3 = param_2 + (int)uVar4;
  puVar7 = puVar3 + -1;
  if (param_2 < puVar7) {
    do {
      puVar9 = param_2 + 1;
      uVar2 = *param_2;
      *param_2 = *puVar7;
      puVar8 = puVar7 + -1;
      *puVar7 = uVar2;
      puVar7 = puVar8;
      param_2 = puVar9;
    } while (puVar9 < puVar8);
  }
  *puVar3 = 0;
  return uVar5;
}


