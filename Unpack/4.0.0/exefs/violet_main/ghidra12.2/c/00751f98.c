/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00751f98; name: FUN_00751f98
 */


undefined8 FUN_00751f98(long param_1,undefined8 *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    lVar7 = *(long *)(param_1 + 0x100);
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
    *param_2 = *(undefined8 *)(param_1 + 0xf0);
    *param_3 = *(char *)(param_1 + 0x200);
    plVar5 = *(long **)puVar4;
    goto LAB_007521ac;
  }
  if ((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) != '\0')) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_00752020;
LAB_00752054:
    if ((*(char *)(param_1 + 0x38) == '\0') || (*(char *)(param_1 + 0x39) == '\0')) {
      if (*param_3 == '\0') {
        *(undefined1 *)(param_1 + 0x39) = 1;
      }
    }
    else {
      *param_3 = '\0';
    }
  }
  else {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x58))
              (*(long **)PTR_DAT_047cbb08,*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 9) = 0;
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_00752054;
LAB_00752020:
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_00752054;
  }
  FUN_0075252c(param_1 + 0x78,param_3);
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_00223ce8(param_1 + 0x98,param_3);
  *(char *)(param_1 + 0x200) = *param_3;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x13d) = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(param_1 + 0x13a) = 1;
      goto LAB_007520e0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x13a) = 1;
    if (*(long *)(param_1 + 0x40) != 0) {
LAB_007520e0:
      (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  plVar5 = *(long **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(long *)(param_1 + 0x188) = param_1 + 0x39;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (*(undefined1 *)(param_1 + 0x141) = 1, *(char *)(param_1 + 0x78) == '\0')) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined1 *)(param_1 + 0x142) = 1;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  uVar6 = FUN_00224e5c(param_1 + 0x130);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xf0);
  plVar5 = *(long **)PTR_DAT_047cbb08;
LAB_007521ac:
  (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined8 *)(param_1 + 0x108));
  return 1;
}


