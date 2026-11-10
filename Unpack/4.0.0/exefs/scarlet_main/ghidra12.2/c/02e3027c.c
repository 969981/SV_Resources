/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e3027c; name: FUN_02e3027c
 */


void FUN_02e3027c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  byte bVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  
  plVar9 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  cVar3 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),*param_3);
  if (cVar3 == '\n') {
    puVar10 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                    0x50),*param_3);
    if (puVar10 == (uint *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *puVar10;
      if (4 < (int)uVar16) {
        uVar16 = 0;
      }
    }
    lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    bVar4 = FUN_010f9128(*(undefined4 *)(lVar14 + 0x36c),*(undefined1 *)(lVar14 + 0x370),
                         uVar16 & 0xff);
    if (bVar4 != 0) {
      uVar18 = 0;
      do {
        uVar11 = FUN_00d9c090(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar16,uVar18);
        uVar20 = uVar11 & 0xffffffff;
        lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
        lVar17 = *(long *)(*(long *)(lVar19 + 0x18) + 0x290);
        lVar14 = *(long *)(lVar17 + 8);
        uVar6 = FUN_02e2197c(*(undefined4 *)(lVar14 + 0x36c),*(undefined1 *)(lVar14 + 0x370),uVar20)
        ;
        bVar15 = 0;
        uVar6 = uVar6 & 0xff;
        if (((uVar11 & 0xff) != 0) && (uVar6 != 5)) {
          bVar15 = 0;
          do {
            lVar14 = *(long *)(lVar17 + 8);
            uVar2 = (int)uVar20 - 1;
            uVar20 = (ulong)uVar2;
            uVar7 = FUN_02e2197c(*(undefined4 *)(lVar14 + 0x36c),*(undefined1 *)(lVar14 + 0x370),
                                 uVar20);
            if (uVar7 == uVar6) {
              bVar15 = bVar15 + 1;
            }
          } while ((uVar2 & 0xff) != 0);
        }
        if (uVar6 == 5) {
          plVar12 = (long *)0x0;
        }
        else if (bVar15 < *(byte *)(lVar19 + (ulong)uVar6 * 0x38 + 0x58)) {
          plVar12 = *(long **)(lVar19 + (ulong)uVar6 * 0x38 + (ulong)bVar15 * 8 + 0x28);
        }
        else {
          plVar12 = (long *)0x0;
        }
        if ((plVar12 != (long *)0x0) &&
           (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0xf0) + (uVar11 & 0xff) * 8 + 8) != 0)) {
          uVar8 = (**(code **)(*plVar12 + 0x98))();
          FUN_0293c614(*(undefined8 *)(param_1 + 0x30),uVar8,4);
          FUN_0293c614(*(undefined8 *)(param_1 + 0x30),uVar8,5);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != bVar4);
    }
    FUN_0124f1ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),plVar9);
    lVar14 = *(long *)(param_1 + 0x20);
    uVar8 = (**(code **)(*plVar9 + 0x98))(plVar9);
    lVar17 = *(long *)(lVar14 + 0x20);
    uVar13 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),uVar8);
    FUN_0124f4d0(*(undefined8 *)(lVar17 + 0x18),*(undefined8 *)(lVar17 + 8),uVar13);
    FUN_0129aff0(*(undefined8 *)(lVar14 + 0x18),0x61,uVar8);
  }
  lVar14 = *(long *)(param_1 + 0x20);
  uVar8 = (**(code **)(*plVar9 + 0x98))(plVar9);
  uVar1 = *(undefined2 *)(param_3 + 1);
  uVar5 = (**(code **)(*plVar9 + 400))(plVar9);
  lVar17 = *(long *)(lVar14 + 0x20);
  uVar13 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),uVar8);
  uVar11 = FUN_0129b2a0(*(undefined8 *)(lVar17 + 0x18),uVar13,uVar1,uVar5);
  if ((uVar11 & 1) != 0) {
    FUN_0129aff0(*(undefined8 *)(lVar14 + 0x18),0x5a,uVar8,uVar1,uVar5);
  }
  FUN_0107a750(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)(param_3 + 1),
               *(undefined2 *)(param_3 + 1),0,plVar9,param_2);
  return;
}


