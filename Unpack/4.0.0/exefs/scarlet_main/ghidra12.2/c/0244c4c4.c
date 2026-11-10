/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244c4c4; name: FUN_0244c4c4
 */


void FUN_0244c4c4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  
  *param_1 = 0;
  uVar2 = FUN_0244c520(param_2,param_3,1);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_0244c600(param_2);
    *(undefined2 *)(param_1 + 1) = uVar1;
    *param_1 = 1;
  }
  FUN_00c5db00(param_2,0);
  return;
}


