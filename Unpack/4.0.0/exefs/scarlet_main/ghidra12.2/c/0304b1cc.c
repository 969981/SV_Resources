/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304b1cc; name: FUN_0304b1cc
 */


void FUN_0304b1cc(undefined8 *param_1,long *param_2,ulong param_3)

{
  char *__s;
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  size_t sVar7;
  void *__dest;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  int iVar13;
  ulong *puVar14;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar6 = (ulong *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x50);
  puVar5 = PTR_PTR_047d1a50;
  puVar4 = PTR_DAT_047d1a08;
  iVar1 = *(int *)(param_1 + 1);
  if (0 < iVar1) {
    puVar12 = (ulong *)*param_1;
    iVar13 = 0;
    puVar11 = puVar6;
    puVar14 = puVar12;
    do {
      *puVar11 = 0;
      puVar11[1] = 0;
      __s = (char *)(*puVar14 & 0xfffffffffffffffe);
      if (__s == (char *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        sVar7 = strlen(__s);
        sVar7 = (size_t)((int)sVar7 + 1);
        __dest = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar7);
        memcpy(__dest,__s,sVar7);
        plVar8 = (long *)puVar11[1];
        *puVar11 = (ulong)__dest | 1;
      }
      plVar9 = (long *)puVar14[1];
      if (plVar8 != plVar9) {
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar9 = plVar9 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar8 = (long *)puVar11[1];
          plVar9 = (long *)puVar14[1];
        }
        puVar11[1] = (ulong)plVar9;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar9 = plVar8 + 2;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
      memcpy(puVar11 + 2,puVar14 + 2,0x40);
      iVar13 = iVar13 + 1;
      puVar11 = puVar11 + 10;
      puVar14 = puVar14 + 10;
    } while (iVar13 != iVar1);
    iVar13 = 0;
    do {
      plVar8 = (long *)puVar12[1];
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar9 = plVar8 + 2;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if ((*puVar12 & 1) != 0) {
        (**(code **)(puVar4 + 8))(0,*puVar12 - 1,0);
      }
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 10;
    } while (iVar13 != iVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar6;
  return;
}


