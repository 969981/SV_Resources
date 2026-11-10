/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b65c8; name: FUN_019b65c8
 */


void FUN_019b65c8(long param_1,byte *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar13 = *(long **)(param_1 + 0x40);
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar13 != plVar4) {
    do {
      if ((*plVar13 != 0) && (uVar10 = FUN_013fcabc(), uVar10 == *param_2)) goto LAB_019b6618;
      plVar13 = plVar13 + 1;
    } while (plVar4 != plVar13);
    plVar13 = plVar4;
LAB_019b6618:
    if (plVar13 == *(long **)(param_1 + 0x48)) {
      return;
    }
    FUN_019b68fc(*plVar13,param_2 + 1,param_2 + 8);
    lVar11 = *(long *)(param_1 + 0xb8);
    if (lVar11 == 0) {
      return;
    }
    if (*(char *)(lVar11 + 0x40) != '\x02') {
      return;
    }
    bVar5 = *(byte *)(lVar11 + 0x41);
    uVar10 = FUN_013fcabc(*plVar13);
    if (uVar10 != bVar5) {
      return;
    }
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar12 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar12;
    lVar11 = 0;
    if (lVar12 != 0) {
      lVar11 = 0;
      if (*(long *)PTR_DAT_047d0a08 != 0) {
        lVar11 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      }
    }
    if (*(long *)(param_2 + 8) != lVar11) {
      return;
    }
    lVar14 = *plVar13;
    lVar12 = *(long *)(param_1 + 0xb8);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_00c43ef0(&local_48,lVar14 + 0x30);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    lVar11 = 0;
    if (lVar14 != 0) {
      lVar11 = lVar14 + 0x28;
    }
    if (local_48[2] == lVar11) {
      FUN_011726f0(&local_58,&local_48);
    }
    puVar8 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_48 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_019b6770;
    }
    *(undefined2 *)(lVar12 + 0x42) = 1;
    FUN_00d8e6c4(lVar12 + 0x48,&local_58);
    puVar8 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_48 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
LAB_019b6770:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


