/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00468c10; name: FUN_00468c10
 */


uint FUN_00468c10(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char local_54;
  char local_53;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_003e8f00(param_1,&DAT_03c00d64,1);
      if (iVar1 != 1) {
        return 0xffffffff;
      }
    }
    if (*param_2 == 0) {
      iVar1 = FUN_003e8f00(param_1,&DAT_03bd2c30,2);
      uVar2 = uVar2 | 2;
      if (iVar1 != 2) {
        uVar2 = 0xffffffff;
      }
    }
    else if (0 < *param_2) {
      uVar3 = 0;
      do {
        if ((uVar3 != 0) &&
           (iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20),
           (int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0)) {
          iVar1 = FUN_003e8f00(param_1,&DAT_03c2c7f8,2);
          if (iVar1 != 2) {
            return 0xffffffff;
          }
          uVar2 = uVar2 + 2;
        }
        local_54 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
        local_53 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
        iVar1 = FUN_003e8f00(param_1,&local_54,2);
        if (iVar1 != 2) {
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 2;
      } while ((long)uVar3 < (long)*param_2);
    }
  }
  return uVar2;
}


