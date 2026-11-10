/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a6b6c; name: FUN_008a6b6c
 */


void FUN_008a6b6c(long param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  uVar9 = *(uint *)(param_1 + 0x60);
  if ((uVar9 >> 0x11 & 1) == 0) goto LAB_008a6c00;
  if (uVar9 == 0) {
LAB_008a6be4:
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar9 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar1 = (int *)(lVar10 + (ulong)(*(int *)(lVar10 + (ulong)uVar9 + 4) + uVar9));
    if ((*piVar1 != 0x15) || (bVar2 = *(byte *)(piVar1 + 3), (char)bVar2 < '\0')) goto LAB_008a6be4;
    lVar10 = lVar10 + (ulong)(*(int *)(lVar10 + (ulong)uVar9 + 4 + (ulong)bVar2 * 4) + uVar9);
  }
  FUN_008a9fdc(*(undefined8 *)(lVar10 + 8),param_2);
  FUN_00896e98(*(undefined8 *)(lVar10 + 8));
  uVar9 = *(uint *)(param_1 + 0x60);
LAB_008a6c00:
  if (uVar9 != 0) {
    lVar10 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar9 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar1 = (int *)(lVar10 + (ulong)(*(int *)(lVar10 + (ulong)uVar9 + 4) + uVar9));
    if (((*piVar1 == 0x15) && (bVar2 = *(byte *)((long)piVar1 + 0xe), -1 < (char)bVar2)) &&
       (lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + (ulong)uVar9 + 4 + (ulong)bVar2 * 4) +
                                           uVar9) + 8), lVar10 != 0)) {
      FUN_008a6de4(lVar10);
      FUN_00896e98(lVar10);
    }
  }
  puVar6 = PTR_DAT_047d20a0;
  puVar5 = PTR_DAT_047d2098;
  puVar4 = PTR_DAT_047d2090;
  puVar3 = PTR_DAT_047d2088;
  plVar13 = *(long **)(param_1 + 0x28);
  do {
    do {
      plVar12 = plVar13;
      if ((long *)(param_1 + 0x20) == plVar12) {
        if ((*(byte *)(param_1 + 0x5c) & 0x44) == 0) {
          return;
        }
        FUN_00896e98(*(undefined8 *)(param_1 + 0xa8));
        return;
      }
      plVar13 = (long *)plVar12[1];
      if ((long *)(param_1 + 0x20) != plVar12) {
        lVar10 = *plVar13;
        *(long **)(*plVar12 + 8) = plVar13;
        *plVar13 = *plVar12;
        *(long **)(lVar10 + 8) = plVar12;
        *plVar12 = lVar10;
      }
    } while ((*(byte *)(plVar12 + 10) >> 3 & 1) != 0);
    plVar11 = plVar12 + -1;
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        *(undefined8 *)puVar6 = 0;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar4 = puVar6;
      __cxa_guard_release(puVar3);
    }
    for (plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar8 != (long *)0x0;
        plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar4) {
        plVar12 = (long *)plVar12[0x1c];
        if (plVar12 != (long *)0x0) {
          FUN_01494f04(plVar12,param_2);
          (**(code **)(*plVar12 + 8))(plVar12);
          goto LAB_008a6cb8;
        }
        break;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2);
    (**(code **)*plVar11)(plVar11);
    plVar12 = plVar11;
LAB_008a6cb8:
    FUN_00896e98(plVar12);
  } while( true );
}


