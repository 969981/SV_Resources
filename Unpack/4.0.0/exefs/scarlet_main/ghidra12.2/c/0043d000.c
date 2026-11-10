/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043d000; name: FUN_0043d000
 */


undefined8 FUN_0043d000(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_0045bce0(*param_1);
    iVar1 = FUN_0045b7a0(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_0045bdc0(*param_1);
      uVar2 = FUN_0045b7a0(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}


