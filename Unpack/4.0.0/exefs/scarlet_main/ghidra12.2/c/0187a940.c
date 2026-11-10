/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0187a940; name: FUN_0187a940
 */


undefined4 FUN_0187a940(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = param_2[1] - (long)*param_2;
    puVar1 = &DAT_0486a1d0;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_2;
    }
    uVar3 = FUN_0187b36c(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_0187a9a0(param_1,uVar3);
  return uVar3;
}


