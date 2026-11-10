/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e66500; name: FUN_01e66500
 */


void FUN_01e66500(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  FUN_015c486c();
  FUN_011722d4(auStack_38,2);
  FUN_00d8e6c4(param_1,auStack_38);
  lVar1 = param_1 + 0x10;
  FUN_01c45238(lVar1,local_28);
  FUN_00d8e444(auStack_38);
  uVar2 = FUN_019c7a40(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_011722d4(auStack_38,3);
    FUN_00d8e6c4(param_1,auStack_38);
    FUN_01c45238(lVar1,local_28);
    FUN_00d8e444(auStack_38);
    uVar2 = FUN_019c7a40(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_011722d4(auStack_38,4);
      FUN_00d8e6c4(param_1,auStack_38);
      FUN_01c45238(lVar1,local_28);
      FUN_00d8e444(auStack_38);
      FUN_019c7a40(param_1);
    }
  }
  return;
}


