/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189df60; name: FUN_0189df60
 */


void FUN_0189df60(undefined8 param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined1 auStack_b0 [128];
  undefined1 *local_18;
  
  sVar2 = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  puVar3 = auStack_b0 + (0x80 - (sVar2 + uVar1 + 0x10 & 0xfffffffffffffff0));
  local_18 = puVar3;
  *puVar3 = 0;
  FUN_0189dfe4(puVar3,sVar2 + uVar1 + 1,param_2,param_3);
  FUN_00cf9768(param_1,&local_18);
  return;
}


