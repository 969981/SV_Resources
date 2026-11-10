/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445c50; name: FUN_00445c50
 */


undefined8 FUN_00445c50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1[2] == 0) {
    lVar2 = FUN_0042bbc0();
    param_1[2] = lVar2;
    if (lVar2 == 0) goto LAB_00445ce4;
  }
  if (param_1[3] == 0) {
    lVar2 = FUN_0042bbc0();
    param_1[3] = lVar2;
    if (lVar2 == 0) goto LAB_00445ce4;
  }
  if (param_1[1] == 0) {
    lVar2 = FUN_0042bbc0();
    param_1[1] = lVar2;
    if (lVar2 == 0) goto LAB_00445ce4;
  }
  iVar1 = FUN_0042bfb0(param_1[2],param_2[2]);
  if (((iVar1 != 0) && (iVar1 = FUN_0042bfb0(param_1[3],param_2[3]), iVar1 != 0)) &&
     (iVar1 = FUN_0042bfb0(param_1[1],param_2[1]), iVar1 != 0)) {
    *param_1 = *param_2;
    return 1;
  }
LAB_00445ce4:
  FUN_0042bb10(param_1[2]);
  FUN_0042bb10(param_1[3]);
  FUN_0042bb10(param_1[1]);
  *param_1 = 0;
  return 0;
}


