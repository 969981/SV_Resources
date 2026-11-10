/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a08fb4; name: FUN_02a08fb4
 */


void FUN_02a08fb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  size_t sVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  long *local_898;
  undefined1 auStack_890 [2119];
  undefined1 auStack_49 [9];
  
  FUN_01b6ff7c(auStack_890,0);
  FUN_020f6cc4(&local_898,auStack_890);
  if (local_898 != (long *)0x0) {
    if ((char)local_898[0x12] == '\0') {
      uVar12 = 4;
    }
    else {
      uVar9 = FUN_02a084f8(param_2,&local_898);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        puVar13 = &DAT_cbf29ce484222645;
        snprintf((char *)&DAT_0483ab48,7,"%s",auStack_49);
        sVar10 = strlen((char *)&DAT_0483ab48);
        if (DAT_0483ab48 != 0) {
          pbVar11 = &DAT_0483ab49;
          bVar3 = DAT_0483ab48;
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        *param_1 = puVar13;
        param_1[1] = &DAT_0483ab48;
        uVar12 = 1;
        param_1[2] = sVar10;
        param_1[3] = 0;
      }
    }
    if (local_898 != (long *)0x0) {
      plVar2 = local_898 + 5;
      do {
        lVar6 = *plVar2;
        iVar8 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_898 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02a09540;
    }
    if ((uVar12 | 4) != 4) {
      return;
    }
  }
  FUN_01b6ff7c(auStack_890,1);
  FUN_020f6cc4(&local_898,auStack_890);
  if (local_898 != (long *)0x0) {
    if ((char)local_898[0x12] == '\0') {
      uVar12 = 4;
    }
    else {
      uVar9 = FUN_02a084f8(param_2,&local_898);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        puVar13 = &DAT_cbf29ce484222645;
        snprintf((char *)&DAT_0483ab48,7,"%s",auStack_49);
        sVar10 = strlen((char *)&DAT_0483ab48);
        if (DAT_0483ab48 != 0) {
          pbVar11 = &DAT_0483ab49;
          bVar3 = DAT_0483ab48;
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        *param_1 = puVar13;
        param_1[1] = &DAT_0483ab48;
        uVar12 = 1;
        param_1[2] = sVar10;
        param_1[3] = 0;
      }
    }
    if (local_898 != (long *)0x0) {
      plVar2 = local_898 + 5;
      do {
        lVar6 = *plVar2;
        iVar8 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_898 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02a09540;
    }
    if ((uVar12 | 4) != 4) {
      return;
    }
  }
  FUN_01b6ff7c(auStack_890,2);
  FUN_020f6cc4(&local_898,auStack_890);
  if (local_898 != (long *)0x0) {
    if ((char)local_898[0x12] == '\0') {
      uVar12 = 4;
    }
    else {
      uVar9 = FUN_02a084f8(param_2,&local_898);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        puVar13 = &DAT_cbf29ce484222645;
        snprintf((char *)&DAT_0483ab48,7,"%s",auStack_49);
        sVar10 = strlen((char *)&DAT_0483ab48);
        if (DAT_0483ab48 != 0) {
          pbVar11 = &DAT_0483ab49;
          bVar3 = DAT_0483ab48;
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        *param_1 = puVar13;
        param_1[1] = &DAT_0483ab48;
        uVar12 = 1;
        param_1[2] = sVar10;
        param_1[3] = 0;
      }
    }
    if (local_898 != (long *)0x0) {
      plVar2 = local_898 + 5;
      do {
        lVar6 = *plVar2;
        iVar8 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_898 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02a09540;
    }
    if ((uVar12 | 4) != 4) {
      return;
    }
  }
  FUN_01b6ff7c(auStack_890,3);
  FUN_020f6cc4(&local_898,auStack_890);
  if (local_898 != (long *)0x0) {
    if ((char)local_898[0x12] == '\0') {
      uVar12 = 4;
    }
    else {
      uVar9 = FUN_02a084f8(param_2,&local_898);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        puVar13 = &DAT_cbf29ce484222645;
        snprintf((char *)&DAT_0483ab48,7,"%s",auStack_49);
        sVar10 = strlen((char *)&DAT_0483ab48);
        if (DAT_0483ab48 != 0) {
          pbVar11 = &DAT_0483ab49;
          bVar3 = DAT_0483ab48;
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        *param_1 = puVar13;
        param_1[1] = &DAT_0483ab48;
        uVar12 = 1;
        param_1[2] = sVar10;
        param_1[3] = 0;
      }
    }
    if (local_898 != (long *)0x0) {
      plVar2 = local_898 + 5;
      do {
        lVar6 = *plVar2;
        iVar8 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_898 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_02a09540;
    }
    if ((uVar12 | 4) != 4) {
      return;
    }
  }
  FUN_01b6ff7c(auStack_890,4);
  FUN_020f6cc4(&local_898,auStack_890);
  if (local_898 != (long *)0x0) {
    if ((char)local_898[0x12] == '\0') {
      uVar12 = 4;
    }
    else {
      uVar9 = FUN_02a084f8(param_2,&local_898);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        puVar13 = &DAT_cbf29ce484222645;
        snprintf((char *)&DAT_0483ab48,7,"%s",auStack_49);
        sVar10 = strlen((char *)&DAT_0483ab48);
        if (DAT_0483ab48 != 0) {
          pbVar11 = &DAT_0483ab49;
          bVar3 = DAT_0483ab48;
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
        uVar12 = 1;
        *param_1 = puVar13;
        param_1[1] = &DAT_0483ab48;
        param_1[2] = sVar10;
        param_1[3] = 0;
      }
    }
    if (local_898 != (long *)0x0) {
      plVar2 = local_898 + 5;
      do {
        lVar6 = *plVar2;
        iVar8 = (int)lVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_898 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_02a09540:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((uVar12 | 4) != 4) {
      return;
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar7 = PTR_DAT_047d3e30;
  uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar1;
  plVar2 = *(long **)(puVar7 + 0x18);
  param_1[2] = *(undefined8 *)(puVar7 + 0x10);
  param_1[3] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  return;
}


