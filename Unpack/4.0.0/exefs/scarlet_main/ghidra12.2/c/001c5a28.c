/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c5a28; name: FUN_001c5a28
 */


int FUN_001c5a28(long param_1,undefined1 (*param_2) [16],ulong param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = *(ulong *)(param_1 + 0x7a8);
  bVar4 = 0 < (long)uVar7;
  if ((param_3 & 1) != 0) {
    bVar1 = bVar4 | 2;
    if (*(long *)(param_1 + 0x7b0) < 1) {
      bVar1 = bVar4;
    }
    bVar4 = bVar1;
  }
  if (bVar4 == 3) {
    if ((long)*(ulong *)(param_1 + 0x7b0) <= (long)uVar7) {
      uVar7 = *(ulong *)(param_1 + 0x7b0) & 0xffffffff;
    }
  }
  else {
    if (bVar4 == 2) {
      iVar6 = *(int *)(param_1 + 0x7b0);
      goto joined_r0x001c5a9c;
    }
    if (bVar4 != 1) {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      iVar6 = 300000;
      goto joined_r0x001c5a9c;
    }
  }
  iVar6 = (int)uVar7;
joined_r0x001c5a9c:
  if (param_2 == (undefined1 (*) [16])0x0) {
    auVar8 = FUN_001e0dfc();
  }
  else {
    auVar8 = *param_2;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1018);
    lVar5 = 0x1020;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x1008);
    lVar5 = 0x1010;
  }
  iVar2 = FUN_001e0e28(auVar8._0_8_,auVar8._8_8_,uVar3,*(undefined8 *)(param_1 + lVar5));
  iVar6 = iVar6 - iVar2;
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  return iVar6;
}


