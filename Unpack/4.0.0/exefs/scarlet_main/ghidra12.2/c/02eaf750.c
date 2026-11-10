/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eaf750; name: FUN_02eaf750
 */


/* WARNING: Removing unreachable block (ram,0x02eafa44) */
/* WARNING: Removing unreachable block (ram,0x02eafa4c) */
/* WARNING: Removing unreachable block (ram,0x02eafa50) */
/* WARNING: Removing unreachable block (ram,0x02eafa58) */
/* WARNING: Removing unreachable block (ram,0x02eafa60) */
/* WARNING: Removing unreachable block (ram,0x02eafa64) */

void FUN_02eaf750(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  void *__src;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  void *__dest;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long local_48;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar2 = param_1 + 4;
  *param_1 = (long)(PTR_DAT_047e3478 + 0x10);
  param_1[1] = 0xffffffff;
  lVar10 = param_2 - (long)plVar2;
  param_1[4] = lVar10;
  lVar11 = 0;
  if (lVar10 != 0) {
    lVar11 = param_2;
  }
  plVar16 = param_1 + 5;
  *plVar16 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(long *)(lVar11 + 8) != 0) {
    plVar3 = (long *)(lVar11 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *plVar2;
  }
  lVar11 = 0;
  if (lVar10 != 0) {
    lVar11 = lVar10 + (long)plVar2;
  }
  plVar3 = (long *)(lVar11 + 0x48);
  uVar9 = *(uint *)(lVar11 + 0x50);
  uVar15 = 0;
  do {
    uVar14 = uVar15;
    if ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) == uVar14) goto LAB_02eaf85c;
    uVar15 = uVar14 + 1;
  } while ((*(byte *)((long)plVar3 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar3 + 0x1e) & 1) != 0);
  if (uVar14 + 1 == 0) {
LAB_02eaf85c:
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    do {
      if (uVar15 <= (uVar14 & 0xffff)) {
        uVar15 = uVar14 & 0xffff;
      }
      uVar8 = uVar14 + 1;
      do {
        uVar14 = uVar8;
        if ((int)uVar9 <= (int)uVar14) goto LAB_02eaf860;
        uVar8 = uVar14 + 1;
      } while ((*(byte *)((long)plVar3 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar3 + 0x1e) & 1) != 0
              );
    } while (uVar14 + 1 != 0);
  }
LAB_02eaf860:
  iVar1 = uVar15 + 1;
  FUN_02eb11b0(param_1 + 7,0,iVar1,1);
  uVar9 = *(uint *)(param_1 + 6);
  uVar14 = iVar1 - uVar9;
  if (uVar14 != 0) {
    uVar8 = *(uint *)((long)param_1 + 0x34);
    if (*(uint *)((long)param_1 + 0x34) == 0) {
      *(uint *)((long)param_1 + 0x34) = uVar9;
      uVar8 = uVar9;
    }
    puVar7 = PTR_DAT_047d1a08;
    if ((int)uVar15 < (int)uVar9) {
      *(int *)(param_1 + 6) = iVar1;
    }
    else {
      uVar4 = uVar8 & 0x7fffffff;
      if ((int)(uVar8 & 0x7fffffff) <= (int)uVar9) {
        uVar4 = uVar9;
      }
      if ((int)uVar15 < (int)uVar4) {
        lVar11 = *plVar16;
      }
      else {
        uVar8 = uVar15 | (int)uVar15 >> 8;
        uVar8 = uVar8 | (int)uVar8 >> 4;
        uVar8 = uVar8 | (int)uVar8 >> 2;
        uVar8 = uVar8 | (int)uVar8 >> 1;
        if (uVar8 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow");
        }
        uVar8 = uVar8 + 1;
        local_48 = (ulong)uVar8 << 3;
        __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
        __src = (void *)0x0;
        if (param_1[5] != 0) {
          __src = (void *)(param_1[5] + (long)plVar16);
        }
        memcpy(__dest,__src,(long)(int)param_1[6] << 3);
        if (*(int *)((long)param_1 + 0x34) < 0) {
          lVar11 = 0;
          if (*plVar16 != 0) {
            lVar11 = *plVar16 + (long)plVar16;
          }
          (**(code **)(puVar7 + 8))(0,lVar11,0);
        }
        lVar11 = 0;
        if (__dest != (void *)0x0) {
          lVar11 = (long)__dest - (long)plVar16;
        }
        *(uint *)((long)param_1 + 0x34) = uVar8 | 0x80000000;
        param_1[5] = lVar11;
      }
      *(int *)(param_1 + 6) = iVar1;
      if (0 < (int)uVar14) {
        memset((void *)((long)plVar16 + (long)(int)uVar9 * 8 + lVar11),0,(ulong)uVar14 << 3);
      }
    }
  }
  puVar7 = PTR_DAT_047d19f0;
  lVar10 = *plVar2;
  lVar11 = 0;
  if (lVar10 != 0) {
    lVar11 = lVar10 + (long)plVar2;
  }
  uVar9 = *(uint *)(lVar11 + 0x50);
  plVar3 = (long *)(lVar11 + 0x48);
  uVar15 = 0;
  do {
    uVar14 = uVar15;
    if ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) == uVar14) {
      return;
    }
    uVar15 = uVar14 + 1;
  } while ((*(byte *)((long)plVar3 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar3 + 0x1e) & 1) != 0);
  if (uVar14 + 1 != 0) {
    while( true ) {
      lVar13 = 0;
      if (lVar10 != 0) {
        lVar13 = lVar10 + (long)plVar2;
      }
      plVar12 = (long *)(lVar13 + 0x48 +
                        (ulong)(uVar14 & 0xffff) * 0x40 + *(long *)(lVar13 + 0x48) + 0x30);
      lVar13 = *plVar12;
      lVar10 = 0;
      if (lVar13 != 0) {
        lVar10 = lVar13 + (long)plVar12;
      }
      if (*(char *)(lVar10 + 0x19) == '\x03') {
        (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar10 + 0x18) * 0x200 + 200))(&local_48);
        *(long *)((long)plVar16 + (ulong)(uVar14 & 0xffff) * 8 + *plVar16) = local_48;
        local_48 = 0;
        uVar9 = *(uint *)(lVar11 + 0x50);
      }
      uVar15 = uVar14 + 1;
      do {
        uVar14 = uVar15;
        if ((int)uVar9 <= (int)uVar14) {
          return;
        }
        uVar15 = uVar14 + 1;
      } while ((*(byte *)((long)plVar3 + (ulong)(uVar14 & 0xffff) * 0x40 + *plVar3 + 0x1e) & 1) != 0
              );
      if (uVar14 + 1 == 0) break;
      lVar10 = *plVar2;
    }
  }
  return;
}


