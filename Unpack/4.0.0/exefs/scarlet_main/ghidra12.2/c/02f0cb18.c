/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0cb18; name: FUN_02f0cb18
 */


ulong FUN_02f0cb18(long param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  char *__s;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  size_t sVar8;
  void *__dest;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  short *psVar16;
  uint *puVar17;
  short *psVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 local_68;
  
  uVar23 = *(uint *)((long)param_2 + 0x2c);
  lVar11 = (long)(int)uVar23;
  if (uVar23 == 0x7fffffff) {
    uVar23 = *(uint *)(param_1 + 0x24) & 0xffffff;
    if (uVar23 != 0xffffff) {
      puVar17 = (uint *)(param_1 + 0x24);
      uVar19 = *(uint *)(param_1 + 0x24);
      do {
        uVar24 = (ulong)uVar23;
        uVar20 = *puVar17;
        if (uVar20 == uVar19) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
          if (bVar5) {
            *puVar17 = uVar19 + 0x1000000 & 0xff000000 |
                       *(uint *)(*(long *)(param_1 + 8) + uVar24 * 0x68 + 0x34) & 0xffffff;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02f0cbb0;
          piVar1 = (int *)(param_1 + 0x28);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar19 = *(uint *)(param_1 + 0x2c);
          if (uVar19 + 1 <= uVar23) {
            puVar17 = (uint *)(param_1 + 0x2c);
            uVar20 = uVar19;
            if (uVar19 + 1 <= uVar23 + 1) {
              uVar20 = uVar23;
            }
            do {
              if (*puVar17 != uVar19) {
                do {
                  ClearExclusiveLocal();
                  uVar20 = *puVar17;
                  uVar19 = uVar20;
                  if (uVar20 + 1 <= uVar23 + 1) {
                    uVar19 = uVar23;
                  }
                  while (*puVar17 == uVar20) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
                    if (bVar5) {
                      *puVar17 = uVar19;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_02f0cd30;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
              if (bVar5) {
                *puVar17 = uVar20;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
LAB_02f0cd30:
          lVar11 = *(long *)(param_1 + 8) + uVar24 * 0x68;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined8 *)(lVar11 + 0x56) = 0;
          *(undefined8 *)(lVar11 + 0x5e) = 0;
          *(undefined2 *)(lVar11 + 0x66) = 0;
          goto LAB_02f0cd4c;
        }
        ClearExclusiveLocal();
LAB_02f0cbb0:
        uVar23 = uVar20 & 0xffffff;
        uVar19 = uVar20;
      } while (uVar23 != 0xffffff);
    }
    return 0x7fffffff;
  }
  if (*(int *)(param_1 + 0x10) <= (int)uVar23) {
    return 0x7fffffff;
  }
  lVar22 = *(long *)(param_1 + 8);
  if (*(int *)(lVar22 + lVar11 * 0x68 + 0x30) != 0x7fffffff) {
    return 0x7fffffff;
  }
  uVar19 = *(uint *)(param_1 + 0x24) & 0xffffff;
  if (uVar19 == uVar23) {
    uVar19 = *(uint *)(lVar22 + lVar11 * 0x68 + 0x34);
  }
  else {
    do {
      uVar20 = uVar19;
      puVar17 = (uint *)(lVar22 + (long)(int)uVar20 * 0x68 + 0x34);
      uVar19 = *puVar17;
    } while (uVar19 != uVar23 && uVar19 != 0xffffffff);
    if (uVar19 == 0xffffffff) {
      return 0x7fffffff;
    }
    uVar19 = *(uint *)(lVar22 + (long)(int)uVar19 * 0x68 + 0x34);
    if (uVar20 != 0xffffffff) {
      *puVar17 = uVar19;
      goto LAB_02f0cc64;
    }
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) + 0x1000000 & 0xff000000 | uVar19 & 0xffffff
  ;
LAB_02f0cc64:
  uVar19 = *(uint *)(param_1 + 0x2c);
  if ((int)(*(uint *)(param_1 + 0x2c) + 1) <= (int)uVar23) {
    uVar19 = uVar23;
  }
  *(uint *)(param_1 + 0x2c) = uVar19;
  piVar1 = (int *)(param_1 + 0x28);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar11 = *(long *)(param_1 + 8) + lVar11 * 0x68;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x56) = 0;
  *(undefined8 *)(lVar11 + 0x5e) = 0;
  *(undefined2 *)(lVar11 + 0x66) = 0;
  uVar24 = (ulong)*(uint *)((long)param_2 + 0x2c);
LAB_02f0cd4c:
  lVar11 = *(long *)(param_1 + 8);
  uVar23 = (uint)uVar24;
  lVar22 = lVar11 + (long)(int)uVar23 * 0x68;
  lVar25 = (long)(int)uVar23;
  FUN_02f0db30(lVar22,param_2[1],param_4,param_2[2],param_5,*param_2,uVar24,
               *(undefined2 *)(param_2 + 3));
  *(undefined4 *)(lVar22 + 0x44) = *(undefined4 *)(param_2 + 5);
  puVar6 = PTR_DAT_047d1a08;
  local_68 = 0x20;
  puVar7 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
    (**(code **)(puVar6 + 0x10))(puVar7,"hkReferencedObject");
  }
  uVar12 = param_2[4];
  *puVar7 = &PTR_LAB_0460eaa0;
  puVar7[1] = 0xffffffff;
  __s = (char *)(uVar12 & 0xfffffffffffffffe);
  puVar7[2] = 1;
  puVar7[3] = 0;
  if (__s != (char *)0x0) {
    sVar8 = strlen(__s);
    sVar8 = (size_t)((int)sVar8 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
    memcpy(__dest,__s,sVar8);
    puVar7[3] = (ulong)__dest | 1;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x68) + lVar25 * 8);
  *(undefined8 **)(*(long *)(param_1 + 0x68) + lVar25 * 8) = puVar7;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar22 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar22 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  uVar19 = *(uint *)(param_1 + 0x8c);
  uVar12 = (ulong)uVar19;
  if (-1 < (int)uVar19) {
    psVar18 = *(short **)(param_1 + 0x80);
    uVar15 = 0xffffffffffffffff;
    psVar16 = psVar18;
    do {
      if (*psVar16 != -1) {
        uVar20 = (uint)uVar15;
        break;
      }
      uVar15 = uVar15 + 1;
      psVar16 = psVar16 + 8;
      uVar20 = uVar19;
    } while (uVar12 != uVar15);
    iVar14 = uVar20 + 1;
    if (iVar14 <= (int)uVar19) {
      lVar22 = (long)(uVar24 << 0x20) >> 0x25;
      do {
        if (uVar23 < *(uint *)(*(long *)(psVar18 + (long)iVar14 * 8 + 4) + 0x18)) {
          lVar13 = *(long *)(*(long *)(psVar18 + (long)iVar14 * 8 + 4) + 8);
          *(uint *)(lVar13 + lVar22 * 4) =
               *(uint *)(lVar13 + lVar22 * 4) & ~(1 << (ulong)(uVar23 & 0x1f));
          uVar12 = (ulong)*(uint *)(param_1 + 0x8c);
        }
        iVar10 = (int)uVar12;
        iVar3 = iVar10;
        if (iVar10 <= iVar14) {
          iVar3 = iVar14;
        }
        lVar13 = (long)iVar3 - (long)iVar14;
        lVar21 = (long)iVar14 * 0x10;
        do {
          lVar21 = lVar21 + 0x10;
          if (lVar13 == 0) {
            iVar14 = iVar3 + 1;
            break;
          }
          lVar13 = lVar13 + -1;
          iVar14 = iVar14 + 1;
        } while (*(short *)(*(long *)(param_1 + 0x80) + lVar21) == -1);
        if (iVar10 < iVar14) break;
        psVar18 = *(short **)(param_1 + 0x80);
      } while( true );
    }
  }
  lVar22 = *(long *)(param_1 + 8);
  if ((~*(uint *)(lVar22 + uVar24 * 0x68 + 8) & 0xffffff) != 0) {
    FUN_02f0d7b8(param_1 + 0x90,uVar24,lVar22,*(undefined8 *)(lVar22 + uVar24 * 0x68));
  }
  if ((~*(uint *)(lVar22 + uVar24 * 0x68 + 0x18) & 0xffffff) != 0) {
    FUN_02f0d7b8(param_1 + 0x90,uVar24,lVar22,*(undefined8 *)(lVar22 + uVar24 * 0x68 + 0x10));
  }
  lVar11 = lVar11 + lVar25 * 0x68;
  uVar12 = uVar24 | 0x8000000000000000;
  if (param_3 != 0xffffffffffffffff) {
    uVar12 = param_3;
  }
  *(ulong *)(lVar11 + 0x28) = uVar12;
  *(uint *)(lVar11 + 0x30) = uVar23;
  return uVar24;
}


