/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00884698; name: FUN_00884698
 */


long FUN_00884698(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_008f0470(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar5 = FUN_008f06e0(param_1,&local_50);
  bVar3 = *(byte *)(param_2 + 0x15);
  iVar4 = *(int *)(param_2 + 0x10);
  lVar1 = 0x40;
  if (*(char *)(param_2 + 0x16) != '\0') {
    lVar1 = 0x60;
  }
  lVar6 = FUN_008f06e0(param_1,&local_50);
  uVar7 = (lVar6 + lVar1 * iVar4) - 1U & -lVar6;
  uVar2 = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar2 = uVar7;
  }
  return uVar7 + ((lVar5 + 0x7fU & -lVar5) << ((ulong)bVar3 & 0x3f)) + uVar2;
}


