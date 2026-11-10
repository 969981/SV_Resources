/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533180; name: FUN_00533180
 */


void FUN_00533180(int param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  *(undefined1 *)(param_2 + 0xb) = 0;
  if (-1 < param_1) {
    pcVar2 = (char *)(param_2 + 0xb);
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    return;
  }
  if (param_1 < -9) {
    param_1 = param_1 + 10;
    *(char *)(param_2 + 10) =
         (((char)((ulong)((long)param_1 * 0x66666667) >> 0x22) - (char)(param_1 >> 0x1f)) * '\n' -
         (char)param_1) + '0';
    iVar4 = (int)((ulong)((long)param_1 * -0x66666667) >> 0x20);
    pcVar2 = (char *)(param_2 + 9);
    iVar4 = ((iVar4 >> 2) - (iVar4 >> 0x1f)) + 1;
    do {
      pcVar3 = pcVar2 + -1;
      *pcVar2 = (char)iVar4 + (char)(iVar4 / 10) * -10 + '0';
      bVar1 = 9 < iVar4;
      pcVar2 = pcVar3;
      iVar4 = iVar4 / 10;
    } while (bVar1);
  }
  else {
    pcVar3 = (char *)(param_2 + 9);
    *(char *)(param_2 + 10) = '0' - (char)param_1;
  }
  *pcVar3 = '-';
  return;
}


