/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006a6c44; name: FUN_006a6c44
 */


undefined8 FUN_006a6c44(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_006a6fbc(param_1 + 0x18,param_3);
    *(undefined1 *)(param_1 + 0x150) = *param_3;
    *(undefined2 *)(param_1 + 0xa0) = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x8d) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (*(undefined1 *)(param_1 + 0x91) = 1, *(char *)(param_1 + 0x18) != '\0')) {
      uVar5 = FUN_00224e5c(param_1 + 0x80);
    }
    else {
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      uVar5 = FUN_00224e5c(param_1 + 0x80);
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    plVar4 = *(long **)PTR_DAT_047cbb08;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x50);
    plVar4 = (long *)(lVar6 + 0x18);
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puVar3 = PTR_DAT_047cbb08;
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x38))
                (*(long **)PTR_DAT_047cbb08,*(undefined8 *)(lVar6 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    *param_3 = *(undefined1 *)(param_1 + 0x150);
    plVar4 = *(long **)puVar3;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0x58));
  return 1;
}


