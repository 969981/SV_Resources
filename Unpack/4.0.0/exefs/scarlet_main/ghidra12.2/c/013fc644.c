/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fc644; name: FUN_013fc644
 */


void FUN_013fc644(long param_1,undefined8 param_2,byte *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar11 = *(long **)(param_1 + 0x40);
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar11 == plVar12) {
    plVar12 = plVar11;
  }
  else {
    do {
      if ((*plVar11 != 0) && (uVar9 = FUN_013fcabc(), uVar9 == *param_3)) goto LAB_013fc6a8;
      plVar11 = plVar11 + 1;
    } while (plVar12 != plVar11);
    plVar11 = plVar12;
LAB_013fc6a8:
    plVar12 = *(long **)(param_1 + 0x48);
  }
  if (plVar12 != plVar11) {
    cVar7 = FUN_013fcabc(*plVar11);
    lVar10 = FUN_013fcac4(*plVar11);
    puVar14 = *(undefined8 **)(lVar10 + 0x20);
    puVar3 = puVar14;
    if (*(long *)(lVar10 + 0x28) != 0) {
      puVar3 = puVar14 + *(long *)(lVar10 + 0x28);
    }
    if (puVar14 != puVar3) {
      local_60 = *puVar14;
      local_68._0_1_ = cVar7;
      FUN_01a45254(param_1,param_2,&local_68,1);
      if (puVar14 + 1 != puVar3) {
        local_60 = puVar14[1];
        local_68._0_1_ = cVar7;
        FUN_01a45254(param_1,param_2,&local_68,1);
        if (puVar14 + 2 != puVar3) {
          local_68 = (undefined8 *)CONCAT71(local_68._1_7_,cVar7);
          local_60 = puVar14[2];
          FUN_01a45254(param_1,param_2,&local_68,1);
          for (puVar14 = puVar14 + 3; puVar14 != puVar3; puVar14 = puVar14 + 1) {
            local_68._1_7_ = (undefined7)((ulong)local_68 >> 8);
            local_68 = (undefined8 *)CONCAT71(local_68._1_7_,cVar7);
            local_60 = *puVar14;
            FUN_01a45254(param_1,param_2,&local_68,1);
          }
        }
      }
    }
    lVar13 = *plVar11;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_00c43ef0(&local_68,lVar13 + 0x30);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    lVar10 = 0;
    if (lVar13 != 0) {
      lVar10 = lVar13 + 0x28;
    }
    if (local_68[2] == lVar10) {
      FUN_011726f0(&local_78,&local_68);
    }
    puVar14 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_58 = *puVar14;
          FUN_00c44438(lVar10 + 0x8040,&local_58);
        }
      }
      else if (sVar4 == 0) goto LAB_013fc828;
    }
    FUN_019b62d4(param_1 + 0x78,8,1,&local_78);
    puVar14 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_68 = (undefined8 *)*puVar14;
          FUN_00c44438(lVar10 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_013fc828;
    }
    FUN_013fcd5c((undefined8 *)(param_1 + 0x40),plVar11);
    lVar10 = *(long *)(param_1 + 0xb8);
    if (((lVar10 != 0) && (*(char *)(lVar10 + 0x40) == '\x01')) &&
       (*(char *)(lVar10 + 0x41) == cVar7)) {
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      *(undefined2 *)(lVar10 + 0x42) = 1;
      FUN_00d8e6c4(lVar10 + 0x48,&local_68);
      puVar14 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar4 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_58 = *puVar14;
            FUN_00c44438(lVar10 + 0x8040,&local_58);
          }
        }
        else if (sVar4 == 0) {
LAB_013fc828:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
    }
  }
  return;
}


