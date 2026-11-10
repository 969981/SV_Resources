/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124b210; name: FUN_0124b210
 */


void FUN_0124b210(long param_1,undefined4 param_2,undefined2 param_3,int param_4,undefined4 *param_5
                 )

{
  if (param_4 == 1) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,param_3,*param_5,0xffff0000);
    return;
  }
  if (param_4 == 2) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,param_3,*param_5,param_5[1],0xffff0000
                );
    return;
  }
  if (param_4 == 3) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,0xffff0000);
    return;
  }
  if (param_4 == 4) {
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,param_5[3],0xffff0000);
    return;
  }
  FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,param_2,param_3,0xffff0000);
  return;
}


