/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a45254; name: FUN_01a45254
 */


void FUN_01a45254(long param_1,undefined8 *param_2,byte *param_3,ulong param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar15 = *(long **)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar15 != plVar3) {
    do {
      if ((*plVar15 != 0) && (uVar11 = FUN_013fcabc(), uVar11 == *param_3)) goto LAB_01a452b4;
      plVar15 = plVar15 + 1;
    } while (plVar3 != plVar15);
    plVar15 = plVar3;
LAB_01a452b4:
    if (plVar15 == *(long **)(param_1 + 0x48)) {
      return;
    }
    lVar12 = FUN_01a45624(*plVar15);
    param_3 = param_3 + 8;
    FUN_01a4562c(*plVar15,param_3);
    lVar13 = *(long *)(param_1 + 0xb8);
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0x40) == '\x03')) &&
       (bVar4 = *(byte *)(lVar13 + 0x41), uVar11 = FUN_013fcabc(*plVar15), uVar11 == bVar4)) {
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar14 = *(long *)PTR_DAT_047d6ca0;
      *(long *)PTR_DAT_047d6ca8 = lVar14;
      lVar13 = 0;
      if (lVar14 != 0) {
        lVar13 = 0;
        if (*(long *)PTR_DAT_047d0a08 != 0) {
          lVar13 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
        }
      }
      if (*(long *)param_3 == lVar13) {
        lVar16 = *plVar15;
        lVar14 = *(long *)(param_1 + 0xb8);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_00c43ef0(&local_68,lVar16 + 0x30);
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        lVar13 = 0;
        if (lVar16 != 0) {
          lVar13 = lVar16 + 0x28;
        }
        if (local_68[2] == lVar13) {
          FUN_011726f0(&local_78,&local_68);
        }
        puVar7 = local_68;
        if (local_68 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_68 + 3);
          do {
            sVar9 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar9 == 1) {
            piVar2 = (int *)((long)local_68 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_58 = *puVar7;
              FUN_00c44438(lVar13 + 0x8040,&local_58);
            }
          }
          else if (sVar9 == 0) goto LAB_01a4548c;
        }
        *(undefined2 *)(lVar14 + 0x42) = 1;
        FUN_00d8e6c4(lVar14 + 0x48,&local_78);
        puVar7 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar9 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar9 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_68 = (undefined8 *)*puVar7;
              FUN_00c44438(lVar13 + 0x8040,&local_68);
            }
          }
          else if (sVar9 == 0) {
LAB_01a4548c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
        }
      }
    }
    if (((param_4 & 1) == 0) && (uVar11 = FUN_013fbe70(), (uVar11 & 1) != 0)) {
      sVar9 = FUN_01419488(*plVar15);
      if (sVar9 != 0) {
        if (lVar12 != *(long *)param_3) {
          return;
        }
        uVar11 = FUN_0289cb9c(*plVar15);
        if ((uVar11 & 1) != 0) {
          FUN_0289cba4(param_1,param_3,plVar15);
          return;
        }
      }
      uVar8 = FUN_013fcabc(*plVar15);
      local_68 = (undefined8 *)*param_2;
      local_60 = CONCAT71(local_60._1_7_,uVar8);
      FUN_0289b700(param_1 + 0x238,&local_68);
    }
  }
  return;
}


