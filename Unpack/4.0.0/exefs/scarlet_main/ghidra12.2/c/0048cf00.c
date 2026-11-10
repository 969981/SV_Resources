/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048cf00; name: FUN_0048cf00
 */


undefined4 * FUN_0048cf00(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if ((param_1 == (undefined8 *)0x0) && (param_2 == 0)) {
LAB_0048cf1c:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_0045d030(param_2);
      if (lVar1 == 0) goto LAB_0048cf1c;
    }
    puVar3 = (undefined4 *)FUN_00452ce0(0x20,"external/openssl/crypto/x509v3/pcy_data.c",0x34);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004806c0(0x22,0xab,0x41,"external/openssl/crypto/x509v3/pcy_data.c",0x36);
      FUN_003dffa0(lVar1);
    }
    else {
      lVar2 = FUN_0047dcc0();
      *(long *)(puVar3 + 6) = lVar2;
      if (lVar2 == 0) {
        FUN_00452f80(puVar3,"external/openssl/crypto/x509v3/pcy_data.c",0x3c);
        FUN_003dffa0(lVar1);
        FUN_004806c0(0x22,0xab,0x41,"external/openssl/crypto/x509v3/pcy_data.c",0x3e);
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if (param_3 != 0) {
          *puVar3 = 0x10;
        }
        if (lVar1 == 0) {
          *(undefined8 *)(puVar3 + 2) = *param_1;
          *param_1 = 0;
        }
        else {
          *(long *)(puVar3 + 2) = lVar1;
        }
        if (param_1 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar3 + 4) = param_1[1];
          param_1[1] = 0;
        }
      }
    }
  }
  return puVar3;
}


