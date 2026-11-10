/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00309fb0; name: FUN_00309fb0
 */


void FUN_00309fb0(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long local_68;
  ulong uStack_60;
  int local_44;
  
  FUN_00375900(param_3,*(undefined8 *)(param_2 + 0x8f0),&local_44,&local_68,0,0);
  if (local_44 != 0) {
    *(undefined1 *)(param_2 + 0x1b3) = 1;
  }
  if ((*(int *)(param_2 + 0x1cc) == 0) || (*(long *)(param_2 + 0x170) != 0)) {
    FUN_0038d190((long)local_44,auStack_80);
    puVar1 = PTR_DAT_047cc628;
    lVar4 = *(long *)PTR_DAT_047cc628;
    FUN_0036762c(auStack_a0,auStack_80);
    uVar2 = FUN_0049e770(PTR_FUN_047cba38,0x80);
    if (uVar2 != 0) {
      FUN_00375ccc(uVar2,lVar4 + 0xe0,auStack_a0);
    }
    lVar4 = FUN_00316a80(param_2 + 0x418,uVar2 | 2);
    if (lVar4 != 0) {
      FUN_00352b40("add_status",lVar4,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x84d);
    }
    uVar2 = uStack_60 & 0xff;
    if (local_68 != 0) {
      uVar2 = uStack_60;
    }
    if (uVar2 != 0) {
      uVar3 = FUN_00376310(*(long *)puVar1 + 0xc0,&local_68,0);
      lVar4 = FUN_00316a80(param_2 + 0x418,uVar3);
      if (lVar4 != 0) {
        FUN_00352b40("add_status_message",lVar4,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x853);
      }
    }
    *(undefined4 *)(param_2 + 0x1cc) = 1;
    FUN_00308da0(param_1,param_2);
  }
  if (4 < param_3) {
    FUN_00350fd0(param_3);
  }
  return;
}


