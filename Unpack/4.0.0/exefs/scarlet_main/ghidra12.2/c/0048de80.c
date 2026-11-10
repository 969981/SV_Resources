/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048de80; name: FUN_0048de80
 */


long * FUN_0048de80(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_00452ce0(0x18,"external/openssl/crypto/x509v3/pcy_node.c",0x42);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x22,0xa8,0x41,"external/openssl/crypto/x509v3/pcy_node.c",0x44);
    return (long *)0x0;
  }
  *plVar2 = param_2;
  plVar2[1] = param_3;
  if (param_1 == 0) {
LAB_0048df28:
    if (param_4 != 0) {
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_0047dcc0();
        *(long *)(param_4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          uVar4 = 0x61;
          goto LAB_0048df7c;
        }
      }
      iVar1 = FUN_0047e2f0(lVar3,param_2);
      if (iVar1 == 0) {
        uVar4 = 0x65;
        goto LAB_0048df7c;
      }
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    }
  }
  else {
    iVar1 = FUN_0045bea0(*(undefined8 *)(param_2 + 8));
    if (iVar1 == 0x2ea) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(long **)(param_1 + 0x10) = plVar2;
        goto LAB_0048df28;
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 == 0) {
        lVar3 = FUN_0047de20(&LAB_0048dd90);
        *(long *)(param_1 + 8) = lVar3;
        if (lVar3 != 0) goto LAB_0048df1c;
        uVar4 = 0x53;
      }
      else {
LAB_0048df1c:
        iVar1 = FUN_0047e2f0(lVar3,plVar2);
        if (iVar1 != 0) goto LAB_0048df28;
        uVar4 = 0x57;
      }
LAB_0048df7c:
      FUN_004806c0(0x22,0xa8,0x41,"external/openssl/crypto/x509v3/pcy_node.c",uVar4);
    }
    FUN_00452f80(plVar2,"external/openssl/crypto/x509v3/pcy_node.c",0x76);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


