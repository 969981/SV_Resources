/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bb12c; name: FUN_016bb12c
 */


void FUN_016bb12c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *__dest;
  char acStack_30 [8];
  char *local_28;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 0x10;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 0x10;
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
  *(undefined8 *)(__dest + sVar2) = s__VfxTransparent_03c93750._0_8_;
  *(undefined8 *)(__dest + sVar2 + 8) = s__VfxTransparent_03c93750._8_8_;
  FUN_00cf9768(param_1,&local_28);
  return;
}


