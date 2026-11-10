/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b120; name: FUN_0291b120
 */


bool FUN_0291b120(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  uVar5 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x48));
  uVar3 = FUN_010f9114(uVar5,uVar1);
  uVar5 = FUN_00f7e284(*(undefined8 *)(param_1 + 0x48));
  lVar6 = FUN_00f7e3c8(uVar5,uVar1);
  bVar2 = false;
  if (lVar6 != 0) {
    uVar4 = FUN_00f7e454();
    bVar2 = uVar3 < (uVar4 & 0xff);
  }
  return bVar2;
}


