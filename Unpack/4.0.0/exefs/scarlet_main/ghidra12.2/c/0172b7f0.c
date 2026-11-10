/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172b7f0; name: FUN_0172b7f0
 */


void FUN_0172b7f0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_0172b830();
    if ((uVar1 & 1) != 0) {
      FUN_0172b8a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_3);
      return;
    }
  }
  return;
}


