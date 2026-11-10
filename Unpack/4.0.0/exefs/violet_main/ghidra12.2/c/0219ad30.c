/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219ad30; name: FUN_0219ad30
 */


void FUN_0219ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char acStack_b0 [128];
  char *local_18;
  
  lVar1 = FUN_0219b504();
  pcVar2 = acStack_b0 + (0x80 - (lVar1 + 0x10U & 0xfffffffffffffff0));
  local_18 = pcVar2;
  *pcVar2 = '\0';
  pcVar2 = strcat(pcVar2,PTR_s_data___047d8b68);
  FUN_0219b4a8(pcVar2,param_2,param_3);
  FUN_00cf9768(param_1,&local_18);
  return;
}


