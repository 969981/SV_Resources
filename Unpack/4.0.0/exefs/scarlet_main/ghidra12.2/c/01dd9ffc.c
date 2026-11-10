/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd9ffc; name: FUN_01dd9ffc
 */


bool FUN_01dd9ffc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = FUN_01195974();
  iVar6 = *(int *)(param_1 + 0x108);
  uVar8 = (uint)((ulong)uVar2 >> 0x20);
  if (iVar6 == 0) {
    lVar3 = FUN_01195854();
    uVar4 = (uint)*(byte *)(lVar3 + 0x570);
    bVar1 = true;
    iVar6 = *(int *)(param_1 + 0x108);
  }
  else if (iVar6 - 1U < 2) {
    uVar4 = *(uint *)(param_1 + 0x2a4);
    bVar1 = false;
  }
  else {
    bVar1 = false;
    uVar4 = 0xffffffff;
  }
  if (iVar6 == 0) {
    uVar8 = (int)uVar2 + uVar8 * 6;
  }
  else if ((iVar6 != 1) && (iVar6 != 2)) {
    uVar8 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (bVar1) {
    if (*(int *)(lVar3 + 0x6c38) != 0) {
      return false;
    }
    uVar5 = *(uint *)(lVar3 + 0x6c3c);
    uVar7 = (uVar5 >> 8 & 0x3f) + (uVar5 >> 0xe & 0x3f) * 6;
  }
  else {
    if (*(int *)(lVar3 + 0x6c38) != 1) {
      return false;
    }
    uVar5 = *(uint *)(lVar3 + 0x6c3c);
    uVar7 = uVar5 >> 0xe & 0x3f;
  }
  if (uVar8 == uVar7) {
    return uVar4 == (uVar5 & 0xff);
  }
  return false;
}


