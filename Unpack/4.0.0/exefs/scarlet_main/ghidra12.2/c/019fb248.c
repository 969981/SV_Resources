/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fb248; name: FUN_019fb248
 */


void FUN_019fb248(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2[1] == '\0') {
    return;
  }
  uVar1 = FUN_01238c38(param_1,*param_2);
  uVar2 = FUN_01243584(param_1);
  FUN_019fb330(uVar2,uVar1,3);
  uVar1 = FUN_01243584(param_1);
  FUN_019fb2dc(uVar1,param_2);
  lVar3 = FUN_01243584(param_1);
  FUN_0129aff0(*(undefined8 *)(lVar3 + 0x18),0xa3,*param_2,param_2[2]);
  return;
}


