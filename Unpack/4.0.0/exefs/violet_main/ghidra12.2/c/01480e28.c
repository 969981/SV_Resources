/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01480e28; name: FUN_01480e28
 */


char FUN_01480e28(undefined2 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined *local_30;
  undefined2 local_28;
  
  local_30 = PTR_DAT_047ddad8 + 0x10;
  local_28 = param_1;
  cVar1 = FUN_01480ea4(&local_30,0);
  cVar2 = FUN_01480ea4(&local_30,1);
  cVar3 = '\x02';
  if (cVar1 == '\0') {
    cVar3 = '\x01';
  }
  cVar1 = cVar1 != '\0';
  if (cVar2 != '\0') {
    cVar1 = cVar3;
  }
  cVar3 = FUN_01480ea4(&local_30,2);
  if (cVar3 != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


