/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319f848; name: FUN_0319f848
 */


long FUN_0319f848(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  size_t sVar8;
  void *__dest;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *__s;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  __s = (char *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
  uVar14 = *(ulong *)(param_1 + 0x18);
  if ((char *)(uVar14 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar10 = 0;
    }
    else {
      sVar8 = strlen(__s);
      sVar8 = (size_t)((int)sVar8 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
      memcpy(__dest,__s,sVar8);
      uVar10 = (ulong)__dest | 1;
    }
    *(ulong *)(param_1 + 0x18) = uVar10;
    if ((uVar14 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
    }
  }
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar15;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((int)uVar4 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    memset((void *)(*(long *)(param_1 + 0x20) + (long)(int)uVar4 * 8),0,(long)(int)uVar4 * -8);
  }
  else if (uVar4 != 0) {
    plVar12 = *(long **)(param_1 + 0x20);
    plVar13 = plVar12 + uVar4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    do {
      plVar13 = plVar13 + -1;
      plVar9 = (long *)*plVar13;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar11 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    } while (plVar13 != plVar12);
  }
  iVar5 = *(int *)(param_2 + 0x28);
  plVar13 = *(long **)(param_2 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = iVar3 + iVar5;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar2) {
    FUN_0319fa18((long *)(param_1 + 0x20),(long)iVar2);
  }
  if (iVar5 != 0) {
    plVar12 = plVar13 + iVar5;
    plVar9 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8);
    do {
      lVar11 = *plVar13;
      *plVar9 = lVar11;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
        plVar1 = (long *)(lVar11 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar13 = plVar13 + 1;
      plVar9 = plVar9 + 1;
    } while (plVar13 != plVar12);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return param_1;
}


