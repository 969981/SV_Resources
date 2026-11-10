/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03241154; name: FUN_03241154
 */


void FUN_03241154(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  plVar1 = (long *)(param_1 + 0x538);
  if ((*(long *)(param_1 + 0x538) != 0) && (*(char *)(param_1 + 0x570) != '\0')) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(3,*(long *)(param_1 + 0x538),0);
  }
  *(undefined1 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  FUN_031d21e0(0xff,0);
  FUN_031d23c0(0xff,0);
  plVar5 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x10);
  plVar7 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x28);
  uVar4 = *(int *)(param_1 + 0x3c8) - 1;
  if ((0 < *(int *)(param_1 + 0x3c8)) && (*(uint *)(param_1 + 0x3c8) = uVar4, uVar4 < 0x10)) {
    *(ulong *)(param_1 + 0x3d0) = param_1 + (ulong)uVar4 * 0x38 + 0x10;
  }
  (**(code **)(*plVar5 + 8))();
  (**(code **)(*plVar7 + 8))(plVar7);
  if (DAT_048857e8 != (code *)0x0) {
    (*DAT_048857e8)(param_1);
  }
  plVar5 = DAT_048857d8;
  uVar8 = *(undefined8 *)(param_1 + 0x3d8);
  FUN_031d0aa4(uVar8);
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,0x1d28);
  nn::os::LockMutex(DAT_048857c0);
  *DAT_048857d0 = *DAT_048857d0 + -1;
  plVar5 = DAT_04883ee8;
  if (*DAT_048857d0 == 0) {
    if (DAT_04883ee8[1] != 0) {
      plVar7 = DAT_04883ee8 + 2;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    DAT_04883ee8 = (long *)0x0;
  }
  nn::os::UnlockMutex(DAT_048857c0);
  if ((*plVar1 != 0) && (*(char *)(param_1 + 0x570) != '\0')) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(3,*plVar1,0);
  }
  *(undefined1 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  return;
}


