/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e92c24; name: FUN_01e92c24
 */


void FUN_01e92c24(long param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  uint *puVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  short sVar18;
  uint uVar19;
  int *piVar20;
  char *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  int *local_80;
  int *local_78;
  undefined8 local_68;
  int *local_60;
  undefined8 uStack_58;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar15 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar15;
  plVar3 = *(long **)(lVar15 + 0x1c8);
  plVar8 = *(long **)(lVar15 + 0x1c0);
  do {
    if (plVar8 == plVar3) {
      return;
    }
    lVar15 = *plVar8;
    uVar10 = FUN_00f280dc(lVar15 + 0x28);
    plVar8 = plVar8 + 1;
  } while ((uVar10 & 1) == 0);
  lVar16 = *(long *)(param_1 + 0x1698);
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar16 + 0x1a);
    sVar18 = *(short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01e92d34;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e92d34:
        bVar7 = false;
      }
      if (bVar7) {
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 == 0) {
          return;
        }
        lVar11 = FUN_01289558(lVar16 + 0xe0,&local_a0);
        if (lVar11 == 0) goto LAB_01e92f54;
        FUN_01faa608(lVar15,param_2);
        local_a0 = *(char **)(lVar15 + 0xe3b0);
        FUN_01faa4e0(lVar11,&local_a0);
        if (*(char *)(lVar11 + 0x11a) == '\0') {
          local_60 = (int *)0x0;
          uStack_58 = 0;
          local_68 = 0;
          goto LAB_01e92f54;
        }
        local_68 = *(undefined8 *)(lVar11 + 0x120);
        local_60 = *(int **)(lVar11 + 0x128);
        uStack_58 = *(undefined8 *)(lVar11 + 0x130);
        if (local_60 == (int *)0x0) goto LAB_01e92f54;
        if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar10 == 0)) {
          puVar13 = (uint *)0x0;
        }
        else {
          puVar13 = (uint *)((long)local_60 + uVar10);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        }
        local_a0 = "values";
        pvVar12 = bsearch(&local_a0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (pvVar12 == (void *)0x0) goto LAB_01e92f54;
        local_a0 = &DAT_fbec41851566601b;
        pcStack_98 = "values";
        local_90 = 6;
        local_88 = (long *)0x0;
        FUN_00e90ee0(&local_80,&local_68,&local_a0,0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        *(undefined4 *)(param_1 + 0x16a8) = *(undefined4 *)(lVar15 + 0xe300);
        if (((local_78 == (int *)0x0) || (*(ushort *)((long)local_78 - (long)*local_78) < 7)) ||
           (uVar10 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3], uVar10 == 0)) {
LAB_01e93010:
          uVar14 = 0;
        }
        else {
          puVar13 = (uint *)((long)local_78 + uVar10);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
          local_a0 = "versionNo";
          puVar13 = bsearch(&local_a0,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600)
          ;
          if ((puVar13 == (uint *)0x0) || (local_80 == (int *)0x0)) goto LAB_01e93010;
          piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar17 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar4 = *puVar17;
          if (uVar4 < 7) {
            piVar20 = (int *)0x0;
          }
          else {
            piVar20 = (int *)0x0;
            if ((ulong)puVar17[3] != 0) {
              puVar13 = (uint *)((long)piVar2 + (ulong)puVar17[3]);
              piVar20 = (int *)((long)puVar13 + (ulong)*puVar13);
            }
          }
          if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
             (uVar10 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar10 == 0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = (long)*(char *)((long)piVar20 + uVar10) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar10 * 8) == 4) {
            if (uVar4 < 0xb) {
              uVar19 = 0;
LAB_01e92fcc:
              uVar14 = 0;
            }
            else {
              uVar19 = 0;
              if ((ulong)puVar17[5] != 0) {
                uVar19 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar17[5]);
              }
              if ((uVar4 < 0xd) || ((ulong)puVar17[6] == 0)) goto LAB_01e92fcc;
              uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar17[6]);
            }
            if ((uVar19 < *(ushort *)((long)local_80 - (long)*local_80)) &&
               (uVar10 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar19),
               uVar10 != 0)) {
              uVar14 = *(undefined4 *)((long)local_80 + uVar10);
            }
          }
          else {
            if ((uVar4 < 0xd) || ((ulong)puVar17[6] == 0)) goto LAB_01e93010;
            uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar17[6]);
          }
        }
        FUN_01faa618(lVar15,uVar14);
LAB_01e92f54:
        lVar15 = *(long *)(lVar16 + 8);
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))((long *)(lVar16 + -0x28));
          return;
        }
        if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar18 = sVar5;
    } while (sVar5 != 0);
  }
  return;
}


