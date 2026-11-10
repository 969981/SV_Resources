/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ba10c; name: FUN_012ba10c
 */


void FUN_012ba10c(undefined8 param_1,long *param_2,char *param_3)

{
  size_t sVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  if (*param_2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*param_2 + 0x40) + 1;
  }
  sVar1 = strlen(param_3);
  puVar2 = auStack_40 + -(sVar1 + lVar3 + 0xf & 0xfffffffffffffff0);
  local_38 = puVar2;
  *puVar2 = 0;
  FUN_012ba198(puVar2,param_2,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


