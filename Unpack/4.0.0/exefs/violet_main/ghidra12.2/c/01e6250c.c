/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6250c; name: FUN_01e6250c
 */


uint FUN_01e6250c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_78 [4];
  undefined1 auStack_54 [20];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined1 auStack_28 [8];
  
  local_30[0] = 10;
  local_40 = *(undefined8 *)(param_1 + 0x50);
  local_38 = *(undefined4 *)(param_1 + 0x100);
  FUN_017522c8(local_78,auStack_54,0x14);
  if (local_78[0] != 0) {
    FUN_01e61adc(auStack_28,local_30,local_78[0] + 8);
    if (local_78[0] != 0) {
      FUN_01e6b510(auStack_28,&local_40,local_78[0] + 8);
    }
  }
  FUN_01e67308(param_1,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x100));
  uVar2 = FUN_014c27b0(local_78);
  uVar3 = FUN_014c27c8(local_78);
  uVar1 = FUN_01e61bd8(param_1,uVar2,uVar3);
  FUN_01694aa8(local_78);
  return uVar1 & 1;
}


