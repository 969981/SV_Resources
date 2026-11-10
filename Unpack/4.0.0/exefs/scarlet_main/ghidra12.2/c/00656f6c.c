/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00656f6c; name: FUN_00656f6c
 */


void FUN_00656f6c(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x40) = 1;
  bVar1 = *(byte *)(lVar6 + 1);
  bVar2 = *(byte *)(lVar6 + 3);
  bVar3 = *(byte *)(lVar6 + 4);
  bVar4 = *(byte *)(lVar6 + 2);
  bVar5 = *(byte *)(lVar6 + 0x130);
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(uint *)(param_1 + 0x54) =
       (uint)bVar1 << 5 | (uint)bVar2 << 4 | (uint)bVar3 << 6 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  *(long *)(param_1 + 0x60) = lVar6 + 0x98;
  return;
}


