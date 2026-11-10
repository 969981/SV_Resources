/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dfc30; name: FUN_003dfc30
 */


undefined8 * FUN_003dfc30(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  void *__src;
  void *__dest;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  int iStack_64;
  long local_60;
  undefined4 local_58;
  
  if ((((param_2 == (long *)0x0) || (0x7ffffffe < param_3 - 1U)) || (lVar6 = *param_2, lVar6 == 0))
     || (*(char *)(lVar6 + (param_3 - 1U)) < '\0')) {
    uVar4 = 0xfe;
LAB_003dfcf4:
    FUN_004806c0(0xd,0xc4,0xd8,"external/openssl/crypto/asn1/a_object.c",uVar4);
LAB_003dfcf8:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    iVar7 = (int)param_3;
    local_68 = 0;
    local_58 = 0;
    iStack_64 = iVar7;
    local_60 = lVar6;
    iVar2 = FUN_0045bea0(auStack_78);
    if (iVar2 == 0) {
      lVar5 = 0;
      do {
        if (*(char *)(lVar6 + lVar5) == -0x80) {
          uVar4 = 0x11c;
          goto LAB_003dfcf4;
        }
        lVar5 = lVar5 + 1;
      } while (iVar7 != (int)lVar5);
      if (((param_1 == (undefined8 *)0x0) ||
          (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
         ((*(byte *)(puVar3 + 4) & 1) == 0)) {
        puVar3 = (undefined8 *)FUN_00452ce0(0x28,"external/openssl/crypto/asn1/a_object.c",0x156);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_004806c0(0xd,0x7b,0x41,"external/openssl/crypto/asn1/a_object.c",0x158);
          return (undefined8 *)0x0;
        }
        *(undefined4 *)(puVar3 + 4) = 1;
      }
      __src = (void *)*param_2;
      __dest = (void *)puVar3[3];
      puVar3[3] = 0;
      if ((__dest == (void *)0x0) || (*(int *)((long)puVar3 + 0x14) < iVar7)) {
        *(undefined4 *)((long)puVar3 + 0x14) = 0;
        FUN_00452f80(__dest,"external/openssl/crypto/asn1/a_object.c",0x130);
        __dest = (void *)FUN_00452c30((long)iVar7,"external/openssl/crypto/asn1/a_object.c",0x131);
        if (__dest == (void *)0x0) {
          FUN_004806c0(0xd,0xc4,0x41,"external/openssl/crypto/asn1/a_object.c",0x14c);
          if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
            uVar1 = *(uint *)(puVar3 + 4);
            if ((uVar1 >> 2 & 1) != 0) {
              FUN_00452f80(*puVar3,"external/openssl/crypto/asn1/a_object.c",0x167);
              FUN_00452f80(puVar3[1],"external/openssl/crypto/asn1/a_object.c",0x168);
              uVar1 = *(uint *)(puVar3 + 4);
              *puVar3 = 0;
              puVar3[1] = 0;
            }
            if ((uVar1 >> 3 & 1) != 0) {
              FUN_00452f80(puVar3[3],"external/openssl/crypto/asn1/a_object.c",0x16d);
              uVar1 = *(uint *)(puVar3 + 4);
              puVar3[3] = 0;
              *(undefined4 *)((long)puVar3 + 0x14) = 0;
            }
            if ((uVar1 & 1) != 0) {
              FUN_00452f80(puVar3,"external/openssl/crypto/asn1/a_object.c",0x172);
            }
          }
          goto LAB_003dfcf8;
        }
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
      }
      memcpy(__dest,__src,(long)iVar7);
      if ((*(byte *)(puVar3 + 4) >> 2 & 1) != 0) {
        FUN_00452f80(*puVar3,"external/openssl/crypto/asn1/a_object.c",0x13b);
        FUN_00452f80(puVar3[1],"external/openssl/crypto/asn1/a_object.c",0x13c);
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffb;
      }
      param_3 = (long)__src + (long)iVar7;
      puVar3[3] = __dest;
      *(int *)((long)puVar3 + 0x14) = iVar7;
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = puVar3;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_0045bc10();
      if (param_1 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar8 != (undefined8 *)0x0) {
          uVar1 = *(uint *)(puVar8 + 4);
          if ((uVar1 >> 2 & 1) != 0) {
            FUN_00452f80(*puVar8,"external/openssl/crypto/asn1/a_object.c",0x167);
            FUN_00452f80(puVar8[1],"external/openssl/crypto/asn1/a_object.c",0x168);
            uVar1 = *(uint *)(puVar8 + 4);
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          if ((uVar1 >> 3 & 1) != 0) {
            FUN_00452f80(puVar8[3],"external/openssl/crypto/asn1/a_object.c",0x16d);
            uVar1 = *(uint *)(puVar8 + 4);
            puVar8[3] = 0;
            *(undefined4 *)((long)puVar8 + 0x14) = 0;
          }
          if ((uVar1 & 1) != 0) {
            FUN_00452f80(puVar8,"external/openssl/crypto/asn1/a_object.c",0x172);
          }
        }
        *param_1 = puVar3;
      }
      param_3 = *param_2 + param_3;
    }
    *param_2 = param_3;
  }
  return puVar3;
}


