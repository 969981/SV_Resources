/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e151c; name: FUN_001e151c
 */


undefined8 FUN_001e151c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  if ((param_2 == 0) || (lVar3 = *(long *)(param_1 + 0xa30), lVar3 == 0)) {
LAB_001e1560:
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xa28) == 2) {
      if (param_2 < lVar3) goto LAB_001e1560;
      pcVar2 = "The requested document is not old enough\n";
    }
    else {
      if (lVar3 < param_2) goto LAB_001e1560;
      pcVar2 = "The requested document is not new enough\n";
    }
    FUN_001db818(param_1,pcVar2);
    uVar1 = 0;
    *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
  }
  return uVar1;
}


