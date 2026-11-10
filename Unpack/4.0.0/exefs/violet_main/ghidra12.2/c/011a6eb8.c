/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011a6eb8; name: FUN_011a6eb8
 */


void FUN_011a6eb8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *__dest;
  long lVar2;
  long lVar3;
  char acStack_a0 [128];
  char *local_8;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x40) + 1;
  }
  __dest = acStack_a0 + (0x80 - (lVar3 + 0xfU & 0xfffffffffffffff0));
  local_8 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x38);
  }
  strcat(__dest,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_8);
  return;
}


