/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c0434; name: FUN_016c0434
 */


bool FUN_016c0434(long param_1,int param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_016c04b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_016c04a4(param_1,param_2,param_3), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_3 != 0 && param_3 != param_2;
  }
  return bVar1;
}


