/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4059c; name: FUN_00c4059c
 */


undefined8 FUN_00c4059c(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  ushort local_48;
  undefined1 local_46;
  long local_38;
  
  local_48 = 0x3c02;
  local_46 = 0;
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar7 = (ulong)(bVar3 >> 1);
  uVar5 = uVar7;
  if ((bVar3 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar5 == 1) {
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '<') {
        pcVar8 = (char *)(param_1 + 0x32);
        pcVar9 = (char *)((ulong)&local_48 | 2);
        do {
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_00c40628;
          cVar1 = *pcVar9;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '<') {
LAB_00c40628:
      FUN_00c2f698(param_1 + 0x28);
      goto LAB_00c40668;
    }
  }
  local_46 = 0;
  local_48 = 0x7b02;
  uVar5 = FUN_00c3caf8(param_1,&local_48);
  if (((local_48 & 1) != 0) && (local_38 != 0)) {
    lVar6 = tpidr_el0;
    plVar10 = *(long **)(lVar6 + 0x30);
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,local_38,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,local_38,0,8);
    }
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
LAB_00c40668:
  std::string::assign(param_2);
  return 1;
}


