/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c2dac; name: FUN_007c2dac
 */


void FUN_007c2dac(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  char *__dest;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined *local_108;
  char *local_100;
  undefined *local_f8;
  char *local_f0;
  int local_e8;
  char local_e4 [132];
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = param_1 + 0x12;
    FUN_007c9e3c(plVar13);
  }
  local_108 = PTR_DAT_047d0878 + 0x10;
  local_100 = "";
  local_f0 = local_e4;
  local_f8 = PTR_DAT_047d1008 + 0x10;
  local_e8 = 0x80;
  FUN_007c450c(&local_f8);
  __dest = local_f0;
  local_f8 = PTR_DAT_047d1010 + 0x10;
  (**(code **)(local_108 + 0x18))(&local_108);
  pcVar6 = local_100;
  puVar4 = PTR_DAT_047d1018;
  if (__dest != local_100) {
    (**(code **)(local_108 + 0x18))(&local_108);
    lVar5 = 0;
    cVar2 = *puVar4;
    do {
      if (local_100[lVar5] == cVar2) goto LAB_007c2ed4;
      if (local_100[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c2ed4;
      }
      if (local_100[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c2ed4;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c2ed4:
    iVar1 = (int)lVar5;
    if (local_e8 <= (int)lVar5) {
      iVar1 = local_e8 + -1;
    }
    memcpy(__dest,pcVar6,(long)iVar1);
    __dest[iVar1] = cVar2;
  }
  local_f8 = PTR_DAT_047d1020 + 0x10;
  if ((int)param_3 < 1) {
    cVar2 = *puVar4;
  }
  else {
    FUN_007c450c(&local_f8);
    lVar5 = 0;
    cVar2 = *puVar4;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c2f78;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c2f78;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c2f78;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c2f78:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  (**(code **)(param_1[4] + 0x18))(param_1 + 4);
  FUN_007c45c4(&local_f8,"- name: \"%s\"\n",param_1[5]);
  FUN_007c71ec(param_2,&local_f8);
  *local_f0 = cVar2;
  if (0 < (int)param_3) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c30a8;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c30a8;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c30a8;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c30a8:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
  }
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  FUN_007c45c4(&local_f8,"  start_address: 0x%016llX\n",uVar3);
  FUN_007c71ec(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_007c45c4(&local_f8,"  end_address: 0x%016llX\n",uVar3);
    FUN_007c71ec(param_2,&local_f8);
    *local_f0 = cVar2;
    lVar5 = param_1[8];
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c3220;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c3220;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c3220;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c3220:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_007c45c4(&local_f8,"  end_address: 0x%016llX\n",uVar3);
    FUN_007c71ec(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c3344;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c3344;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c3344;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c3344:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    lVar5 = param_1[8];
  }
  if (lVar5 == 0) {
    puVar4 = &DAT_03c91092;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
    puVar4 = *(undefined **)(lVar5 + 0x28);
  }
  FUN_007c45c4(&local_f8,"  parent: %s\n",puVar4);
  FUN_007c71ec(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_007c45c4(&local_f8,"  direction: %s\n",pcVar6);
    FUN_007c71ec(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c34bc;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c34bc;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c34bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c34bc:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    pcVar6 = "Forward";
    if ((int)param_1[0x11] != 1) {
      pcVar6 = "Reverse";
    }
    FUN_007c45c4(&local_f8,"  direction: %s\n",pcVar6);
    FUN_007c71ec(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c35e8;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c35e8;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c35e8;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c35e8:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(uVar8 + uVar7);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_007c45c4(&local_f8,"  size: %llu\n",uVar3);
  FUN_007c71ec(param_2,&local_f8);
  *local_f0 = cVar2;
  if ((int)param_3 < 1) {
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_007c45c4(&local_f8,"  free_size: %llu\n",uVar3);
    FUN_007c71ec(param_2,&local_f8);
    pcVar6 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c3750;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c3750;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c3750;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c3750:
    uVar7 = (uint)lVar5;
    uVar8 = param_3;
    if ((int)(local_e8 - uVar7) <= (int)param_3) {
      uVar8 = local_e8 + ~uVar7;
    }
    if (0 < (int)uVar8) {
      uVar12 = (ulong)uVar8;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar7,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((uVar8 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar7;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    local_f0[(int)(uVar8 + uVar7)] = cVar2;
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    FUN_007c45c4(&local_f8,"  free_size: %llu\n",uVar3);
    FUN_007c71ec(param_2,&local_f8);
    *local_f0 = cVar2;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == cVar2) goto LAB_007c3874;
      if (local_f0[lVar5 + 1] == cVar2) {
        lVar5 = lVar5 + 1;
        goto LAB_007c3874;
      }
      if (local_f0[lVar5 + 2] == cVar2) {
        lVar5 = lVar5 + 2;
        goto LAB_007c3874;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007c3874:
    uVar8 = (uint)lVar5;
    if ((int)(local_e8 - uVar8) <= (int)param_3) {
      param_3 = local_e8 + ~uVar8;
    }
    if (0 < (int)param_3) {
      uVar12 = (ulong)param_3;
      uVar9 = uVar12 & 3;
      if (uVar12 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar10 = uVar11 + 4;
          builtin_strncpy(local_f0 + uVar11 + (long)(int)uVar8,"    ",4);
          uVar11 = uVar10;
        } while ((uVar12 & 0xfffffffc) != uVar10);
      }
      if ((param_3 & 3) != 0) {
        pcVar6 = local_f0 + uVar10 + (long)(int)uVar8;
        do {
          uVar9 = uVar9 - 1;
          *pcVar6 = ' ';
          pcVar6 = pcVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    pcVar6 = local_f0 + (int)(param_3 + uVar8);
  }
  *pcVar6 = cVar2;
  uVar3 = (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_007c45c4(&local_f8,"  max_allocatable_size: %llu\n",uVar3);
  FUN_007c71ec(param_2,&local_f8);
  if (plVar13 != (long *)0x0) {
    FUN_007c9e44(plVar13);
  }
  return;
}


