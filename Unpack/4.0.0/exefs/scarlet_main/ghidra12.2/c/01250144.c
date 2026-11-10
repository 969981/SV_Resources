/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250144; name: FUN_01250144
 */


void FUN_01250144(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  FUN_02988ad0(uVar2,param_2);
  FUN_01243584(param_1);
  FUN_02983060();
  uVar2 = FUN_01243584(param_1);
  FUN_0124beb0(uVar2,0);
  FUN_02988ae0(param_1);
  FUN_0124e480(param_1);
  uVar1 = FUN_0123e058();
  if ((uVar1 & 0xff) == 0) {
    return;
  }
  FUN_02988b10(param_1,uVar1);
  return;
}


