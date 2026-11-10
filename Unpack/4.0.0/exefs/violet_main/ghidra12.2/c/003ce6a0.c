/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ce6a0; name: FUN_003ce6a0
 */


undefined8
FUN_003ce6a0(long param_1,undefined1 *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_74;
  undefined1 auStack_70 [64];
  undefined8 local_28;
  
  local_74 = 0;
  local_28 = param_3;
  if (param_2 == (undefined1 *)0x0) {
    local_28 = 0;
    uVar1 = FUN_003acf80(param_1);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    param_2 = auStack_70;
    uVar1 = FUN_003b5600(param_1,auStack_70,0x40,&local_28);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_003acde0(param_1);
  if ((int)uVar1 != 0) {
    local_74 = CONCAT31(local_74._1_3_,0xfe);
    local_74 = CONCAT13((char)local_28,(undefined3)local_74);
    uVar1 = FUN_003acec0(param_1,&local_74,4);
    if ((((int)uVar1 != 0) && (uVar1 = FUN_003acec0(param_1,param_2,local_28), (int)uVar1 != 0)) &&
       ((param_4 == 0 ||
        ((uVar1 = FUN_003acec0(param_1,param_4,param_5), (int)uVar1 != 0 &&
         (uVar1 = FUN_003acec0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x88) + 8),
                               *(long *)(*(long *)(param_1 + 0xa8) + 0x228) + 4), (int)uVar1 != 0)))
        ))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


