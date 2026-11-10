/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00494cc0; name: FUN_00494cc0
 */


undefined8 FUN_00494cc0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_00494e24;
      uVar3 = FUN_00491cb0();
    }
    else {
      uVar3 = FUN_00483b40(*(long *)(param_1 + 4));
    }
    iVar2 = -1;
    if (param_3 == 0) {
      do {
        iVar2 = FUN_0048a3f0(uVar3,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        FUN_0048a390(uVar3,iVar2);
        FUN_0048a380();
        lVar5 = FUN_003df190();
        if ((lVar5 == 0) || (puVar6 = (undefined4 *)FUN_00494ea0(), puVar6 == (undefined4 *)0x0))
        goto LAB_00494e48;
        *(long *)(puVar6 + 2) = lVar5;
        *puVar6 = 1;
        iVar1 = FUN_0047e2f0(param_2,puVar6);
      } while (iVar1 != 0);
    }
    else {
      do {
        iVar2 = FUN_0048a3f0(uVar3,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar4 = FUN_0048a390(uVar3,iVar2);
        FUN_0048a380();
        lVar5 = FUN_003df190();
        FUN_0048a490(uVar3,iVar2);
        FUN_0048b980(uVar4);
        if ((lVar5 == 0) || (puVar6 = (undefined4 *)FUN_00494ea0(), puVar6 == (undefined4 *)0x0))
        goto LAB_00494e48;
        *(long *)(puVar6 + 2) = lVar5;
        *puVar6 = 1;
        iVar2 = iVar2 + -1;
        iVar1 = FUN_0047e2f0(param_2,puVar6);
      } while (iVar1 != 0);
    }
    FUN_004806c0(0x22,0x7a,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x17d);
    lVar5 = 0;
    goto LAB_00494e68;
  }
LAB_00494e24:
  FUN_004806c0(0x22,0x7a,0x7d,"external/openssl/crypto/x509v3/v3_alt.c",0x162);
  lVar5 = 0;
  goto LAB_00494e64;
LAB_00494e48:
  FUN_004806c0(0x22,0x7a,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x176);
LAB_00494e64:
  puVar6 = (undefined4 *)0x0;
LAB_00494e68:
  FUN_00494eb0(puVar6);
  thunk_FUN_003df2e0(lVar5);
  return 0;
}


