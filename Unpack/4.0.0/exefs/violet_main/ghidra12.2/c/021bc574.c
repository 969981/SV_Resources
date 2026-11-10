/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bc574; name: FUN_021bc574
 */


void FUN_021bc574(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [8];
  undefined1 *local_48;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  sVar4 = strlen(param_4);
  lVar1 = sVar2 + sVar3 + sVar4;
  puVar5 = auStack_50 + -(lVar1 + 0x10U & 0xfffffffffffffff0);
  local_48 = puVar5;
  *puVar5 = 0;
  FUN_021bc698(puVar5,lVar1 + 1,param_2,param_3,param_4);
  FUN_00cf9768(param_1,&local_48);
  return;
}


