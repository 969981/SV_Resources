/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00485680; name: FUN_00485680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00485680(undefined8 *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  char *__s;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  ulong extraout_x17;
  uint uVar27;
  ulong extraout_x18;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  char *__dest;
  int iVar32;
  int iVar33;
  char acStack_c0 [80];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == (char *)0x0) {
    lVar29 = FUN_003f3110();
    if ((lVar29 != 0) && (lVar16 = FUN_003f31c0(lVar29,200), lVar16 != 0)) {
      **(undefined1 **)(lVar29 + 8) = 0;
      if (param_1 == (undefined8 *)0x0) {
        param_2 = *(char **)(lVar29 + 8);
        FUN_00452f80(lVar29,"external/openssl/crypto/x509/x509_obj.c",0x35);
        param_3 = 200;
        goto LAB_00485c6c;
      }
      param_3 = 200;
      goto LAB_004856e8;
    }
LAB_00485bec:
    uVar13 = 0x41;
    uVar14 = 0xb1;
LAB_00485c04:
    FUN_004806c0(0xb,0x74,uVar13,"external/openssl/crypto/x509/x509_obj.c",uVar14);
    FUN_003f3160(lVar29);
  }
  else if (param_3 != 0) {
    if (param_1 == (undefined8 *)0x0) {
LAB_00485c6c:
      strncpy(param_2,"NO X509_NAME",(long)param_3);
      param_2[(long)param_3 - 1] = '\0';
      return param_2;
    }
    lVar29 = 0;
LAB_004856e8:
    iVar9 = FUN_0047e430(*param_1);
    uVar14 = _UNK_03cab748;
    uVar13 = _DAT_03cab740;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      iVar31 = 0;
      do {
        puVar11 = (undefined8 *)FUN_0047e450(*param_1,iVar9);
        iVar10 = FUN_0045bea0(*puVar11);
        if ((iVar10 == 0) || (__s = (char *)FUN_0045bce0(), __s == (char *)0x0)) {
          __s = acStack_c0;
          FUN_003dfa20(acStack_c0,0x50,*puVar11);
        }
        sVar12 = strlen(__s);
        puVar15 = (uint *)puVar11[1];
        uVar2 = *puVar15;
        uVar30 = (ulong)uVar2;
        if (0x100000 < (int)uVar2) {
          uVar13 = 0x86;
          uVar14 = 0x4a;
          goto LAB_00485c04;
        }
        lVar16 = *(long *)(puVar15 + 2);
        if ((uVar2 & 3) == 0 && puVar15[1] == 0x1b) {
          bVar8 = false;
          bVar7 = false;
          bVar6 = false;
          if (0 < (int)uVar2) {
            uVar20 = 0;
            if ((uVar2 < 4) || (3 < uVar30 - 1)) {
LAB_00485868:
              uVar22 = ~uVar20;
              uVar24 = uVar30 & 3;
              if ((uVar2 & 3) != 0) {
                puVar23 = &local_70;
                do {
                  if (*(char *)(lVar16 + uVar20) != '\0') {
                    *(undefined4 *)puVar23 = 1;
                  }
                  uVar20 = uVar20 + 1;
                  uVar24 = uVar24 - 1;
                  puVar23 = (undefined8 *)((long)puVar23 + 4);
                } while (uVar24 != 0);
              }
              if (2 < uVar22 + uVar30) {
                lVar25 = uVar30 - uVar20;
                pcVar17 = (char *)(lVar16 + uVar20 + 3);
                do {
                  if (pcVar17[-3] != '\0') {
                    *(undefined4 *)((ulong)&local_70 | (uVar20 & 3) << 2) = 1;
                  }
                  if (pcVar17[-2] != '\0') {
                    *(undefined4 *)((ulong)&local_70 | ((ulong)((int)uVar20 + 1) & 3) << 2) = 1;
                  }
                  if (pcVar17[-1] != '\0') {
                    *(undefined4 *)((ulong)&local_70 | (uVar20 & 3 ^ 2) << 2) = 1;
                  }
                  if (*pcVar17 != '\0') {
                    *(undefined4 *)((ulong)&local_70 | ((ulong)((int)uVar20 - 1) & 3) << 2) = 1;
                  }
                  lVar25 = lVar25 + -4;
                  pcVar17 = pcVar17 + 4;
                } while (lVar25 != 0);
              }
            }
            else {
              uVar20 = uVar30 & 0xfffffffc;
              lVar25 = lVar16 + 3;
              uVar24 = uVar20;
              do {
                if (*(char *)(lVar25 + -3) != '\0') {
                  bVar8 = true;
                }
                if (*(char *)(lVar25 + -2) != '\0') {
                  bVar7 = true;
                }
                if (*(char *)(lVar25 + -1) != '\0') {
                  bVar6 = true;
                }
                lVar25 = lVar25 + 4;
                uVar24 = uVar24 - 4;
              } while (uVar24 != 0);
              if (uVar20 != uVar30) goto LAB_00485868;
            }
            if ((bVar7 || bVar8) || bVar6) goto LAB_004858c4;
          }
          uStack_68 = uVar14;
          local_70 = uVar13;
          if (0 < (int)uVar2) goto LAB_004858d4;
LAB_00485858:
          iVar10 = 0;
        }
        else {
LAB_004858c4:
          uStack_68 = 0x100000001;
          local_70 = 0x100000001;
          if ((int)uVar2 < 1) goto LAB_00485858;
LAB_004858d4:
          iVar10 = 0;
          uVar20 = 0;
          if ((uVar2 != 1) && (uVar30 - 1 < 4)) {
            uVar24 = 0;
            iVar21 = 0;
            iVar10 = 0;
            uVar20 = uVar30 & 0xfffffffe;
            uVar22 = extraout_x17;
            uVar28 = extraout_x18;
            do {
              uVar27 = (uint)uVar28;
              uVar26 = (uint)uVar22;
              iVar3 = *(int *)((ulong)&local_70 | ((uVar24 & 2) >> 1) << 3);
              iVar4 = *(int *)((ulong)&local_70 | ((ulong)((int)uVar24 + 1) & 3) << 2);
              if (iVar3 != 0) {
                uVar26 = (uint)*(byte *)(lVar16 + uVar24);
              }
              if (iVar4 != 0) {
                uVar27 = (uint)*(byte *)(lVar16 + uVar24 + 1);
              }
              bVar7 = (uVar26 - 0x20 & 0xff) < 0x5f;
              uVar22 = (ulong)bVar7;
              bVar8 = (uVar27 - 0x20 & 0xff) < 0x5f;
              uVar28 = (ulong)bVar8;
              iVar32 = 4;
              if (bVar7 && iVar3 != 0) {
                iVar32 = 1;
              }
              iVar33 = 4;
              if (bVar8 && iVar4 != 0) {
                iVar33 = 1;
              }
              iVar1 = 0;
              if (iVar3 != 0) {
                iVar1 = iVar32;
              }
              iVar3 = 0;
              if (iVar4 != 0) {
                iVar3 = iVar33;
              }
              uVar24 = uVar24 + 2;
              iVar21 = iVar21 + iVar1;
              iVar10 = iVar10 + iVar3;
            } while (uVar20 != uVar24);
            iVar10 = iVar10 + iVar21;
            if (uVar20 == uVar30) goto LAB_00485a88;
          }
          uVar24 = ~uVar20;
          if ((uVar2 & 1) != 0) {
            if (*(int *)((ulong)&local_70 | ((uVar20 & 2) >> 1) << 3) != 0) {
              if ((*(byte *)(lVar16 + uVar20) < 0x20) || (0x7e < *(byte *)(lVar16 + uVar20))) {
                iVar10 = iVar10 + 4;
              }
              else {
                iVar10 = iVar10 + 1;
              }
            }
            uVar20 = uVar20 | 1;
          }
          if (uVar24 + uVar30 != 0) {
            do {
              if (*(int *)((ulong)&local_70 | (uVar20 & 3) << 2) != 0) {
                if ((*(byte *)(lVar16 + uVar20) < 0x20) || (0x7e < *(byte *)(lVar16 + uVar20))) {
                  iVar10 = iVar10 + 4;
                }
                else {
                  iVar10 = iVar10 + 1;
                }
              }
              if (*(int *)((ulong)&local_70 | ((ulong)((int)uVar20 + 1) & 3) << 2) != 0) {
                bVar5 = *(byte *)(lVar16 + uVar20 + 1);
                if ((bVar5 < 0x20) || (0x7e < bVar5)) {
                  iVar10 = iVar10 + 4;
                }
                else {
                  iVar10 = iVar10 + 1;
                }
              }
              uVar20 = uVar20 + 2;
            } while (uVar30 != uVar20);
          }
        }
LAB_00485a88:
        iVar10 = iVar31 + (int)sVar12 + iVar10;
        iVar21 = iVar10 + 2;
        if (0x100000 < iVar21) {
          uVar13 = 0x86;
          uVar14 = 0x7b;
          goto LAB_00485c04;
        }
        if (lVar29 == 0) {
          pcVar17 = param_2;
          if (param_3 <= iVar21) goto joined_r0x00485c44;
        }
        else {
          lVar16 = FUN_003f31c0(lVar29,(long)(iVar10 + 3));
          if (lVar16 == 0) goto LAB_00485bec;
          pcVar17 = *(char **)(lVar29 + 8);
        }
        pcVar17 = pcVar17 + iVar31;
        __dest = pcVar17 + 1;
        *pcVar17 = '/';
        memcpy(__dest,__s,sVar12 & 0xffffffff);
        pbVar18 = (byte *)(__dest + (int)sVar12 + 1);
        __dest[(int)sVar12] = '=';
        if (0 < (int)uVar2) {
          uVar20 = 0;
          lVar16 = *(long *)(puVar11[1] + 8);
          pbVar19 = pbVar18;
          do {
            pbVar18 = pbVar19;
            if (*(int *)((ulong)&local_70 | (uVar20 & 3) << 2) != 0) {
              bVar5 = *(byte *)(lVar16 + uVar20);
              if ((byte)(bVar5 - 0x20) < 0x5f) {
                pbVar18 = pbVar19 + 1;
                *pbVar19 = bVar5;
              }
              else {
                pbVar19[0] = 0x5c;
                pbVar19[1] = 0x78;
                pbVar19[2] = "0123456789ABCDEF"[bVar5 >> 4];
                pbVar19[3] = "0123456789ABCDEF"[(ulong)bVar5 & 0xf];
                pbVar18 = pbVar19 + 4;
              }
            }
            uVar20 = uVar20 + 1;
            pbVar19 = pbVar18;
          } while (uVar30 != uVar20);
        }
        *pbVar18 = 0;
        iVar9 = iVar9 + 1;
        iVar10 = FUN_0047e430(*param_1);
        iVar31 = iVar21;
      } while (iVar9 < iVar10);
    }
    if (lVar29 != 0) {
      param_2 = *(char **)(lVar29 + 8);
      FUN_00452f80(lVar29,"external/openssl/crypto/x509/x509_obj.c",0xaa);
    }
joined_r0x00485c44:
    if (iVar9 == 0) {
      *param_2 = '\0';
      return param_2;
    }
    return param_2;
  }
  return (char *)0x0;
}


