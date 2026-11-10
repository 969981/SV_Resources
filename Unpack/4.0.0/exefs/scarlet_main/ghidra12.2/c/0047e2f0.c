/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e2f0; name: FUN_0047e2f0
 */


undefined8 FUN_0047e2f0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_0047df50(param_1,param_2,*param_1);
  return uVar1;
}


