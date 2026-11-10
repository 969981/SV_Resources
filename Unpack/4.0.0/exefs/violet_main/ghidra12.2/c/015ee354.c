/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ee354; name: FUN_015ee354
 */


void FUN_015ee354(char *param_1,long param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar2 == 0) {
        return;
      }
      *(undefined1 *)(lVar2 + param_2 + -0x28) = *param_3;
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 8) + param_2) = *param_3;
  return;
}


