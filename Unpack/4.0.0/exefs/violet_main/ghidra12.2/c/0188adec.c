/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188adec; name: FUN_0188adec
 */


long FUN_0188adec(char *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
LAB_0188ae28:
    return *(long *)(param_1 + 8);
  }
  if (cVar2 == '\x02') {
    if (*(long *)(param_1 + 8) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = lVar3 + -0x28;
      }
      return lVar1;
    }
  }
  else if (cVar2 == '\x01') goto LAB_0188ae28;
  return 0;
}


