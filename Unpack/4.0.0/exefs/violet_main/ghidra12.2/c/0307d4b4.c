/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307d4b4; name: FUN_0307d4b4
 */


void FUN_0307d4b4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined4 local_58 [2];
  
  uVar3 = *(uint *)(param_2 + 0x40);
  if (0 < (int)uVar3) {
    lVar15 = 0;
    uVar16 = 0;
    do {
      lVar12 = *(long *)(param_2 + 0x38) + lVar15;
      if (*(int *)(lVar12 + 0x1c) != -1) {
        FUN_03086d6c(*(long *)(param_1 + 0x38) + lVar15,lVar12,param_1 + 0x20);
        local_58[0] = (undefined4)uVar16;
        FUN_03079ee0(param_1,local_58,*(undefined4 *)(lVar12 + 0x24));
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x100;
    } while (uVar3 != uVar16);
  }
  uVar3 = *(uint *)(param_2 + 0x50);
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < (int)uVar3) {
    FUN_0307fa60((long *)(param_1 + 0x48),(long)(int)uVar3);
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if ((int)uVar4 < (int)uVar3) {
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)(int)uVar4 * 0x18);
    uVar2 = uVar3 - uVar4 & 3;
    *(uint *)(param_1 + 0x50) = uVar3;
    if (2 < uVar3 + ~uVar4) {
      iVar13 = -(uVar3 - uVar4 & 0xfffffffc);
      puVar11 = puVar10;
      do {
        puVar10 = puVar11 + 0xc;
        *puVar11 = 0;
        puVar11[1] = 0;
        iVar13 = iVar13 + 4;
        *(undefined1 *)(puVar11 + 2) = 1;
        puVar11[3] = 0;
        puVar11[4] = 0;
        *(undefined1 *)(puVar11 + 5) = 1;
        puVar11[6] = 0;
        puVar11[7] = 0;
        *(undefined1 *)(puVar11 + 8) = 1;
        puVar11[9] = 0;
        puVar11[10] = 0;
        *(undefined1 *)(puVar11 + 0xb) = 1;
        puVar11 = puVar10;
      } while (iVar13 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined1 *)(puVar10 + 2) = 1;
      puVar10 = puVar10 + 3;
    }
  }
  else if ((int)uVar3 < (int)uVar4) {
    lVar15 = *(long *)(param_1 + 0x48);
    plVar9 = (long *)(lVar15 + (long)(int)uVar4 * 0x18);
    *(uint *)(param_1 + 0x50) = uVar3;
    puVar7 = PTR_DAT_047d1a08;
    do {
      lVar12 = plVar9[-2];
      plVar9 = plVar9 + -3;
      if (lVar12 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar12 + 8));
        (**(code **)(puVar7 + 8))(0,lVar12,0);
      }
      plVar8 = (long *)*plVar9;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar12 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (plVar9 != (long *)(lVar15 + (long)(int)uVar3 * 0x18));
  }
  if (0 < (int)uVar3) {
    uVar16 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x48);
      uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x48) + uVar16 * 0x18);
      *(undefined8 *)(*(long *)(param_2 + 0x48) + uVar16 * 0x18) = 0;
      plVar9 = *(long **)(lVar15 + uVar16 * 0x18);
      *(undefined8 *)(lVar15 + uVar16 * 0x18) = uVar14;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar8 = plVar9 + 2;
        do {
          lVar12 = *plVar8;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      lVar12 = uVar16 * 0x18;
      uVar16 = uVar16 + 1;
      *(undefined1 *)(lVar15 + lVar12 + 0x10) = 1;
    } while (uVar16 != uVar3);
  }
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x80);
  return;
}


