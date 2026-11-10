/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01556f00; name: FUN_01556f00
 */


void FUN_01556f00(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ushort *puVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  int local_bc;
  int *local_b0;
  int *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar10 = *param_1;
  if (((*(long *)(lVar10 + 0x120) == 0) || ((*(byte *)(*(long *)(lVar10 + 0x120) + 0x1e8) & 1) != 0)
      ) && ((*(long *)(lVar10 + 0xe0) == 0 ||
            ((*(byte *)(*(long *)(lVar10 + 0xe0) + 0x1e8) & 1) != 0)))) {
    local_98 = *(undefined8 *)(lVar10 + 0xc0);
    local_90 = *(undefined8 *)(lVar10 + 200);
    uStack_88 = *(undefined8 *)(lVar10 + 0xd0);
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    local_98 = 0;
  }
  local_80 = &DAT_fbec41851566601b;
  local_78 = "values";
  local_70 = 6;
  local_68 = (long *)0x0;
  piVar6 = (int *)FUN_00efa07c(&local_98,&local_80);
  if (piVar6 == (int *)0x0) {
    local_bc = 0;
  }
  else {
    local_bc = *piVar6;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_bc != 0) {
    iVar17 = 0;
    plVar1 = param_2 + 1;
    do {
      local_68 = (long *)0x0;
      local_80 = &DAT_fbec41851566601b;
      local_78 = "values";
      local_70 = 6;
      FUN_00e90ee0(&local_b0,&local_98,&local_80,iVar17);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_68 = (long *)0x0;
      local_80 = &DAT_c721ad9799dfe67d;
      local_78 = "Label";
      local_70 = 5;
      piVar6 = (int *)FUN_00d27b5c(&local_b0,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_a8 == (int *)0x0) {
        uVar16 = 0;
LAB_01557404:
        uVar19 = 0;
      }
      else {
        if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
           (uVar12 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar12 == 0)) {
LAB_0155740c:
          uVar16 = 0;
        }
        else {
          puVar7 = (uint *)((long)local_a8 + uVar12);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
          local_80 = "face";
          puVar7 = bsearch(&local_80,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
          if ((puVar7 == (uint *)0x0) || (local_b0 == (int *)0x0)) goto LAB_0155740c;
          piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
          uVar3 = *puVar13;
          if (uVar3 < 7) {
            piVar15 = (int *)0x0;
          }
          else {
            piVar15 = (int *)0x0;
            if ((ulong)puVar13[3] != 0) {
              puVar7 = (uint *)((long)piVar2 + (ulong)puVar13[3]);
              piVar15 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
             (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = (long)*(char *)((long)piVar15 + uVar12) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar12 * 8) == 4) {
            if (uVar3 < 0xb) {
              uVar14 = 0;
LAB_01557468:
              uVar16 = 0;
            }
            else {
              uVar14 = 0;
              if ((ulong)puVar13[5] != 0) {
                uVar14 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar13[5]);
              }
              if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_01557468;
              uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
            }
            if ((uVar14 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
               (uVar12 = (ulong)*(ushort *)(((long)local_b0 - (long)*local_b0) + (ulong)uVar14),
               uVar12 != 0)) {
              uVar16 = *(undefined4 *)((long)local_b0 + uVar12);
            }
          }
          else {
            if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_0155740c;
            uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
          }
        }
        if (((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7)) ||
           (uVar12 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar12 == 0))
        goto LAB_01557404;
        puVar7 = (uint *)((long)local_a8 + uVar12);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        local_80 = "mouth";
        puVar7 = bsearch(&local_80,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar7 == (uint *)0x0) || (local_b0 == (int *)0x0)) goto LAB_01557404;
        piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
        puVar13 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar3 = *puVar13;
        if (uVar3 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar13[3] != 0) {
            puVar7 = (uint *)((long)piVar2 + (ulong)puVar13[3]);
            piVar15 = (int *)((long)puVar7 + (ulong)*puVar7);
          }
        }
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 == 0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = (long)*(char *)((long)piVar15 + uVar12) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar12 * 8) == 4) {
          if (uVar3 < 0xb) {
            uVar14 = 0;
LAB_01557474:
            uVar19 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)puVar13[5] != 0) {
              uVar14 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar13[5]);
            }
            if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_01557474;
            uVar19 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
          }
          if ((uVar14 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
             (uVar12 = (ulong)*(ushort *)(((long)local_b0 - (long)*local_b0) + (ulong)uVar14),
             uVar12 != 0)) {
            uVar19 = *(undefined4 *)((long)local_b0 + uVar12);
          }
        }
        else {
          if ((uVar3 < 0xd) || ((ulong)puVar13[6] == 0)) goto LAB_01557404;
          uVar19 = *(undefined4 *)((long)piVar2 + (ulong)puVar13[6]);
        }
      }
      local_68 = (long *)0x0;
      local_80 = (char *)0xc4797013e7942f48;
      local_78 = "EnableLookAt";
      local_70 = 0xc;
      bVar4 = FUN_00cf7518(&local_b0,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (((piVar6 == (int *)0x0) || (*(ushort *)((long)piVar6 - (long)*piVar6) < 7)) ||
         (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar12 == 0)) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)((long)piVar6 + uVar12);
      }
      plVar20 = plVar1;
      if ((long *)*plVar1 != (long *)0x0) {
        plVar21 = (long *)*plVar1;
        do {
          if (iVar18 < *(int *)((long)plVar21 + 0x1c)) {
            plVar11 = (long *)*plVar21;
            plVar20 = plVar21;
            if (plVar11 == (long *)0x0) {
              goto LAB_0155730c;
            }
          }
          else {
            if (iVar18 <= *(int *)((long)plVar21 + 0x1c)) goto LAB_0155730c;
            plVar20 = plVar21 + 1;
            plVar11 = (long *)*plVar20;
            if (plVar11 == (long *)0x0) goto LAB_0155730c;
          }
          plVar21 = plVar11;
        } while( true );
      }
      plVar21 = plVar1;
LAB_0155730c:
      puVar22 = (undefined8 *)*plVar20;
      if (puVar22 == (undefined8 *)0x0) {
        puVar22 = (undefined8 *)(**(code **)(*(long *)param_2[2] + 0x10))((long *)param_2[2],0x30,4)
        ;
        if (puVar22 == (undefined8 *)0x0) {
          (**(code **)(*(long *)param_2[2] + 0xe8))();
        }
        lVar10 = param_2[2];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar22[4] = 0x100000001;
        *(int *)((long)puVar22 + 0x1c) = iVar18;
        *(undefined1 *)(puVar22 + 5) = 1;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = plVar21;
        *plVar20 = (long)puVar22;
        puVar9 = puVar22;
        if (*(long *)*param_2 != 0) {
          *param_2 = *(long *)*param_2;
          puVar9 = (undefined8 *)*plVar20;
        }
        FUN_010108e0(param_2[1],puVar9);
        param_2[6] = param_2[6] + 1;
      }
      *(undefined4 *)(puVar22 + 4) = uVar16;
      *(undefined4 *)((long)puVar22 + 0x24) = uVar19;
      iVar17 = iVar17 + 1;
      *(byte *)(puVar22 + 5) = bVar4 & 1;
    } while (iVar17 != local_bc);
  }
  return;
}


