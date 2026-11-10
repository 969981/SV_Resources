/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ddd00; name: FUN_017ddd00
 */


void FUN_017ddd00(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  char local_440 [968];
  undefined8 *local_78;
  undefined8 local_70 [2];
  
  local_70[0] = *(undefined8 *)(param_1 + 8);
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  local_78 = local_70;
  uVar9 = 0;
  lVar6 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar6;
  lVar6 = *(long *)(lVar6 + 0x70);
  pMVar1 = (MutexType *)(lVar6 + 0x120);
  do {
    uVar13 = (ulong)(uint)(2 << (ulong)(uVar9 & 0x1f));
    uVar10 = uVar9;
    do {
      uVar11 = (ulong)(uint)(2 << (ulong)(uVar10 & 0x1f));
      nn::os::LockMutex(pMVar1);
      uVar7 = 0;
      lVar12 = *(long *)(lVar6 + 0x110) + 0x28;
      do {
        uVar8 = 1L << (uVar7 & 0x3f);
        if ((uVar8 & uVar13 << 0x20) != 0) {
          *(ulong *)(lVar12 + uVar7 * 8) =
               *(ulong *)(lVar12 + uVar7 * 8) & (uVar11 << 0x20 ^ 0xffffffffffffffff);
        }
        if ((uVar8 & uVar11 << 0x20) != 0) {
          *(ulong *)(lVar12 + uVar7 * 8) =
               *(ulong *)(lVar12 + uVar7 * 8) & (uVar13 << 0x20 ^ 0xffffffffffffffff);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x40);
      nn::os::UnlockMutex(pMVar1);
      nn::os::LockMutex(pMVar1);
      uVar7 = 0;
      lVar12 = *(long *)(lVar6 + 0x110) + 0x28;
      do {
        uVar8 = 1L << (uVar7 & 0x3f);
        if ((uVar8 & uVar13) != 0) {
          *(ulong *)(lVar12 + uVar7 * 8) = *(ulong *)(lVar12 + uVar7 * 8) & ~uVar11;
        }
        if ((uVar8 & uVar11) != 0) {
          *(ulong *)(lVar12 + uVar7 * 8) = *(ulong *)(lVar12 + uVar7 * 8) & ~uVar13;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x40);
      uVar10 = uVar10 + 1;
      nn::os::UnlockMutex(pMVar1);
    } while (uVar10 != 0x1f);
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x1f);
  FUN_017de098(local_440,&local_78,
               "world/data/field/collision/field_dynamics_collision_table/field_dynamics_collision_table_array.bin"
               ,
               "world/data/field/collision/field_dynamics_collision_table/field_dynamics_collision_table_array.bfbs"
              );
  lVar12 = 0;
  do {
    lVar2 = lVar12 + 1;
    lVar14 = lVar12;
    do {
      cVar4 = local_440[lVar14 + lVar12 * 0x1f];
      if (lVar14 == lVar12) {
LAB_017ddec8:
        if (cVar4 != '\0') {
          uVar11 = (ulong)(uint)(1 << (ulong)((uint)lVar2 & 0x1f)) << 0x20;
          nn::os::LockMutex(pMVar1);
          uVar13 = 0;
          uVar7 = (ulong)(uint)(1 << (ulong)((int)lVar14 + 1U & 0x1f)) << 0x20;
          lVar3 = *(long *)(lVar6 + 0x110) + 0x28;
          do {
            uVar8 = 1L << (uVar13 & 0x3f);
            if ((uVar8 & uVar11) != 0) {
              *(ulong *)(lVar3 + uVar13 * 8) = *(ulong *)(lVar3 + uVar13 * 8) | uVar7;
            }
            if ((uVar8 & uVar7) != 0) {
              *(ulong *)(lVar3 + uVar13 * 8) = *(ulong *)(lVar3 + uVar13 * 8) | uVar11;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x40);
          nn::os::UnlockMutex(pMVar1);
        }
      }
      else if (cVar4 != '\0') {
        cVar4 = local_440[lVar12 + lVar14 * 0x1f];
        goto LAB_017ddec8;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x1f);
    lVar12 = lVar2;
  } while (lVar2 != 0x1f);
  FUN_017de098(local_440,&local_78,
               "world/data/field/collision/field_program_collision_table/field_program_collision_table_array.bin"
               ,
               "world/data/field/collision/field_program_collision_table/field_program_collision_table_array.bfbs"
              );
  lVar12 = 0;
  do {
    lVar2 = lVar12 + 1;
    uVar13 = (ulong)(uint)(1 << (ulong)((uint)lVar2 & 0x1f));
    lVar14 = lVar12;
    do {
      cVar4 = local_440[lVar14 + lVar12 * 0x1f];
      if (lVar14 == lVar12) {
LAB_017ddfc0:
        if (cVar4 != '\0') {
          uVar11 = (ulong)(uint)(1 << (ulong)((int)lVar14 + 1U & 0x1f));
          nn::os::LockMutex(pMVar1);
          uVar7 = 0;
          lVar3 = *(long *)(lVar6 + 0x110) + 0x28;
          do {
            uVar8 = 1L << (uVar7 & 0x3f);
            if ((uVar8 & uVar13) != 0) {
              *(ulong *)(lVar3 + uVar7 * 8) = *(ulong *)(lVar3 + uVar7 * 8) | uVar11;
            }
            if ((uVar8 & uVar11) != 0) {
              *(ulong *)(lVar3 + uVar7 * 8) = *(ulong *)(lVar3 + uVar7 * 8) | uVar13;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x40);
          nn::os::UnlockMutex(pMVar1);
        }
      }
      else if (cVar4 != '\0') {
        cVar4 = local_440[lVar12 + lVar14 * 0x1f];
        goto LAB_017ddfc0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x1f);
    lVar12 = lVar2;
    if (lVar2 == 0x1f) {
      return;
    }
  } while( true );
}


