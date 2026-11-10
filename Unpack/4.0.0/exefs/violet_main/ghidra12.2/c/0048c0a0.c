/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048c0a0; name: FUN_0048c0a0
 */


undefined8 FUN_0048c0a0(undefined8 *param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  uint *puVar17;
  char *pcVar18;
  char *pcVar19;
  long local_70;
  undefined8 local_68;
  
  FUN_00452f80(param_1[3],"external/openssl/crypto/x509/x_name.c",0x134);
  param_1[3] = 0;
  iVar3 = FUN_0047e430(*param_1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar9 = FUN_0047dcc0();
  if (lVar9 == 0) {
    uVar14 = 0x13d;
LAB_0048c32c:
    FUN_004806c0(0xb,0x9c,0x41,"external/openssl/crypto/x509/x_name.c",uVar14);
  }
  else {
    iVar3 = FUN_0047e430(*param_1);
    if (0 < iVar3) {
      iVar3 = 0;
      lVar15 = 0;
      iVar4 = -1;
      puVar16 = PTR_DAT_047cd590;
LAB_0048c118:
      puVar10 = (undefined8 *)FUN_0047e450(*param_1,iVar3);
      if (*(int *)(puVar10 + 2) != iVar4) {
        lVar15 = FUN_0047dcc0();
        if (lVar15 == 0) goto LAB_0048c330;
        iVar4 = FUN_0047e2f0(lVar9,lVar15);
        if (iVar4 == 0) {
          FUN_0047db00(lVar15);
          uVar14 = 0x148;
          goto LAB_0048c32c;
        }
        iVar4 = *(int *)(puVar10 + 2);
      }
      plVar11 = (long *)FUN_003e49a0(puVar16);
      if (plVar11 == (long *)0x0) {
        uVar14 = 0x14f;
        goto LAB_0048c48c;
      }
      lVar12 = FUN_0045d030(*puVar10);
      *plVar11 = lVar12;
      if (lVar12 == 0) {
        uVar14 = 0x154;
        goto LAB_0048c48c;
      }
      lVar12 = puVar10[1];
      puVar17 = (uint *)plVar11[1];
      uVar13 = FUN_003e1860(*(undefined4 *)(lVar12 + 4));
      if ((uVar13 & 0x2956) == 0) {
        iVar6 = FUN_003df000(puVar17,lVar12);
        if (iVar6 != 0) goto LAB_0048c264;
      }
      else {
        puVar1 = puVar17 + 2;
        puVar17[1] = 0xc;
        uVar5 = FUN_003dd5a0(puVar1,lVar12);
        *puVar17 = uVar5;
        if (uVar5 != 0xffffffff) {
          if (0 < (int)uVar5) {
            pcVar19 = *(char **)puVar1;
            uVar13 = (ulong)uVar5;
            pcVar18 = pcVar19;
            do {
              iVar6 = FUN_003f6e20(*pcVar18,8);
              if (iVar6 == 0) {
                iVar6 = (int)uVar13;
                if (0 < iVar6) {
                  lVar12 = 0;
                  goto LAB_0048c220;
                }
                break;
              }
              uVar13 = uVar13 - 1;
              pcVar18 = pcVar18 + 1;
            } while (1 < (int)uVar13 + 1);
          }
          goto LAB_0048c244;
        }
      }
      goto LAB_0048c490;
    }
LAB_0048c338:
    iVar3 = FUN_0047e430(lVar9);
    if (iVar3 < 1) {
      iVar4 = 0;
LAB_0048c3ac:
      *(int *)(param_1 + 4) = iVar4;
      local_70 = FUN_00452c30(iVar4,"external/openssl/crypto/x509/x_name.c",0x166);
      if (local_70 != 0) {
        param_1[3] = local_70;
        iVar3 = FUN_0047e430(lVar9);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            local_68 = FUN_0047e450(lVar9,iVar3);
            iVar4 = FUN_003e3930(&local_68,&local_70,&DAT_044c04b8,0xffffffff,0xffffffff);
            if (iVar4 < 0) break;
            iVar3 = iVar3 + 1;
            iVar4 = FUN_0047e430(lVar9);
          } while (iVar3 < iVar4);
        }
        plVar11 = (long *)0x0;
        uVar14 = 1;
        goto LAB_0048c494;
      }
      uVar14 = 0x168;
      goto LAB_0048c32c;
    }
    iVar3 = 0;
    iVar4 = 0;
    do {
      local_68 = FUN_0047e450(lVar9,iVar3);
      iVar6 = FUN_003e3930(&local_68,0,&DAT_044c04b8,0xffffffff,0xffffffff);
      if (iVar6 < 0) goto LAB_0048c330;
      iVar4 = iVar6 + iVar4;
      iVar3 = iVar3 + 1;
      iVar6 = FUN_0047e430(lVar9);
    } while (iVar3 < iVar6);
    if (-1 < iVar4) goto LAB_0048c3ac;
  }
LAB_0048c330:
  plVar11 = (long *)0x0;
LAB_0048c490:
  uVar14 = 0;
LAB_0048c494:
  FUN_003e4550(plVar11,PTR_DAT_047cd590);
  FUN_0047e3b0(lVar9,&LAB_0048c530);
  return uVar14;
  while (lVar12 = lVar12 + -1, 1 < iVar6 + (int)lVar12 + 1) {
LAB_0048c220:
    iVar7 = FUN_003f6e20(pcVar19[lVar12 + ((ulong)uVar5 - 1)],8);
    if (iVar7 == 0) {
      pcVar19 = *(char **)puVar1;
      iVar6 = iVar6 + (int)lVar12;
      if (iVar6 < 1) goto LAB_0048c248;
      iVar7 = 0;
      goto LAB_0048c2c0;
    }
  }
LAB_0048c244:
  pcVar19 = *(char **)puVar1;
LAB_0048c248:
  iVar6 = (int)pcVar19;
LAB_0048c250:
  puVar16 = PTR_DAT_047cd590;
  *puVar17 = (int)pcVar19 - iVar6;
LAB_0048c264:
  iVar6 = FUN_0047e2f0(lVar15,plVar11);
  if (iVar6 == 0) {
    uVar14 = 0x15a;
LAB_0048c48c:
    FUN_004806c0(0xb,0x9c,0x41,"external/openssl/crypto/x509/x_name.c",uVar14);
    goto LAB_0048c490;
  }
  iVar3 = iVar3 + 1;
  iVar6 = FUN_0047e430(*param_1);
  if (iVar6 <= iVar3) goto LAB_0048c338;
  goto LAB_0048c118;
LAB_0048c2c0:
  do {
    cVar2 = *pcVar18;
    if (cVar2 < '\0') {
LAB_0048c2ac:
      pcVar18 = pcVar18 + 1;
      iVar7 = iVar7 + 1;
      *pcVar19 = cVar2;
    }
    else {
      iVar8 = FUN_003f6e20(cVar2,8);
      if (iVar8 == 0) {
        cVar2 = FUN_003f6e50(*pcVar18);
        goto LAB_0048c2ac;
      }
      *pcVar19 = ' ';
      do {
        pcVar18 = pcVar18 + 1;
        iVar7 = iVar7 + 1;
        iVar8 = FUN_003f6e20(*pcVar18,8);
      } while (iVar8 != 0);
    }
    pcVar19 = pcVar19 + 1;
  } while (iVar7 < iVar6);
  iVar6 = (int)*(undefined8 *)puVar1;
  goto LAB_0048c250;
}


