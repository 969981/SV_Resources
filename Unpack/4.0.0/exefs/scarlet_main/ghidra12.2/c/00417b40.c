/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00417b40; name: FUN_00417b40
 */


undefined8
FUN_00417b40(undefined8 param_1,int param_2,long param_3,void *param_4,int param_5,int param_6)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  byte *__dest_00;
  size_t __n;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_34;
  
  if (param_6 != 2) {
    if ((param_3 != 0) && (FUN_003e5650(0,&local_34,0,param_3), local_34 != -1)) {
      uVar2 = 0x66;
      uVar3 = 0x3b;
      goto LAB_00417cf8;
    }
    if (param_4 != (void *)0x0) {
      iVar1 = 0x20;
      if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (iVar1 = 0x38, param_2 != 0x40b)) {
        iVar1 = 0x39;
      }
      if (iVar1 == param_5) {
        __dest = (void *)FUN_00452ce0(0x48,"external/openssl/crypto/ec/ecx_meth.c",0x46);
        if (__dest == (void *)0x0) goto LAB_00417ccc;
        if (param_6 == 0) {
          memcpy(__dest,param_4,(long)param_5);
          goto LAB_00417e08;
        }
        goto LAB_00417b84;
      }
    }
    uVar2 = 0x66;
    uVar3 = 0x41;
LAB_00417cf8:
    FUN_004806c0(0x10,0x10a,uVar2,"external/openssl/crypto/ec/ecx_meth.c",uVar3);
    return 0;
  }
  __dest = (void *)FUN_00452ce0(0x48,"external/openssl/crypto/ec/ecx_meth.c",0x46);
  if (__dest == (void *)0x0) {
LAB_00417ccc:
    uVar2 = 0x41;
    uVar3 = 0x48;
    goto LAB_00417cf8;
  }
LAB_00417b84:
  uVar2 = 0x20;
  if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (uVar2 = 0x38, param_2 != 0x40b)) {
    uVar2 = 0x39;
  }
  __dest_00 = (byte *)thunk_FUN_00452c30(uVar2,"external/openssl/crypto/ec/ecx_meth.c",0x50);
  *(byte **)((long)__dest + 0x40) = __dest_00;
  if (__dest_00 == (byte *)0x0) {
    FUN_004806c0(0x10,0x10a,0x41,"external/openssl/crypto/ec/ecx_meth.c",0x52);
LAB_00417db4:
    FUN_00452f80(__dest,"external/openssl/crypto/ec/ecx_meth.c",0x79);
    return 0;
  }
  if (param_6 == 2) {
    uVar4 = 0x20;
    if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (uVar4 = 0x38, param_2 != 0x40b)) {
      uVar4 = 0x39;
    }
    iVar1 = FUN_00464e30(__dest_00,uVar4);
    if (iVar1 < 1) {
      FUN_00453350(__dest_00,"external/openssl/crypto/ec/ecx_meth.c",0x57);
      *(undefined8 *)((long)__dest + 0x40) = 0;
      goto LAB_00417db4;
    }
    if (0x43e < param_2) goto LAB_00417d7c;
    if (param_2 == 0x40a) {
      *__dest_00 = *__dest_00 & 0xf8;
      __dest_00[0x1f] = __dest_00[0x1f] & 0x3f | 0x40;
      goto LAB_00417dfc;
    }
    if (param_2 != 0x40b) goto LAB_00417e08;
    *__dest_00 = *__dest_00 & 0xfc;
    __dest_00[0x37] = __dest_00[0x37] | 0x80;
  }
  else {
    __n = 0x20;
    if (((param_2 != 0x40a) && (param_2 != 0x43f)) && (__n = 0x38, param_2 != 0x40b)) {
      __n = 0x39;
    }
    memcpy(__dest_00,param_4,__n);
    if (0x43e < param_2) {
LAB_00417d7c:
      if (param_2 == 0x43f) {
        FUN_0041c710(__dest,__dest_00);
      }
      else if (param_2 == 0x440) {
        FUN_00424670(__dest,__dest_00);
      }
      goto LAB_00417e08;
    }
    if (param_2 == 0x40a) {
LAB_00417dfc:
      FUN_00420dd0(__dest,__dest_00);
      goto LAB_00417e08;
    }
    if (param_2 != 0x40b) goto LAB_00417e08;
  }
  thunk_FUN_00427e00(__dest,__dest_00);
LAB_00417e08:
  FUN_0043e2c0(param_1,param_2,__dest);
  return 1;
}


