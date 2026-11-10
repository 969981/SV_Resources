/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5ce0; name: FUN_003e5ce0
 */


undefined8
FUN_003e5ce0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,void *param_5,
            size_t param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = FUN_00446030(0x100,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_0049e5d0(&DAT_047f1808);
  if (lVar3 == 0) {
    uVar2 = FUN_00445eb0(1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = FUN_00452c30(0x18,"external/openssl/crypto/async/async.c",0x28);
    if (lVar3 == 0) {
      FUN_004806c0(0x33,100,0x41,"external/openssl/crypto/async/async.c",0x2a);
LAB_003e5ed8:
      FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x36);
      return 0;
    }
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined4 *)(lVar3 + 0x10) = 0;
    iVar1 = FUN_0049e5f0(&DAT_047f1808,lVar3);
    if (iVar1 == 0) goto LAB_003e5ed8;
  }
  lVar6 = *param_1;
  if (lVar6 == 0) {
    lVar6 = *(long *)(lVar3 + 8);
    if (lVar6 != 0) goto LAB_003e5d98;
    puVar4 = (undefined8 *)FUN_0049e5d0(&DAT_047f1810);
    if (puVar4 == (undefined8 *)0x0) {
      iVar1 = FUN_003e60b0(0,0);
      if (iVar1 == 0) goto LAB_003e6054;
      puVar4 = (undefined8 *)FUN_0049e5d0(&DAT_047f1810);
    }
    lVar6 = FUN_0047e380(*puVar4);
    if (lVar6 == 0) {
      if ((puVar4[2] == 0) || ((ulong)puVar4[1] < (ulong)puVar4[2])) {
        lVar6 = FUN_00452ce0(0x28,"external/openssl/crypto/async/async.c",0x52);
        if (lVar6 == 0) {
          FUN_004806c0(0x33,0x66,0x41,"external/openssl/crypto/async/async.c",0x54);
        }
        else {
          *(undefined4 *)(lVar6 + 0x1c) = 0;
          FUN_00452f80(*(undefined8 *)(lVar6 + 0x10),"external/openssl/crypto/async/async.c",0x60);
          FUN_00452f80(lVar6,"external/openssl/crypto/async/async.c",0x62);
        }
      }
LAB_003e6054:
      *(undefined8 *)(lVar3 + 8) = 0;
      return 1;
    }
    *(long *)(lVar3 + 8) = lVar6;
    if (param_5 == (void *)0x0) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
    }
    else {
      __dest = (void *)FUN_00452c30(param_6,"external/openssl/crypto/async/async.c",0xe3);
      *(void **)(*(long *)(lVar3 + 8) + 0x10) = __dest;
      if (__dest == (void *)0x0) {
        FUN_004806c0(0x33,0x69,0x41,"external/openssl/crypto/async/async.c",0xe5);
        lVar6 = *(long *)(lVar3 + 8);
        puVar4 = (undefined8 *)FUN_0049e5d0(&DAT_047f1810);
        FUN_00452f80(*(undefined8 *)(lVar6 + 0x10),"external/openssl/crypto/async/async.c",0x8b);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        FUN_0047e2f0(*puVar4,lVar6);
        *(undefined8 *)(lVar3 + 8) = 0;
        return 0;
      }
      memcpy(__dest,param_5,param_6);
      lVar6 = *(long *)(lVar3 + 8);
    }
    uVar2 = 0xf3;
    *(undefined8 *)(lVar6 + 8) = param_4;
    *(undefined8 *)(lVar6 + 0x20) = param_2;
LAB_003e5f64:
    uVar5 = 0x66;
  }
  else {
    *(long *)(lVar3 + 8) = lVar6;
LAB_003e5d98:
    iVar1 = *(int *)(lVar6 + 0x1c);
    if (iVar1 == 1) {
      *param_1 = lVar6;
      *(undefined4 *)(*(long *)(lVar3 + 8) + 0x1c) = 2;
      *(undefined8 *)(lVar3 + 8) = 0;
      return 2;
    }
    if (iVar1 == 2) {
      *(long *)(lVar3 + 8) = *param_1;
      uVar2 = 0xd0;
      goto LAB_003e5f64;
    }
    if (iVar1 == 3) {
      *param_3 = *(undefined4 *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      puVar4 = (undefined8 *)FUN_0049e5d0(&DAT_047f1810);
      FUN_00452f80(*(undefined8 *)(lVar6 + 0x10),"external/openssl/crypto/async/async.c",0x8b);
      *(undefined8 *)(lVar6 + 0x10) = 0;
      FUN_0047e2f0(*puVar4,lVar6);
      *(undefined8 *)(lVar3 + 8) = 0;
      uVar2 = 3;
      goto LAB_003e5fbc;
    }
    uVar5 = 0x44;
    uVar2 = 0xd7;
  }
  FUN_004806c0(0x33,0x69,uVar5,"external/openssl/crypto/async/async.c",uVar2);
  lVar6 = *(long *)(lVar3 + 8);
  puVar4 = (undefined8 *)FUN_0049e5d0(&DAT_047f1810);
  FUN_00452f80(*(undefined8 *)(lVar6 + 0x10),"external/openssl/crypto/async/async.c",0x8b);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  FUN_0047e2f0(*puVar4,lVar6);
  uVar2 = 0;
  *(undefined8 *)(lVar3 + 8) = 0;
LAB_003e5fbc:
  *param_1 = 0;
  return uVar2;
}


