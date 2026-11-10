/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca644; name: FUN_031ca644
 */


ulong * FUN_031ca644(ulong *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar4 = (uint)(param_3 - (long)param_2);
  if ((uVar4 != 0xffffffff) || ((char *)(uVar5 & 0xfffffffffffffffe) != param_2)) {
    if (param_2 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      if ((int)uVar4 < 0) {
        sVar2 = strlen(param_2);
        sVar2 = (size_t)((int)sVar2 + 1);
        pcVar1 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar2);
        memcpy(pcVar1,param_2,sVar2);
      }
      else {
        uVar3 = 0;
        do {
          if ((param_3 - (long)param_2 & 0xffffffffU) == uVar3) goto LAB_031ca6a8;
          pcVar1 = param_2 + uVar3;
          uVar3 = uVar3 + 1;
        } while (*pcVar1 != '\0');
        uVar4 = (uint)uVar3;
LAB_031ca6a8:
        pcVar1 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                   (PTR_PTR_047d1a50,(long)(int)(uVar4 + 1));
        if (0 < (int)uVar4) {
          strncpy(pcVar1,param_2,(ulong)uVar4);
        }
        pcVar1[(int)uVar4] = '\0';
      }
      uVar3 = (ulong)pcVar1 | 1;
    }
    *param_1 = uVar3;
    if ((uVar5 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar5 - 1,0);
    }
  }
  return param_1;
}


