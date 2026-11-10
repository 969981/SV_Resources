/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029acea0; name: FUN_029acea0
 */


undefined8
FUN_029acea0(long *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [260];
  
  if ((param_4 != (uint *)0x0) && (*param_4 < 2)) {
    FUN_029acfb0(auStack_164,param_4[1],param_2);
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      iVar1 = FUN_011b4bac(param_1,auStack_164,param_4,param_3,auStack_154,0);
      if ((iVar1 == 1) &&
         (uVar2 = FUN_011b4ab8(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
        return uVar2;
      }
    }
    else {
      do {
        iVar1 = FUN_011b4bac(param_1,auStack_164,param_4,param_3,auStack_154,plVar3 + 1);
        if ((iVar1 == 1) &&
           (uVar2 = FUN_011b4ab8(auStack_154,param_3,param_5 & 1,param_6), (int)uVar2 == 1)) {
          return uVar2;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return 2;
}


