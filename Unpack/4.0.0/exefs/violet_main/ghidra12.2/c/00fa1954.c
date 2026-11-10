/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa1954; name: FUN_00fa1954
 */


void FUN_00fa1954(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  puVar3 = auStack_40 + -(sVar1 + sVar2 + 0x15 & 0xfffffffffffffff0);
  local_38 = puVar3;
  *puVar3 = 0;
  FUN_027183b4(puVar3,param_2,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


