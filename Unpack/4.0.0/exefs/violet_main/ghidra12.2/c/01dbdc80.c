/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbdc80; name: FUN_01dbdc80
 */


undefined2 FUN_01dbdc80(long param_1,short param_2)

{
  ulong uVar1;
  short *psVar2;
  
  if (param_2 != 0) {
    psVar2 = (short *)(param_1 + 0x2e);
    uVar1 = 1;
    do {
      if (psVar2[-2] == param_2) {
        uVar1 = uVar1 - 1;
LAB_01dbdcc4:
        return *(undefined2 *)(param_1 + (uVar1 & 0xffffffff) * 4 + 0x28);
      }
      if (*psVar2 == param_2) goto LAB_01dbdcc4;
      uVar1 = uVar1 + 2;
      psVar2 = psVar2 + 4;
    } while (uVar1 != 0x79);
  }
  return 0;
}


