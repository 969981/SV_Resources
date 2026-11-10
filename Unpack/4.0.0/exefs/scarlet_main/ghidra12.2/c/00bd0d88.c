/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd0d88; name: FUN_00bd0d88
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bd0d88(long param_1,undefined8 param_2)

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
    FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x38),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00c0c288(8,*(undefined8 *)(param_1 + 0x40),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_00c0bbcc(9,*(undefined4 *)(param_1 + 0x4c),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_00c0b970(10,*(undefined1 *)(param_1 + 0x48),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN_00c0c288(0xb,*(undefined8 *)(param_1 + 0x50),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    FUN_00c0b970(0x10,*(undefined1 *)(param_1 + 0x4b),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_00c0b970(0x11,*(undefined1 *)(param_1 + 0x80),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_00c0b970(0x12,*(undefined1 *)(param_1 + 0x81),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_00c0b970(0x14,*(undefined1 *)(param_1 + 0x49),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_00c0b970(0x17,*(undefined1 *)(param_1 + 0x82),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_00c0b970(0x1b,*(undefined1 *)(param_1 + 0x4a),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    FUN_00c0b970(0x1f,*(undefined1 *)(param_1 + 0x83),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    FUN_00c0c288(0x24,*(undefined8 *)(param_1 + 0x58),param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    FUN_00c0c288(0x25,*(undefined8 *)(param_1 + 0x60),param_2);
  }
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      FUN_00c0d4cc(999,*(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar8 * 8 + 8),param_2);
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


