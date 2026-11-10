/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02311a90; name: FUN_02311a90
 */


long FUN_02311a90(char *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
LAB_02311acc:
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
  else if (cVar2 == '\x01') goto LAB_02311acc;
  return 0;
}


