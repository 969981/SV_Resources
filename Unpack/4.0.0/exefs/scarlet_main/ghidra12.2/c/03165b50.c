/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03165b50; name: FUN_03165b50
 */


/* WARNING: Removing unreachable block (ram,0x03165bd8) */

bool FUN_03165b50(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 3) {
    return true;
  }
  puVar3 = (uint *)*param_1;
  uVar4 = *puVar3;
  if (uVar2 == 3) {
    iVar7 = ((puVar3[1] - uVar4) * 2 & 0x10000) + (puVar3[1] - uVar4);
    iVar1 = ((puVar3[2] - uVar4) * 2 & 0x10000) + (puVar3[2] - uVar4);
    return (iVar1 >> 0x10) * (int)(short)iVar7 <= (int)(short)iVar1 * (iVar7 >> 0x10);
  }
  uVar5 = (ulong)uVar2 - 1;
  uVar6 = uVar4;
  if (uVar2 == 2) {
    lVar9 = 1;
  }
  else {
    uVar8 = 0;
    do {
      uVar10 = uVar8;
      uVar6 = (puVar3[uVar10 + 1] + uVar6 >> 1 & 0x3fff3fff) + puVar3[uVar10 + 2] >> 1 & 0x3fff3fff;
      uVar8 = uVar10 + 2;
    } while ((uVar5 & 0xfffffffffffffffe) != uVar10 + 2);
    lVar9 = uVar10 + 3;
    if ((uVar5 & 1) == 0) goto LAB_03165c24;
  }
  uVar6 = puVar3[lVar9] + uVar6 >> 1 & 0x3fff3fff;
LAB_03165c24:
  uVar8 = 0;
  iVar7 = uVar2 - 1;
  while( true ) {
    iVar1 = ((uVar4 - uVar6) * 2 & 0x10000) + (uVar4 - uVar6);
    iVar7 = ((puVar3[iVar7] - uVar6) * 2 & 0x10000) + (puVar3[iVar7] - uVar6);
    if ((iVar7 >> 0x10) * (int)(short)iVar1 < (int)(short)iVar7 * (iVar1 >> 0x10)) {
      return false;
    }
    if (uVar5 == uVar8) break;
    uVar4 = puVar3[uVar8 + 1];
    iVar7 = (int)uVar8;
    uVar8 = uVar8 + 1;
  }
  return true;
}


