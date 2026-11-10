/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080d168; name: FUN_0080d168
 */


undefined8 FUN_0080d168(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_047d0a08;
  iVar2 = FUN_00f21480(*(undefined8 *)PTR_DAT_047d0a08);
  if (iVar2 != 3) {
    FUN_0080e250();
  }
  FUN_007cd5a0(*(undefined8 *)puVar1);
  FUN_007cdea8(*(undefined8 *)puVar1,0);
  plVar3 = *(long **)(*(long *)puVar1 + 0x18);
  FUN_00cbd7c0(auStack_30,param_1 + 0xc0);
  (**(code **)(*plVar3 + 0x180))(plVar3,auStack_30);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  FUN_00cbd7c0(auStack_40,param_1 + 0xc0);
  FUN_0078cb94(uVar4,auStack_40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0080cfe0(param_1);
  return 1;
}


