/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ef5e8; name: FUN_031ef5e8
 */


void FUN_031ef5e8(long *param_1,undefined8 param_2,ulong *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  void *__s;
  long *plVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  bool bVar10;
  
  puVar6 = param_3;
  while( true ) {
    uVar7 = (uint)*puVar6;
    if ((uVar7 >> 0x14 & 1) != 0) break;
    if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
    goto LAB_031ef648;
  }
  if (puVar6 != (ulong *)0x0) {
    uVar8 = CONCAT44(uVar7,uVar7) & 0xfffff000fffff;
    __n = (size_t)(ushort)puVar6[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                              + POPCOUNT((char)(uVar8 >> 0x10))) + 2];
    goto LAB_031ef64c;
  }
LAB_031ef648:
  __n = 0;
LAB_031ef64c:
  __s = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,__n);
  memset(__s,0,__n);
  if (param_3 != (ulong *)0x0) {
    puVar6 = param_3;
LAB_031ef67c:
    uVar8 = *puVar6;
    if (((uint)uVar8 >> 2 & 1) == 0) goto code_r0x031ef684;
    uVar8 = puVar6[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
    if ((uVar8 & 1) != 0) {
      piVar2 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
      goto LAB_031ef6b0;
    }
    goto LAB_031ef6ac;
  }
LAB_031ef68c:
  uVar8 = 0;
LAB_031ef6ac:
  bVar10 = true;
LAB_031ef6b0:
  if (*(code **)(PTR_DAT_047d1a08 + 0x10) != (code *)0x0) {
    puVar6 = param_3;
    while (uVar9 = *puVar6, ((uint)uVar9 >> 3 & 1) == 0) {
      if (((uVar9 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
      goto LAB_031ef704;
    }
    if (puVar6 != (ulong *)0x0) {
      uVar9 = puVar6[(ulong)(byte)POPCOUNT((byte)uVar9 & 7) + 2];
      goto LAB_031ef708;
    }
LAB_031ef704:
    uVar9 = 0;
LAB_031ef708:
    (**(code **)(PTR_DAT_047d1a08 + 0x10))(__s,uVar9);
  }
  *param_1 = (long)__s;
  param_1[1] = (long)param_3;
  param_1[2] = uVar8;
  if (!bVar10) {
    plVar5 = (long *)(uVar8 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar4 = *plVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)(*param_1 + 8) = 0xffffffff;
  return;
code_r0x031ef684:
  puVar6 = (ulong *)puVar6[1];
  if (puVar6 == (ulong *)0x0) goto LAB_031ef68c;
  goto LAB_031ef67c;
}


