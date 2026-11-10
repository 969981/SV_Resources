/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048a880; name: FUN_0048a880
 */


ulong FUN_0048a880(undefined8 *param_1,uint param_2,char *param_3,ulong param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  size_t sVar4;
  
  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    sVar4 = param_4 & 0xffffffff;
    if ((param_3 == (char *)0x0) && ((int)param_4 != 0)) {
      uVar2 = 0;
    }
    else {
      if ((0 < (int)param_2) && ((param_2 >> 0xc & 1) != 0)) {
        uVar1 = FUN_0045bea0(*param_1);
        lVar3 = FUN_0044e740(param_1 + 1,param_3,sVar4,param_2,uVar1);
        return (ulong)(lVar3 != 0);
      }
      if ((int)param_4 < 0) {
        sVar4 = strlen(param_3);
      }
      uVar2 = FUN_003df070(param_1[1],param_3,sVar4 & 0xffffffff);
      if ((int)uVar2 != 0) {
        if (param_2 != 0xffffffff) {
          if (param_2 == 0xfffffffe) {
            uVar1 = FUN_0048a990(param_3,sVar4 & 0xffffffff);
            *(undefined4 *)(param_1[1] + 4) = uVar1;
          }
          else {
            *(uint *)(param_1[1] + 4) = param_2;
          }
        }
        return 1;
      }
    }
  }
  return uVar2;
}


