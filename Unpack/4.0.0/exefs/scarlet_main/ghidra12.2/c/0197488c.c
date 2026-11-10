/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197488c; name: FUN_0197488c
 */


void FUN_0197488c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,uint param_7,uint param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_014813f4();
  if ((param_7 & 1) != 0) {
    FUN_0197495c(*(undefined8 *)(param_1 + 0x20),uVar1);
  }
  FUN_0197499c(param_1,param_3,param_4,param_5,param_2,param_8 & 1);
  uVar2 = FUN_018ce3ac(param_6);
  if ((uVar2 & 1) != 0) {
    FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),param_2,param_6);
  }
  if ((param_7 & 1) == 0) {
    return;
  }
  FUN_018521d8(*(undefined8 *)(param_1 + 0x20),uVar1);
  return;
}


