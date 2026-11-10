/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298756c; name: FUN_0298756c
 */


void FUN_0298756c(long param_1,long *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x538))(param_2,param_3);
  uVar1 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(uVar3,0x35,uVar2,param_3 & 0xff,uVar1);
  return;
}


