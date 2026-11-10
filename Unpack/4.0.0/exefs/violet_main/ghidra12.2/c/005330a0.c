/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005330a0; name: FUN_005330a0
 */


void FUN_005330a0(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (-1 < param_1) {
    pcVar2 = (char *)(param_2 + 0x15);
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
    lVar4 = SUB168(SEXT816(param_1) * SEXT816(-0x6666666666666667),8);
    *(char *)(param_2 + 0x14) =
         (((char)(SUB164(SEXT816(param_1) * SEXT816(0x6666666666666667),8) >> 2) -
          (SUB161(SEXT816(param_1) * SEXT816(0x6666666666666667),0xf) >> 7)) * '\n' - (char)param_1)
         + '0';
    pcVar2 = (char *)(param_2 + 0x13);
    lVar4 = ((lVar4 >> 2) - (lVar4 >> 0x3f)) + 1;
    do {
      pcVar3 = pcVar2 + -1;
      *pcVar2 = (char)lVar4 + (char)(lVar4 / 10) * -10 + '0';
      bVar1 = 9 < lVar4;
      pcVar2 = pcVar3;
      lVar4 = lVar4 / 10;
    } while (bVar1);
  }
  else {
    pcVar3 = (char *)(param_2 + 0x13);
    *(char *)(param_2 + 0x14) = '0' - (char)param_1;
  }
  *pcVar3 = '-';
  return;
}


