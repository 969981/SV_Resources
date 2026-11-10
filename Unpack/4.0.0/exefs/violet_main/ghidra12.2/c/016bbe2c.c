/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bbe2c; name: FUN_016bbe2c
 */


bool FUN_016bbe2c(long param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  pcVar2 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x110),param_1 + 0x30);
  cVar1 = *pcVar2;
  lVar3 = *(long *)(pcVar2 + 8);
  if (cVar1 != '\0' && lVar3 != 0) {
    FUN_016be980(lVar3,param_2);
  }
  return cVar1 != '\0' && lVar3 != 0;
}


