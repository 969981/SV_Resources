/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300b700; name: FUN_0300b700
 */


void FUN_0300b700(undefined8 *param_1,long *param_2)

{
  void *__s;
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_68;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_04613060;
  plVar11 = param_1 + 3;
  *plVar11 = 0;
  param_1[4] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  iVar2 = (int)param_2[1];
  if (iVar2 < 1) {
    iVar10 = 0;
  }
  else {
    FUN_0300bbd8(plVar11,iVar2);
    iVar10 = *(int *)(param_1 + 4);
  }
  if (iVar10 < iVar2) {
    __s = (void *)(param_1[3] + (long)iVar10 * 8);
    *(int *)(param_1 + 4) = iVar2;
    memset(__s,0,(param_1[3] + (long)iVar2 * 8) - (long)__s & 0xfffffffffffffff8);
  }
  else if (iVar2 < iVar10) {
    lVar14 = param_1[3];
    *(int *)(param_1 + 4) = iVar2;
    puVar6 = PTR_PTR_047d1a50;
    puVar5 = PTR_DAT_047d1a08;
    plVar9 = (long *)(lVar14 + (long)iVar10 * 8);
    do {
      plVar9 = plVar9 + -1;
      lVar12 = *plVar9;
      if (lVar12 != 0) {
        plVar7 = *(long **)(lVar12 + 0xa0);
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar1 = plVar7 + 2;
          do {
            lVar13 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        *(undefined4 *)(lVar12 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar12 + 0x5c)) && (*(long *)(lVar12 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar12 + 0x50),(ulong)*(uint *)(lVar12 + 0x5c) * 0x50);
        }
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined4 *)(lVar12 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar12 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar12 + 0x4c)) && (*(long *)(lVar12 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar12 + 0x40),(ulong)*(uint *)(lVar12 + 0x4c) * 0x30);
        }
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined4 *)(lVar12 + 0x4c) = 0x80000000;
        (**(code **)(puVar5 + 8))(0,lVar12,0);
      }
    } while (plVar9 != (long *)(lVar14 + (long)iVar2 * 8));
  }
  puVar5 = PTR_DAT_047d1a08;
  if ((int)param_2[1] < 1) {
    uVar15 = 0;
  }
  else {
    lVar12 = *plVar11;
    uVar15 = 0;
    lVar14 = 0;
    do {
      local_68 = 0xb0;
      uVar8 = (**(code **)puVar5)(0,&local_68,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(uVar8,"hknpParticleShapeProperties");
      }
      FUN_0300be3c(uVar8,*(undefined8 *)(*param_2 + lVar14 * 8));
      lVar13 = *(long *)(lVar12 + lVar14 * 8);
      *(undefined8 *)(lVar12 + lVar14 * 8) = uVar8;
      if (lVar13 != 0) {
        plVar9 = *(long **)(lVar13 + 0xa0);
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar7 = plVar9 + 2;
          do {
            lVar12 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        *(undefined4 *)(lVar13 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar13 + 0x5c)) && (*(long *)(lVar13 + 0x50) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(lVar13 + 0x50),
                     (ulong)*(uint *)(lVar13 + 0x5c) * 0x50);
        }
        *(undefined8 *)(lVar13 + 0x50) = 0;
        *(undefined4 *)(lVar13 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar13 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar13 + 0x4c)) && (*(long *)(lVar13 + 0x40) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(lVar13 + 0x40),
                     (ulong)*(uint *)(lVar13 + 0x4c) * 0x30);
        }
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(undefined4 *)(lVar13 + 0x4c) = 0x80000000;
        (**(code **)(puVar5 + 8))(0,lVar13,0);
      }
      lVar12 = *plVar11;
      lVar13 = lVar14 * 8;
      lVar14 = lVar14 + 1;
      uVar15 = NEON_fmax(uVar15,*(undefined8 *)(*(long *)(lVar12 + lVar13) + 0x10),4);
    } while (lVar14 < (int)param_2[1]);
  }
  *(int *)(param_1 + 5) = (int)uVar15;
  return;
}


