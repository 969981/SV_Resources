/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3e76c; name: FUN_02a3e76c
 */


void FUN_02a3e76c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)*param_1 != '\0') {
    lVar2 = *param_2;
    if (*(long *)(lVar2 + 0x198) == -0x5ea8b283dcaf3e52) {
      *(long *)param_1[1] = lVar2;
      return;
    }
    if ((*(char *)(lVar2 + 0x440) == '\x02') && (*(short *)(lVar2 + 0x420) == 0)) {
      bVar1 = *(char *)(lVar2 + 0x448) == '\x03';
    }
    else {
      bVar1 = false;
    }
    *(bool *)*param_1 = bVar1;
  }
  return;
}


