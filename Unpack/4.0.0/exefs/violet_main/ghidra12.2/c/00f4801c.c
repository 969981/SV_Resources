/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4801c; name: FUN_00f4801c
 */


void FUN_00f4801c(long param_1,undefined8 *param_2)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  short sVar13;
  float fVar14;
  undefined8 local_58;
  
  if ((*(char *)(param_1 + 0xae8) == '\0') || (*(char *)(param_1 + 0xaf0) != '\0')) {
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar14 = *(float *)(param_1 + 0xaf4) +
             (float)((double)*(long *)(lVar10 + 8) / -1000000000.0) * 5.0;
    pfVar2 = (float *)&DAT_03d5f0d8;
    if (fVar14 <= 100.0) {
      pfVar2 = (float *)(param_1 + 0xaf4);
    }
    *(float *)(param_1 + 0xaf4) = fVar14;
    local_58._0_4_ = 0.0;
    pfVar3 = (float *)&local_58;
    if (0.0 <= fVar14) {
      pfVar3 = pfVar2;
    }
    fVar14 = *pfVar3;
    *(float *)(param_1 + 0xaf4) = fVar14;
  }
  else {
    fVar14 = *(float *)(param_1 + 0xaec);
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar14 = *(float *)(param_1 + 0xaf4) +
             fVar14 * (float)((double)*(long *)(lVar10 + 8) / 1000000000.0);
    pfVar2 = (float *)&DAT_03d5f0d8;
    if (fVar14 <= 100.0) {
      pfVar2 = (float *)(param_1 + 0xaf4);
    }
    *(float *)(param_1 + 0xaf4) = fVar14;
    local_58._0_4_ = 0.0;
    pfVar3 = (float *)&local_58;
    if (0.0 <= fVar14) {
      pfVar3 = pfVar2;
    }
    fVar14 = *pfVar3;
    *(float *)(param_1 + 0xaf4) = fVar14;
    *(undefined1 *)(param_1 + 0xae8) = 0;
    *(undefined4 *)(param_1 + 0xaec) = 0x40a00000;
  }
  local_58._0_4_ = 0.0;
  if (*(char *)(param_1 + 0xaf0) != '\0') {
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar14 = *(float *)(param_1 + 0xaf4) +
             (float)((double)*(long *)(lVar10 + 8) / -1000000000.0) * 100.0;
    pfVar2 = (float *)&DAT_03d5f0d8;
    if (fVar14 <= 100.0) {
      pfVar2 = (float *)(param_1 + 0xaf4);
    }
    *(float *)(param_1 + 0xaf4) = fVar14;
    local_58._0_4_ = 0.0;
    pfVar3 = (float *)&local_58;
    if (0.0 <= fVar14) {
      pfVar3 = pfVar2;
    }
    fVar14 = *pfVar3;
    *(float *)(param_1 + 0xaf4) = fVar14;
    *(undefined1 *)(param_1 + 0xaf0) = 0;
  }
  local_58._0_4_ = 0.0;
  if (1.1920929e-07 <= fVar14) {
    iVar9 = (int)(fVar14 / 5.0);
  }
  else {
    iVar9 = 0;
  }
  if (iVar9 != *(int *)(param_1 + 0xaf8)) {
    plVar11 = (long *)FUN_00f48cd0(param_1);
    lVar10 = *plVar11;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar13 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f4825c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f4825c:
          bVar12 = false;
        }
        puVar8 = PTR_LAB_047d4118;
        puVar7 = PTR_DAT_047d3e30;
        puVar6 = PTR_DAT_047d3e28;
        if (bVar12) {
          local_58 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
          if (*(long *)(lVar10 + 0x10) == 0) {
            return;
          }
          if (iVar9 < *(int *)(param_1 + 0xaf8)) {
            FUN_0140704c(param_1,param_1 + 0x80,&local_58,0);
            iVar9 = -1;
          }
          else {
            lVar10 = 0;
            do {
              if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                FUN_00100190(puVar8,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar6);
              }
              if (*(long *)(param_1 + lVar10 + 0x140) != *(long *)puVar7) {
                FUN_0140704c(param_1,param_1 + lVar10 + 0xf0,&local_58,0);
              }
              lVar10 = lVar10 + 0x70;
            } while (lVar10 != 0x8c0);
            iVar9 = 1;
          }
          iVar9 = *(int *)(param_1 + 0xaf8) + iVar9;
          *(int *)(param_1 + 0xaf8) = iVar9;
          if (iVar9 == 0) {
            FUN_0140704c(param_1,param_1 + 0x80,&local_58,1);
          }
          if (local_58 == (long *)0x0) {
            return;
          }
          (**(code **)(*local_58 + 0x60))();
          return;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return;
}


