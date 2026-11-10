/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e8b0; name: FUN_0124e8b0
 */


bool FUN_0124e8b0(undefined8 param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  undefined4 local_24;
  
  piVar5 = (int *)(**(code **)(*param_2 + 0x468))(param_2);
  iVar1 = *piVar5;
  if (iVar1 < 4) {
    if (iVar1 - 1U < 3) {
      lVar6 = (*(code *)(&switchD_0292d070::switchdataD_045f1170)[(ulong)(iVar1 - 1U) * 2])
                        (&local_24);
      bVar2 = false;
      if (lVar6 != 0) {
        uVar3 = (**(code **)(*param_2 + 0xe0))(param_2);
        uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
        lVar6 = FUN_0124ed80(param_1,6,iVar1,0,uVar3,uVar4,lVar6,local_24);
        bVar2 = lVar6 != 0;
      }
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


