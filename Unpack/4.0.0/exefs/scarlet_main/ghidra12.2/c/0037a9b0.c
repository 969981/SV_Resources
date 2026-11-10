/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037a9b0; name: FUN_0037a9b0
 */


void FUN_0037a9b0(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((long)param_1 < 1) {
    param_2[2] = '\0';
    param_2[0] = '1';
    param_2[1] = 'n';
    return;
  }
  if ((long)param_1 < 1000000) {
    if ((long)param_1 < 1000) {
LAB_0037aa84:
      iVar2 = FUN_0038d290(param_1,param_2);
      (param_2 + iVar2)[0] = 'm';
      (param_2 + iVar2)[1] = '\0';
      return;
    }
    uVar1 = (uint)param_1;
    iVar2 = (int)((param_1 & 0xffffffff) / 1000) * -1000;
    uVar6 = (param_1 & 0xffffffff) / 1000;
    if ((long)param_1 < 100000) {
      iVar2 = (int)((param_1 & 0xffffffff) / 100) * -100;
      uVar6 = (param_1 & 0xffffffff) / 100;
    }
    lVar5 = 1000;
    if ((long)param_1 < 100000) {
      lVar5 = 100;
    }
    uVar3 = uVar1 + iVar2;
    if ((long)param_1 < 10000) {
      uVar3 = uVar1 + ((uVar1 & 0xffff) / 10) * -10 & 0xffff;
    }
    if ((long)param_1 < 10000) {
      lVar5 = 10;
      uVar6 = (ulong)(uVar1 & 0xffff) / 10;
    }
    param_1 = (uVar6 + (uVar3 != 0)) * lVar5;
    uVar6 = param_1 & 0xffffffff;
    puVar4 = (undefined1 *)(uVar6 / 1000);
    uVar1 = (uint)(uVar6 / 1000);
    if ((int)param_1 + uVar1 * -1000 != 0) goto LAB_0037aa84;
    if (999999 < param_1) {
      uVar1 = uVar1 & 0xffff;
      uVar7 = (ulong)uVar1 / 10;
      if (((int)(uVar6 / 1000) + (uVar1 / 10) * -10 & 0xffff) != 0) {
        uVar7 = uVar7 + 1;
      }
      puVar4 = (undefined1 *)(uVar7 * 10);
    }
    uVar3 = (uint)puVar4;
    uVar1 = uVar3 & 0xffff;
    uVar6 = (ulong)uVar1;
    if ((uVar3 + (uVar1 / 0xe10) * -0xe10 & 0xffff) == 0) goto LAB_0037ad0c;
    uVar6 = (ulong)uVar1;
    uVar1 = uVar3 + (uVar1 / 0x3c) * -0x3c & 0xffff;
    goto joined_r0x0037abbc;
  }
  if (0x174876e417 < (long)param_1) {
    param_2[8] = 'S';
    param_2[9] = '\0';
    *(undefined8 *)param_2 = s_99999999S_03c2bf79._0_8_;
    return;
  }
  puVar4 = (undefined1 *)(param_1 / 1000);
  lVar5 = 1000;
  if (param_1 % 1000 != 0) {
    puVar4 = puVar4 + 1;
  }
  if ((undefined1 *)0x3e7 < puVar4) {
    uVar1 = (uint)puVar4;
    if ((ulong)puVar4 >> 4 < 0x271) {
      uVar6 = (ulong)(uVar1 & 0xffff) / 10;
      if ((uVar1 + ((uVar1 & 0xffff) / 10) * -10 & 0xffff) != 0) {
        uVar6 = uVar6 + 1;
      }
      puVar4 = (undefined1 *)(uVar6 * 10);
    }
    else if ((ulong)puVar4 >> 5 < 0xc35) {
      uVar6 = ((ulong)puVar4 & 0xffffffff) / 100;
      lVar5 = 100;
LAB_0037ac48:
      if (uVar1 != (int)uVar6 * (int)lVar5) {
        uVar6 = uVar6 + 1;
      }
      puVar4 = (undefined1 *)(uVar6 * lVar5);
    }
    else {
      if (puVar4 < (undefined1 *)0xf4240) {
        uVar6 = ((ulong)puVar4 & 0xffffffff) / 1000;
      }
      else {
        if (puVar4 < &LAB_00989680) {
          uVar6 = ((ulong)puVar4 & 0xffffffff) / 10000;
          lVar5 = 10000;
          goto LAB_0037ac48;
        }
        lVar5 = 100000;
        uVar6 = (ulong)(uVar1 >> 5) / 0xc35;
      }
      if (uVar1 != (int)uVar6 * (int)lVar5) {
        uVar6 = uVar6 + 1;
      }
      puVar4 = (undefined1 *)(uVar6 * lVar5);
    }
  }
  if (((long)puVar4 * 0xfedcba987654321 + 0x91a2b3c4d5e6f0U >> 4 |
      (long)puVar4 * 0xfedcba987654321 << 0x3c) < 0x123456789abcdf) {
    uVar6 = (ulong)puVar4 & 0xffffffff;
LAB_0037ad0c:
    iVar2 = FUN_0038d290(uVar6 / 0xe10,param_2);
    (param_2 + iVar2)[0] = 'H';
    (param_2 + iVar2)[1] = '\0';
    return;
  }
  uVar6 = (ulong)puVar4 & 0xffffffff;
  uVar1 = (int)puVar4 + (int)(uVar6 / 0x3c) * -0x3c;
joined_r0x0037abbc:
  if (uVar1 == 0) {
    iVar2 = FUN_0038d290(uVar6 / 0x3c,param_2);
    (param_2 + iVar2)[0] = 'M';
    (param_2 + iVar2)[1] = '\0';
    return;
  }
  iVar2 = FUN_0038d290(puVar4,param_2);
  (param_2 + iVar2)[0] = 'S';
  (param_2 + iVar2)[1] = '\0';
  return;
}


