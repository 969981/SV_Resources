/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324cb34; name: FUN_0324cb34
 */


void FUN_0324cb34(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x58))(param_1), 0 < iVar1)) {
    iVar1 = 0;
    do {
      plVar3 = (long *)(**(code **)(*param_1 + 0x60))(param_1,iVar1);
      if (plVar3 != (long *)0x0) {
        iVar2 = (int)param_2[1];
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar2) {
          FUN_0324d130(param_2,param_3,lVar4 + 1);
          iVar2 = (int)param_2[1];
        }
        *(long **)(*param_2 + (long)iVar2 * 8) = plVar3;
        *(int *)(param_2 + 1) = (int)(lVar4 + 1);
        (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    } while (iVar1 < iVar2);
  }
  return;
}


