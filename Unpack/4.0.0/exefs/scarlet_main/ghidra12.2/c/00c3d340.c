/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c3d340; name: FUN_00c3d340
 */


undefined8 FUN_00c3d340(long param_1,string *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte local_38 [16];
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 2) {
LAB_00c3d384:
    std::string::operator=(param_2,(string *)(param_1 + 0x30));
    FUN_00c2f698(param_1 + 0x28);
    uVar2 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xe7) == '\0') {
      if ((iVar1 == 3) && (*(char *)(param_1 + 0xe5) != '\0')) goto LAB_00c3d384;
    }
    else if (iVar1 == 3) goto LAB_00c3d384;
    std::operator+("Expected identifier, got: ",(string *)(param_1 + 0x30));
    FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_38);
    if (((local_38[0] & 1) != 0) && (local_28 != 0)) {
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,local_28,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,local_28,0,8);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


