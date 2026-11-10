/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291c644; name: FUN_0291c644
 */


undefined8 FUN_0291c644(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_01855d6c();
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x89) != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    uVar1 = FUN_0291c690(*(undefined4 *)(lVar2 + 0x84),1);
    *(undefined4 *)(lVar2 + 0x84) = uVar1;
  }
  return uVar3;
}


