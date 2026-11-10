/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e23d0; name: FUN_003e23d0
 */


undefined4
FUN_003e23d0(uint *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,uint param_5,
            uint param_6,char param_7,undefined1 *param_8)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  uint *puVar17;
  uint uVar18;
  byte *local_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  char local_94 [4];
  byte local_90 [4];
  char local_8c [4];
  byte *local_88;
  uint local_7c;
  byte *local_78;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  byte *local_68;
  
  local_94[0] = '\0';
  pbStack_b8 = (byte *)0x0;
  local_c0 = (byte *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (param_1 == (uint *)0x0) {
    uVar5 = 0x7d;
    uVar6 = 0x2a0;
    goto LAB_003e24a8;
  }
  pbVar14 = (byte *)(ulong)param_6;
  if (*param_4 == '\x05') {
    local_7c = param_5;
    if (param_5 == 0xfffffffc) {
      param_5 = 0xffffffff;
      goto LAB_003e2488;
    }
    param_5 = 0xffffffff;
  }
  else {
    local_7c = *(uint *)(param_4 + 8);
    if (local_7c == 0xfffffffc) {
      if (-1 < (int)param_5) {
        uVar6 = 0x2ae;
        uVar5 = 0x7f;
        goto LAB_003e24a8;
      }
LAB_003e2488:
      if (param_7 != '\0') {
        uVar6 = 0x2b3;
        uVar5 = 0x7e;
        goto LAB_003e24a8;
      }
      local_a0 = (byte *)*param_2;
      iVar3 = FUN_003e2b30(0,&local_7c,&local_68,0,0,&local_a0,param_3,0xffffffff,0,0,param_8);
      if (iVar3 == 0) {
        uVar5 = 0x3a;
        uVar6 = 0x2ba;
        goto LAB_003e24a8;
      }
      if ((char)local_68 == '\0') {
      }
      else {
        local_7c = 0xfffffffd;
      }
    }
  }
  uVar18 = local_7c;
  if (param_5 != 0xffffffff) {
    uVar18 = param_5;
  }
  local_a0 = (byte *)*param_2;
  uVar4 = 0;
  if (param_5 != 0xffffffff) {
    uVar4 = param_6;
  }
  iVar3 = FUN_003e2b30(&local_88,0,0,local_90,local_8c,&local_a0,param_3,uVar18,uVar4,param_7,
                       param_8);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 0) {
    FUN_004806c0(0xd,0x6c,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x2c9);
    return 0;
  }
  if (1 < local_7c - 0x10) {
    if (local_7c == 0xfffffffd) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_003e25e0;
    }
    if (local_8c[0] == '\0') {
      pbVar11 = local_a0;
      pbVar14 = local_88;
      goto LAB_003e27bc;
    }
    if ((local_7c < 0xb) && ((1 << (ulong)(local_7c & 0x1f) & 0x466U) != 0)) {
      uVar5 = 0xc3;
      uVar6 = 0x2ed;
      goto LAB_003e24a8;
    }
    local_94[0] = '\x01';
    iVar3 = FUN_003e3090(&local_c0,&local_a0,local_88,local_90[0],0);
    pbVar14 = local_c0;
    if (iVar3 != 0) {
      lVar8 = FUN_003f3310(&local_c0,local_c0 + 1);
      if (lVar8 == 0) {
        FUN_004806c0(0xd,0x6c,0x41,"external/openssl/crypto/asn1/tasn_dec.c",0x2ff);
        goto LAB_003e2ac4;
      }
      pbStack_b8[(long)pbVar14] = 0;
      lVar8 = *(long *)(param_4 + 0x20);
      pbVar11 = pbStack_b8;
      uVar18 = local_7c;
      goto joined_r0x003e27a8;
    }
    goto LAB_003e2ac4;
  }
  if (local_8c[0] == '\0') {
    uVar5 = 0x9c;
    uVar6 = 0x2db;
LAB_003e24a8:
    FUN_004806c0(0xd,0x6c,uVar5,"external/openssl/crypto/asn1/tasn_dec.c",uVar6);
    return 0;
  }
LAB_003e25e0:
  pbVar11 = (byte *)*param_2;
  uVar18 = (uint)local_90[0];
  if (local_90[0] != 0) {
    if (0 < (long)local_88) {
      iVar3 = 1;
      pbVar7 = local_a0;
      do {
        while( true ) {
          iVar3 = iVar3 + 1;
          pbVar13 = local_88;
          pbVar16 = pbVar7;
          while (((pbVar13 != (byte *)0x1 && (*pbVar16 == 0)) && (pbVar16[1] == 0))) {
            pbVar7 = pbVar16 + 2;
            if (iVar3 == 2) goto LAB_003e2794;
            iVar3 = iVar3 + -1;
            pbVar2 = pbVar13 + -2;
            bVar1 = (long)pbVar13 < 2;
            pbVar13 = pbVar2;
            pbVar16 = pbVar7;
            if (pbVar2 == (byte *)0x0 || bVar1) goto LAB_003e26f4;
          }
          local_78 = pbVar16;
          uVar4 = FUN_003debf0(&local_78,&local_68,auStack_6c,auStack_70,pbVar13);
          if ((uVar4 >> 7 & 1) == 0) {
            uVar18 = uVar4 & 1;
            if ((uVar4 & 1) != 0) {
              local_68 = pbVar16 + ((long)pbVar13 - (long)local_78);
            }
            bVar1 = false;
            pbVar7 = local_78;
            pbVar14 = local_68;
          }
          else {
            FUN_004806c0(0xd,0x68,0x66,"external/openssl/crypto/asn1/tasn_dec.c",0x471);
            bVar1 = true;
            pbVar7 = pbVar16;
          }
          if (bVar1) {
            FUN_004806c0(0xd,0xbe,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x3c5);
            goto LAB_003e2ac4;
          }
          if (uVar18 == 0) break;
          if (iVar3 == 0) {
            FUN_004806c0(0xd,0xbe,0x3a,"external/openssl/crypto/asn1/tasn_dec.c",0x3ca);
            goto LAB_003e2ac4;
          }
          local_88 = pbVar16 + ((long)pbVar13 - (long)pbVar7);
          if ((long)local_88 < 1) goto LAB_003e26f0;
        }
        iVar3 = iVar3 + -1;
        pbVar7 = pbVar7 + (long)pbVar14;
        local_88 = pbVar16 + ((long)pbVar13 - (long)pbVar7);
      } while (0 < (long)local_88);
LAB_003e26f0:
      if (iVar3 == 0) {
LAB_003e2794:
        pbVar14 = pbVar7 + -(long)pbVar11;
        lVar8 = *(long *)(param_4 + 0x20);
        local_a0 = pbVar7;
        uVar18 = local_7c;
        goto joined_r0x003e27a8;
      }
    }
LAB_003e26f4:
    FUN_004806c0(0xd,0xbe,0x89,"external/openssl/crypto/asn1/tasn_dec.c",0x3d4);
    goto LAB_003e2ac4;
  }
  pbVar14 = local_a0 + ((long)local_88 - (long)pbVar11);
LAB_003e27bc:
  local_a0 = local_a0 + (long)local_88;
  lVar8 = *(long *)(param_4 + 0x20);
  uVar18 = local_7c;
joined_r0x003e27a8:
  local_7c = uVar18;
  local_68 = pbVar11;
  if ((lVar8 != 0) && (*(code **)(lVar8 + 0x28) != (code *)0x0)) {
    iVar3 = (**(code **)(lVar8 + 0x28))
                      (param_1,pbVar11,(ulong)pbVar14 & 0xffffffff,uVar18,local_94,param_4);
    if (iVar3 == 0) goto LAB_003e2ac4;
    goto LAB_003e2a88;
  }
  if (*(long *)(param_4 + 8) == -4) {
    puVar10 = *(uint **)param_1;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)FUN_003e50d0();
      if (puVar10 == (uint *)0x0) {
        FUN_003e50e0();
        goto LAB_003e2ac4;
      }
      *(uint **)param_1 = puVar10;
    }
    if (*puVar10 != uVar18) {
      FUN_003de3c0(puVar10,uVar18,0);
    }
    puVar9 = puVar10 + 2;
    puVar17 = param_1;
  }
  else {
    puVar10 = (uint *)0x0;
    puVar17 = (uint *)0x0;
    puVar9 = param_1;
  }
  iVar3 = (int)pbVar14;
  switch(uVar18) {
  case 1:
    if (iVar3 == 1) {
      *puVar9 = (uint)*pbVar11;
      goto LAB_003e2a88;
    }
    uVar5 = 0x6a;
    uVar6 = 0x345;
    break;
  case 2:
  case 10:
    lVar8 = FUN_003e08c0(puVar9,&local_68,(long)iVar3);
    if (lVar8 != 0) {
      *(uint *)(*(long *)puVar9 + 4) = *(uint *)(*(long *)puVar9 + 4) & 0x100 | uVar18;
LAB_003e2a78:
      if ((uVar18 == 5) && (puVar10 != (uint *)0x0)) {
        puVar10[2] = 0;
        puVar10[3] = 0;
      }
      goto LAB_003e2a88;
    }
    goto LAB_003e2ab4;
  case 3:
    lVar8 = FUN_003e3520(puVar9,&local_68,(long)iVar3);
    goto joined_r0x003e2950;
  default:
switchD_003e28c4_caseD_4:
    piVar15 = *(int **)puVar9;
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)FUN_003df380(uVar18);
      if (piVar15 == (int *)0x0) {
        uVar5 = 0x41;
        uVar6 = 0x37b;
        break;
      }
      *(int **)puVar9 = piVar15;
    }
    else {
      piVar15[1] = uVar18;
    }
    if (local_94[0] == '\0') {
      iVar3 = FUN_003df070(piVar15,pbVar11,(ulong)pbVar14 & 0xffffffff);
      if (iVar3 == 0) {
        FUN_004806c0(0xd,0xcc,0x41,"external/openssl/crypto/asn1/tasn_dec.c",0x38b);
        FUN_003df2e0(piVar15);
        puVar9[0] = 0;
        puVar9[1] = 0;
        goto LAB_003e2ab4;
      }
    }
    else {
      FUN_00452f80(*(undefined8 *)(piVar15 + 2),"external/openssl/crypto/asn1/tasn_dec.c",0x385);
      *(byte **)(piVar15 + 2) = pbVar11;
      *piVar15 = iVar3;
      local_94[0] = '\0';
    }
    goto LAB_003e2a88;
  case 5:
    if (iVar3 == 0) {
      puVar9[0] = 1;
      puVar9[1] = 0;
      goto LAB_003e2a78;
    }
    uVar5 = 0x90;
    uVar6 = 0x33d;
    break;
  case 6:
    lVar8 = FUN_003dfc30(puVar9,&local_68,(long)iVar3);
joined_r0x003e2950:
    if (lVar8 != 0) {
LAB_003e2a88:
      *param_2 = local_a0;
      uVar12 = 1;
      goto LAB_003e2ac8;
    }
    goto LAB_003e2ab4;
  case 0x1c:
    if (((ulong)pbVar14 & 3) == 0) goto switchD_003e28c4_caseD_4;
    uVar5 = 0xd7;
    uVar6 = 0x374;
    break;
  case 0x1e:
    if (((ulong)pbVar14 & 1) == 0) goto switchD_003e28c4_caseD_4;
    uVar5 = 0xd6;
    uVar6 = 0x36f;
  }
  FUN_004806c0(0xd,0xcc,uVar5,"external/openssl/crypto/asn1/tasn_dec.c",uVar6);
LAB_003e2ab4:
  FUN_003e50e0(puVar10);
  if (puVar17 != (uint *)0x0) {
    puVar17[0] = 0;
    puVar17[1] = 0;
  }
LAB_003e2ac4:
  uVar12 = 0;
LAB_003e2ac8:
  if (local_94[0] != '\0') {
    FUN_00452f80(pbStack_b8,"external/openssl/crypto/asn1/tasn_dec.c",0x313);
  }
  return uVar12;
}


