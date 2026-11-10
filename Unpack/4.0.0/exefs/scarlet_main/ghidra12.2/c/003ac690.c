/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ac690; name: FUN_003ac690
 */


undefined8 FUN_003ac690(long param_1,void *param_2,size_t param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  ushort *__s;
  
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar1 & 0x1c8) == 0) {
    iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(long *)(param_1 + 0x5d0) + 0x50,param_2,param_3,
                       *(long *)(param_1 + 0x5d0) + 8);
    if (iVar2 != 0) {
      uVar6 = 1;
      goto joined_r0x003ac754;
    }
  }
  else {
    __n = *(size_t *)(*(long *)(param_1 + 0xa8) + 0x2d0);
    if ((uVar1 & 8) != 0) {
      param_3 = __n;
    }
    lVar5 = __n + param_3 + 4;
    puVar3 = (ushort *)FUN_00452c30(lVar5,"external/openssl/ssl/s3_lib.c",0x1213);
    if (puVar3 != (ushort *)0x0) {
      __s = puVar3 + 1;
      *puVar3 = (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      if ((uVar1 >> 3 & 1) == 0) {
        memcpy(__s,param_2,param_3);
      }
      else {
        memset(__s,0,param_3);
      }
      *(ushort *)((long)__s + param_3) =
           (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
      memcpy((ushort *)((long)__s + param_3) + 1,*(void **)(*(long *)(param_1 + 0xa8) + 0x2c8),__n);
      FUN_00453260(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2c8),__n,
                   "external/openssl/ssl/s3_lib.c",0x1220);
      lVar4 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(lVar4 + 0x2d0) = 0;
      *(undefined8 *)(lVar4 + 0x2c8) = 0;
      iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x18))
                        (param_1,*(long *)(param_1 + 0x5d0) + 0x50,puVar3,lVar5,
                         *(long *)(param_1 + 0x5d0) + 8);
      if (iVar2 == 0) {
        FUN_00453260(puVar3,lVar5,"external/openssl/ssl/s3_lib.c",0x1226);
        uVar6 = 0;
      }
      else {
        FUN_00453260(puVar3,lVar5,"external/openssl/ssl/s3_lib.c",0x122a);
        uVar6 = 1;
      }
      goto joined_r0x003ac754;
    }
  }
  uVar6 = 0;
joined_r0x003ac754:
  if (param_2 == (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else if (param_4 == 0) {
    FUN_00453300(param_2,param_3);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    FUN_00453260(param_2,param_3,"external/openssl/ssl/s3_lib.c",0x123c);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(lVar5 + 0x2c0) = 0;
    *(undefined8 *)(lVar5 + 0x2b8) = 0;
  }
  return uVar6;
}


