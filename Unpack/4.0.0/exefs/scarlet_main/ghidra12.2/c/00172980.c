/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00172980; name: FUN_00172980
 */


long FUN_00172980(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  if (param_1[6] <= param_2) {
    param_2 = (long)param_1[6];
  }
  lVar6 = *(long *)(param_1 + 10) + param_2 * 3 + 0x1000;
  iVar4 = *param_1;
  if ((iVar4 != 0xb) && ((lVar6 = lVar6 + param_2 * 2 + 0x2800, iVar4 == 0xd || (iVar4 == 8)))) {
    lVar6 = param_2 + lVar6 + 0x800;
  }
  uVar5 = param_1[0x12];
  lVar1 = 0;
  if ((uVar5 & 10) != 0) {
    lVar1 = param_2 + 0x2000;
  }
  lVar2 = param_2;
  if (0x3fff < param_2) {
    lVar2 = 0x4000;
  }
  lVar3 = lVar1 + lVar6;
  if ((uVar5 & 0x10) != 0) {
    lVar3 = param_2 + lVar2 + lVar1 + lVar6 + 0x4000;
  }
  if ((uVar5 & 0x20) != 0) {
    lVar3 = lVar3 + param_2 * 0xc + 0x20000;
  }
  lVar6 = 0;
  if ((uVar5 & 0x20) != 0) {
    lVar6 = param_2 * -2;
  }
  if (iVar4 == 0xd) {
    lVar3 = lVar6 + param_2 * 6 + lVar3 + 0x20000;
  }
  return lVar3;
}


