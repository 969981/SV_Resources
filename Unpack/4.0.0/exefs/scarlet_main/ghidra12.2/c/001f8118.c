/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f8118; name: FUN_001f8118
 */


long FUN_001f8118(byte *param_1,long param_2,byte *param_3,long param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar4 = PTR_DAT_047cba10;
  if (param_4 != 0) {
    bVar6 = *param_1;
    lVar5 = param_4;
    do {
      bVar1 = *param_3;
      uVar7 = (ulong)bVar6;
      uVar8 = (ulong)(bVar1 >> 4);
      if (((byte)puVar4[uVar8 * 2 + (ulong)(bVar1 >> 4) + uVar7 * 0x30 + 1] >> 2 & 1) != 0) {
        return -0x20b;
      }
      if (((byte)puVar4[uVar8 * 2 + (ulong)(bVar1 >> 4) + uVar7 * 0x30 + 1] >> 1 & 1) != 0) {
        puVar9 = *(undefined1 **)(param_2 + 0x18);
        uVar2 = puVar4[uVar8 * 3 + uVar7 * 0x30 + 2];
        *(undefined1 **)(param_2 + 0x18) = puVar9 + 1;
        *puVar9 = uVar2;
        bVar1 = *param_3;
      }
      uVar7 = (ulong)(byte)puVar4[uVar8 * 3 + uVar7 * 0x30];
      lVar3 = ((ulong)bVar1 & 0xf) * 3;
      bVar1 = puVar4[lVar3 + uVar7 * 0x30 + 1];
      if ((bVar1 >> 2 & 1) != 0) {
        return -0x20b;
      }
      if ((bVar1 >> 1 & 1) != 0) {
        puVar9 = *(undefined1 **)(param_2 + 0x18);
        *(undefined1 **)(param_2 + 0x18) = puVar9 + 1;
        *puVar9 = puVar4[lVar3 + uVar7 * 0x30 + 2];
      }
      bVar6 = puVar4[lVar3 + uVar7 * 0x30];
      lVar5 = lVar5 + -1;
      param_3 = param_3 + 1;
      *param_1 = bVar6;
      param_1[1] = bVar1 & 1;
    } while (lVar5 != 0);
  }
  if ((param_5 != 0) && (param_1[1] == 0)) {
    param_4 = -0x20b;
  }
  return param_4;
}


