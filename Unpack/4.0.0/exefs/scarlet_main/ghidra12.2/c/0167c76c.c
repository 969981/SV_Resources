/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167c76c; name: FUN_0167c76c
 */


bool FUN_0167c76c(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  byte local_8 [4];
  byte local_4 [4];
  
  uVar2 = FUN_01481420(param_1,param_3);
  if (((uVar2 & 0xff) == 10) || (10 < (uVar2 & 0xff))) {
    return false;
  }
  lVar5 = *(long *)(param_2 + 0x290);
  FUN_01253868(lVar5,uVar2,local_4,local_8);
  if ((ulong)local_4[0] == 5) {
    return false;
  }
  lVar5 = *(long *)(lVar5 + 8);
  iVar1 = *(int *)(lVar5 + 0x36c);
  if (iVar1 == 2) {
    if (4 < local_4[0]) goto LAB_0167c83c;
    puVar4 = &DAT_03d6a45a;
  }
  else if (iVar1 == 1) {
    if (4 < local_4[0]) {
LAB_0167c83c:
      uVar3 = 2;
      goto LAB_0167c7e0;
    }
    puVar4 = &DAT_03d6a455;
  }
  else {
    if ((iVar1 != 0) || (4 < local_4[0])) goto LAB_0167c83c;
    puVar4 = &DAT_03d6a450;
  }
  uVar3 = puVar4[local_4[0]];
LAB_0167c7e0:
  uVar2 = FUN_0123aa70(iVar1,*(undefined1 *)(lVar5 + 0x370),uVar3);
  return local_8[0] < uVar2;
}


