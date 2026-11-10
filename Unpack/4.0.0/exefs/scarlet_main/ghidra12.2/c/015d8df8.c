/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d8df8; name: FUN_015d8df8
 */


undefined8 FUN_015d8df8(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 auStack_48 [6];
  undefined1 auStack_18 [8];
  
  FUN_011e244c(auStack_18,2,param_2);
  lVar3 = *(long *)(param_1 + 0x50);
  cVar1 = FUN_010e171c(auStack_18,*(undefined4 *)(lVar3 + 0x36c),*(undefined1 *)(lVar3 + 0x370),
                       *(undefined8 *)(lVar3 + 0x30),auStack_48);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_015d8e8c(*(undefined8 *)(param_1 + 0x30));
    lVar3 = FUN_012440f0(uVar2,cVar1);
    uVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),auStack_48[lVar3]);
  }
  return uVar2;
}


