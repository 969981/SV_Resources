/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ad680; name: FUN_003ad680
 */


int * FUN_003ad680(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  long local_40;
  undefined8 local_38;
  
  local_38 = *param_2;
  piVar2 = (int *)FUN_003e1880(0,&local_38,param_3,&DAT_0449b8b8);
  if (piVar2 == (int *)0x0) {
    piVar9 = (int *)0x0;
    goto LAB_003ad7bc;
  }
  if (((param_1 == (long *)0x0) || (piVar9 = (int *)*param_1, piVar9 == (int *)0x0)) &&
     (piVar9 = (int *)FUN_003b8af0(), piVar9 == (int *)0x0)) goto LAB_003ad7bc;
  if (*piVar2 == 1) {
    iVar1 = piVar2[1];
    if (((iVar1 >> 8 == 3) || (iVar1 >> 8 == 0xfe)) || (iVar1 == 0x100)) {
      *piVar9 = iVar1;
      if (**(int **)(piVar2 + 2) == 2) {
        uVar7 = (ulong)**(ushort **)(*(int **)(piVar2 + 2) + 2);
        *(ulong *)(piVar9 + 0x7e) = ((uVar7 & 0xff00) << 0x28 | uVar7 << 0x38) >> 0x30 | 0x3000000;
        lVar3 = FUN_003ab8a0();
        *(long *)(piVar9 + 0x7c) = lVar3;
        if (lVar3 == 0) goto LAB_003ad7bc;
        puVar10 = *(uint **)(piVar2 + 8);
        if (puVar10 == (uint *)0x0) {
          lVar3 = 0;
        }
        else {
          if (0x20 < *puVar10) goto LAB_003ad7bc;
          memcpy(piVar9 + 0x56,*(void **)(puVar10 + 2),(ulong)*puVar10);
          lVar3 = (long)(int)*puVar10;
        }
        *(long *)(piVar9 + 0x54) = lVar3;
        puVar10 = *(uint **)(piVar2 + 6);
        if (puVar10 == (uint *)0x0) {
          lVar3 = 0;
        }
        else {
          if (0x100 < *puVar10) goto LAB_003ad7bc;
          memcpy(piVar9 + 0x14,*(void **)(puVar10 + 2),(ulong)*puVar10);
          lVar3 = (long)(int)*puVar10;
        }
        *(long *)(piVar9 + 2) = lVar3;
        lVar3 = *(long *)(piVar2 + 0xc);
        if (*(long *)(piVar2 + 0xc) == 0) {
          FUN_0049e4c0(&local_40);
          lVar3 = local_40;
        }
        *(long *)(piVar9 + 0x78) = lVar3;
        lVar3 = 3;
        if (*(long *)(piVar2 + 0xe) != 0) {
          lVar3 = *(long *)(piVar2 + 0xe);
        }
        *(long *)(piVar9 + 0x76) = lVar3;
        FUN_0048c830(*(undefined8 *)(piVar9 + 0x6e));
        *(undefined8 *)(piVar9 + 0x6e) = *(undefined8 *)(piVar2 + 0x10);
        puVar10 = *(uint **)(piVar2 + 0x12);
        piVar2[0x10] = 0;
        piVar2[0x11] = 0;
        if (puVar10 == (uint *)0x0) {
          lVar3 = 0;
        }
        else {
          if (0x20 < *puVar10) goto LAB_003ad7bc;
          memcpy(piVar9 + 0x60,*(void **)(puVar10 + 2),(ulong)*puVar10);
          lVar3 = (long)(int)*puVar10;
        }
        *(long *)(piVar9 + 0x5e) = lVar3;
        *(long *)(piVar9 + 0x72) = (long)piVar2[0x14];
        piVar11 = *(int **)(piVar2 + 0x16);
        FUN_00452f80(*(undefined8 *)(piVar9 + 0x86),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar9[0x86] = 0;
        piVar9[0x87] = 0;
        if (piVar11 != (int *)0x0) {
          lVar3 = FUN_0045ac20(*(undefined8 *)(piVar11 + 2),(long)*piVar11,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar9 + 0x86) = lVar3;
          if (lVar3 == 0) goto LAB_003ad7bc;
        }
        piVar11 = *(int **)(piVar2 + 0x1e);
        FUN_00452f80(*(undefined8 *)(piVar9 + 0x68),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar9[0x68] = 0;
        piVar9[0x69] = 0;
        if (piVar11 != (int *)0x0) {
          lVar3 = FUN_0045ac20(*(undefined8 *)(piVar11 + 2),(long)*piVar11,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar9 + 0x68) = lVar3;
          if (lVar3 == 0) goto LAB_003ad7bc;
        }
        piVar11 = *(int **)(piVar2 + 0x20);
        FUN_00452f80(*(undefined8 *)(piVar9 + 0x6a),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar9[0x6a] = 0;
        piVar9[0x6b] = 0;
        if (piVar11 != (int *)0x0) {
          lVar3 = FUN_0045ac20(*(undefined8 *)(piVar11 + 2),(long)*piVar11,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar9 + 0x6a) = lVar3;
          if (lVar3 == 0) goto LAB_003ad7bc;
        }
        *(undefined8 *)(piVar9 + 0x8c) = *(undefined8 *)(piVar2 + 0x18);
        piVar9[0x8e] = piVar2[0x1a];
        FUN_00452f80(*(undefined8 *)(piVar9 + 0x88),"external/openssl/ssl/ssl_asn1.c",0x157);
        piVar11 = *(int **)(piVar2 + 0x1c);
        if (piVar11 == (int *)0x0) {
          piVar8 = piVar9 + 0x88;
        }
        else {
          piVar8 = piVar11 + 2;
          *(undefined8 *)(piVar9 + 0x88) = *(undefined8 *)piVar8;
          *(long *)(piVar9 + 0x8a) = (long)*piVar11;
        }
        piVar8[0] = 0;
        piVar8[1] = 0;
        piVar11 = *(int **)(piVar2 + 4);
        uVar6 = 0;
        if (piVar11 != (int *)0x0) {
          if (*piVar11 != 1) {
            uVar4 = 0x10f;
            uVar5 = 0x162;
            goto LAB_003ad7b8;
          }
          uVar6 = (uint)**(byte **)(piVar11 + 2);
        }
        piVar9[0x7a] = uVar6;
        piVar11 = *(int **)(piVar2 + 0x22);
        FUN_00452f80(*(undefined8 *)(piVar9 + 0x96),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar9[0x96] = 0;
        piVar9[0x97] = 0;
        if (piVar11 == (int *)0x0) {
LAB_003ada1c:
          piVar9[0x9c] = (int)*(undefined8 *)(piVar2 + 0x24);
          piVar9[0x8f] = piVar2[0x26];
          FUN_00452f80(*(undefined8 *)(piVar9 + 0x90),"external/openssl/ssl/ssl_asn1.c",0x173);
          piVar8 = *(int **)(piVar2 + 0x28);
          lVar3 = 0;
          piVar11 = piVar9 + 0x90;
          if (piVar8 != (int *)0x0) {
            piVar11 = piVar8 + 2;
            *(undefined8 *)(piVar9 + 0x90) = *(undefined8 *)piVar11;
            lVar3 = (long)*piVar8;
          }
          piVar11[0] = 0;
          piVar11[1] = 0;
          *(long *)(piVar9 + 0x92) = lVar3;
          *(char *)(piVar9 + 0x94) = (char)piVar2[0x2a];
          FUN_00452f80(*(undefined8 *)(piVar9 + 0x98),"external/openssl/ssl/ssl_asn1.c",0x17f);
          piVar8 = *(int **)(piVar2 + 0x2c);
          lVar3 = 0;
          piVar11 = piVar9 + 0x98;
          if (piVar8 != (int *)0x0) {
            piVar11 = piVar8 + 2;
            *(undefined8 *)(piVar9 + 0x98) = *(undefined8 *)piVar11;
            lVar3 = (long)*piVar8;
          }
          piVar11[0] = 0;
          piVar11[1] = 0;
          *(long *)(piVar9 + 0x9a) = lVar3;
          FUN_003e4550(piVar2,&DAT_0449b8b8);
          if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
            *param_1 = (long)piVar9;
          }
          *param_2 = local_38;
          return piVar9;
        }
        lVar3 = FUN_0045ac20(*(undefined8 *)(piVar11 + 2),(long)*piVar11,
                             "external/openssl/ssl/ssl_asn1.c",0xdd);
        *(long *)(piVar9 + 0x96) = lVar3;
        if (lVar3 != 0) goto LAB_003ada1c;
        goto LAB_003ad7bc;
      }
      uVar4 = 0x89;
      uVar5 = 0x118;
    }
    else {
      uVar4 = 0x103;
      uVar5 = 0x111;
    }
  }
  else {
    uVar5 = 0x10a;
    uVar4 = 0xfe;
  }
LAB_003ad7b8:
  FUN_004806c0(0x14,0x67,uVar4,"external/openssl/ssl/ssl_asn1.c",uVar5);
LAB_003ad7bc:
  FUN_003e4550(piVar2,&DAT_0449b8b8);
  if ((param_1 == (long *)0x0) || ((int *)*param_1 != piVar9)) {
    FUN_003b8e30(piVar9);
  }
  return (int *)0x0;
}


