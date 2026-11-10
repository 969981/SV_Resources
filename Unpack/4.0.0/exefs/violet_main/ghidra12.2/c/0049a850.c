/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049a850; name: FUN_0049a850
 */


undefined8 FUN_0049a850(long param_1,void *param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_4;
  if (param_1 == 0) {
    lVar2 = 0;
joined_r0x0049a8a0:
    lVar6 = 0;
    if ((param_2 != (void *)0x0) && (lVar6 = 0, param_3 != 0)) {
      pvVar3 = memchr(param_2,0,param_3 - 1);
      if (pvVar3 != (void *)0x0) goto LAB_0049a8bc;
      lVar6 = FUN_0045ac20(param_2,param_3,"external/openssl/crypto/x509v3/v3_utl.c",0x36);
      if (lVar6 != 0) goto LAB_0049a8e8;
      puVar4 = (undefined8 *)0x0;
      goto LAB_0049a938;
    }
LAB_0049a8e8:
    puVar4 = (undefined8 *)FUN_00452c30(0x18,"external/openssl/crypto/x509v3/v3_utl.c",0x3a);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0049a938;
    if (lVar7 != 0) {
LAB_0049a914:
      *puVar4 = 0;
      puVar4[1] = lVar2;
      puVar4[2] = lVar6;
      iVar1 = FUN_0047e2f0(*param_4,puVar4);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_0049a938;
    }
    lVar5 = FUN_0047dcc0();
    *param_4 = lVar5;
    if (lVar5 != 0) goto LAB_0049a914;
    FUN_004806c0(0x22,0xae,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x45);
  }
  else {
    lVar2 = FUN_0045abd0(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x2d);
    if (lVar2 != 0) goto joined_r0x0049a8a0;
LAB_0049a8bc:
    puVar4 = (undefined8 *)0x0;
    lVar6 = 0;
LAB_0049a938:
    FUN_004806c0(0x22,0xae,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x45);
    if (lVar7 != 0) goto LAB_0049a964;
  }
  FUN_0047db00(*param_4);
  *param_4 = 0;
LAB_0049a964:
  FUN_00452f80(puVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x4a);
  FUN_00452f80(lVar2,"external/openssl/crypto/x509v3/v3_utl.c",0x4b);
  FUN_00452f80(lVar6,"external/openssl/crypto/x509v3/v3_utl.c",0x4c);
  return 0;
}


