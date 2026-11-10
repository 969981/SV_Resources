/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183c1f4; name: FUN_0183c1f4
 */


undefined1
FUN_0183c1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 uVar1;
  char local_24;
  
  uVar1 = FUN_0183e018(*(undefined8 *)(param_1 + 0x38));
  FUN_0183db88(*(undefined8 *)(param_1 + 0x38),param_2,uVar1,param_3,local_24);
  *(bool *)param_5 = local_24 != '\0';
  return uVar1;
}


