/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd87bc; name: FUN_00bd87bc
 */


void FUN_00bd87bc(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_00c0b970(0x21,*(undefined1 *)(param_1 + 0x50),param_2);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar7 = 0;
    do {
      FUN_00c0d4cc(999,*(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar7 * 8 + 8),param_2);
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  plVar5 = (long *)(param_1 + 0x10);
  plVar3 = (long *)*plVar5;
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar5;
    do {
      if (999 < (int)plVar3[4]) {
        plVar6 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < 1000];
    } while (plVar3 != (long *)0x0);
    while ((plVar6 != plVar5 && ((int)plVar6[4] < 0x20000000))) {
      FUN_00c2a0f0(plVar6 + 5,(int)plVar6[4],param_2);
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar3 = plVar6 + 2;
        bVar2 = *(long **)*plVar3 != plVar6;
        plVar6 = (long *)*plVar3;
        if (bVar2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar3;
          } while (*(long *)*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_2);
  return;
}


