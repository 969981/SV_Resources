/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034dbac0; name: FUN_034dbac0
 */


void FUN_034dbac0(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ushort *puVar3;
  ushort *puVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar1 != (long *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) {
    if ((param_2 & 1) == 0) {
      do {
        puVar3 = *(ushort **)(lVar2 + 0x20);
        if (puVar3 == (ushort *)0x0) {
          puVar4 = (ushort *)0x0;
          puVar6 = (ushort *)0x0;
          lVar5 = 0;
        }
        else {
          puVar4 = puVar3 + 1;
          puVar6 = puVar4 + *puVar3;
          lVar5 = (long)puVar3 + ((ulong)((uint)*puVar3 * 2 + 5) & 0x3fffc);
        }
        if (puVar4 != puVar6) {
          plVar1 = (long *)(lVar5 + 8);
          lVar5 = (long)puVar6 - (long)puVar4;
          do {
            lVar7 = *plVar1;
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x3c) == 1) {
                *(undefined4 *)(lVar7 + 0x3c) = 0;
              }
              else if (*(int *)(lVar7 + 0x3c) == 2) {
                *(undefined4 *)(lVar7 + 0x3c) = 3;
              }
            }
            plVar1 = plVar1 + 2;
            lVar5 = lVar5 + -2;
          } while (lVar5 != 0);
        }
        lVar2 = *(long *)(lVar2 + 0x10);
      } while (lVar2 != 0);
    }
    else {
      do {
        puVar3 = *(ushort **)(lVar2 + 0x20);
        if (puVar3 == (ushort *)0x0) {
          puVar4 = (ushort *)0x0;
          puVar6 = (ushort *)0x0;
          lVar5 = 0;
        }
        else {
          puVar4 = puVar3 + 1;
          puVar6 = puVar4 + *puVar3;
          lVar5 = (long)puVar3 + ((ulong)((uint)*puVar3 * 2 + 5) & 0x3fffc);
        }
        if (puVar4 != puVar6) {
          plVar1 = (long *)(lVar5 + 8);
          lVar5 = (long)puVar6 - (long)puVar4;
          do {
            lVar7 = *plVar1;
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x3c) == 3) {
                *(undefined4 *)(lVar7 + 0x3c) = 2;
              }
              else if (*(int *)(lVar7 + 0x3c) == 0) {
                *(undefined4 *)(lVar7 + 0x3c) = 1;
              }
            }
            plVar1 = plVar1 + 2;
            lVar5 = lVar5 + -2;
          } while (lVar5 != 0);
        }
        lVar2 = *(long *)(lVar2 + 0x10);
      } while (lVar2 != 0);
    }
  }
  return;
}


