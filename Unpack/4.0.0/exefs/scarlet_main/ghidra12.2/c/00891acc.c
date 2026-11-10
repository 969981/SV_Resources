/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00891acc; name: FUN_00891acc
 */


long FUN_00891acc(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_008afbf0(param_1 + 7,"__arcsh");
  if (lVar2 == 0) {
    for (plVar3 = (long *)param_1[2]; param_1 + 1 != plVar3; plVar3 = (long *)plVar3[1]) {
      lVar2 = FUN_008afbf0(plVar3[2] + 0xa0,"__arcsh");
      if ((lVar2 != 0) &&
         (iVar1 = FUN_008b4430(*(undefined8 *)(lVar2 + 0x38),param_3,param_4,param_5), iVar1 != -1))
      {
        return lVar2;
      }
    }
    lVar2 = FUN_00891be8(param_1,param_3,param_4,param_5);
    lVar2 = FUN_008afa8c(lVar2 + 0xa0,"__arcsh",1);
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0xb0))(param_1,lVar2,param_2,param_3,param_4,param_5);
    }
  }
  return lVar2;
}


