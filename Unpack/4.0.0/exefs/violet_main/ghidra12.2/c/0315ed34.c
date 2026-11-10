/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315ed34; name: FUN_0315ed34
 */


void FUN_0315ed34(undefined8 *param_1,long *param_2,ulong param_3)

{
  char *__s;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  void *__dest;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  void *pvVar14;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0xf0);
  puVar5 = PTR_PTR_047d1a50;
  iVar1 = *(int *)(param_1 + 1);
  if (0 < iVar1) {
    plVar12 = (long *)*param_1;
    iVar11 = 0;
    plVar10 = plVar12;
    plVar8 = plVar6;
    do {
      lVar9 = *plVar10;
      *plVar8 = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar13 = (long *)(lVar9 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      memcpy(plVar8 + 1,plVar10 + 1,0x41);
      memcpy(plVar8 + 10,plVar10 + 10,0x55);
      plVar13 = plVar8 + 0x1a;
      *plVar13 = 0;
      plVar8[0x1b] = -0x8000000000000000;
      memcpy(plVar8 + 0x15,plVar10 + 0x15,0x28);
      if (plVar10 != plVar8) {
        iVar2 = (int)plVar10[0x1b];
        pvVar14 = (void *)plVar10[0x1a];
        if (iVar2 < 1) {
          __dest = (void *)0x0;
        }
        else {
          FUN_02f0842c(plVar13,puVar5,(long)iVar2);
          __dest = (void *)*plVar13;
        }
        memcpy(__dest,pvVar14,(long)iVar2 << 4);
        *(int *)(plVar8 + 0x1b) = iVar2;
      }
      *(char *)(plVar8 + 0x1c) = (char)plVar10[0x1c];
      plVar8[0x1d] = 0;
      __s = (char *)(plVar10[0x1d] & 0xfffffffffffffffe);
      if (__s != (char *)0x0) {
        sVar7 = strlen(__s);
        sVar7 = (size_t)((int)sVar7 + 1);
        pvVar14 = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar7);
        memcpy(pvVar14,__s,sVar7);
        plVar8[0x1d] = (ulong)pvVar14 | 1;
      }
      iVar11 = iVar11 + 1;
      plVar8 = plVar8 + 0x1e;
      plVar10 = plVar10 + 0x1e;
    } while (iVar11 != iVar1);
    iVar11 = 0;
    do {
      if ((plVar12[0x1d] & 1U) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,plVar12[0x1d] - 1,0);
      }
      *(undefined4 *)(plVar12 + 0x1b) = 0;
      if ((-1 < (int)*(uint *)((long)plVar12 + 0xdc)) && (plVar12[0x1a] != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,plVar12[0x1a],(ulong)*(uint *)((long)plVar12 + 0xdc) << 4);
      }
      plVar8 = (long *)*plVar12;
      plVar12[0x1a] = 0;
      *(undefined4 *)((long)plVar12 + 0xdc) = 0x80000000;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar10 = plVar8 + 2;
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      iVar11 = iVar11 + 1;
      plVar12 = plVar12 + 0x1e;
    } while (iVar11 != iVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar6;
  return;
}


