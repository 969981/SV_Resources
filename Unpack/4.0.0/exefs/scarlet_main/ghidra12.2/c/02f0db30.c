/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0db30; name: FUN_02f0db30
 */


void FUN_02f0db30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6,undefined4 param_7,ushort param_8)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  long *plVar9;
  void *__s;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  uint local_78;
  undefined1 uStack_74;
  undefined8 local_70;
  char local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  
  if ((param_6 != 0) && (*(long *)(param_6 + 8) != 0)) {
    plVar9 = (long *)(param_6 + 0x10);
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar9 = (long *)param_1[4];
  param_1[4] = param_6;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x7fffffff;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  puVar7 = PTR_DAT_047e4050;
  local_54 = 0;
  (**(code **)(*(long *)PTR_DAT_047e4050 + (ulong)*(byte *)(param_6 + 0x20) * 0x80 + 0x18))
            (param_6,&local_70);
  param_1[9] = local_60;
  *(undefined2 *)(param_1 + 10) = local_58;
  *(short *)((long)param_1 + 0x52) = (short)local_54 + local_70._4_2_ + 0x10;
  *(char *)((long)param_1 + 0x55) = local_64;
  if (*(char *)(param_6 + 0x21) != '\0') {
    *(char *)((long)param_1 + 0x55) = local_64 + *(char *)(param_6 + 0x21) * ' ';
  }
  *(undefined2 *)(param_1 + 8) = 0xffff;
  param_8 = param_8 & 0xfff9;
  *(undefined4 *)(param_1 + 7) = param_7;
  *(undefined4 *)((long)param_1 + 0x3c) = param_7;
  *(ushort *)((long)param_1 + 0x42) = param_8;
  bVar5 = *(byte *)(param_6 + 0x20);
  if (bVar5 == 0x13) {
    param_8 = param_8 | 0x81;
    *(ushort *)((long)param_1 + 0x42) = param_8;
    bVar5 = *(byte *)(param_6 + 0x20);
  }
  (**(code **)(*(long *)puVar7 + (ulong)bVar5 * 0x80 + 0x70))(param_6,param_8 & 1,&local_78);
  *(undefined1 *)((long)param_1 + 0x54) = uStack_74;
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x56) = 0;
  if ((local_78 & 0xffff) != 0) {
    pcVar10 = *(code **)PTR_DAT_047d1a08;
    local_70 = (ulong)local_78 & 0xffff;
    param_1[0xb] = 0;
    *(undefined2 *)((long)param_1 + 0x56) = 0;
    __s = (void *)(*pcVar10)(0,&local_70,0);
    uVar15 = (ulong)(local_78 >> 2) & 0x3fff;
    param_1[0xb] = __s;
    pvVar14 = __s;
    if (((ulong)__s & 0xf) == 0) {
      uVar11 = uVar15;
    }
    else {
      uVar11 = 4 - (((ulong)__s & 0xf) >> 2);
      uVar12 = uVar15;
      if (uVar11 <= uVar15) {
        uVar12 = uVar11;
      }
      pvVar3 = (void *)((long)__s + uVar12 * 4);
      uVar11 = uVar15 - uVar12;
      if (__s < pvVar3) {
        memset(__s,0,uVar12 * 4);
        uVar12 = uVar12 * 4 - 1;
        uVar1 = ((uint)(uVar12 >> 2) & 0x3fffffff) + 1;
        if ((uVar1 & 7) != 0) {
          lVar13 = -((ulong)uVar1 & 7);
          do {
            pvVar14 = (void *)((long)pvVar14 + 4);
            bVar8 = lVar13 != -1;
            lVar13 = lVar13 + 1;
          } while (bVar8);
        }
        if (0x1b < uVar12) {
          do {
            pvVar14 = (void *)((long)pvVar14 + 0x20);
          } while (pvVar14 < pvVar3);
        }
      }
      else {
      }
    }
    if ((3 < uVar11) && (0 < (long)(uVar11 & 0xfffffffffffffffc))) {
      pvVar3 = (void *)((long)pvVar14 + (uVar11 & 0xfffffffffffffffc) * 4);
      pvVar4 = pvVar3;
      if (pvVar3 <= (void *)((long)pvVar14 + 0x10U)) {
        pvVar4 = (void *)((long)pvVar14 + 0x10U);
      }
      memset(pvVar14,0,(long)pvVar4 + ~(ulong)pvVar14 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar14 = (void *)((long)pvVar14 + 0x10);
      } while (pvVar14 < pvVar3);
    }
    if (pvVar14 < (void *)((long)__s + uVar15 * 4)) {
      memset(pvVar14,0,(long)__s + ~(ulong)pvVar14 + uVar15 * 4 + 4 & 0xfffffffffffffffc);
    }
    *(short *)((long)param_1 + 0x56) = (short)local_78;
  }
  return;
}


