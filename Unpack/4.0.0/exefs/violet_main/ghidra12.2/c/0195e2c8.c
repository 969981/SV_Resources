/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195e2c8; name: FUN_0195e2c8
 */


undefined4 FUN_0195e2c8(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x820) != '\0') {
    lVar3 = *(long *)(param_1 + 0x828);
    lVar2 = *(long *)(param_1 + 0x830) - lVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      uVar5 = 1;
      do {
        lVar6 = lVar3 + uVar4 * 0x1c;
        if (((((*(int *)(lVar6 + 4) == param_2 || *(int *)(lVar6 + 8) == param_2) ||
              *(int *)(lVar6 + 0xc) == param_2) || *(int *)(lVar6 + 0x10) == param_2) ||
            *(int *)(lVar6 + 0x14) == param_2) || *(int *)(lVar6 + 0x18) == param_2) {
          return *(undefined4 *)(lVar3 + uVar4 * 0x1c);
        }
        bVar1 = uVar5 < (ulong)((lVar2 >> 2) * 0x6db6db6db6db6db7);
        uVar4 = uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar1);
    }
  }
  return 0;
}


