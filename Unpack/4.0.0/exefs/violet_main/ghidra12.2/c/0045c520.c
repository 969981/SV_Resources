/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045c520; name: FUN_0045c520
 */


ulong FUN_0045c520(byte *param_1,uint param_2,long param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  int iVar21;
  char acStack_98 [16];
  uint local_88;
  undefined4 local_70 [2];
  char *local_68;
  
  uVar12 = (ulong)param_2;
  if ((param_1 != (byte *)0x0) && (0 < (int)param_2)) {
    *param_1 = 0;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar14 = 0;
    goto LAB_0045c924;
  }
  if ((param_4 != 0) || (uVar7 = FUN_0045bea0(param_3), uVar7 == 0)) goto LAB_0045c568;
  if (uVar7 < 0x4ab) {
    if (*(int *)(&DAT_044aa1d8 + (ulong)uVar7 * 0x28) == 0) {
      uVar6 = 0x119;
LAB_0045c894:
      FUN_004806c0(8,0x66,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar6);
      goto LAB_0045c89c;
    }
    pcVar17 = (&PTR_s_undefined_044aa1d0)[(ulong)uVar7 * 5];
    if (pcVar17 == (char *)0x0) goto LAB_0045c89c;
LAB_0045c904:
    if (param_1 != (byte *)0x0) {
      FUN_0045ad70(param_1,pcVar17,(long)(int)param_2);
    }
    uVar14 = strlen(pcVar17);
  }
  else {
    if (DAT_047f19f0 != 0) {
      local_70[0] = 3;
      local_68 = acStack_98;
      local_88 = uVar7;
      lVar15 = FUN_00451a40(DAT_047f19f0,local_70);
      if (lVar15 == 0) {
        uVar6 = 0x127;
        goto LAB_0045c894;
      }
      pcVar17 = *(char **)(*(long *)(lVar15 + 8) + 8);
      if (pcVar17 != (char *)0x0) goto LAB_0045c904;
    }
LAB_0045c89c:
    if (uVar7 < 0x4ab) {
      if (*(int *)(&DAT_044aa1d8 + (ulong)uVar7 * 0x28) == 0) {
        uVar6 = 0xfe;
LAB_0045c954:
        FUN_004806c0(8,0x68,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar6);
      }
      else {
        ppuVar9 = &PTR_s_UNDEF_044aa1c8 + (ulong)uVar7 * 5;
LAB_0045c8fc:
        pcVar17 = *ppuVar9;
        if (pcVar17 != (char *)0x0) goto LAB_0045c904;
      }
    }
    else if (DAT_047f19f0 != 0) {
      local_70[0] = 3;
      local_68 = acStack_98;
      local_88 = uVar7;
      lVar15 = FUN_00451a40(DAT_047f19f0,local_70);
      if (lVar15 == 0) {
        uVar6 = 0x10c;
        goto LAB_0045c954;
      }
      ppuVar9 = *(undefined ***)(lVar15 + 8);
      goto LAB_0045c8fc;
    }
LAB_0045c568:
    iVar16 = *(int *)(param_3 + 0x14);
    if (iVar16 < 1) {
      uVar14 = 0;
      lVar15 = 0;
    }
    else {
      pcVar17 = *(char **)(param_3 + 0x18);
      lVar15 = 0;
      bVar20 = false;
      uVar14 = 0;
      do {
        iVar13 = (int)uVar14;
        cVar1 = *pcVar17;
        uVar7 = (uint)cVar1;
        iVar16 = iVar16 + -1;
        if ((iVar16 == 0) && (cVar1 < 0)) {
LAB_0045c7c0:
          FUN_003eb520(lVar15);
          uVar14 = 0xffffffff;
          goto LAB_0045c924;
        }
        uVar14 = 0;
        bVar2 = false;
        uVar18 = (uint)~(int)cVar1 >> 0x1f;
        pcVar17 = pcVar17 + 1;
        while( true ) {
          if (bVar2) {
            iVar3 = FUN_003f2e00(lVar15);
            if (iVar3 == 0) goto LAB_0045c7c0;
          }
          else {
            uVar14 = uVar14 | uVar7 & 0x7f;
          }
          if (uVar18 != 0) break;
          if ((bVar2) || (uVar14 >> 0x39 == 0)) {
            if (bVar2) goto LAB_0045c60c;
            uVar14 = uVar14 << 7;
          }
          else {
            if (((lVar15 == 0) && (lVar15 = FUN_003eb5b0(), lVar15 == 0)) ||
               (iVar3 = FUN_003eb9f0(lVar15,uVar14 & 0xffffffff), iVar3 == 0)) goto LAB_0045c7c0;
            bVar2 = true;
LAB_0045c60c:
            iVar3 = FUN_003f2120(lVar15,lVar15,7);
            if (iVar3 == 0) goto LAB_0045c7c0;
          }
          pcVar4 = pcVar17 + 1;
          cVar1 = *pcVar17;
          uVar7 = (uint)cVar1;
          iVar16 = iVar16 + -1;
          uVar18 = (uint)~(int)cVar1 >> 0x1f;
          pcVar17 = pcVar4;
          if ((iVar16 == 0) && (cVar1 < 0)) goto LAB_0045c7c0;
        }
        pbVar10 = param_1;
        uVar19 = uVar14;
        if (!bVar20) {
          uVar19 = uVar14 - 0x50;
          if (uVar14 < 0x50) {
            uVar8 = (ulong)((uint)uVar14 & 0xff) / 0x28;
            uVar19 = uVar14 + uVar8 * -0x28;
          }
          else if (bVar2) {
            iVar3 = FUN_003f2f20(lVar15,0x50);
            if (iVar3 == 0) goto LAB_0045c7c0;
            uVar8 = 2;
            uVar19 = uVar14;
          }
          else {
            uVar8 = 2;
          }
          if ((1 < (int)uVar12) && (param_1 != (byte *)0x0)) {
            uVar12 = (ulong)((int)uVar12 - 1);
            pbVar10 = param_1 + 1;
            *pbVar10 = 0;
            *param_1 = (byte)uVar8 | 0x30;
          }
          iVar13 = iVar13 + 1;
        }
        iVar3 = (int)uVar12;
        if (bVar2) {
          pcVar4 = (char *)FUN_003fb490(lVar15);
          if (pcVar4 == (char *)0x0) goto LAB_0045c7c0;
          sVar5 = strlen(pcVar4);
          iVar21 = (int)sVar5;
          if (pbVar10 != (byte *)0x0) {
            pbVar11 = pbVar10;
            if (1 < iVar3) {
              iVar3 = iVar3 + -1;
              pbVar11 = pbVar10 + 1;
              pbVar10[0] = 0x2e;
              pbVar10[1] = 0;
            }
            FUN_0045ad70(pbVar11,pcVar4,(long)iVar3);
            if (iVar3 < iVar21) {
              uVar12 = 0;
              pbVar10 = pbVar11 + iVar3;
            }
            else {
              pbVar10 = pbVar11 + iVar21;
              uVar12 = (ulong)(uint)(iVar3 - iVar21);
            }
          }
          uVar7 = iVar13 + iVar21 + 1;
          FUN_00452f80(pcVar4,"external/openssl/crypto/objects/obj_dat.c",0x1f7);
          param_1 = pbVar10;
        }
        else {
          FUN_003e7390(acStack_98,0x25,&DAT_03bf468f,uVar19);
          sVar5 = strlen(acStack_98);
          iVar21 = (int)sVar5;
          uVar14 = uVar12;
          if ((0 < iVar3) && (pbVar10 != (byte *)0x0)) {
            FUN_0045ad70(pbVar10,acStack_98,uVar12);
            uVar14 = (ulong)(uint)(iVar3 - iVar21);
            if (iVar3 < iVar21) {
              uVar14 = 0;
              pbVar10 = pbVar10 + uVar12;
            }
            else {
              pbVar10 = pbVar10 + iVar21;
            }
          }
          uVar7 = iVar13 + iVar21;
          param_1 = pbVar10;
          uVar12 = uVar14;
        }
        bVar20 = true;
        uVar14 = (ulong)uVar7;
      } while (0 < iVar16);
    }
    FUN_003eb520(lVar15);
  }
LAB_0045c924:
  return uVar14 & 0xffffffff;
}


