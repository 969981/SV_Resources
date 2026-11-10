/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003907f0; name: FUN_003907f0
 */


ulong FUN_003907f0(char *param_1,ulong param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  uint uVar9;
  
  uVar9 = (uint)param_2;
  if ((uVar9 & 0xff) == 0x13) {
    if (param_1 != (char *)0x0) {
      FUN_00390ba0(param_1,param_2,param_3,param_4);
      return 1;
    }
    puVar3 = (undefined4 *)param_4[3];
    param_4[2] = param_4[2] + 5;
    if ((ulong)((long)param_4 + (0x420 - (long)puVar3)) < 6) {
      puVar1 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)puVar3 - (long)puVar1);
      uVar4 = *param_4;
      pcVar7 = (code *)param_4[1];
      param_1 = "(nil)";
      uVar5 = 5;
      param_4[3] = puVar1;
LAB_003909b4:
      (*pcVar7)(uVar4,param_1,uVar5);
      return 1;
    }
    *(undefined1 *)(puVar3 + 1) = 0x29;
    *puVar3 = 0x6c696e28;
    lVar6 = param_4[3] + 5;
  }
  else {
    if (param_1 == (char *)0x0) {
      uVar5 = 0;
    }
    else if ((int)param_3 < 0) {
      uVar5 = strlen(param_1);
    }
    else {
      uVar5 = (ulong)param_3;
      pcVar8 = param_1;
      if (uVar5 != 0) {
        pcVar2 = param_1 + uVar5;
        do {
          if (*pcVar8 == '\0') goto LAB_00390868;
          pcVar8 = pcVar8 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        pcVar8 = pcVar2;
      }
LAB_00390868:
      uVar5 = (long)pcVar8 - (long)param_1;
    }
    if ((uVar9 & 0xff) != 2) {
      return 0;
    }
    if ((uVar9 >> 8 & 1) == 0) {
      uVar5 = FUN_00391cac(param_4,param_1,uVar5,param_2 >> 0x20,param_3,param_2 >> 9 & 1);
      return uVar5 & 1;
    }
    if (uVar5 == 0) {
      return 1;
    }
    __dest = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar5;
    if ((ulong)((long)param_4 + (0x420 - (long)__dest)) <= uVar5) {
      puVar1 = param_4 + 4;
      (*(code *)param_4[1])(*param_4,puVar1,(long)__dest - (long)puVar1);
      uVar4 = *param_4;
      pcVar7 = (code *)param_4[1];
      param_4[3] = puVar1;
      goto LAB_003909b4;
    }
    memcpy(__dest,param_1,uVar5);
    lVar6 = param_4[3] + uVar5;
  }
  param_4[3] = lVar6;
  return 1;
}


