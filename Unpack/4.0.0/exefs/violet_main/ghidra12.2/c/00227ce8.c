/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00227ce8; name: FUN_00227ce8
 */


undefined8 FUN_00227ce8(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_002280b4(param_1 + 8,param_3);
    FUN_00223ce8(param_1 + 0x30,param_3);
    uVar1 = *param_3;
    *(undefined2 *)(param_1 + 0xe8) = 1;
    plVar5 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd5) = 0;
    *(undefined1 *)(param_1 + 0x198) = uVar1;
    if (plVar5 != (long *)0x0) {
      *(undefined1 *)(param_1 + 0xd9) = 1;
      if (*(char *)(param_1 + 8) == '\0') {
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      *(undefined1 *)(param_1 + 0xda) = 1;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    uVar6 = FUN_00224e5c(param_1 + 200);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x88);
    plVar5 = *(long **)PTR_DAT_047cbb08;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x98);
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
    *param_2 = *(undefined8 *)(param_1 + 0x88);
    *param_3 = *(undefined1 *)(param_1 + 0x198);
    plVar5 = *(long **)puVar4;
  }
  (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined8 *)(param_1 + 0xa0));
  return 1;
}


