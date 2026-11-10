/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c751c8; name: FUN_00c751c8
 */


void FUN_00c751c8(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  
  if ((((param_3 != 0) &&
       (FUN_00c75684(*(undefined8 *)(param_1 + 200),0,param_2 + 0x38), param_3 != 1)) &&
      (FUN_00c75684(*(undefined8 *)(param_1 + 200),1,param_2 + 0x80), param_3 != 2)) &&
     (((FUN_00c75684(*(undefined8 *)(param_1 + 200),2,param_2 + 200), param_3 != 3 &&
       (FUN_00c75684(*(undefined8 *)(param_1 + 200),3,param_2 + 0x110), param_3 != 4)) &&
      (FUN_00c75684(*(undefined8 *)(param_1 + 200),4,param_2 + 0x158), param_3 != 5)))) {
    lVar1 = param_2 + 0x1a0;
    uVar2 = 5;
    do {
      FUN_00c75684(*(undefined8 *)(param_1 + 200),uVar2 & 0xffffffff,lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x48;
    } while (param_3 != uVar2);
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_00c752dc(param_1,param_2,param_3);
  return;
}


