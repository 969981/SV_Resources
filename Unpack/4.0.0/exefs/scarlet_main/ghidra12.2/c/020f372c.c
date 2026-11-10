/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f372c; name: FUN_020f372c
 */


void FUN_020f372c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  char acStack_30b0 [48];
  char acStack_3080 [24];
  char acStack_3068 [24];
  char local_3050 [8];
  undefined8 local_3048 [2];
  char local_3038 [8];
  undefined8 local_3030 [2];
  char local_3020 [24];
  undefined1 local_3008;
  undefined1 local_2ff0;
  undefined1 local_2fd8;
  undefined1 local_2fc0;
  undefined1 local_2fa8;
  undefined1 local_2f90;
  undefined1 local_2f78;
  undefined1 local_2f60;
  undefined1 local_2f48;
  undefined1 local_2f30;
  undefined1 local_2f18;
  undefined1 local_2f00;
  undefined1 local_2ee8;
  undefined1 local_2ed0;
  undefined1 local_2ea0;
  undefined1 local_2e70;
  undefined1 local_2e40;
  undefined1 local_2e10;
  undefined1 local_2de0;
  undefined1 local_2db0;
  undefined1 local_2d80;
  undefined1 local_2d50;
  undefined1 local_2d20;
  undefined1 local_2cf0;
  undefined1 local_2cc0;
  undefined1 local_2c90;
  undefined1 local_2c60;
  undefined1 local_2c30;
  undefined1 local_2c00;
  undefined1 local_2bd0;
  undefined1 local_2ba0;
  undefined1 local_2b70;
  undefined1 local_2b40;
  undefined1 local_2b10;
  undefined1 local_2ae0;
  undefined1 local_2ab0;
  undefined1 local_2a80;
  undefined1 local_2a50;
  undefined1 local_2a20;
  undefined1 local_29f0;
  undefined1 local_29c0;
  undefined1 local_2990;
  undefined1 local_2960;
  undefined1 local_2930;
  undefined1 local_2900;
  undefined1 local_28d0;
  undefined1 local_28a0;
  undefined1 local_2870;
  undefined1 local_2840;
  undefined1 local_2810;
  undefined1 local_27e0;
  undefined1 local_27b0;
  undefined1 local_2780;
  undefined1 local_2750;
  undefined1 local_2720;
  undefined1 local_26f0;
  undefined1 local_26c0;
  undefined1 local_2690;
  undefined1 local_2660;
  undefined1 local_2630;
  undefined1 local_2600;
  undefined1 local_25d0;
  undefined1 local_25a0;
  undefined1 local_2570;
  undefined1 local_2540;
  undefined1 local_2510;
  undefined1 local_24e0;
  undefined1 local_24b0;
  undefined1 local_2480;
  undefined1 auStack_247f [9263];
  
  pcVar5 = local_3050;
  do {
    *pcVar5 = 0;
    pcVar5[0x18] = 0;
    pcVar5[0x30] = 0;
    pcVar5[0x48] = 0;
    pcVar5[0x60] = 0;
    pcVar5[0x78] = 0;
    pcVar5[0x90] = 0;
    pcVar5[0xa8] = 0;
    pcVar5 = pcVar5 + 0xc0;
  } while (pcVar5 != auStack_247f + 0x242f);
  lVar6 = 0;
  do {
    if (*(char *)((long)param_1 + lVar6 + 0x40) == '\0') {
      if (local_3050[lVar6] != '\0') {
        uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
        *(undefined8 *)((long)param_1 + lVar6 + 0x48) = *(undefined8 *)((long)local_3048 + lVar6);
        *(undefined8 *)((long)param_1 + lVar6 + 0x50) = uVar3;
        *(undefined1 *)((long)param_1 + lVar6 + 0x40) = 1;
      }
    }
    else if (local_3050[lVar6] == '\0') {
      *(undefined1 *)((long)param_1 + lVar6 + 0x40) = 0;
    }
    else {
      uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
      *(undefined8 *)((long)param_1 + lVar6 + 0x48) = *(undefined8 *)((long)local_3048 + lVar6);
      *(undefined8 *)((long)param_1 + lVar6 + 0x50) = uVar3;
    }
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0x3000);
  lVar6 = 0x3000;
  do {
    if (acStack_3068[lVar6] != '\0') {
      acStack_3068[lVar6] = '\0';
    }
    if (acStack_3080[lVar6] != '\0') {
      acStack_3080[lVar6] = '\0';
    }
    lVar6 = lVar6 + -0x30;
  } while (lVar6 != 0);
  local_3050[0] = '\0';
  cVar7 = '\0';
  local_3038[0] = '\0';
  local_3020[0] = '\0';
  local_3008 = 0;
  local_2ff0 = 0;
  local_2fd8 = 0;
  local_2fc0 = 0;
  local_2fa8 = 0;
  local_2f90 = 0;
  local_2f78 = 0;
  local_2f60 = 0;
  local_2f48 = 0;
  local_2f30 = 0;
  local_2f18 = 0;
  local_2f00 = 0;
  local_2ee8 = 0;
  lVar6 = 0;
  while( true ) {
    if (*(char *)((long)param_1 + lVar6 + 0x3040) == '\0') {
      if (cVar7 != '\0') {
        uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
        puVar1 = (undefined8 *)((long)param_1 + lVar6 + 0x3048);
        *puVar1 = *(undefined8 *)((long)local_3048 + lVar6);
        puVar1[1] = uVar3;
        *(undefined1 *)((long)param_1 + lVar6 + 0x3040) = 1;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined1 *)((long)param_1 + lVar6 + 0x3040) = 0;
    }
    else {
      uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
      *(undefined8 *)((long)param_1 + lVar6 + 0x3048) = *(undefined8 *)((long)local_3048 + lVar6);
      *(undefined8 *)((long)param_1 + lVar6 + 0x3050) = uVar3;
    }
    if (lVar6 == 0x168) break;
    cVar7 = local_3038[lVar6];
    lVar6 = lVar6 + 0x18;
  }
  local_3050[0] = '\0';
  local_3020[0] = '\0';
  cVar7 = '\0';
  local_2ff0 = 0;
  local_2fc0 = 0;
  local_2f90 = 0;
  local_2f60 = 0;
  local_2f30 = 0;
  local_2f00 = 0;
  local_2ed0 = 0;
  local_2ea0 = 0;
  local_2e70 = 0;
  local_2e40 = 0;
  local_2e10 = 0;
  local_2de0 = 0;
  local_2db0 = 0;
  local_2d80 = 0;
  local_2d50 = 0;
  local_2d20 = 0;
  local_2cf0 = 0;
  local_2cc0 = 0;
  local_2c90 = 0;
  local_2c60 = 0;
  local_2c30 = 0;
  local_2c00 = 0;
  local_2bd0 = 0;
  local_2ba0 = 0;
  local_2b70 = 0;
  local_2b40 = 0;
  local_2b10 = 0;
  local_2ae0 = 0;
  local_2ab0 = 0;
  local_2a80 = 0;
  local_2a50 = 0;
  local_2a20 = 0;
  local_29f0 = 0;
  local_29c0 = 0;
  local_2990 = 0;
  local_2960 = 0;
  local_2930 = 0;
  local_2900 = 0;
  local_28d0 = 0;
  local_28a0 = 0;
  local_2870 = 0;
  local_2840 = 0;
  local_2810 = 0;
  local_27e0 = 0;
  local_27b0 = 0;
  local_2780 = 0;
  lVar6 = 0;
  while( true ) {
    if (*(char *)((long)param_1 + lVar6 + 0x31c0) == '\0') {
      if (cVar7 != '\0') {
        memcpy((void *)((long)param_1 + lVar6 + 0x31c8),(void *)((long)local_3048 + lVar6),0x28);
        *(undefined1 *)((long)param_1 + lVar6 + 0x31c0) = 1;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined1 *)((long)param_1 + lVar6 + 0x31c0) = 0;
    }
    else {
      *(undefined8 *)((long)param_1 + lVar6 + 0x31c8) = *(undefined8 *)((long)local_3048 + lVar6);
      uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
      uVar4 = *(undefined8 *)(local_3038 + lVar6);
      uVar2 = *(undefined8 *)((long)local_3030 + lVar6);
      *(undefined8 *)((long)param_1 + lVar6 + 0x31e8) =
           *(undefined8 *)((long)local_3030 + lVar6 + 8);
      *(undefined8 *)((long)param_1 + lVar6 + 0x31e0) = uVar2;
      *(undefined8 *)((long)param_1 + lVar6 + 0x31d8) = uVar4;
      *(undefined8 *)((long)param_1 + lVar6 + 0x31d0) = uVar3;
    }
    if (lVar6 == 0x8d0) break;
    cVar7 = local_3020[lVar6];
    lVar6 = lVar6 + 0x30;
  }
  FUN_020f34e8(local_3050);
  lVar6 = 0;
  local_3050[0] = '\0';
  local_3020[0] = '\0';
  local_2ff0 = 0;
  local_2fc0 = 0;
  local_2f90 = 0;
  local_2f60 = 0;
  local_2f30 = 0;
  local_2f00 = 0;
  local_2ed0 = 0;
  local_2ea0 = 0;
  local_2e70 = 0;
  local_2e40 = 0;
  local_2e10 = 0;
  local_2de0 = 0;
  local_2db0 = 0;
  local_2d80 = 0;
  local_2d50 = 0;
  local_2d20 = 0;
  local_2cf0 = 0;
  local_2cc0 = 0;
  local_2c90 = 0;
  local_2c60 = 0;
  local_2c30 = 0;
  local_2c00 = 0;
  local_2bd0 = 0;
  local_2ba0 = 0;
  local_2b70 = 0;
  local_2b40 = 0;
  local_2b10 = 0;
  local_2ae0 = 0;
  local_2ab0 = 0;
  local_2a80 = 0;
  local_2a50 = 0;
  local_2a20 = 0;
  local_29f0 = 0;
  local_29c0 = 0;
  local_2990 = 0;
  local_2960 = 0;
  local_2930 = 0;
  local_2900 = 0;
  local_28d0 = 0;
  local_28a0 = 0;
  local_2870 = 0;
  local_2840 = 0;
  local_2810 = 0;
  local_27e0 = 0;
  local_27b0 = 0;
  local_2780 = 0;
  local_2750 = 0;
  local_2720 = 0;
  local_26f0 = 0;
  local_26c0 = 0;
  local_2690 = 0;
  local_2660 = 0;
  local_2630 = 0;
  local_2600 = 0;
  local_25d0 = 0;
  local_25a0 = 0;
  local_2570 = 0;
  local_2540 = 0;
  local_2510 = 0;
  local_24e0 = 0;
  local_24b0 = 0;
  local_2480 = 0;
  do {
    if (*(char *)((long)param_1 + lVar6 + 0x3ac0) == '\0') {
      if (local_3050[lVar6] != '\0') {
        memcpy((void *)((long)param_1 + lVar6 + 0x3ac8),(void *)((long)local_3048 + lVar6),0x28);
        *(undefined1 *)((long)param_1 + lVar6 + 0x3ac0) = 1;
      }
    }
    else if (local_3050[lVar6] == '\0') {
      *(undefined1 *)((long)param_1 + lVar6 + 0x3ac0) = 0;
    }
    else {
      *(undefined8 *)((long)param_1 + lVar6 + 0x3ac8) = *(undefined8 *)((long)local_3048 + lVar6);
      uVar3 = *(undefined8 *)((long)local_3048 + lVar6 + 8);
      uVar4 = *(undefined8 *)(local_3038 + lVar6);
      uVar2 = *(undefined8 *)((long)local_3030 + lVar6);
      *(undefined8 *)((long)param_1 + lVar6 + 0x3ae8) =
           *(undefined8 *)((long)local_3030 + lVar6 + 8);
      *(undefined8 *)((long)param_1 + lVar6 + 0x3ae0) = uVar2;
      *(undefined8 *)((long)param_1 + lVar6 + 0x3ad8) = uVar4;
      *(undefined8 *)((long)param_1 + lVar6 + 0x3ad0) = uVar3;
    }
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0xc00);
  lVar6 = 0xc00;
  do {
    if (acStack_3080[lVar6] != '\0') {
      acStack_3080[lVar6] = '\0';
    }
    if (acStack_30b0[lVar6] != '\0') {
      acStack_30b0[lVar6] = '\0';
    }
    lVar6 = lVar6 + -0x60;
  } while (lVar6 != 0);
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


