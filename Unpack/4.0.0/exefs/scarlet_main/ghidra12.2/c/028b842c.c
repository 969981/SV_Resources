/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b842c; name: FUN_028b842c
 */


undefined4 FUN_028b842c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(long *)(param_2[1] + 0x18) + param_1 * 8);
  uVar1 = FUN_028b86c0(*puVar2,puVar2[1],puVar2[2],puVar2[3],*param_2);
  return uVar1;
}


