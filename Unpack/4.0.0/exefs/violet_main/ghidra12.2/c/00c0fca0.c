/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0fca0; name: FUN_00c0fca0
 */


char * FUN_00c0fca0(uint param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1 < 1000000000) {
    if (99 < param_1) {
      if (0x270 < param_1 >> 4) {
        if (999999 < param_1) {
          if (99999999 < param_1) {
            uVar2 = (ulong)(param_1 / 100000000);
            pcVar1 = param_2 + 1;
            *param_2 = (char)(param_1 / 100000000) + '0';
            goto LAB_00c0fcd0;
          }
          if (9999999 < param_1) goto LAB_00c0fcdc;
          uVar2 = (ulong)(param_1 / 1000000);
          pcVar1 = param_2 + 1;
          *param_2 = (char)(param_1 / 1000000) + '0';
          goto LAB_00c0fcf4;
        }
        if (0xc34 < param_1 >> 5) goto LAB_00c0fd00;
        uVar2 = (ulong)param_1 / 10000;
        pcVar1 = param_2 + 1;
        *param_2 = (char)(param_1 / 10000) + '0';
        goto LAB_00c0fd18;
      }
      if (999 < param_1) goto LAB_00c0fd20;
      uVar2 = (ulong)(param_1 & 0xffff) / 100;
      pcVar1 = param_2 + 1;
      *param_2 = (char)((param_1 & 0xffff) / 100) + '0';
      goto LAB_00c0fd38;
    }
    if (param_1 < 10) {
      pcVar1 = param_2 + 1;
      *param_2 = (char)param_1 + '0';
      goto LAB_00c0fd48;
    }
  }
  else {
    uVar2 = (ulong)param_1 / 100000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d5ea38 + uVar2 * 2);
LAB_00c0fcd0:
    param_1 = param_1 + (int)uVar2 * -100000000;
    param_2 = pcVar1;
LAB_00c0fcdc:
    uVar2 = (ulong)param_1 / 1000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d5ea38 + uVar2 * 2);
LAB_00c0fcf4:
    param_1 = param_1 + (int)uVar2 * -1000000;
    param_2 = pcVar1;
LAB_00c0fd00:
    uVar2 = (ulong)param_1 / 10000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d5ea38 + uVar2 * 2);
LAB_00c0fd18:
    param_1 = param_1 + (int)uVar2 * -10000;
    param_2 = pcVar1;
LAB_00c0fd20:
    uVar2 = (ulong)param_1 / 100;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d5ea38 + uVar2 * 2);
LAB_00c0fd38:
    param_1 = param_1 + (int)uVar2 * -100;
    param_2 = pcVar1;
  }
  pcVar1 = param_2 + 2;
  *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d5ea38 + (long)(int)param_1 * 2);
LAB_00c0fd48:
  *pcVar1 = '\0';
  return pcVar1;
}


