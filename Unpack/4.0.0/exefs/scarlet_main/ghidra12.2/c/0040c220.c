/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c220; name: FUN_0040c220
 */


ulong FUN_0040c220(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2), (int)uVar1 != 0)) {
    FUN_0040ca30(param_1[3]);
    lVar2 = FUN_0040d0a0(param_2);
    param_1[3] = lVar2;
    uVar1 = (ulong)(lVar2 != 0);
  }
  return uVar1;
}


