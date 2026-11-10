/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003747a0; name: FUN_003747a0
 */


undefined8 FUN_003747a0(long *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  pbVar1 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar1 = (byte *)param_1[2];
  }
  uVar3 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar3 = param_1[1];
  }
  while( true ) {
    if (uVar3 == 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + (ulong)(*pbVar1 >> 3)) >> (ulong)(*pbVar1 & 7) & 1) == 0) break;
    pbVar1 = pbVar1 + 1;
    uVar3 = uVar3 - 1;
  }
  FUN_00367770(auStack_40,param_3);
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/validate_metadata.cc",
                       0x2c,auStack_40,0,0);
  pbVar2 = (byte *)((long)param_1 + 9);
  if (*param_1 != 0) {
    pbVar2 = (byte *)param_1[2];
  }
  uVar4 = FUN_00351770(uVar4,4,(long)pbVar1 - (long)pbVar2);
  FUN_0036a0e0(auStack_60,param_1,3);
  uVar4 = FUN_00351fa0(uVar4,6,auStack_60);
  return uVar4;
}


