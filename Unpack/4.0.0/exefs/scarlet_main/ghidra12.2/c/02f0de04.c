/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0de04; name: FUN_02f0de04
 */


undefined4 * FUN_02f0de04(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  long *plVar9;
  void *__s;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  void *pvVar19;
  ulong uVar20;
  ulong local_58;
  
  plVar9 = *(long **)(param_1 + 8);
  plVar10 = *(long **)(param_2 + 8);
  if (plVar9 != plVar10) {
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar10 = plVar10 + 2;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = *plVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar9 = *(long **)(param_1 + 8);
      plVar10 = *(long **)(param_2 + 8);
    }
    *(long **)(param_1 + 8) = plVar10;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar10 = plVar9 + 2;
      do {
        lVar15 = *plVar10;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  uVar4 = *(ushort *)((long)param_2 + 0x56);
  if (*(ushort *)((long)param_1 + 0x56) != uVar4) {
    if (1 < *(ulong *)(param_1 + 0x16)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(param_1 + 0x16),0);
    }
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined2 *)((long)param_1 + 0x56) = 0;
    if (uVar4 != 0) {
      local_58 = (ulong)uVar4;
      __s = (void *)(**(code **)puVar7)(0,&local_58,0);
      uVar20 = (ulong)(uVar4 >> 2);
      *(void **)(param_1 + 0x16) = __s;
      pvVar19 = __s;
      if (((ulong)__s & 0xf) == 0) {
        uVar11 = uVar20;
      }
      else {
        uVar11 = 4 - (((ulong)__s & 0xf) >> 2);
        uVar12 = uVar20;
        if (uVar11 <= uVar20) {
          uVar12 = uVar11;
        }
        pvVar2 = (void *)((long)__s + uVar12 * 4);
        uVar11 = uVar20 - uVar12;
        if (__s < pvVar2) {
          memset(__s,0,uVar12 * 4);
          uVar12 = uVar12 * 4 - 1;
          uVar1 = ((uint)(uVar12 >> 2) & 0x3fffffff) + 1;
          if ((uVar1 & 7) != 0) {
            lVar15 = -((ulong)uVar1 & 7);
            do {
              pvVar19 = (void *)((long)pvVar19 + 4);
              bVar8 = lVar15 != -1;
              lVar15 = lVar15 + 1;
            } while (bVar8);
          }
          if (0x1b < uVar12) {
            do {
              pvVar19 = (void *)((long)pvVar19 + 0x20);
            } while (pvVar19 < pvVar2);
          }
        }
        else {
        }
      }
      if ((3 < uVar11) && (0 < (long)(uVar11 & 0xfffffffffffffffc))) {
        pvVar2 = (void *)((long)pvVar19 + (uVar11 & 0xfffffffffffffffc) * 4);
        pvVar3 = pvVar2;
        if (pvVar2 <= (void *)((long)pvVar19 + 0x10U)) {
          pvVar3 = (void *)((long)pvVar19 + 0x10U);
        }
        memset(pvVar19,0,(long)pvVar3 + ~(ulong)pvVar19 + 0x10 & 0xfffffffffffffff0);
        do {
          pvVar19 = (void *)((long)pvVar19 + 0x10);
        } while (pvVar19 < pvVar2);
      }
      if (pvVar19 < (void *)((long)__s + uVar20 * 4)) {
        memset(pvVar19,0,(long)__s + ~(ulong)pvVar19 + uVar20 * 4 + 4 & 0xfffffffffffffffc);
      }
      *(ushort *)((long)param_1 + 0x56) = uVar4;
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  uVar1 = param_2[0x15];
  param_1[0x15] = uVar1;
  puVar13 = *(undefined4 **)(param_1 + 0x16);
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined4 **)(param_1 + 0x16) = puVar13;
  if ((puVar13 != (undefined4 *)0x0) && (uVar5 = uVar1 >> 0x12, uVar5 != 0)) {
    puVar16 = *(undefined4 **)(param_2 + 0x16);
    uVar1 = uVar1 >> 0x12 & 3;
    if (2 < uVar5 - 1) {
      iVar18 = -(uVar5 & 0x3ffc);
      puVar14 = puVar13;
      puVar17 = puVar16;
      do {
        *puVar14 = *puVar17;
        puVar14[1] = puVar17[1];
        puVar14[2] = puVar17[2];
        puVar16 = puVar17 + 4;
        puVar13 = puVar14 + 4;
        iVar18 = iVar18 + 4;
        puVar14[3] = puVar17[3];
        puVar14 = puVar13;
        puVar17 = puVar16;
      } while (iVar18 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar13 = *puVar16;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  return param_1;
}


