/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d5ae8; name: FUN_030d5ae8
 */


void FUN_030d5ae8(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  void *__s;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 local_70;
  undefined4 local_68 [2];
  
  uVar14 = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = uVar14;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar7 = (long *)(param_3 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar8 = plVar7 + 2;
    do {
      lVar10 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if (param_3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(param_3 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < (int)uVar12) {
      FUN_030d9c00(param_1 + 0x20,(long)(int)uVar12);
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < (int)uVar12) {
    __s = (void *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8);
    *(uint *)(param_1 + 0x28) = uVar12;
    memset(__s,0,(*(long *)(param_1 + 0x20) + (long)(int)uVar12 * 8) - (long)__s &
                 0xfffffffffffffff8);
  }
  else if ((int)uVar12 < iVar3) {
    lVar10 = *(long *)(param_1 + 0x20);
    plVar7 = (long *)(lVar10 + (long)iVar3 * 8);
    *(uint *)(param_1 + 0x28) = uVar12;
    do {
      plVar7 = plVar7 + -1;
      plVar8 = (long *)*plVar7;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (plVar7 != (long *)(lVar10 + (long)(int)uVar12 * 8));
  }
  puVar6 = PTR_DAT_047d1a08;
  if (0 < (int)uVar12) {
    uVar13 = 0;
    puVar2 = PTR_DAT_047e51b0 + 0x10;
    do {
      if (*(long *)(*(long *)(param_3 + 0x38) + uVar13 * 0x100) != 0) {
        local_70 = 0x108;
        plVar7 = (long *)(**(code **)puVar6)(0,&local_70,0);
        pcVar9 = *(code **)(puVar6 + 0x10);
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(plVar7,"hkaiNavMeshInstanceCutter");
        }
        *plVar7 = (long)puVar2;
        plVar7[1] = 0xffffffff;
        plVar7[2] = 1;
        plVar7[3] = param_3;
        local_68[0] = (undefined4)uVar13;
        *(undefined4 *)(plVar7 + 4) = local_68[0];
        *(undefined4 *)(plVar7 + 10) = 0;
        plVar7[0xd] = (long)&DAT_03d7702c;
        *(undefined4 *)(plVar7 + 0xe) = 0;
        plVar7[0x11] = (long)&DAT_03d7702c;
        *(undefined4 *)(plVar7 + 0x12) = 0;
        plVar7[0x19] = (long)&DAT_03d7702c;
        *(undefined4 *)(plVar7 + 0x1a) = 0;
        plVar7[0x1d] = (long)&DAT_03d7702c;
        *(undefined4 *)(plVar7 + 0x1e) = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[8] = -0x8000000000000000;
        plVar7[9] = (long)&DAT_03d7702c;
        plVar7[0xb] = 0;
        plVar7[0xc] = -0x8000000000000000;
        plVar7[0xf] = 0;
        plVar7[0x10] = -0x8000000000000000;
        plVar7[0x13] = 0;
        plVar7[0x14] = -0x8000000000000000;
        plVar7[0x15] = 0;
        plVar7[0x16] = -0x8000000000000000;
        plVar7[0x17] = 0;
        plVar7[0x18] = -0x8000000000000000;
        plVar7[0x1b] = 0;
        plVar7[0x1c] = -0x8000000000000000;
        plVar7[0x1f] = 0;
        plVar7[0x20] = -0x8000000000000000;
        FUN_030e2340(plVar7 + 5,local_68,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_3 + 0x38) +
                                          (-(uVar13 >> 0x1f & 1) & 0xffffff0000000000 |
                                          (uVar13 & 0xffffffff) << 8)) + 0x20) + 0x68));
        plVar8 = *(long **)(*(long *)(param_1 + 0x20) + uVar13 * 8);
        *(long **)(*(long *)(param_1 + 0x20) + uVar13 * 8) = plVar7;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          plVar7 = plVar8 + 2;
          do {
            lVar10 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))();
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar12);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 3;
  return;
}


