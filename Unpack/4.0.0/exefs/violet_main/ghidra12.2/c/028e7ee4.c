/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e7ee4; name: FUN_028e7ee4
 */


undefined8
FUN_028e7ee4(long param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     (((*(ulong *)(param_1 + 0x48) <= param_2 ||
       ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
         (param_2 & 0x3f) & 1) == 0)) &&
      (uVar1 = FUN_028e80a8(param_1 + 0xb8,*(long *)(param_1 + 8) + param_2 * 0x80,param_4,param_5,
                            param_6,param_7), (uVar1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *param_3 = *param_3 + 0x10;
  }
  return uVar2;
}


