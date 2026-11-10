/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01632fe4; name: FUN_01632fe4
 */


void FUN_01632fe4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x260);
  uVar1 = FUN_0163391c(*(undefined8 *)(lVar2 + 0x38));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01636f20(lVar2,param_2);
  return;
}


