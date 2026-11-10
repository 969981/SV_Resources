/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315274c; name: FUN_0315274c
 */


void FUN_0315274c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  void *__dest;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  int iVar15;
  void *__src;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  
  *param_1 = *param_2;
  lVar14 = *(long *)(param_2 + 2);
  *(long *)(param_1 + 2) = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar2 = (long *)(lVar14 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = *plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar14 = *(long *)(param_2 + 4);
  *(long *)(param_1 + 4) = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar2 = (long *)(lVar14 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar9) {
        *plVar2 = *plVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  memcpy(param_1 + 8,param_2 + 8,0x60);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  uVar4 = param_2[0x28];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000000;
  param_1[0x28] = uVar4;
  puVar10 = PTR_PTR_047d1a50;
  uVar5 = param_2[0x2c];
  if ((int)uVar5 < 1) {
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0x8000000000000000;
  }
  else {
    puVar18 = *(undefined8 **)(param_2 + 0x2a);
    puVar11 = (undefined8 *)
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar5 << 4);
    uVar17 = 0;
    *(undefined8 **)(param_1 + 0x2a) = puVar11;
    param_1[0x2c] = uVar5;
    param_1[0x2d] = uVar5;
    do {
      *puVar11 = 0;
      puVar11[1] = 0x8000000000000000;
      uVar6 = *(uint *)(puVar18 + 1);
      if ((int)uVar6 < 1) {
        *puVar11 = 0;
        puVar11[1] = 0x8000000000000000;
      }
      else {
        puVar16 = (undefined4 *)*puVar18;
        puVar12 = (undefined4 *)(**(code **)(*(long *)puVar10 + 0x18))(puVar10,(ulong)uVar6 << 2);
        uVar3 = uVar6 & 7;
        *puVar11 = puVar12;
        *(uint *)(puVar11 + 1) = uVar6;
        *(uint *)((long)puVar11 + 0xc) = uVar6;
        if (6 < uVar6 - 1) {
          iVar15 = -(uVar6 & 0xfffffff8);
          puVar13 = puVar12;
          do {
            *puVar13 = *puVar16;
            puVar13[1] = puVar16[1];
            puVar13[2] = puVar16[2];
            puVar13[3] = puVar16[3];
            puVar13[4] = puVar16[4];
            puVar13[5] = puVar16[5];
            puVar13[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar12 = puVar13 + 8;
            puVar16 = puVar16 + 8;
            iVar15 = iVar15 + 8;
            puVar13[7] = *puVar1;
            puVar13 = puVar12;
          } while (iVar15 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar12 = *puVar16;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      puVar11 = puVar11 + 2;
      puVar18 = puVar18 + 2;
    } while (uVar17 != uVar5);
  }
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  uVar5 = param_2[0x30];
  if ((int)uVar5 < 1) {
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  }
  else {
    __src = *(void **)(param_2 + 0x2e);
    __dest = (void *)(**(code **)(*(long *)puVar10 + 0x18))(puVar10,(ulong)uVar5 << 6);
    uVar17 = 0;
    *(void **)(param_1 + 0x2e) = __dest;
    param_1[0x30] = uVar5;
    param_1[0x31] = uVar5;
    do {
      memcpy(__dest,__src,0x30);
      *(undefined8 *)((long)__dest + 0x30) = 0;
      *(undefined8 *)((long)__dest + 0x38) = 0x8000000000000000;
      uVar6 = *(uint *)((long)__src + 0x38);
      if ((int)uVar6 < 1) {
        *(undefined8 *)((long)__dest + 0x30) = 0;
        *(undefined8 *)((long)__dest + 0x38) = 0x8000000000000000;
      }
      else {
        puVar16 = *(undefined4 **)((long)__src + 0x30);
        puVar12 = (undefined4 *)(**(code **)(*(long *)puVar10 + 0x18))(puVar10,(ulong)uVar6 << 2);
        uVar3 = uVar6 & 7;
        *(undefined4 **)((long)__dest + 0x30) = puVar12;
        *(uint *)((long)__dest + 0x38) = uVar6;
        *(uint *)((long)__dest + 0x3c) = uVar6;
        if (6 < uVar6 - 1) {
          iVar15 = -(uVar6 & 0xfffffff8);
          puVar13 = puVar12;
          do {
            *puVar13 = *puVar16;
            puVar13[1] = puVar16[1];
            puVar13[2] = puVar16[2];
            puVar13[3] = puVar16[3];
            puVar13[4] = puVar16[4];
            puVar13[5] = puVar16[5];
            puVar13[6] = puVar16[6];
            puVar1 = puVar16 + 7;
            puVar12 = puVar13 + 8;
            puVar16 = puVar16 + 8;
            iVar15 = iVar15 + 8;
            puVar13[7] = *puVar1;
            puVar13 = puVar12;
          } while (iVar15 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar12 = *puVar16;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      __dest = (void *)((long)__dest + 0x40);
      __src = (void *)((long)__src + 0x40);
    } while (uVar17 != uVar5);
  }
  uVar7 = *(undefined2 *)(param_2 + 0x32);
  *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  *(undefined2 *)(param_1 + 0x32) = uVar7;
  return;
}


