/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a46378; name: FUN_01a46378
 */


void FUN_01a46378(long param_1,long *param_2,undefined8 param_3,char param_4,uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_5 & 1) == 0) {
    if (param_4 != '\x01') {
      uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0124ade8(*(undefined8 *)(param_1 + 0x20),param_2,0x85);
      FUN_01932fa4(*(undefined8 *)(param_1 + 0x20),uVar1,0);
      return;
    }
    uVar1 = FUN_01a46418(*(undefined8 *)(param_1 + 0x38),param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = 0x84;
  }
  FUN_0124ade8(uVar2,param_3,uVar1);
  return;
}


