/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014e480; name: FUN_0014e480
 */


void FUN_0014e480(undefined8 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00d34290();
  if (iVar1 == 5) {
    return;
  }
  iVar1 = FUN_00122c30(param_1,param_2);
  if (iVar1 == 0) {
LAB_0014e57c:
    FUN_001241b0(param_1,param_2,5);
    return;
  }
  if ((param_3 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_00c85bd0(param_1,"__index");
    iVar1 = FUN_00122b20(param_1,0xfffffffe);
    if (iVar1 == 0) goto LAB_0014e57c;
    uVar2 = 2;
  }
  if ((param_3 >> 1 & 1) != 0) {
    FUN_00c85bd0(param_1,"__newindex");
    iVar1 = FUN_00122b20(param_1,~uVar2);
    if (iVar1 == 0) goto LAB_0014e57c;
    uVar2 = uVar2 + 1;
  }
  if ((param_3 >> 2 & 1) != 0) {
    FUN_00c85bd0(param_1,"__len");
    iVar1 = FUN_00122b20(param_1,~uVar2);
    if (iVar1 == 0) goto LAB_0014e57c;
    uVar2 = uVar2 + 1;
  }
  FUN_00c5db00(param_1,~uVar2);
  return;
}


