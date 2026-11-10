/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020b7614; name: FUN_020b7614
 */


undefined4 FUN_020b7614(long param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xef0) != '\0') {
    uVar2 = (*(long *)(param_1 + 0xf00) - *(long *)(param_1 + 0xef8) >> 2) * -0x5555555555555555;
    if ((int)uVar2 != 0) {
      uVar2 = uVar2 & 0xffffffff;
      lVar1 = *(long *)(param_1 + 0xef8) + 8;
      do {
        if (*(int *)(lVar1 + -8) == *param_2) {
          return *(undefined4 *)(lVar1 + -4);
        }
        lVar1 = lVar1 + 0xc;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return 0;
}


