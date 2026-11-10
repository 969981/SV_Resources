/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb03e8; name: FUN_02eb03e8
 */


/* WARNING: Removing unreachable block (ram,0x02eb0814) */
/* WARNING: Removing unreachable block (ram,0x02eb081c) */
/* WARNING: Removing unreachable block (ram,0x02eb0820) */
/* WARNING: Removing unreachable block (ram,0x02eb0828) */
/* WARNING: Removing unreachable block (ram,0x02eb0830) */
/* WARNING: Removing unreachable block (ram,0x02eb0834) */

void FUN_02eb03e8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  ulong local_68;
  
  puVar8 = PTR_DAT_047e3480;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  plVar2 = param_1 + 4;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0xffffffff;
  lVar12 = param_2 - (long)plVar2;
  param_1[4] = lVar12;
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = param_2;
  }
  plVar17 = param_1 + 5;
  *plVar17 = 0;
  plVar18 = param_1 + 7;
  *plVar18 = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  if (*(long *)(lVar13 + 8) == 0) {
    uVar19 = 0;
  }
  else {
    plVar15 = (long *)(lVar13 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = *plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar12 = param_1[4];
    uVar19 = *(uint *)(param_1 + 8);
  }
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + (long)plVar2;
  }
  iVar1 = *(int *)(lVar13 + 0xd0) + 0x1f;
  iVar3 = *(int *)(lVar13 + 0xd0) + 0x3e;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  uVar11 = iVar3 >> 5;
  if (uVar11 != uVar19) {
    uVar10 = *(uint *)((long)param_1 + 0x44);
    if (*(uint *)((long)param_1 + 0x44) == 0) {
      *(uint *)((long)param_1 + 0x44) = uVar19;
      uVar10 = uVar19;
    }
    puVar8 = PTR_DAT_047d1a08;
    uVar14 = uVar11 - uVar19;
    if (uVar14 == 0 || (int)uVar11 < (int)uVar19) {
      *(uint *)(param_1 + 8) = uVar11;
    }
    else {
      uVar4 = uVar10 & 0x7fffffff;
      if ((int)(uVar10 & 0x7fffffff) <= (int)uVar19) {
        uVar4 = uVar19;
      }
      if ((int)uVar4 < (int)uVar11) {
        uVar10 = uVar11 - 1 | (int)(uVar11 - 1) >> 0x10;
        uVar10 = uVar10 | (int)uVar10 >> 8;
        uVar10 = uVar10 | (int)uVar10 >> 4;
        uVar10 = uVar10 | (int)uVar10 >> 2;
        uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
        if ((int)uVar10 < (int)uVar11) goto LAB_02eb089c;
        local_68 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2;
        pvVar9 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        pvVar5 = (void *)0x0;
        if (param_1[7] != 0) {
          pvVar5 = (void *)(param_1[7] + (long)plVar18);
        }
        memcpy(pvVar9,pvVar5,(long)(int)param_1[8] << 2);
        if (*(int *)((long)param_1 + 0x44) < 0) {
          lVar13 = 0;
          if (*plVar18 != 0) {
            lVar13 = *plVar18 + (long)plVar18;
          }
          (**(code **)(puVar8 + 8))(0,lVar13,0);
        }
        lVar13 = 0;
        if (pvVar9 != (void *)0x0) {
          lVar13 = (long)pvVar9 - (long)plVar18;
        }
        *(uint *)((long)param_1 + 0x44) = uVar10 | 0x80000000;
        param_1[7] = lVar13;
      }
      else {
        lVar13 = *plVar18;
      }
      *(uint *)(param_1 + 8) = uVar11;
      if (0 < (int)uVar14) {
        memset((void *)((long)plVar18 + (long)(int)uVar19 * 4 + lVar13),0xff,(ulong)uVar14 << 2);
      }
    }
  }
  lVar13 = 0;
  if (*plVar2 != 0) {
    lVar13 = *plVar2 + (long)plVar2;
  }
  plVar18 = (long *)(lVar13 + 0x48);
  uVar19 = *(uint *)(lVar13 + 0x50);
  uVar11 = 0;
  do {
    uVar10 = uVar11;
    if ((uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) == uVar10) goto LAB_02eb063c;
    uVar11 = uVar10 + 1;
  } while ((*(byte *)((long)plVar18 + (ulong)(uVar10 & 0xffff) * 0x40 + *plVar18 + 0x1e) & 1) != 0);
  if (uVar10 + 1 == 0) {
LAB_02eb063c:
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      if (uVar11 <= (uVar10 & 0xffff)) {
        uVar11 = uVar10 & 0xffff;
      }
      uVar14 = uVar10 + 1;
      do {
        uVar10 = uVar14;
        if ((int)uVar19 <= (int)uVar10) goto LAB_02eb0640;
        uVar14 = uVar10 + 1;
      } while ((*(byte *)((long)plVar18 + (ulong)(uVar10 & 0xffff) * 0x40 + *plVar18 + 0x1e) & 1) !=
               0);
    } while (uVar10 + 1 != 0);
  }
LAB_02eb0640:
  uVar19 = *(uint *)(param_1 + 6);
  iVar1 = uVar11 + 1;
  uVar10 = iVar1 - uVar19;
  if (uVar10 != 0) {
    uVar14 = *(uint *)((long)param_1 + 0x34);
    if (*(uint *)((long)param_1 + 0x34) == 0) {
      *(uint *)((long)param_1 + 0x34) = uVar19;
      uVar14 = uVar19;
    }
    puVar8 = PTR_DAT_047d1a08;
    if ((int)uVar11 < (int)uVar19) {
      *(int *)(param_1 + 6) = iVar1;
    }
    else {
      uVar4 = uVar14 & 0x7fffffff;
      if ((int)(uVar14 & 0x7fffffff) <= (int)uVar19) {
        uVar4 = uVar19;
      }
      if ((int)uVar11 < (int)uVar4) {
        lVar13 = *plVar17;
      }
      else {
        uVar14 = uVar11 | (int)uVar11 >> 8;
        uVar14 = uVar14 | (int)uVar14 >> 4;
        uVar14 = uVar14 | (int)uVar14 >> 2;
        uVar14 = uVar14 | (int)uVar14 >> 1;
        if (uVar14 < uVar11) {
LAB_02eb089c:
                    /* WARNING: Subroutine does not return */
          FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow");
        }
        uVar14 = uVar14 + 1;
        local_68 = (ulong)uVar14 << 3;
        pvVar9 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        pvVar5 = (void *)0x0;
        if (param_1[5] != 0) {
          pvVar5 = (void *)(param_1[5] + (long)plVar17);
        }
        memcpy(pvVar9,pvVar5,(long)(int)param_1[6] << 3);
        if (*(int *)((long)param_1 + 0x34) < 0) {
          lVar13 = 0;
          if (*plVar17 != 0) {
            lVar13 = *plVar17 + (long)plVar17;
          }
          (**(code **)(puVar8 + 8))(0,lVar13,0);
        }
        lVar13 = 0;
        if (pvVar9 != (void *)0x0) {
          lVar13 = (long)pvVar9 - (long)plVar17;
        }
        *(uint *)((long)param_1 + 0x34) = uVar14 | 0x80000000;
        param_1[5] = lVar13;
      }
      *(int *)(param_1 + 6) = iVar1;
      if (0 < (int)uVar10) {
        memset((void *)((long)plVar17 + (long)(int)uVar19 * 8 + lVar13),0,(ulong)uVar10 << 3);
      }
    }
  }
  puVar8 = PTR_DAT_047d19f0;
  lVar12 = *plVar2;
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + (long)plVar2;
  }
  uVar19 = *(uint *)(lVar13 + 0x50);
  plVar18 = (long *)(lVar13 + 0x48);
  uVar11 = 0;
  do {
    uVar10 = uVar11;
    if ((uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) == uVar10) {
      return;
    }
    uVar11 = uVar10 + 1;
  } while ((*(byte *)((long)plVar18 + (ulong)(uVar10 & 0xffff) * 0x40 + *plVar18 + 0x1e) & 1) != 0);
  if (uVar10 + 1 != 0) {
    while( true ) {
      lVar16 = 0;
      if (lVar12 != 0) {
        lVar16 = lVar12 + (long)plVar2;
      }
      plVar15 = (long *)(lVar16 + 0x48 +
                        (ulong)(uVar10 & 0xffff) * 0x40 + *(long *)(lVar16 + 0x48) + 0x30);
      lVar16 = *plVar15;
      lVar12 = 0;
      if (lVar16 != 0) {
        lVar12 = lVar16 + (long)plVar15;
      }
      if (*(char *)(lVar12 + 0x19) == '\x03') {
        (**(code **)(*(long *)puVar8 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 200))(&local_68);
        *(ulong *)((long)plVar17 + (ulong)(uVar10 & 0xffff) * 8 + *plVar17) = local_68;
        local_68 = 0;
        uVar19 = *(uint *)(lVar13 + 0x50);
      }
      uVar11 = uVar10 + 1;
      do {
        uVar10 = uVar11;
        if ((int)uVar19 <= (int)uVar10) {
          return;
        }
        uVar11 = uVar10 + 1;
      } while ((*(byte *)((long)plVar18 + (ulong)(uVar10 & 0xffff) * 0x40 + *plVar18 + 0x1e) & 1) !=
               0);
      if (uVar10 + 1 == 0) break;
      lVar12 = *plVar2;
    }
  }
  return;
}


