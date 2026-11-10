/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030404e4; name: FUN_030404e4
 */


void FUN_030404e4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char *__s;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  size_t sVar8;
  void *__dest;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_04638af0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  param_1[4] = 0;
  puVar7 = PTR_PTR_047d1a50;
  __s = (char *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar8 = strlen(__s);
    sVar8 = (size_t)((int)sVar8 + 1);
    __dest = (void *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,sVar8);
    memcpy(__dest,__s,sVar8);
    param_1[4] = (ulong)__dest | 1;
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x38);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    plVar16 = *(long **)(param_2 + 0x30);
    plVar9 = (long *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(ulong)uVar3 << 3);
    uVar12 = 0;
    param_1[6] = plVar9;
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = uVar3;
    do {
      lVar14 = *plVar16;
      *plVar9 = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar2 = (long *)(lVar14 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar12 = uVar12 + 1;
      plVar9 = plVar9 + 1;
      plVar16 = plVar16 + 1;
    } while (uVar12 != uVar3);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *param_1 = &PTR_LAB_04638b60;
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)((long)param_1 + 0x4c) = uVar4;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x58);
  if ((int)uVar3 < 1) {
    param_1[10] = 0;
    param_1[0xb] = 0x8000000000000000;
  }
  else {
    puVar15 = *(undefined8 **)(param_2 + 0x50);
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(ulong)uVar3 << 3);
    uVar12 = uVar3 & 3;
    param_1[10] = puVar10;
    *(uint *)(param_1 + 0xb) = uVar3;
    *(uint *)((long)param_1 + 0x5c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar13 = -(uVar3 & 0xfffffffc);
      puVar11 = puVar10;
      do {
        *puVar11 = *puVar15;
        puVar11[1] = puVar15[1];
        puVar11[2] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar10 = puVar11 + 4;
        puVar15 = puVar15 + 4;
        iVar13 = iVar13 + 4;
        puVar11[3] = *puVar1;
        puVar11 = puVar10;
      } while (iVar13 != 0);
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar10 = *puVar15;
      puVar10 = puVar10 + 1;
      puVar15 = puVar15 + 1;
    }
  }
  memcpy(param_1 + 0xc,(void *)(param_2 + 0x60),0x40);
  return;
}


