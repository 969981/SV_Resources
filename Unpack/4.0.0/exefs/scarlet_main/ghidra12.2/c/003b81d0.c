/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b81d0; name: FUN_003b81d0
 */


undefined8 FUN_003b81d0(long param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0x350;
  }
  else {
    iVar1 = FUN_003b8330(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      uVar2 = 0x184;
      uVar3 = 0x355;
    }
    else if (**(long **)(param_1 + 0x140) == 0) {
      uVar2 = 0x44;
      uVar3 = 0x359;
    }
    else {
      __dest = (void *)FUN_00452db0(*(undefined8 *)(**(long **)(param_1 + 0x140) + 0x18),param_4,
                                    "external/openssl/ssl/ssl_rsa.c",0x35d);
      if (__dest == (void *)0x0) {
        uVar2 = 0x41;
        uVar3 = 0x35f;
      }
      else {
        *(void **)(**(long **)(param_1 + 0x140) + 0x18) = __dest;
        memcpy(__dest,param_3,param_4);
        *(size_t *)(**(long **)(param_1 + 0x140) + 0x20) = param_4;
        iVar1 = FUN_003b8330(param_2,param_3,param_4,param_1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = 0x184;
        uVar3 = 0x36c;
      }
    }
  }
  FUN_004806c0(0x14,0x21f,uVar2,"external/openssl/ssl/ssl_rsa.c",uVar3);
  return 0;
}


