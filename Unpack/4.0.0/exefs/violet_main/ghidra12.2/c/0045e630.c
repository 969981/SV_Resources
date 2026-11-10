/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045e630; name: FUN_0045e630
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0045e630(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
            uint param_6)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  char *__s;
  void *pvVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  size_t sVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long local_c0;
  long *local_70;
  int local_68;
  int local_64;
  
  lVar9 = FUN_004393d0();
  if (lVar9 == 0) {
    FUN_004806c0(9,0x91,0x41,"external/openssl/crypto/pem/pem_lib.c",0x38e);
    return 0;
  }
  *param_5 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if ((~param_6 & 6) == 0) {
    FUN_004806c0(9,0x91,7,"external/openssl/crypto/pem/pem_lib.c",0x397);
    lVar17 = 0;
    lVar19 = 0;
    uVar18 = 0;
    FUN_004393f0(lVar9);
joined_r0x0045ee9c:
    __s = (char *)0x0;
    goto joined_r0x0045e8bc;
  }
  uVar2 = param_6 & 1;
  if ((param_6 & 1) == 0) {
    uVar18 = FUN_003eaa20();
  }
  else {
    uVar18 = FUN_003eaa30();
  }
  lVar17 = FUN_003e8a30();
  lVar19 = FUN_003e8a30(uVar18);
  if ((lVar17 == 0) || (lVar19 == 0)) {
    uVar18 = 0x91;
    uVar14 = 0x39f;
LAB_0045e8a8:
    FUN_004806c0(9,uVar18,0x41,"external/openssl/crypto/pem/pem_lib.c",uVar14);
    __s = (char *)0x0;
    goto LAB_0045e8b0;
  }
  if (uVar2 == 0) {
    pcVar10 = (char *)FUN_00452c30(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe5);
  }
  else {
    pcVar10 = (char *)thunk_FUN_00452c30(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe4);
  }
  if (pcVar10 == (char *)0x0) {
    uVar18 = 0x90;
    uVar14 = 0x2e1;
    goto LAB_0045e8a8;
  }
  iVar6 = FUN_003e9300(param_1,pcVar10,0xff);
  if (0 < iVar6) {
    do {
      uVar7 = FUN_0045ef80(pcVar10,iVar6,param_6 & 0xfffffffb);
      iVar6 = strncmp(pcVar10,"-----BEGIN ",0xb);
      if (((5 < (int)uVar7) && (iVar6 == 0)) &&
         (iVar6 = strncmp(pcVar10 + ((ulong)uVar7 - 6),"-----\n",6), iVar6 == 0)) {
        pcVar10[uVar7 - 6] = '\0';
        sVar16 = (size_t)(int)(uVar7 - 0x10);
        if (uVar2 == 0) {
          __s = (char *)FUN_00452c30(sVar16,"external/openssl/crypto/pem/pem_lib.c",0xe5);
          if (__s == (char *)0x0) goto LAB_0045eaf8;
          memcpy(__s,pcVar10 + 0xb,sVar16);
          FUN_00452f80(pcVar10,"external/openssl/crypto/pem/pem_lib.c",0xdf);
          pcVar10 = (char *)FUN_00452c30(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe5);
        }
        else {
          __s = (char *)thunk_FUN_00452c30(sVar16,"external/openssl/crypto/pem/pem_lib.c",0xe4);
          if (__s == (char *)0x0) {
LAB_0045eaf8:
            FUN_004806c0(9,0x90,0x41,"external/openssl/crypto/pem/pem_lib.c",0x2f8);
            goto joined_r0x0045eb14;
          }
          memcpy(__s,pcVar10 + 0xb,sVar16);
          FUN_00453360(pcVar10,0x100,"external/openssl/crypto/pem/pem_lib.c",0xdd);
          pcVar10 = (char *)thunk_FUN_00452c30(0x100,"external/openssl/crypto/pem/pem_lib.c",0xe4);
        }
        if (pcVar10 == (char *)0x0) {
          FUN_004806c0(9,0x8f,0x41,"external/openssl/crypto/pem/pem_lib.c",0x324);
          goto LAB_0045e8b0;
        }
        uVar7 = FUN_003e9300(param_1,pcVar10,0xff);
        lVar12 = lVar17;
        if ((int)uVar7 < 1) goto LAB_0045ebb0;
        cVar4 = '\0';
        bVar5 = false;
        local_c0 = lVar17;
        bVar1 = false;
        goto LAB_0045e9f4;
      }
      iVar6 = FUN_003e9300(param_1,pcVar10,0xff);
    } while (0 < iVar6);
  }
  FUN_004806c0(9,0x90,0x6c,"external/openssl/crypto/pem/pem_lib.c",0x2e9);
  __s = (char *)0x0;
joined_r0x0045eb14:
  if (uVar2 != 0) {
    FUN_00453360(pcVar10,0x100,"external/openssl/crypto/pem/pem_lib.c",0xdd);
LAB_0045eb34:
    FUN_004393f0(lVar9);
    uVar18 = 0;
    goto LAB_0045eb40;
  }
  FUN_00452f80(pcVar10,"external/openssl/crypto/pem/pem_lib.c",0xdf);
LAB_0045e904:
  FUN_004393f0(lVar9);
  uVar18 = 0;
  goto LAB_0045e910;
LAB_0045e9f4:
  if (uVar7 == 0xfe) {
    bVar3 = pcVar10[0xfd] != '\n';
  }
  else {
    bVar3 = false;
  }
  if (cVar4 == '\0') {
    pvVar11 = memchr(pcVar10,0x3a,(ulong)uVar7);
    cVar4 = pvVar11 != (void *)0x0;
  }
  iVar6 = strncmp(pcVar10,"-----END ",9);
  uVar15 = 0xfffffffb;
  if (iVar6 != 0 && cVar4 != '\x01') {
    uVar15 = 0xffffffff;
  }
  iVar6 = FUN_0045ef80(pcVar10,uVar7,uVar15 & param_6);
  if (*pcVar10 == '\n') {
    if (!bVar1) {
      if (cVar4 == '\x02') {
        FUN_004806c0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x349);
        goto joined_r0x0045ecb0;
      }
      cVar4 = '\x02';
      local_c0 = lVar19;
    }
LAB_0045e9d0:
    uVar7 = FUN_003e9300(param_1,pcVar10,0xff);
    bVar1 = bVar3;
    if ((int)uVar7 < 1) goto LAB_0045ebb0;
    goto LAB_0045e9f4;
  }
  iVar8 = strncmp(pcVar10,"-----END ",9);
  if (iVar8 == 0) {
    sVar16 = strlen(__s);
    iVar6 = strncmp(pcVar10 + 9,__s,sVar16);
    if ((iVar6 == 0) && (iVar6 = strncmp(pcVar10 + 9 + sVar16,"-----\n",6), iVar6 == 0)) {
      bVar1 = false;
      lVar12 = lVar19;
      if (cVar4 != '\0') {
        lVar12 = lVar17;
        local_c0 = lVar19;
      }
      goto joined_r0x0045ec58;
    }
    FUN_004806c0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x358);
  }
  else {
    if (!bVar5) {
      iVar8 = FUN_003e9110(local_c0,pcVar10);
      if (iVar8 < 0) goto joined_r0x0045ecb0;
      if (cVar4 != '\x02') {
        bVar5 = false;
        goto LAB_0045e9d0;
      }
      bVar5 = iVar6 != 0x41;
      if (0x41 < iVar6) goto joined_r0x0045ecb0;
      cVar4 = '\x02';
      goto LAB_0045e9d0;
    }
    FUN_004806c0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x362);
  }
  bVar1 = true;
  local_c0 = lVar19;
  goto joined_r0x0045ec58;
LAB_0045ebb0:
  FUN_004806c0(9,0x8f,0x66,"external/openssl/crypto/pem/pem_lib.c",0x32c);
joined_r0x0045ecb0:
  bVar1 = true;
  local_c0 = lVar19;
joined_r0x0045ec58:
  lVar19 = local_c0;
  lVar17 = lVar12;
  if (uVar2 == 0) {
    FUN_00452f80(pcVar10,"external/openssl/crypto/pem/pem_lib.c",0xdf);
  }
  else {
    FUN_00453360(pcVar10,0x100,"external/openssl/crypto/pem/pem_lib.c",0xdd);
  }
  if (!bVar1) {
    FUN_004398f0(lVar9);
    FUN_003e9560(lVar19,0x73,0,&local_70);
    local_64 = (int)*local_70;
    iVar6 = FUN_00439900(lVar9,local_70[1],&local_64,local_70[1]);
    if ((iVar6 < 0) ||
       (iVar6 = FUN_00439ce0(lVar9,local_70[1] + (long)local_64,&local_68), iVar6 < 0)) {
      FUN_004806c0(9,0x91,100,"external/openssl/crypto/pem/pem_lib.c",0x3af);
    }
    else {
      lVar12 = (long)local_64;
      local_64 = (int)(lVar12 + local_68);
      *local_70 = lVar12 + local_68;
      if (local_64 != 0) {
        uVar7 = FUN_003e9560(lVar17,3,0,0);
        lVar12 = (long)(((ulong)uVar7 << 0x20) + 0x100000000) >> 0x20;
        if (uVar2 == 0) {
          lVar12 = FUN_00452c30(lVar12,"external/openssl/crypto/pem/pem_lib.c",0xe5);
          *param_3 = lVar12;
          lVar12 = FUN_00452c30((long)local_64,"external/openssl/crypto/pem/pem_lib.c",0xe5);
          *param_4 = lVar12;
          lVar13 = *param_3;
          if ((lVar12 == 0) || (lVar13 == 0)) {
            FUN_00452f80(lVar13,"external/openssl/crypto/pem/pem_lib.c",0xdf);
            FUN_00452f80(*param_4,"external/openssl/crypto/pem/pem_lib.c",0xdf);
            goto LAB_0045e904;
          }
        }
        else {
          lVar12 = thunk_FUN_00452c30(lVar12,"external/openssl/crypto/pem/pem_lib.c",0xe4);
          *param_3 = lVar12;
          lVar12 = thunk_FUN_00452c30((long)local_64,"external/openssl/crypto/pem/pem_lib.c",0xe4);
          *param_4 = lVar12;
          lVar13 = *param_3;
          if ((lVar12 == 0) || (lVar13 == 0)) {
            FUN_00453360(lVar13,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
            FUN_00453360(*param_4,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
            goto LAB_0045eb34;
          }
        }
        FUN_003e8ce0(lVar17,lVar13,uVar7);
        *(undefined1 *)(*param_3 + ((long)((ulong)uVar7 << 0x20) >> 0x20)) = 0;
        FUN_003e8ce0(lVar19,*param_4,local_64);
        uVar18 = 1;
        *param_5 = (long)local_64;
        *param_2 = __s;
        FUN_004393f0(lVar9);
        goto joined_r0x0045ee9c;
      }
    }
  }
LAB_0045e8b0:
  uVar18 = 0;
  FUN_004393f0(lVar9);
joined_r0x0045e8bc:
  if ((param_6 & 1) != 0) {
LAB_0045eb40:
    FUN_00453360(__s,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    goto LAB_0045eb58;
  }
LAB_0045e910:
  FUN_00452f80(__s,"external/openssl/crypto/pem/pem_lib.c",0xdf);
LAB_0045eb58:
  FUN_003e8b90(lVar17);
  FUN_003e8b90(lVar19);
  return uVar18;
}


