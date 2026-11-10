/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298dbd0; name: FUN_0298dbd0
 */


void FUN_0298dbd0(long param_1,long *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar3 = *(undefined2 *)(param_3 + 1);
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x49,uVar1,uVar2,uVar3);
  return;
}


