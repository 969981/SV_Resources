/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0044ead0; name: FUN_0044ead0
 */


uint * FUN_0044ead0(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  char **ppcVar16;
  undefined4 *puVar17;
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [4];
  ulong local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined8 local_268;
  uint local_260;
  int local_25c;
  char *local_258 [3];
  undefined4 local_240 [116];
  uint local_70;
  void *local_68;
  undefined8 local_60;
  char *local_58;
  void *local_48;
  
  local_48 = (void *)0x0;
  local_280 = 0;
  local_268 = 0xffffffffffffffff;
  local_25c = 1;
  local_70 = 0;
  iVar3 = FUN_003f4860(param_1,0x2c,1,&LAB_0044f480,&local_268);
  iVar4 = local_25c;
  if (iVar3 != 0) {
    uVar14 = 0xc2;
    goto LAB_0044eb30;
  }
  if ((local_260 & 0xfffffffe) == 0x10) {
    if (param_2 == 0) {
      uVar14 = 0xc0;
LAB_0044eb30:
      *param_4 = uVar14;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar14 = 0xb5;
      goto LAB_0044eb30;
    }
    local_68 = (void *)0x0;
    lVar6 = FUN_0047dcc0();
    if (lVar6 == 0) {
      puVar9 = (uint *)0x0;
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (local_258[0] == (char *)0x0) {
LAB_0044ec90:
        if (local_260 == 0x11) {
          iVar4 = FUN_003e5110();
        }
        else {
          iVar4 = FUN_003e5100(lVar6,&local_68);
        }
        if (-1 < iVar4) {
          puVar9 = (uint *)FUN_003e50d0();
          if (puVar9 != (uint *)0x0) {
            lVar8 = FUN_003df380(local_260);
            *(long *)(puVar9 + 2) = lVar8;
            if (lVar8 != 0) {
              *puVar9 = local_260;
              *(void **)(lVar8 + 8) = local_68;
              **(int **)(puVar9 + 2) = iVar4;
              local_68 = (void *)0x0;
            }
          }
          goto LAB_0044ee4c;
        }
      }
      else {
        lVar7 = FUN_00491c40(param_2,local_258[0]);
        if (lVar7 != 0) {
          iVar4 = FUN_0047e430(lVar7);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              lVar8 = FUN_0047e450(lVar7,iVar4);
              lVar8 = FUN_0044ead0(*(undefined8 *)(lVar8 + 0x10),param_2,param_3 + 1,param_4);
              if ((lVar8 == 0) || (iVar3 = FUN_0047e2f0(lVar6,lVar8), iVar3 == 0))
              goto LAB_0044ee48;
              iVar4 = iVar4 + 1;
              iVar3 = FUN_0047e430(lVar7);
            } while (iVar4 < iVar3);
          }
          goto LAB_0044ec90;
        }
      }
LAB_0044ee48:
      puVar9 = (uint *)0x0;
    }
LAB_0044ee4c:
    FUN_00452f80(local_68,"external/openssl/crypto/asn1/asn1_gen.c",0x1ca);
    FUN_0047e3b0(lVar6,PTR_FUN_047cd208);
    FUN_00491c90(param_2,lVar7);
  }
  else {
    puVar9 = (uint *)FUN_003e50d0();
    if (puVar9 == (uint *)0x0) {
      FUN_004806c0(0xd,0xb3,0x41,"external/openssl/crypto/asn1/asn1_gen.c",0x24b);
      goto LAB_0044f0f4;
    }
    pcVar1 = "";
    if (local_258[0] != (char *)0x0) {
      pcVar1 = local_258[0];
    }
    switch(local_260) {
    case 1:
      if (iVar4 == 1) {
        local_60 = 0;
        local_68 = (void *)0x0;
        local_58 = pcVar1;
        iVar4 = FUN_0049aef0(&local_68,puVar9 + 2);
        if (iVar4 != 0) goto LAB_0044ece4;
        uVar12 = 0xb0;
        uVar13 = 0x264;
        break;
      }
      FUN_004806c0(0xd,0xb3,0xbe,"external/openssl/crypto/asn1/asn1_gen.c",0x25d);
      goto LAB_0044f0e8;
    case 2:
    case 10:
      if (iVar4 != 1) {
        FUN_004806c0(0xd,0xb3,0xb9,"external/openssl/crypto/asn1/asn1_gen.c",0x26c);
        goto LAB_0044f0e8;
      }
      lVar6 = FUN_0049aca0(0,pcVar1);
      *(long *)(puVar9 + 2) = lVar6;
      if (lVar6 != 0) goto LAB_0044ece4;
      uVar12 = 0xb4;
      uVar13 = 0x271;
      break;
    case 3:
    case 4:
      lVar6 = FUN_003df280();
      *(long *)(puVar9 + 2) = lVar6;
      if (lVar6 == 0) {
        FUN_004806c0(0xd,0xb3,0x41,"external/openssl/crypto/asn1/asn1_gen.c",0x2b4);
        goto LAB_0044f0e8;
      }
      if (iVar4 == 1) {
        FUN_003df070(lVar6,pcVar1,0xffffffff);
LAB_0044efec:
        if (local_260 == 3) {
          *(ulong *)(*(long *)(puVar9 + 2) + 0x10) =
               *(ulong *)(*(long *)(puVar9 + 2) + 0x10) & 0xfffffffffffffff0;
          *(ulong *)(*(long *)(puVar9 + 2) + 0x10) = *(ulong *)(*(long *)(puVar9 + 2) + 0x10) | 8;
        }
        goto LAB_0044ece4;
      }
      if (iVar4 == 3) {
        lVar6 = FUN_0045aec0(pcVar1,&local_68);
        if (lVar6 != 0) {
          *(long *)(*(long *)(puVar9 + 2) + 8) = lVar6;
          **(undefined4 **)(puVar9 + 2) = (int)local_68;
          *(uint *)(*(long *)(puVar9 + 2) + 4) = local_260;
          goto LAB_0044efec;
        }
        uVar12 = 0xb2;
        uVar13 = 0x2ba;
      }
      else {
        if ((local_260 != 3) || (iVar4 != 4)) {
          FUN_004806c0(0xd,0xb3,0xaf,"external/openssl/crypto/asn1/asn1_gen.c",0x2cc);
          goto LAB_0044f0e8;
        }
        iVar4 = FUN_003f4860(pcVar1,0x2c,1,&LAB_0044fa60);
        if (iVar4 != 0) goto LAB_0044ece4;
        uVar12 = 0xbc;
        uVar13 = 0x2c6;
      }
      break;
    case 5:
      if (*pcVar1 != '\0') {
        FUN_004806c0(0xd,0xb3,0xb6,"external/openssl/crypto/asn1/asn1_gen.c",0x256);
        goto LAB_0044f0e8;
      }
LAB_0044ece4:
      *puVar9 = local_260;
      goto LAB_0044f0f4;
    case 6:
      if (iVar4 != 1) {
        FUN_004806c0(0xd,0xb3,0xbf,"external/openssl/crypto/asn1/asn1_gen.c",0x278);
        goto LAB_0044f0e8;
      }
      lVar6 = FUN_0045c010(pcVar1,0);
      *(long *)(puVar9 + 2) = lVar6;
      if (lVar6 != 0) goto LAB_0044ece4;
      uVar12 = 0xb7;
      uVar13 = 0x27c;
      break;
    default:
      uVar12 = 0xc4;
      uVar13 = 0x2d9;
      break;
    case 0xc:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
      if (iVar4 == 1) {
        uVar12 = 0x1001;
      }
      else {
        if (iVar4 != 2) {
          FUN_004806c0(0xd,0xb3,0xb1,"external/openssl/crypto/asn1/asn1_gen.c",0x2a5);
          goto LAB_0044f0e8;
        }
        uVar12 = 0x1000;
      }
      uVar13 = FUN_003e1860(local_260);
      iVar4 = FUN_003ddaf0(puVar9 + 2,pcVar1,0xffffffff,uVar12,uVar13);
      if (0 < iVar4) goto LAB_0044ece4;
      uVar12 = 0x41;
      uVar13 = 0x2ab;
      break;
    case 0x17:
    case 0x18:
      if (iVar4 != 1) {
        FUN_004806c0(0xd,0xb3,0xc1,"external/openssl/crypto/asn1/asn1_gen.c",0x284);
        goto LAB_0044f0e8;
      }
      lVar6 = FUN_003df280();
      *(long *)(puVar9 + 2) = lVar6;
      if (lVar6 == 0) {
        uVar12 = 0x41;
        uVar13 = 0x288;
      }
      else {
        iVar4 = FUN_003df070(lVar6,pcVar1,0xffffffff);
        if (iVar4 == 0) {
          uVar12 = 0x41;
          uVar13 = 0x28c;
        }
        else {
          *(uint *)(*(long *)(puVar9 + 2) + 4) = local_260;
          iVar4 = FUN_003fa580(*(undefined8 *)(puVar9 + 2));
          if (iVar4 != 0) goto LAB_0044ece4;
          uVar12 = 0xb8;
          uVar13 = 0x291;
        }
      }
    }
    FUN_004806c0(0xd,0xb3,uVar12,"external/openssl/crypto/asn1/asn1_gen.c",uVar13);
    FUN_00481380(2,"string=",pcVar1);
LAB_0044f0e8:
    FUN_003e50e0(puVar9);
    puVar9 = (uint *)0x0;
  }
LAB_0044f0f4:
  if (puVar9 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((uint)local_268 == -1) && (local_70 == 0)) {
    return puVar9;
  }
  iVar4 = FUN_003e50c0(puVar9,&local_48);
  FUN_003e50e0(puVar9);
  local_68 = local_48;
  if ((uint)local_268 == -1) {
    uVar5 = 0;
    iVar3 = iVar4;
  }
  else {
    uVar5 = FUN_003debf0(&local_68,&local_280,auStack_284,auStack_288,(long)iVar4);
    if ((uVar5 >> 7 & 1) != 0) {
      puVar9 = (uint *)0x0;
      puVar10 = (undefined1 *)0x0;
      goto LAB_0044f2d8;
    }
    iVar4 = iVar4 + ((int)local_48 - (int)local_68);
    if ((uVar5 & 1) == 0) {
      uVar11 = local_280 & 0xffffffff;
      uVar5 = uVar5 & 0x20;
    }
    else {
      uVar11 = 0;
      local_280 = 0;
      uVar5 = 2;
    }
    iVar3 = FUN_003def90(0,uVar11,local_268 & 0xffffffff);
  }
  if (0 < (int)local_70) {
    iVar15 = 0;
    ppcVar16 = local_258 + (ulong)local_70 * 3;
    do {
      pcVar1 = (char *)((long)*(int *)((long)ppcVar16 + -4) + (long)iVar3);
      *ppcVar16 = pcVar1;
      iVar3 = FUN_003def90(0,pcVar1,*(undefined4 *)(ppcVar16 + -2));
      iVar15 = iVar15 + 1;
      ppcVar16 = ppcVar16 + -3;
    } while (iVar15 < (int)local_70);
  }
  puVar10 = (undefined1 *)FUN_00452c30((long)iVar3,"external/openssl/crypto/asn1/asn1_gen.c",0xc3);
  if (puVar10 == (undefined1 *)0x0) {
    puVar9 = (uint *)0x0;
  }
  else {
    local_270 = puVar10;
    if (0 < (int)local_70) {
      iVar15 = 0;
      puVar17 = local_240;
      do {
        FUN_003dede0(&local_270,puVar17[-2],*puVar17,puVar17[-4],puVar17[-3]);
        if (puVar17[-1] != 0) {
          *local_270 = 0;
          local_270 = local_270 + 1;
        }
        iVar15 = iVar15 + 1;
        puVar17 = puVar17 + 6;
      } while (iVar15 < (int)local_70);
    }
    if ((uint)local_268 != 0xffffffff) {
      uVar2 = 0x20;
      if (local_268._4_4_ != 0 || ((uint)local_268 & 0xfffffffe) != 0x10) {
        uVar2 = uVar5;
      }
      FUN_003dede0(&local_270,uVar2,local_280 & 0xffffffff);
    }
    memcpy(local_270,local_68,(long)iVar4);
    local_278 = puVar10;
    puVar9 = (uint *)FUN_003e50b0(0,&local_278,(long)iVar3);
  }
LAB_0044f2d8:
  FUN_00452f80(local_48,"external/openssl/crypto/asn1/asn1_gen.c",0xe9);
  FUN_00452f80(puVar10,"external/openssl/crypto/asn1/asn1_gen.c",0xea);
  return puVar9;
}


