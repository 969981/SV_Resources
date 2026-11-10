/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd1258; name: FUN_01dd1258
 */


void FUN_01dd1258(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_01195854();
  if (param_2 == -1) {
    uVar1 = FUN_014e5f3c(lVar2,*(undefined1 *)(lVar2 + 0x570));
    FUN_014e799c(param_1,uVar1);
  }
  else {
    FUN_01dd12ac(lVar2,*(undefined1 *)(lVar2 + 0x570),param_2);
  }
  *(undefined1 *)(param_1 + 0x2b1) = 1;
  return;
}


