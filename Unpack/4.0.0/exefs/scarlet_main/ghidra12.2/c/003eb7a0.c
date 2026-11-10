/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb7a0; name: FUN_003eb7a0
 */


undefined8 * FUN_003eb7a0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *(uint *)((long)param_1 + 0x14);
  puVar3 = (undefined8 *)FUN_00452ce0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xf6);
  if ((uVar1 >> 3 & 1) == 0) {
    if (puVar3 == (undefined8 *)0x0) {
LAB_003eb864:
      FUN_004806c0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xf7);
      return (undefined8 *)0x0;
    }
    uVar5 = 1;
  }
  else {
    if (puVar3 == (undefined8 *)0x0) goto LAB_003eb864;
    uVar5 = 9;
  }
  *(undefined4 *)((long)puVar3 + 0x14) = uVar5;
  lVar4 = 8;
  if ((*(byte *)((long)param_1 + 0x14) & 4) != 0) {
    lVar4 = 0xc;
  }
  if (puVar3 != param_1) {
    iVar2 = *(int *)((long)param_1 + lVar4);
    if ((*(int *)((long)puVar3 + 0xc) < iVar2) && (lVar4 = FUN_003eb670(puVar3,iVar2), lVar4 == 0))
    {
      if ((*(uint *)((long)puVar3 + 0x14) >> 1 & 1) == 0) {
        if ((*(uint *)((long)puVar3 + 0x14) >> 3 & 1) == 0) {
          FUN_00452f80(*puVar3,"external/openssl/crypto/bn/bn_lib.c",0xd0);
        }
        else {
          FUN_00453360(*puVar3,(long)*(int *)((long)puVar3 + 0xc) << 2,
                       "external/openssl/crypto/bn/bn_lib.c",0xcc);
        }
      }
      if ((*(byte *)((long)puVar3 + 0x14) & 1) != 0) {
        FUN_00452f80(puVar3,"external/openssl/crypto/bn/bn_lib.c",0xe7);
      }
      return (undefined8 *)0x0;
    }
    iVar6 = *(int *)(param_1 + 1);
    if (0 < iVar6) {
      memcpy((void *)*puVar3,(void *)*param_1,(long)iVar2 << 2);
      iVar6 = *(int *)(param_1 + 1);
    }
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 2);
    *(int *)(puVar3 + 1) = iVar6;
    param_1 = puVar3;
  }
  return param_1;
}


