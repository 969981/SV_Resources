/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ed8cc; name: FUN_034ed8cc
 */


void FUN_034ed8cc(int param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (*param_2 < 0x2e && (1L << ((ulong)*param_2 & 0x3f) & 0x380000000020U) != 0) {
    if (DAT_048b0810 != 0) {
      plVar3 = DAT_048b0808;
      plVar6 = DAT_048b0808;
      uVar2 = DAT_048b0810;
      do {
        lVar5 = *(long *)(*plVar6 + 0x60);
        iVar4 = 0;
        if (lVar5 != 0) {
          iVar4 = *(int *)(lVar5 + 0x18);
        }
        if ((iVar4 == param_1) && (plVar1 = *(long **)(*plVar6 + 8), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x10))(param_2[0x12],param_2[0x13],plVar1,param_2[0xe],*param_2);
          plVar3 = DAT_048b0808;
          uVar2 = DAT_048b0810;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar3 + uVar2);
    }
  }
  else if (DAT_048b0810 != 0) {
    plVar3 = DAT_048b0808;
    plVar6 = DAT_048b0808;
    uVar2 = DAT_048b0810;
    do {
      lVar5 = *(long *)(*plVar6 + 0x60);
      iVar4 = 0;
      if (lVar5 != 0) {
        iVar4 = *(int *)(lVar5 + 0x18);
      }
      if ((iVar4 == param_1) && (plVar1 = *(long **)(*plVar6 + 8), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1,*param_2);
        plVar3 = DAT_048b0808;
        uVar2 = DAT_048b0810;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar2);
  }
  return;
}


