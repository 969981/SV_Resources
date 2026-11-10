/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027be474; name: FUN_027be474
 */


void FUN_027be474(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_58 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar13 = param_2[1];
  uVar8 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[6] = param_2[4];
  puVar1 = param_1 + 2;
  param_1[3] = uVar13;
  param_1[2] = uVar8;
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  uVar13 = param_2[9];
  uVar8 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  uVar16 = param_2[0xc];
  uVar18 = param_2[0xf];
  uVar17 = param_2[0xe];
  param_1[0xf] = param_2[0xd];
  param_1[0xe] = uVar16;
  param_1[0x11] = uVar18;
  param_1[0x10] = uVar17;
  plVar11 = param_1 + 0x12;
  param_1[0xb] = uVar13;
  param_1[10] = uVar8;
  param_1[0xd] = uVar15;
  param_1[0xc] = uVar14;
  uVar13 = param_2[7];
  uVar8 = param_2[6];
  param_1[0x16] = 0;
  param_1[9] = uVar13;
  param_1[8] = uVar8;
  if (puVar1 != param_2) {
    plVar7 = (long *)param_2[0x14];
    if (plVar7 == (long *)0x0) {
      param_1[0x16] = 0;
    }
    else if (plVar7 == param_2 + 0x10) {
      param_1[0x16] = plVar11;
      (**(code **)(*(long *)param_2[0x14] + 0x28))((long *)param_2[0x14],plVar11);
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x38))();
      param_1[0x16] = uVar8;
    }
  }
  uVar8 = param_2[0x16];
  plVar7 = param_1 + 0x22;
  param_1[0x19] = param_2[0x17];
  param_1[0x18] = uVar8;
  uVar13 = param_2[0x19];
  uVar8 = param_2[0x18];
  uVar15 = param_2[0x1b];
  uVar14 = param_2[0x1a];
  uVar16 = param_2[0x1c];
  uVar18 = param_2[0x1f];
  uVar17 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1d];
  param_1[0x1e] = uVar16;
  param_1[0x21] = uVar18;
  param_1[0x20] = uVar17;
  param_1[0x26] = 0;
  param_1[0x1b] = uVar13;
  param_1[0x1a] = uVar8;
  param_1[0x1d] = uVar15;
  param_1[0x1c] = uVar14;
  if (puVar1 != param_2) {
    plVar9 = (long *)param_2[0x24];
    if (plVar9 == (long *)0x0) {
      param_1[0x26] = 0;
    }
    else if (plVar9 == param_2 + 0x20) {
      param_1[0x26] = plVar7;
      (**(code **)(*(long *)param_2[0x24] + 0x28))((long *)param_2[0x24],plVar7);
    }
    else {
      uVar8 = (**(code **)(*plVar9 + 0x38))();
      param_1[0x26] = uVar8;
    }
  }
  uVar8 = param_2[0x26];
  plVar9 = param_1 + 0x32;
  param_1[0x29] = param_2[0x27];
  param_1[0x28] = uVar8;
  uVar13 = param_2[0x29];
  uVar8 = param_2[0x28];
  uVar15 = param_2[0x2b];
  uVar14 = param_2[0x2a];
  uVar17 = param_2[0x2d];
  uVar16 = param_2[0x2c];
  uVar19 = param_2[0x2f];
  uVar18 = param_2[0x2e];
  param_1[0x36] = 0;
  param_1[0x2f] = uVar17;
  param_1[0x2e] = uVar16;
  param_1[0x31] = uVar19;
  param_1[0x30] = uVar18;
  param_1[0x2b] = uVar13;
  param_1[0x2a] = uVar8;
  param_1[0x2d] = uVar15;
  param_1[0x2c] = uVar14;
  if (puVar1 != param_2) {
    plVar10 = (long *)param_2[0x34];
    if (plVar10 == (long *)0x0) {
      param_1[0x36] = 0;
    }
    else if (plVar10 == param_2 + 0x30) {
      param_1[0x36] = plVar9;
      (**(code **)(*(long *)param_2[0x34] + 0x28))((long *)param_2[0x34],plVar9);
    }
    else {
      uVar8 = (**(code **)(*plVar10 + 0x38))();
      param_1[0x36] = uVar8;
    }
  }
  uVar13 = param_2[0x37];
  uVar8 = param_2[0x36];
  uVar15 = param_2[0x39];
  uVar14 = param_2[0x38];
  plVar10 = (long *)param_1[0x16];
  uVar16 = param_2[0x3a];
  uVar18 = param_2[0x3d];
  uVar17 = param_2[0x3c];
  param_1[0x3d] = param_2[0x3b];
  param_1[0x3c] = uVar16;
  param_1[0x3f] = uVar18;
  param_1[0x3e] = uVar17;
  param_1[0x39] = uVar13;
  param_1[0x38] = uVar8;
  param_1[0x3b] = uVar15;
  param_1[0x3a] = uVar14;
  uVar8 = param_2[0x3e];
  uVar14 = param_2[0x41];
  uVar13 = param_2[0x40];
  param_1[0x41] = param_2[0x3f];
  param_1[0x40] = uVar8;
  param_1[0x43] = uVar14;
  param_1[0x42] = uVar13;
  param_1[0x48] = param_1[6];
  param_1[0x45] = param_1[3];
  param_1[0x44] = *puVar1;
  param_1[0x47] = param_1[5];
  param_1[0x46] = param_1[4];
  param_1[0x51] = param_1[0xf];
  param_1[0x50] = param_1[0xe];
  param_1[0x53] = param_1[0x11];
  param_1[0x52] = param_1[0x10];
  param_1[0x4d] = param_1[0xb];
  param_1[0x4c] = param_1[10];
  param_1[0x4f] = param_1[0xd];
  param_1[0x4e] = param_1[0xc];
  param_1[0x4b] = param_1[9];
  param_1[0x4a] = param_1[8];
  param_1[0x58] = 0;
  if (plVar10 == (long *)0x0) {
    param_1[0x58] = 0;
  }
  else if (plVar10 == plVar11) {
    param_1[0x58] = param_1 + 0x54;
    (**(code **)(param_1[0x12] + 0x28))(plVar11);
  }
  else {
    uVar8 = (**(code **)(*plVar10 + 0x38))();
    param_1[0x58] = uVar8;
  }
  plVar11 = (long *)param_1[0x26];
  param_1[0x5f] = param_1[0x1d];
  param_1[0x5e] = param_1[0x1c];
  param_1[0x61] = param_1[0x1f];
  param_1[0x60] = param_1[0x1e];
  param_1[99] = param_1[0x21];
  param_1[0x62] = param_1[0x20];
  param_1[0x68] = 0;
  param_1[0x5b] = param_1[0x19];
  param_1[0x5a] = param_1[0x18];
  param_1[0x5d] = param_1[0x1b];
  param_1[0x5c] = param_1[0x1a];
  if (plVar11 == (long *)0x0) {
    param_1[0x68] = 0;
  }
  else if (plVar11 == plVar7) {
    param_1[0x68] = param_1 + 100;
    (**(code **)(param_1[0x22] + 0x28))(plVar7);
  }
  else {
    uVar8 = (**(code **)(*plVar11 + 0x38))();
    param_1[0x68] = uVar8;
  }
  plVar11 = (long *)param_1[0x36];
  param_1[0x6f] = param_1[0x2d];
  param_1[0x6e] = param_1[0x2c];
  param_1[0x71] = param_1[0x2f];
  param_1[0x70] = param_1[0x2e];
  param_1[0x73] = param_1[0x31];
  param_1[0x72] = param_1[0x30];
  param_1[0x78] = 0;
  param_1[0x6b] = param_1[0x29];
  param_1[0x6a] = param_1[0x28];
  param_1[0x6d] = param_1[0x2b];
  param_1[0x6c] = param_1[0x2a];
  if (plVar11 == (long *)0x0) {
    param_1[0x78] = 0;
  }
  else if (plVar11 == plVar9) {
    param_1[0x78] = param_1 + 0x74;
    (**(code **)(param_1[0x32] + 0x28))(plVar9);
  }
  else {
    uVar8 = (**(code **)(*plVar11 + 0x38))();
    param_1[0x78] = uVar8;
  }
  param_1[0x7f] = param_1[0x3d];
  param_1[0x7e] = param_1[0x3c];
  param_1[0x81] = param_1[0x3f];
  param_1[0x80] = param_1[0x3e];
  param_1[0x7b] = param_1[0x39];
  param_1[0x7a] = param_1[0x38];
  param_1[0x7d] = param_1[0x3b];
  param_1[0x7c] = param_1[0x3a];
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x82),false,0);
  FUN_0024ecd8(param_1 + 0x86,param_1 + 0x18);
  FUN_0024ecd8(param_1 + 0xae,param_1 + 0x28);
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  FUN_006c5720(param_1 + 0xd8,param_1[0x47]);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x101),false,0);
  uVar8 = std::chrono::system_clock::now();
  param_1[0x105] = uVar8;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x106),false,0);
  param_1[0x10a] = 0;
  plVar11 = (long *)FUN_01cf7e20();
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
  plVar7[2] = 0;
  plVar9 = plVar7 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cc0d8;
  plVar7[3] = (long)plVar11;
  plVar11 = plVar7 + 4;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar11);
  puVar2 = PTR_DAT_047cc0e0 + 0x10;
  plVar7[4] = (long)puVar2;
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  puVar3 = PTR_DAT_047cc0e8 + 0x10;
  plVar7[4] = (long)puVar3;
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  param_1[0x10b] = plVar11;
  param_1[0x10c] = plVar7;
  if (plVar7 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10f] = plVar11;
  param_1[0x110] = plVar7;
  *(undefined1 *)(plVar7 + 5) = 1;
  plVar7 = (long *)FUN_01cf7e20();
  plVar9 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
  plVar11 = plVar9 + 4;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar7;
  plVar7 = plVar9 + 1;
  *plVar7 = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar11);
  plVar9[4] = (long)puVar2;
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)puVar3;
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  param_1[0x111] = plVar11;
  param_1[0x112] = plVar9;
  if (plVar9 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = plVar11;
  param_1[0x116] = plVar9;
  *(undefined1 *)(plVar9 + 5) = 1;
  *(undefined1 *)(param_1 + 0x117) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x118),false,0);
  param_1[0x11d] = 0;
  uVar8 = FUN_01cf7e20();
  param_1[0x11e] = uVar8;
  param_1[0x11f] = 0;
  param_1[0x11c] = param_1 + 0x11d;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x120),false,0);
  *(undefined1 *)(param_1 + 0x124) = 0;
  uVar8 = FUN_01cf7e20();
  FUN_01e9fa84(param_1 + 0x127,uVar8);
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
    uVar8 = param_1[0x97];
    break;
  case 1:
    uVar8 = param_1[0xbf];
    break;
  case 2:
    uVar8 = param_1[0x41];
    break;
  case 3:
    param_1[0x10a] = param_1 + 0xd8;
    FUN_00248ab8();
    if (*(char *)(param_1 + 0x42) == '\0') {
      return;
    }
    goto LAB_027be9dc;
  default:
    local_58[0] = 0x80541;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_58,"");
  }
  param_1[0x10a] = uVar8;
  FUN_00248ab8();
  if (*(char *)(param_1 + 0x42) != '\0') {
LAB_027be9dc:
    uVar8 = param_1[0x47];
    if ((*(char *)(param_1 + 0x124) != '\0') &&
       (plVar11 = (long *)param_1[0x126], plVar11 != (long *)0x0)) {
      plVar7 = plVar11 + 1;
      do {
        lVar12 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0x124) = 0;
    FUN_01e9fa84(param_1 + 0x125,uVar8);
    *(undefined1 *)(param_1 + 0x124) = 1;
  }
  return;
}


