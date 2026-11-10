/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e70c24; name: FUN_01e70c24
 */


uint FUN_01e70c24(long *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + 0x40);
  if (lVar4 != 0) {
    bVar1 = *(byte *)(lVar4 + 0x808);
    uVar3 = (uint)bVar1;
    cVar2 = *(char *)(lVar4 + 0x809);
    if (cVar2 == '\x05') {
      if (param_2 < bVar1) {
        return uVar3;
      }
    }
    else {
      if (cVar2 == '\x04') {
        return uVar3;
      }
      if (cVar2 == '\x03' && bVar1 < param_2) {
        return uVar3;
      }
    }
  }
  return param_2;
}


