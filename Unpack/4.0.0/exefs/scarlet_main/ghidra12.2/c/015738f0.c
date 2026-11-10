/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015738f0; name: FUN_015738f0
 */


void FUN_015738f0(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined1 auStack_30 [8];
  undefined1 *local_28;
  
  sVar1 = strlen((char *)*param_2);
  puVar2 = auStack_30 + -(sVar1 + 0x22 & 0xfffffffffffffff0);
  local_28 = puVar2;
  *puVar2 = 0;
  FUN_01570238(puVar2,param_2);
  FUN_00cf9768(param_1,&local_28);
  return;
}


