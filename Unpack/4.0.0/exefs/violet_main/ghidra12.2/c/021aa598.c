/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021aa598; name: FUN_021aa598
 */


long FUN_021aa598(char *param_1,undefined8 *param_2,long *param_3)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen((char *)*param_2);
  lVar3 = 0;
  if (*param_3 != 0) {
    lVar3 = *(long *)(*param_3 + 0x40);
  }
  return sVar2 + sVar1 + lVar3;
}


