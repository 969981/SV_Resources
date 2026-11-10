/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a43554; name: FUN_00a43554
 */


void FUN_00a43554(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__dest;
  long lVar4;
  uint uVar5;
  int *piVar7;
  int *piVar6;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = DAT_04836488;
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 != 0) {
    if (*(int **)(param_1 + 0x10) == *(int **)(param_1 + 0x18)) {
      lVar8 = 0;
    }
    else {
      lVar8 = 1;
      piVar6 = *(int **)(param_1 + 0x10);
      do {
        piVar7 = piVar6 + 1;
        lVar8 = (long)*piVar6 * (long)(int)lVar8;
        piVar6 = piVar7;
      } while (*(int **)(param_1 + 0x18) != piVar7);
      lVar8 = lVar8 * 0x88;
    }
    uVar3 = (**(code **)(*DAT_04836488 + 0xf8))(DAT_04836488);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar8,0x40);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,lVar8,0x40);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x18) = lVar9;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(param_2 + 8) != '\0') {
    if (param_1 == param_2) {
      return;
    }
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 != *(long **)(param_2 + 0x28)) {
      *(long *)(param_1 + 0x18) = lVar9;
      lVar8 = *(long *)(param_1 + 0x20) - lVar9;
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar8,4);
      }
      else {
        FUN_00c48fe8(plVar10,lVar9,lVar8,4);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    lVar9 = *(long *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(long *)(param_1 + 0x28) = lVar9;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    FUN_00a4a9e4((undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),
                 *(undefined8 *)(param_2 + 0x18));
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 != *(long **)(param_2 + 0x60)) {
      lVar9 = *(long *)(param_1 + 0x48);
      *(long *)(param_1 + 0x50) = lVar9;
      lVar8 = *(long *)(param_1 + 0x58) - lVar9;
      uVar3 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar8,4);
      }
      else {
        FUN_00c48fe8(plVar10,lVar9,lVar8,4);
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    lVar9 = *(long *)(param_2 + 0x60);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    *(long *)(param_1 + 0x60) = lVar9;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    FUN_00a4a9e4((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48),
                 *(undefined8 *)(param_2 + 0x50));
    if (*(int **)(param_1 + 0x10) == *(int **)(param_1 + 0x18)) {
      return;
    }
    uVar5 = 1;
    piVar6 = *(int **)(param_1 + 0x10);
    do {
      piVar7 = piVar6 + 1;
      uVar5 = *piVar6 * uVar5;
      piVar6 = piVar7;
    } while (*(int **)(param_1 + 0x18) != piVar7);
    if ((int)uVar5 < 1) {
      return;
    }
    __dest = (void *)(**(code **)(*DAT_04836488 + 0x30))(DAT_04836488,(ulong)uVar5 << 2,0x40);
    *(void **)(param_1 + 0x80) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_2 + 0x80),(ulong)uVar5 << 2);
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}


