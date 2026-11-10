/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bdc88; name: FUN_008bdc88
 */


void FUN_008bdc88(undefined8 param_1,long param_2,char *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar4 = *(long *)(param_2 + 0xb8);
  if (param_2 + 0xb0 != lVar4) {
    lVar5 = lVar4;
    do {
      iVar1 = strcmp((char *)(lVar5 + 0x10),param_3);
      if (iVar1 == 0) {
        if (lVar5 == 0) {
          return;
        }
        iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        while (iVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 8);
          iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        }
        uVar6 = *(undefined4 *)(lVar4 + 0x40);
        uVar2 = FUN_008be728(param_1,param_2 + 0xa0,param_3);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0xb8);
        iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        while (iVar1 != 0) {
          lVar4 = *(long *)(lVar4 + 8);
          iVar1 = strcmp((char *)(lVar4 + 0x10),param_3);
        }
        plVar3 = *(long **)(param_2 + 0xd8);
        if (plVar3 == (long *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x008bdd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x20))
                  (uVar6,*(undefined4 *)(lVar4 + 0x40),plVar3,*(undefined8 *)(param_2 + 8),param_3);
        return;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (param_2 + 0xb0 != lVar5);
  }
  return;
}


