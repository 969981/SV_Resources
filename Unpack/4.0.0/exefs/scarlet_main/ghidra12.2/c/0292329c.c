/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292329c; name: FUN_0292329c
 */


bool FUN_0292329c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  byte local_8 [4];
  byte local_4 [4];
  
  if (10 < ((uint)param_2 & 0xff)) {
    return false;
  }
  FUN_01253868(param_1,param_2,local_4,local_8);
  if ((ulong)local_4[0] == 5) {
    return false;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar1 == 2) {
    if (4 < local_4[0]) goto LAB_02923350;
    puVar4 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < local_4[0]) {
LAB_02923350:
      uVar3 = 2;
      goto LAB_029232f4;
    }
    puVar4 = &DAT_03d6a455;
  }
  else {
    if ((iVar1 != 0) || (4 < local_4[0])) goto LAB_02923350;
    puVar4 = &DAT_03d6a450;
  }
  uVar3 = puVar4[local_4[0]];
LAB_029232f4:
  uVar2 = FUN_0123aa70(iVar1,*(undefined1 *)(*(long *)(param_1 + 8) + 0x370),uVar3);
  return local_8[0] < uVar2;
}


