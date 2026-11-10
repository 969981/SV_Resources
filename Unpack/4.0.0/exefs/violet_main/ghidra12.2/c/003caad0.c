/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003caad0; name: FUN_003caad0
 */


undefined8 FUN_003caad0(int *param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x26);
  puVar4 = (undefined1 *)FUN_00452c30(0x68,"external/openssl/ssl/statem/statem_dtls.c",0x3e);
  if (puVar4 == (undefined1 *)0x0) {
    FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x3f);
    return 0;
  }
  if (lVar7 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_00452c30(lVar7,"external/openssl/ssl/statem/statem_dtls.c",0x44);
    if (__dest == (void *)0x0) {
      FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x45);
      uVar5 = 0x46;
      goto LAB_003cacb4;
    }
  }
  *(void **)(puVar4 + 0x58) = __dest;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  memcpy(__dest,*(void **)(*(long *)(param_1 + 0x22) + 8),*(size_t *)(param_1 + 0x26));
  lVar6 = *(long *)(param_1 + 0x2c);
  lVar7 = *(long *)(lVar6 + 0x140);
  if (param_2 == 0) {
    if (lVar7 + 0xcU != (ulong)(uint)param_1[0x26]) {
      return 0;
    }
  }
  else {
    lVar1 = 3;
    if (*param_1 != 0x100) {
      lVar1 = 1;
    }
    if (lVar1 + lVar7 != (ulong)(uint)param_1[0x26]) {
      return 0;
    }
  }
  *(long *)(puVar4 + 8) = lVar7;
  uVar3 = *(ushort *)(lVar6 + 0x148);
  *(ushort *)(puVar4 + 0x10) = uVar3;
  uVar2 = *(undefined1 *)(lVar6 + 0x138);
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar7;
  *(int *)(puVar4 + 0x28) = param_2;
  *puVar4 = uVar2;
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(param_1 + 0x14c);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(param_1 + 0x152);
  *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(param_1 + 0x174);
  param_2 = (uint)uVar3 * 2 - param_2;
  *(undefined2 *)(puVar4 + 0x50) = *(undefined2 *)(*(long *)(param_1 + 0x63e) + 2);
  local_28 = (ulong)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x30;
  lVar7 = FUN_003a2c60(&local_28,puVar4);
  if (lVar7 != 0) {
    FUN_003a2d50(*(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x120),lVar7);
    return 1;
  }
  if (*(int *)(puVar4 + 0x28) != 0) {
    FUN_00439e00(*(undefined8 *)(puVar4 + 0x30));
    FUN_0042bbe0(*(undefined8 *)(puVar4 + 0x38));
  }
  FUN_00452f80(*(undefined8 *)(puVar4 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",0x67);
  FUN_00452f80(*(undefined8 *)(puVar4 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",0x68);
  uVar5 = 0x69;
LAB_003cacb4:
  FUN_00452f80(puVar4,"external/openssl/ssl/statem/statem_dtls.c",uVar5);
  return 0;
}


