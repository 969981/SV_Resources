/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c18ecc; name: FUN_02c18ecc
 */


void FUN_02c18ecc(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long *plStack_1e8;
  undefined1 auStack_1e0 [8];
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1c8;
  long *plStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 local_1b0;
  undefined1 local_158;
  undefined8 local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [104];
  undefined1 local_68;
  undefined8 local_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  byte *local_48;
  long *local_28;
  
  lVar13 = *param_1;
  if ((((*(long *)(lVar13 + 0x78) == 0) ||
       (lVar12 = *(long *)(*(long *)(lVar13 + 0x78) + 0x10), lVar12 == 0)) ||
      (*(char *)(lVar12 + 0xd8) == '\0')) ||
     ((((uint)(*(int *)(lVar12 + 0xe8) - *(int *)(lVar12 + 0xe0)) >> 3) * -0xf0f & 0xffff) == 0)) {
LAB_02c18f4c:
    local_200 = (undefined8 *)((ulong)local_200 & 0xffffffff00000000);
    local_110 = (undefined8 *)0xf6205eb8b51b44c1;
    pcStack_108 = "JoinSessionRejected";
    local_100 = 0x13;
    local_f8 = (long *)0x0;
    FUN_027d34f4(&local_28,&local_110,&local_200);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  else {
    FUN_027c9134(auStack_50,lVar13,0);
    if (local_48 == (byte *)0x0) goto LAB_02c18f4c;
    if ((*local_48 & 1) == 0) {
      pbVar14 = local_48 + 1;
    }
    else {
      pbVar14 = *(byte **)(local_48 + 0x10);
    }
    memset(&local_200,0,0x68);
    FUN_027c1cd0(&local_200);
    FUN_027c6838(&local_110,pbVar14,&local_200);
    FUN_027c2bd0(auStack_1b8,local_1b0);
    if ((local_1d8 & 1) != 0) {
      (**(code **)(*plStack_1c0 + 0x18))
                (plStack_1c0,local_1c8,CONCAT71(uStack_1d7,local_1d8) & 0xfffffffffffffffe,1);
    }
    FUN_01cfa410(auStack_1e0);
    if (((ulong)local_200 & 1) != 0) {
      (**(code **)(*plStack_1e8 + 0x18))
                (plStack_1e8,local_1f0,(ulong)local_200 & 0xfffffffffffffffe,1);
    }
    if (DAT_0485e9d8 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_027c2014();
    }
    FUN_027c6880(&local_110,uVar11);
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0xe1a3d887bca4131b;
    pcStack_128 = "JoinSession";
    local_120 = 0xb;
    uStack_118 = 0;
    FUN_027c2138(&local_140,lVar13 + 0x78);
    FUN_01cfa5b0(&local_200,&local_110);
    FUN_01cfa5b0(auStack_1e0,auStack_f0);
    FUN_027c2388(&plStack_1c0,auStack_d0);
    local_158 = local_68;
    local_150 = local_60;
    lStack_148 = lStack_58;
    if (lStack_58 != 0) {
      plVar2 = (long *)(lStack_58 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_027d3144(&local_28,&local_130,&local_140,&local_200);
    FUN_027c70c0(&local_200);
    FUN_027bfe38(&local_140);
    FUN_027c70c0(&local_110);
  }
  FUN_0177dc44(&local_110,param_1[2]);
  puVar8 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    lVar13 = local_110[2];
    plVar2 = (long *)0x0;
    if (lVar13 != 0) {
      plVar2 = (long *)(lVar13 + -0x28);
    }
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_200 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_200);
      }
    }
    else if (sVar5 == 0) goto LAB_02c19474;
    plVar9 = local_28;
    if (lVar13 != 0) {
      local_110 = (undefined8 *)0x0;
      pcStack_108 = (char *)0x0;
      FUN_00c43ef0(&local_110,local_28 + 6);
      local_200 = (undefined8 *)0x0;
      uStack_1f8 = 0;
      plVar4 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 5;
      }
      if ((long *)local_110[2] == plVar4) {
        FUN_015d2a6c(&local_200,&local_110);
      }
      puVar8 = local_110;
      if (local_110 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_110 + 3);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_110 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_130 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_130);
          }
        }
        else if (sVar5 == 0) goto LAB_02c19474;
      }
      local_110 = (undefined8 *)0x0;
      pcStack_108 = (char *)0x0;
      FUN_0177de7c(&local_110,&local_200);
      (**(code **)(*plVar2 + 0x90))(plVar2,&local_110);
      puVar8 = local_110;
      if (local_110 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_110 + 3);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_110 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_130 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_130);
          }
        }
        else if (sVar5 == 0) goto LAB_02c19474;
      }
      puVar8 = local_200;
      if (local_200 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_200 + 3);
        do {
          sVar5 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_200 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_130 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_130);
          }
        }
        else if (sVar5 == 0) goto LAB_02c19474;
      }
    }
  }
  plVar2 = local_28;
  FUN_0191d764(local_28 + 0x1e,param_1 + 1);
  if ((int)plVar2[9] - 1U < 3) {
    FUN_0174a3b8(plVar2);
  }
  if (local_28 != (long *)0x0) {
    lVar13 = local_28[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02c19474:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


