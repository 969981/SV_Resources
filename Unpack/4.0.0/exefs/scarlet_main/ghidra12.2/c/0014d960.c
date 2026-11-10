/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014d960; name: FUN_0014d960
 */


undefined8 FUN_0014d960(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  puVar4 = (ulong *)FUN_00c41a10(param_1,0xfff0b9d7);
  uVar1 = puVar4[1];
  uVar9 = puVar4[3] ^ uVar1;
  uVar7 = puVar4[2] ^ *puVar4;
  *puVar4 = uVar9 ^ *puVar4;
  puVar4[1] = uVar7 ^ uVar1;
  uVar11 = (uVar1 * 5 >> 0x39 | uVar1 * 0x280) * 9;
  puVar4[2] = uVar7 ^ uVar1 << 0x11;
  puVar4[3] = uVar9 >> 0x13 | uVar9 << 0x2d;
  iVar3 = FUN_00c5d980(param_1);
  if (iVar3 == 2) {
    lVar14 = FUN_00124340(param_1,1);
    lVar5 = FUN_00124340(param_1,2);
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        FUN_00c46da0((double)(uVar11 >> 0xb) * 1.1102230246251565e-16,param_1);
        return 1;
      }
      uVar6 = FUN_00123a70(param_1,"wrong number of arguments");
      return uVar6;
    }
    lVar14 = 1;
    lVar5 = FUN_00124340(param_1,1);
    if (lVar5 == 0) goto LAB_0014db04;
  }
  uVar1 = lVar5 - lVar14;
  if (lVar5 < lVar14) {
    FUN_00123970(param_1,1,"interval is empty");
    if ((uVar1 + 1 & uVar1) == 0) goto LAB_0014daf8;
LAB_0014da44:
    uVar7 = uVar1 | uVar1 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar11 = uVar7 & uVar11;
    if (uVar1 < uVar11) {
      uVar9 = *puVar4;
      uVar13 = puVar4[1];
      uVar10 = puVar4[2];
      uVar8 = puVar4[3];
      do {
        uVar12 = uVar9 ^ uVar10;
        uVar2 = uVar13 * 5;
        uVar8 = uVar13 ^ uVar8;
        uVar11 = uVar13 * 0x280;
        uVar9 = uVar8 ^ uVar9;
        uVar8 = uVar8 >> 0x13 | uVar8 << 0x2d;
        uVar10 = uVar12 ^ uVar13 << 0x11;
        uVar13 = uVar12 ^ uVar13;
        uVar11 = (uVar2 >> 0x39 | uVar11) * 9 & uVar7;
      } while (uVar1 < uVar11);
      *puVar4 = uVar9;
      puVar4[1] = uVar13;
      puVar4[2] = uVar10;
      puVar4[3] = uVar8;
    }
  }
  else {
    if ((uVar1 + 1 & uVar1) != 0) goto LAB_0014da44;
LAB_0014daf8:
    uVar11 = uVar1 & uVar11;
  }
  uVar11 = uVar11 + lVar14;
LAB_0014db04:
  FUN_00c5d960(param_1,uVar11);
  return 1;
}


