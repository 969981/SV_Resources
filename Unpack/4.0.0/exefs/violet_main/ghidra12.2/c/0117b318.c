/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117b318; name: FUN_0117b318
 */


bool FUN_0117b318(long param_1,ulong *param_2,long *param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if (*(long *)(param_1 + 600) == 0) goto LAB_0117b494;
  pMVar1 = (MutexType *)(param_1 + 0x168);
  nn::os::LockMutex(pMVar1);
  uVar10 = (*(long **)(param_1 + 600))[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(**(long **)(param_1 + 600) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_0117b424;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_0117b424;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar2 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  goto LAB_0117b48c;
LAB_0117b424:
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (plVar13[3] != 0) {
    plVar8 = (long *)(plVar13[3] + 0x30);
  }
  if (*plVar8 == *param_3) {
    nn::os::UnlockMutex(pMVar1);
    return true;
  }
LAB_0117b48c:
  nn::os::UnlockMutex(pMVar1);
LAB_0117b494:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar14 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar14;
  puVar15 = *(undefined8 **)(param_1 + 0x478);
  if (puVar15 == (undefined8 *)0x0) {
    bVar3 = true;
  }
  else {
    uVar7 = FUN_00cf8198(puVar15[4]);
    plVar13 = *(long **)(*(long *)(lVar14 + 0x200) + 0x60);
    iVar5 = (**(code **)(*plVar13 + 0xa8))(plVar13,param_2[1],param_3[1],uVar7);
    puVar15 = (undefined8 *)*puVar15;
    bVar3 = iVar5 == 1;
    if (puVar15 != (undefined8 *)0x0) {
      uVar7 = FUN_00cf8198(puVar15[4]);
      plVar13 = *(long **)(*(long *)(lVar14 + 0x200) + 0x60);
      iVar6 = (**(code **)(*plVar13 + 0xa8))(plVar13,param_2[1],param_3[1],uVar7);
      plVar13 = (long *)*puVar15;
      bVar3 = iVar5 == 1 && iVar6 == 1;
      if (plVar13 != (long *)0x0) {
        uVar7 = FUN_00cf8198(plVar13[4]);
        plVar8 = *(long **)(*(long *)(lVar14 + 0x200) + 0x60);
        iVar5 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_2[1],param_3[1],uVar7);
        bVar3 = bVar3 && iVar5 == 1;
        for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          uVar7 = FUN_00cf8198(plVar13[4]);
          plVar8 = *(long **)(*(long *)(lVar14 + 0x200) + 0x60);
          iVar5 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_2[1],param_3[1],uVar7);
          bVar3 = (bool)(bVar3 & iVar5 == 1);
        }
      }
    }
  }
  bVar4 = FUN_0117b620(param_1,param_2,param_3);
  return (bVar4 & bVar3) != 0;
}


