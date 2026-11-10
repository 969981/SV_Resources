/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db8514; name: FUN_01db8514
 */


void FUN_01db8514(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 *local_48;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  sVar3 = strlen(param_4);
  puVar4 = auStack_50 + -(sVar1 + sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0);
  local_48 = puVar4;
  *puVar4 = 0;
  FUN_01db8634(puVar4,param_2,param_3,param_4);
  FUN_00cf9768(param_1,&local_48);
  return;
}


