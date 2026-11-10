/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b3ef4; name: FUN_005b3ef4
 */


undefined8 FUN_005b3ef4(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    uVar1 = *param_3;
    *(undefined2 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x128) = uVar1;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x65) = 0;
    uVar6 = FUN_00224e5c(param_1 + 0x58);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    plVar5 = *(long **)PTR_DAT_047cbb08;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    plVar5 = (long *)(lVar7 + 0x18);
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar4 = PTR_DAT_047cbb08;
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x38))
                (*(long **)PTR_DAT_047cbb08,*(undefined8 *)(lVar7 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    *param_3 = *(undefined1 *)(param_1 + 0x128);
    plVar5 = *(long **)puVar4;
  }
  (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined8 *)(param_1 + 0x30));
  return 1;
}


