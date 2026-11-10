/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a50864; name: FUN_00a50864
 */


uint FUN_00a50864(long param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + (long)param_3 * 0x18;
  local_28 = *(undefined8 *)(param_1 + 0x2c);
  local_20 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = 0;
  uStack_18 = *(undefined8 *)(param_1 + 0x3c);
  if ((param_2 < 3) && ((param_4 & 0xff) < 0x20)) {
    if ((*(uint *)((long)&local_20 + (ulong)param_2 * 4 + 4) >> (ulong)(param_4 & 0x1f) & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00a65174(&local_28,param_2,param_5);
    }
  }
  return uVar1 & 1;
}


