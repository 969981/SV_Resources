/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031d11c; name: FUN_0031d11c
 */


void FUN_0031d11c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *local_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [32];
  char *local_1b0;
  undefined8 uStack_1a8;
  byte local_180 [16];
  ulong local_170;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [296];
  
  FUN_00368450(auStack_148);
  iVar1 = FUN_0034d050(*(undefined4 *)(param_1 + 9),param_1 + 0x14,auStack_148);
  if (iVar1 == 0) {
    local_1b0 = "Unexpected error decompressing data for algorithm with enum value ";
    uStack_1a8 = 0x42;
    lStack_1d8 = FUN_00394c20(*(undefined4 *)(param_1 + 9),auStack_1d0);
    lStack_1d8 = lStack_1d8 - (long)auStack_1d0;
    local_1e0 = auStack_1d0;
    FUN_003959c0(local_180,&local_1b0,&local_1e0);
    uVar5 = (ulong)local_180 | 1;
    if ((local_180[0] & 1) != 0) {
      uVar5 = local_170;
    }
                    /* try { // try from 0031d258 to 0031d27b has its CatchHandler @ 0031d2b4 */
    FUN_00367770(auStack_168,uVar5);
    uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                         ,0x10b,auStack_168,0,0);
    param_1[1] = uVar3;
    if ((local_180[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_170);
    }
    FUN_00368470(auStack_148);
    uVar5 = param_1[1];
  }
  else {
    FUN_00374ad8(param_1 + 0x39,auStack_148,
                 *(uint *)(*(long *)param_1[0x13] + 0xc) & 0x3fffffff | 0x40000000);
    puVar2 = *(undefined8 **)param_1[0x13];
    *(undefined8 **)param_1[0x13] = param_1 + 0x39;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0031d184 to 0031d187 has its CatchHandler @ 0031d2b0 */
      (**(code **)*puVar2)();
    }
    param_1[0x13] = 0;
    uVar5 = param_1[1];
  }
  if (4 < uVar5) {
    uVar5 = FUN_00350fb0(uVar5);
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    uVar3 = param_1[0x67];
    *(undefined1 *)(param_1 + 0x61) = 0;
    param_1[0x67] = 0;
    FUN_003504a8(*param_1,param_1 + 0x62,uVar3,"Continuing OnRecvTrailingMetadataReady");
  }
  lVar4 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar4 + 0x10),uVar5);
  }
  if (4 < uVar5) {
    FUN_00350fd0(uVar5);
  }
  return;
}


