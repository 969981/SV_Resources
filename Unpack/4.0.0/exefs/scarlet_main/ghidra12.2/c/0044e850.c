/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0044e850; name: FUN_0044e850
 */


undefined8 FUN_0044e850(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_78 [10];
  
  if ((DAT_047f19a8 != 0) || (DAT_047f19a8 = FUN_0047de20(&LAB_0044ea60), DAT_047f19a8 != 0)) {
    local_78[0] = param_1;
    iVar1 = FUN_0047e200(DAT_047f19a8,local_78);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)FUN_0045c970(local_78,&DAT_03cfa0a8,0x1b,0x28,&LAB_0044ea50);
    }
    else {
      puVar2 = (undefined4 *)FUN_0047e450(DAT_047f19a8,iVar1);
    }
    if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 8) & 1) != 0)) {
joined_r0x0044e94c:
      if (-1 < param_2) {
        *(long *)(puVar2 + 2) = param_2;
      }
      if (-1 < param_3) {
        *(long *)(puVar2 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(long *)(puVar2 + 6) = param_4;
      }
      if (param_5 != 0) {
        *(ulong *)(puVar2 + 8) = param_5 | 1;
      }
      return 1;
    }
    puVar3 = (undefined4 *)FUN_00452ce0(0x28,"external/openssl/crypto/asn1/a_strnid.c",0x9f);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004806c0(0xd,0x8a,0x41,"external/openssl/crypto/asn1/a_strnid.c",0xa0);
    }
    else {
      iVar1 = FUN_0047e2f0(DAT_047f19a8,puVar3);
      if (iVar1 != 0) {
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
          uVar4 = 1;
          *puVar3 = param_1;
        }
        else {
          *puVar3 = *puVar2;
          uVar5 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)(puVar3 + 2) = uVar5;
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          uVar4 = *(ulong *)(puVar2 + 8) | 1;
        }
        *(ulong *)(puVar3 + 8) = uVar4;
        puVar2 = puVar3;
        goto joined_r0x0044e94c;
      }
      FUN_00452f80(puVar3,"external/openssl/crypto/asn1/a_strnid.c",0xa4);
    }
  }
  FUN_004806c0(0xd,0x81,0x41,"external/openssl/crypto/asn1/a_strnid.c",0xbe);
  return 0;
}


