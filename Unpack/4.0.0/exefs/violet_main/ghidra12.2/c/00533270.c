/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533270; name: FUN_00533270
 */


char * FUN_00533270(uint param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  if (param_1 < 1000000000) {
    if (param_1 < 100) {
      if (param_1 < 10) {
        *param_2 = (char)param_1 + '0';
        param_2[1] = '\0';
        return param_2 + 1;
      }
      goto LAB_00533310;
    }
    if (0x270 < param_1 >> 4) {
      if (999999 < param_1) {
        if (99999999 < param_1) {
          uVar2 = (ulong)(param_1 / 100000000);
          pcVar1 = param_2 + 1;
          *param_2 = (char)(param_1 / 100000000) + '0';
          goto LAB_005332a0;
        }
        if (9999999 < param_1) goto LAB_005332ac;
        uVar2 = (ulong)(param_1 / 1000000);
        pcVar1 = param_2 + 1;
        *param_2 = (char)(param_1 / 1000000) + '0';
        goto LAB_005332c4;
      }
      if (0xc34 < param_1 >> 5) goto LAB_005332d0;
      uVar2 = (ulong)param_1 / 10000;
      pcVar1 = param_2 + 1;
      *param_2 = (char)(param_1 / 10000) + '0';
      goto LAB_005332e8;
    }
    if (999 < param_1) goto LAB_005332f0;
    uVar2 = (ulong)(param_1 & 0xffff) / 100;
    pcVar1 = param_2 + 1;
    *param_2 = (char)((param_1 & 0xffff) / 100) + '0';
  }
  else {
    uVar2 = (ulong)param_1 / 100000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d09a97 + uVar2 * 2);
LAB_005332a0:
    param_1 = param_1 + (int)uVar2 * -100000000;
    param_2 = pcVar1;
LAB_005332ac:
    uVar2 = (ulong)param_1 / 1000000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d09a97 + uVar2 * 2);
LAB_005332c4:
    param_1 = param_1 + (int)uVar2 * -1000000;
    param_2 = pcVar1;
LAB_005332d0:
    uVar2 = (ulong)param_1 / 10000;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d09a97 + uVar2 * 2);
LAB_005332e8:
    param_1 = param_1 + (int)uVar2 * -10000;
    param_2 = pcVar1;
LAB_005332f0:
    uVar2 = (ulong)param_1 / 100;
    pcVar1 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d09a97 + uVar2 * 2);
  }
  param_1 = param_1 + (int)uVar2 * -100;
  param_2 = pcVar1;
LAB_00533310:
  *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03d09a97 + (ulong)param_1 * 2);
  param_2[2] = '\0';
  return param_2 + 2;
}


