/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03040120; name: FUN_03040120
 */


long FUN_03040120(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  void *__dest;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  char *__s;
  ulong uVar14;
  long lVar15;
  
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar14 = *(ulong *)(param_1 + 0x20);
  __s = (char *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffe);
  if ((char *)(uVar14 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar8 = 0;
    }
    else {
      sVar5 = strlen(__s);
      sVar5 = (size_t)((int)sVar5 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar5);
      memcpy(__dest,__s,sVar5);
      uVar8 = (ulong)__dest | 1;
    }
    *(ulong *)(param_1 + 0x20) = uVar8;
    if ((uVar14 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
    }
  }
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x38);
    lVar15 = *(long *)(param_2 + 0x30);
    plVar13 = (long *)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < (int)uVar2) {
      FUN_0304038c(plVar13,PTR_PTR_047d1a50,(long)(int)uVar2);
    }
    uVar7 = *(uint *)(param_1 + 0x38);
    if ((int)uVar2 < (int)uVar7) {
      lVar11 = *plVar13;
      plVar9 = (long *)(lVar11 + (long)(int)uVar7 * 8);
      do {
        plVar9 = plVar9 + -1;
        plVar6 = (long *)*plVar9;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar1 = plVar6 + 2;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
      } while (plVar9 != (long *)(lVar11 + (long)(int)uVar2 * 8));
      uVar7 = *(uint *)(param_1 + 0x38);
    }
    lVar11 = *plVar13;
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    if ((lVar11 != lVar15) && (0 < (int)uVar7)) {
      uVar14 = 0;
      do {
        plVar6 = *(long **)(lVar11 + uVar14 * 8);
        plVar9 = *(long **)(lVar15 + uVar14 * 8);
        if (plVar6 != plVar9) {
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar9 = plVar9 + 2;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = *plVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar6 = *(long **)(lVar11 + uVar14 * 8);
            plVar9 = *(long **)(lVar15 + uVar14 * 8);
          }
          *(long **)(lVar11 + uVar14 * 8) = plVar9;
          if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
            plVar9 = plVar6 + 2;
            do {
              lVar12 = *plVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar7);
      lVar11 = *plVar13;
    }
    if (0 < (int)(uVar2 - uVar7)) {
      iVar10 = 0;
      plVar13 = (long *)(lVar15 + (long)(int)uVar7 * 8);
      plVar9 = (long *)(lVar11 + (long)(int)uVar7 * 8);
      do {
        lVar15 = *plVar13;
        *plVar9 = lVar15;
        if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
          plVar6 = (long *)(lVar15 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        iVar10 = iVar10 + 1;
        plVar13 = plVar13 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar10 != uVar2 - uVar7);
    }
    *(uint *)(param_1 + 0x38) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}


