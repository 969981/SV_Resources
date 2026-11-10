/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011f570; name: FUN_0011f570
 */


long FUN_0011f570(long param_1)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (DAT_047ec978 != (code *)0x0) {
    pvVar3 = (void *)(*DAT_047ec978)(param_1 + 0x40U);
    if (pvVar3 == (void *)0xffffffffffffffff) {
      return 0;
    }
    if (pvVar3 != (void *)0x0) {
      cVar4 = '\x03';
      goto LAB_0011f5d8;
    }
  }
  pvVar3 = malloc(param_1 + 0x40U);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  cVar4 = '\0';
LAB_0011f5d8:
  uVar2 = 0x40 - ((uint)pvVar3 & 0x1f);
  lVar1 = (long)pvVar3 + (ulong)uVar2;
  *(char *)(lVar1 + -1) = (char)uVar2;
  *(char *)(lVar1 + -2) = cVar4;
  if (cVar4 == '\x03') {
    *(undefined8 *)(lVar1 + -0x10) = DAT_047ec980;
  }
  return lVar1;
}


