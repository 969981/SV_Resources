/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d101c; name: FUN_029d101c
 */


void FUN_029d101c(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 param_4,long param_5,undefined8 param_6,undefined8 *param_7)

{
  float fVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [16];
  undefined4 local_38;
  
  (**(code **)(*(long *)*param_7 + 0xa0))(auStack_48);
  FUN_00d175d0(param_6,local_38);
  (**(code **)(*(long *)*param_7 + 0xb8))(auStack_70);
  fVar1 = ((float)((ulong)param_4 >> 0x20) - auStack_70._4_4_) +
          ((float)param_1 * ((float)param_4 - auStack_70._0_4_)) / (float)((ulong)param_1 >> 0x20);
  if (fVar1 < *(float *)(param_5 + 0x164)) {
    (**(code **)(*(long *)*param_7 + 0xb0))
              (CONCAT44(auStack_70._4_4_ + (*(float *)(param_5 + 0x164) - fVar1),
                        auStack_70._0_4_ + 0.0));
    FUN_00e9c3c8(*param_7,param_6);
  }
  return;
}


