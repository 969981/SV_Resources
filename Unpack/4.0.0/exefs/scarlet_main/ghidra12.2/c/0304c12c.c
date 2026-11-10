/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304c12c; name: FUN_0304c12c
 */


void FUN_0304c12c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char *__s;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  size_t sVar7;
  void *__dest;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0xb0);
  puVar5 = PTR_PTR_047d1a50;
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    iVar11 = 0;
    plVar10 = (long *)*param_1;
    plVar9 = plVar6;
    plVar13 = plVar10;
    do {
      lVar8 = *plVar13;
      *plVar9 = lVar8;
      if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
        plVar2 = (long *)(lVar8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar8 = plVar13[1];
      *(undefined8 *)((long)plVar9 + 0xf) = *(undefined8 *)((long)plVar13 + 0xf);
      plVar9[1] = lVar8;
      plVar9[3] = 0;
      __s = (char *)(plVar13[3] & 0xfffffffffffffffe);
      if (__s != (char *)0x0) {
        sVar7 = strlen(__s);
        sVar7 = (size_t)((int)sVar7 + 1);
        __dest = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,sVar7);
        memcpy(__dest,__s,sVar7);
        plVar9[3] = (ulong)__dest | 1;
      }
      memcpy(plVar9 + 4,plVar13 + 4,0x54);
      lVar8 = plVar13[0xf];
      plVar9[0xf] = lVar8;
      if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
        plVar2 = (long *)(lVar8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar8 = plVar13[0x10];
      plVar9[0x10] = lVar8;
      if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
        plVar2 = (long *)(lVar8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar8 = plVar13[0x12];
      plVar9[0x11] = plVar13[0x11];
      plVar9[0x12] = lVar8;
      lVar8 = plVar13[0x13];
      plVar9[0x13] = lVar8;
      if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
        plVar2 = (long *)(lVar8 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(char *)(plVar9 + 0x14) = (char)plVar13[0x14];
      puVar1 = (undefined8 *)((long)plVar13 + 0xa4);
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 0x16;
      *(undefined8 *)((long)plVar9 + 0xa4) = *puVar1;
      plVar9 = plVar9 + 0x16;
    } while (iVar11 != iVar12);
    do {
      FUN_00cb081c(plVar10);
      plVar10 = plVar10 + 0x16;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar6;
  return;
}


