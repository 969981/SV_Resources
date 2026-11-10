/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124309c; name: FUN_0124309c
 */


char FUN_0124309c(long param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  cVar2 = *(char *)(lVar3 + 0x19);
  if (cVar2 != '\0') {
    if ((*(uint *)(lVar3 + 8) == 0xff) ||
       (uVar1 = *(int *)(lVar3 + 0x10) + 1, *(uint *)(lVar3 + 0x10) = uVar1,
       uVar1 < *(uint *)(lVar3 + 8))) {
      return '\0';
    }
    *(undefined1 *)(lVar3 + 0x19) = 0;
    *(undefined4 *)(lVar3 + 0x14) = 0;
  }
  return cVar2;
}


