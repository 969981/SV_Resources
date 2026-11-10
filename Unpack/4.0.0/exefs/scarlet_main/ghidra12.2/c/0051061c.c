/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051061c; name: FUN_0051061c
 */


undefined8 FUN_0051061c(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  undefined2 local_68;
  undefined1 local_66;
  undefined2 local_50;
  undefined1 local_4e;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38._0_3_ = 0x5b02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  lVar1 = param_1 + 0x28;
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)&local_38 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_005106a8;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
      goto LAB_005106f8;
    }
    if (**(char **)(param_1 + 0x40) != '[') goto LAB_005106f8;
LAB_005106a8:
                    /* try { // try from 005106a8 to 005106af has its CatchHandler @ 005109c8 */
    FUN_004fcda0(lVar1);
    uVar5 = FUN_005109fc(param_1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    local_38 = CONCAT53(local_38._3_5_,0x5d02);
                    /* try { // try from 005106c8 to 005106d3 has its CatchHandler @ 005109c4 */
    uVar5 = FUN_0050d96c(param_1,&local_38);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
  }
  else {
LAB_005106f8:
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
                    /* try { // try from 00510700 to 0051070b has its CatchHandler @ 005109d0 */
    uVar5 = FUN_0050e12c(param_1,&local_38);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_38._3_5_ = (undefined5)(local_38 >> 0x18);
  local_38 = CONCAT53(local_38._3_5_,0x3a02);
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ':') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)&local_38 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_005107a4;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ':') {
LAB_005107a4:
                    /* try { // try from 005107a4 to 005107ab has its CatchHandler @ 005109c0 */
      FUN_004fcda0(lVar1);
      local_50 = 0x7b02;
      local_4e = 0;
      bVar4 = *(byte *)(param_1 + 0x30);
      uVar6 = (ulong)(bVar4 >> 1);
      uVar5 = uVar6;
      if ((bVar4 & 1) != 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar5 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '{') {
            pcVar7 = (char *)(param_1 + 0x32);
            pcVar8 = (char *)((ulong)&local_50 | 2);
            uVar9 = uVar6;
            do {
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_00510888;
              cVar2 = *pcVar8;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 == cVar2);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '{') goto LAB_00510888;
      }
      local_66 = 0;
      local_68 = 0x3c02;
      if (uVar5 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '<') {
            pcVar7 = (char *)(param_1 + 0x32);
            pcVar8 = (char *)((ulong)&local_68 | 2);
            do {
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_00510888;
              cVar2 = *pcVar8;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 == cVar2);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00510888;
      }
      uVar5 = FUN_0050e3c0(param_1);
      goto joined_r0x00510970;
    }
  }
LAB_00510888:
  uVar5 = FUN_0050ec10(param_1);
joined_r0x00510970:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_38._3_5_ = (undefined5)(local_38 >> 0x18);
  local_38 = CONCAT53(local_38._3_5_,0x3b02);
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar4 >> 1);
  uVar5 = uVar6;
  if ((bVar4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ';') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)&local_38 | 2);
        uVar9 = uVar6;
        do {
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0051090c;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ';') {
LAB_0051090c:
                    /* try { // try from 0051090c to 00510913 has its CatchHandler @ 005109bc */
      FUN_004fcda0(lVar1);
      return 1;
    }
  }
  local_4e = 0;
  local_50 = 0x2c02;
  if (uVar5 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == ',') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)&local_50 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_0051099c;
          cVar2 = *pcVar8;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == ',') {
LAB_0051099c:
                    /* try { // try from 0051099c to 005109a3 has its CatchHandler @ 005109b8 */
      FUN_004fcda0(lVar1);
    }
  }
  return 1;
}


