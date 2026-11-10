/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146038c; name: FUN_0146038c
 */


void FUN_0146038c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 local_18;
  
  uVar1 = FUN_0124a808();
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_014603fc(param_1), (uVar1 & 1) == 0)) &&
     ((param_3 & 1) != 0)) {
    local_18 = param_2;
    FUN_01461214(param_1);
    uVar2 = FUN_01460f04();
    FUN_01461bb0(uVar2,auStack_38,&local_18);
  }
  return;
}


