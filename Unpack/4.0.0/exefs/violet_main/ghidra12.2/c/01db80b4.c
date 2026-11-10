/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db80b4; name: FUN_01db80b4
 */


void FUN_01db80b4(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined1 auStack_c0 [128];
  undefined1 *local_28;
  
  sVar1 = strlen(PTR_s_data___047d8b68);
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  puVar4 = auStack_c0 + (0x80 - (sVar1 + sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0));
  local_28 = puVar4;
  *puVar4 = 0;
  FUN_01db8404(puVar4,param_2,param_3);
  FUN_00cf9768(param_1,&local_28);
  return;
}


