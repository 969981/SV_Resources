/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


