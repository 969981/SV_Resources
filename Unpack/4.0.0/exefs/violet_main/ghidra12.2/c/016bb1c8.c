/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bb1c8; name: FUN_016bb1c8
 */


void FUN_016bb1c8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *__dest;
  char acStack_30 [5];
  char acStack_2b [3];
  char *local_28;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 0xd;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 0xd;
  }
  __dest = acStack_30 + -(lVar4 + 0xfU & 0xfffffffffffffff0);
  local_28 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x38);
  }
  __s = strcat(__dest,(char *)*puVar1);
  sVar2 = strlen(__s);
  *(ulong *)(__dest + sVar2) = CONCAT35(s__Transparent_03c65066._5_3_,s__Transparent_03c65066._0_5_)
  ;
  *(ulong *)(__dest + sVar2 + 5) =
       CONCAT53(s__Transparent_03c65066._8_5_,s__Transparent_03c65066._5_3_);
  FUN_00cf9768(param_1,&local_28);
  return;
}


