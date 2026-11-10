/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ed5c0; name: FUN_003ed5c0
 */


long FUN_003ed5c0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(int *)((long)param_1 + 0x34) != 0) {
    return 0;
  }
  if ((int)param_1[7] != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    lVar2 = FUN_00452c30(400,"external/openssl/crypto/bn/bn_ctx.c",0x13e);
    if (lVar2 != 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        FUN_003eb5a0();
        FUN_003eb5a0(lVar2 + 0x18);
        FUN_003eb5a0(lVar2 + 0x30);
        FUN_003eb5a0(lVar2 + 0x48);
        FUN_003eb5a0(lVar2 + 0x60);
        FUN_003eb5a0(lVar2 + 0x78);
        FUN_003eb5a0(lVar2 + 0x90);
        FUN_003eb5a0(lVar2 + 0xa8);
        FUN_003eb5a0(lVar2 + 0xc0);
        FUN_003eb5a0(lVar2 + 0xd8);
        FUN_003eb5a0(lVar2 + 0xf0);
        FUN_003eb5a0(lVar2 + 0x108);
        FUN_003eb5a0(lVar2 + 0x120);
        FUN_003eb5a0(lVar2 + 0x138);
        FUN_003eb5a0(lVar2 + 0x150);
        FUN_003eb5a0(lVar2 + 0x168);
      }
      else {
        FUN_003eb5a0();
        FUN_003ec740(lVar2,8);
        FUN_003eb5a0(lVar2 + 0x18);
        FUN_003ec740(lVar2 + 0x18,8);
        FUN_003eb5a0(lVar2 + 0x30);
        FUN_003ec740(lVar2 + 0x30,8);
        FUN_003eb5a0(lVar2 + 0x48);
        FUN_003ec740(lVar2 + 0x48,8);
        FUN_003eb5a0(lVar2 + 0x60);
        FUN_003ec740(lVar2 + 0x60,8);
        FUN_003eb5a0(lVar2 + 0x78);
        FUN_003ec740(lVar2 + 0x78,8);
        FUN_003eb5a0(lVar2 + 0x90);
        FUN_003ec740(lVar2 + 0x90,8);
        FUN_003eb5a0(lVar2 + 0xa8);
        FUN_003ec740(lVar2 + 0xa8,8);
        FUN_003eb5a0(lVar2 + 0xc0);
        FUN_003ec740(lVar2 + 0xc0,8);
        FUN_003eb5a0(lVar2 + 0xd8);
        FUN_003ec740(lVar2 + 0xd8,8);
        FUN_003eb5a0(lVar2 + 0xf0);
        FUN_003ec740(lVar2 + 0xf0,8);
        FUN_003eb5a0(lVar2 + 0x108);
        FUN_003ec740(lVar2 + 0x108,8);
        FUN_003eb5a0(lVar2 + 0x120);
        FUN_003ec740(lVar2 + 0x120,8);
        FUN_003eb5a0(lVar2 + 0x138);
        FUN_003ec740(lVar2 + 0x138,8);
        FUN_003eb5a0(lVar2 + 0x150);
        FUN_003ec740(lVar2 + 0x150,8);
        FUN_003eb5a0(lVar2 + 0x168);
        FUN_003ec740(lVar2 + 0x168,8);
      }
      lVar3 = param_1[2];
      *(long *)(lVar2 + 0x180) = lVar3;
      *(undefined8 *)(lVar2 + 0x188) = 0;
      if (*param_1 == 0) {
        param_1[1] = lVar2;
        param_1[2] = lVar2;
        plVar4 = param_1;
      }
      else {
        *(long *)(lVar3 + 0x188) = lVar2;
        param_1[2] = lVar2;
        plVar4 = param_1 + 1;
      }
      *plVar4 = lVar2;
      param_1[3] = CONCAT44((int)((ulong)param_1[3] >> 0x20) + (int)((ulong)DAT_03cb5578 >> 0x20),
                            (int)param_1[3] + (int)DAT_03cb5578);
      goto LAB_003ed8dc;
    }
    FUN_004806c0(3,0x93,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x13f);
    goto LAB_003ed6fc;
  }
  if (uVar1 == 0) {
    lVar2 = *param_1;
LAB_003ed6dc:
    uVar5 = 0;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = param_1[1];
    uVar5 = (ulong)uVar1 & 0xf;
    if ((int)uVar5 == 0) {
      lVar2 = *(long *)(lVar2 + 0x188);
      goto LAB_003ed6dc;
    }
  }
  *(uint *)(param_1 + 3) = uVar1 + 1;
  if (lVar2 != 0) {
    lVar2 = lVar2 + uVar5 * 0x18;
LAB_003ed8dc:
    FUN_003eb9f0(lVar2,0);
    *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) & 0xfffffffb;
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    return lVar2;
  }
LAB_003ed6fc:
  *(undefined4 *)(param_1 + 7) = 1;
  FUN_004806c0(3,0x74,0x6d,"external/openssl/crypto/bn/bn_ctx.c",0xe3);
  return 0;
}


