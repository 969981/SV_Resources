/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ad820; name: FUN_007ad820
 */


undefined8 FUN_007ad820(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  FUN_007a6390(local_30,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180));
  if (local_30[0] != 0) {
    return 5;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x180);
  (**(code **)(*plVar2 + 0x80))(auStack_40,plVar2,*(undefined8 *)(param_1 + 0x60));
  FUN_018ff39c(local_30,auStack_40);
  if (local_30[0] == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0d60;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetDisconnectNetworkJob::WaitDisconnectNetwork";
    FUN_0078cd58(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180),1);
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_00cbd7c0(auStack_50,*(long *)(param_1 + 0x60) + 4);
  FUN_0078cb94(uVar1,auStack_50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0079af14(*(undefined8 *)(param_1 + 0x68));
  FUN_007965fc(*(long *)(param_1 + 0x68) + 0x68);
  return 1;
}


