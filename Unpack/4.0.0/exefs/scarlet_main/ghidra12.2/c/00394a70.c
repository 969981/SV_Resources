/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00394a70; name: FUN_00394a70
 */


char * FUN_00394a70(uint param_1,char *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  
  puVar2 = PTR_DAT_047cd030;
  if (999999999 < param_1) {
    uVar1 = (ulong)param_1;
    param_1 = param_1 % 100000000;
    *(undefined2 *)param_2 = *(undefined2 *)(PTR_DAT_047cd030 + (uVar1 / 100000000) * 2);
    pcVar3 = param_2 + 2;
    goto LAB_00394aac;
  }
  if (param_1 < 100) {
    pcVar3 = param_2;
    if (param_1 < 10) {
      *(undefined2 *)param_2 = *(undefined2 *)(&DAT_03cdbb08 + (ulong)param_1 * 2);
      return param_2 + 1;
    }
    goto LAB_00394b10;
  }
  if (param_1 >> 4 < 0x271) {
    pcVar3 = param_2;
    if (param_1 < 1000) {
      uVar4 = (param_1 & 0xffff) / 100;
      param_1 = param_1 + uVar4 * -100;
      pcVar3 = param_2 + 1;
      *param_2 = (char)uVar4 + '0';
      goto LAB_00394b10;
    }
  }
  else {
    if (param_1 < 1000000) {
      pcVar3 = param_2;
      if (param_1 >> 5 < 0xc35) {
        uVar4 = param_1 / 10000;
        param_1 = param_1 % 10000;
        pcVar3 = param_2 + 1;
        *param_2 = (char)uVar4 + '0';
        goto LAB_00394af0;
      }
    }
    else {
      if (param_1 < 100000000) {
        pcVar3 = param_2;
        if (param_1 < 10000000) {
          uVar4 = param_1 / 1000000;
          param_1 = param_1 % 1000000;
          pcVar3 = param_2 + 1;
          *param_2 = (char)uVar4 + '0';
          goto LAB_00394ad0;
        }
      }
      else {
        uVar4 = param_1 / 100000000;
        param_1 = param_1 % 100000000;
        pcVar3 = param_2 + 1;
        *param_2 = (char)uVar4 + '0';
      }
LAB_00394aac:
      uVar1 = (ulong)param_1;
      param_1 = param_1 % 1000000;
      *(undefined2 *)pcVar3 = *(undefined2 *)(puVar2 + (uVar1 / 1000000) * 2);
      pcVar3 = pcVar3 + 2;
    }
LAB_00394ad0:
    uVar1 = (ulong)param_1;
    param_1 = param_1 % 10000;
    *(undefined2 *)pcVar3 = *(undefined2 *)(puVar2 + (uVar1 / 10000) * 2);
    pcVar3 = pcVar3 + 2;
  }
LAB_00394af0:
  uVar1 = (ulong)param_1;
  param_1 = param_1 % 100;
  *(undefined2 *)pcVar3 = *(undefined2 *)(puVar2 + (uVar1 / 100) * 2);
  pcVar3 = pcVar3 + 2;
LAB_00394b10:
  *(undefined2 *)pcVar3 = *(undefined2 *)(puVar2 + (ulong)param_1 * 2);
  pcVar3[2] = '\0';
  return pcVar3 + 2;
}


