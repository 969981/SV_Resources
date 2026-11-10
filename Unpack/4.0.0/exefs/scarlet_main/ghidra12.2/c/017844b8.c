/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017844b8; name: FUN_017844b8
 */


undefined8 FUN_017844b8(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      return *(undefined8 *)(lVar2 + param_2 + -0x28);
    }
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 8) + param_2);
}


