/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01247fe0; name: FUN_01247fe0
 */


void FUN_01247fe0(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  uVar2 = FUN_0124806c(param_1,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_01243584(param_1);
    FUN_01248624(uVar3,*param_3);
    uVar2 = FUN_01248170(param_1,*param_3);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  uVar1 = FUN_012481b0(param_1,*param_3,*(undefined1 *)(param_3 + 1));
  *param_2 = uVar1 & 0xff;
  FUN_012480ac(param_1,*param_3);
  return;
}


