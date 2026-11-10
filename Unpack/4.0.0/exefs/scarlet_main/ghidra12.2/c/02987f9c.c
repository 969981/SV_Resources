/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02987f9c; name: FUN_02987f9c
 */


undefined8 FUN_02987f9c(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0298d980(param_2);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_014df9d4(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    uVar1 = FUN_0298d990(lVar2,param_4);
    if ((uVar1 & 1) != 0) {
      FUN_0298d9f0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
      return 1;
    }
  }
  return 0;
}


