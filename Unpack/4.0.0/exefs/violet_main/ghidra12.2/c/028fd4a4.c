/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fd4a4; name: FUN_028fd4a4
 */


undefined1  [16] FUN_028fd4a4(long *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != param_3) {
    pcVar1 = (char *)*param_1;
    pcVar2 = (char *)param_1[1];
    if (pcVar1 != pcVar2) {
      pcVar4 = pcVar2 + ((long)param_2 - (long)pcVar1);
      do {
        pcVar3 = param_2;
        pcVar5 = pcVar1;
        do {
          if (pcVar2 == pcVar5) {
            pcVar3 = pcVar4;
            goto LAB_028fd518;
          }
          if (*pcVar3 != *pcVar5) goto LAB_028fd4f8;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (param_3 != pcVar3);
        pcVar3 = param_3;
LAB_028fd4f8:
        if (pcVar5 == pcVar2) goto LAB_028fd518;
        param_2 = param_2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (param_2 != param_3);
    }
  }
  pcVar3 = param_3;
  param_2 = param_3;
LAB_028fd518:
  auVar6._8_8_ = pcVar3;
  auVar6._0_8_ = param_2;
  return auVar6;
}


