/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca768; name: FUN_031ca768
 */


ulong * FUN_031ca768(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ulong uVar4;
  char *__s;
  uint uVar5;
  ulong uVar6;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar6 = *param_1;
  __s = (char *)*param_2;
  if (iVar1 != 0 || __s != (char *)(uVar6 & 0xfffffffffffffffe)) {
    if (__s == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      if (iVar1 < 1) {
        sVar3 = strlen(__s);
        sVar3 = (size_t)((int)sVar3 + 1);
        pcVar2 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
        memcpy(pcVar2,__s,sVar3);
      }
      else {
        uVar4 = 0;
        uVar5 = iVar1 - 1;
        do {
          if (uVar5 == uVar4) goto LAB_031ca7cc;
          pcVar2 = __s + uVar4;
          uVar4 = uVar4 + 1;
        } while (*pcVar2 != '\0');
        uVar5 = (uint)uVar4;
LAB_031ca7cc:
        pcVar2 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                   (PTR_PTR_047d1a50,(long)(int)(uVar5 + 1));
        if (0 < (int)uVar5) {
          strncpy(pcVar2,__s,(ulong)uVar5);
        }
        pcVar2[(int)uVar5] = '\0';
      }
      uVar4 = (ulong)pcVar2 | 1;
    }
    *param_1 = uVar4;
    if ((uVar6 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar6 - 1,0);
    }
  }
  return param_1;
}


