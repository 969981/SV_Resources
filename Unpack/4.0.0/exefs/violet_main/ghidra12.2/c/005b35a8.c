/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b35a8; name: FUN_005b35a8
 */


undefined8 FUN_005b35a8(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    FUN_00223ce8(param_1 + 0x18,param_3);
    *(undefined1 *)(param_1 + 0x180) = *param_3;
    *(undefined2 *)(param_1 + 0xd0) = 1;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xbd) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined1 *)(param_1 + 0xc2) = 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar5 = FUN_00224e5c(param_1 + 0xb0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x70);
    plVar4 = *(long **)PTR_DAT_047cbb08;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x80);
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
    *param_2 = *(undefined8 *)(param_1 + 0x70);
    *param_3 = *(undefined1 *)(param_1 + 0x180);
    plVar4 = *(long **)puVar3;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0x88));
  return 1;
}


