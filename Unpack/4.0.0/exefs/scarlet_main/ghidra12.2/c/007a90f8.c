/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a90f8; name: FUN_007a90f8
 */


undefined8 FUN_007a90f8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(int *)param_1[0xf] == 1) ||
     (uVar2 = FUN_0078cdf4(*(undefined8 *)(param_1[0xb] + 0x180)), (uVar2 & 1) != 0)) {
    if ((int)param_1[0xc] != 0) {
      FUN_0078cc8c(param_1[0xf]);
    }
    return 5;
  }
  if (*(int *)param_1[0xf] == 2) {
    (**(code **)(*param_1 + 0x40))(param_1);
    return 0;
  }
  plVar1 = (long *)((int *)param_1[0xf] + 1);
  if ((int)param_1[0xc] != 0) {
    plVar1 = param_1 + 0xc;
  }
  FUN_00cbd7c0(auStack_30,plVar1);
  lVar3 = param_1[0xe];
  FUN_00cbd7c0(auStack_40,auStack_30);
  FUN_0078cb94(lVar3,auStack_40);
  param_1[0xe] = 0;
  FUN_007a8e40(param_1);
  return 1;
}


