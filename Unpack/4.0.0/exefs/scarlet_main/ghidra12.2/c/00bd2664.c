/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd2664; name: FUN_00bd2664
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bd2664(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    FUN_00c0b970(1,*(undefined1 *)(param_1 + 0x50),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00c0b970(2,*(undefined1 *)(param_1 + 0x51),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_00c0b970(3,*(undefined1 *)(param_1 + 0x52),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_00c0b970(7,*(undefined1 *)(param_1 + 0x53),param_2);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      FUN_00c0d4cc(999,*(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 8 + 8),param_2);
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  plVar6 = (long *)(param_1 + 0x10);
  plVar4 = (long *)*plVar6;
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar6;
    do {
      if (999 < (int)plVar4[4]) {
        plVar7 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < 1000];
    } while (plVar4 != (long *)0x0);
    while ((plVar7 != plVar6 && ((int)plVar7[4] < 0x20000000))) {
      FUN_00c2a0f0(plVar7 + 5,(int)plVar7[4],param_2);
      plVar4 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar4 = plVar7 + 2;
        bVar3 = *(long **)*plVar4 != plVar7;
        plVar7 = (long *)*plVar4;
        if (bVar3) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar7 = (long *)*plVar4;
          } while (*(long *)*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_2);
  return;
}


