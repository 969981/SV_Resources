/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0f454; name: FUN_01e0f454
 */


void FUN_01e0f454(long param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  byte local_58 [16];
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x294);
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_40 = *(undefined8 *)(lVar1 + 0x30);
  local_38 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  std::to_string(iVar3);
  *param_2 = '\0';
  pcVar4 = (char *)((ulong)local_58 | 1);
  if ((local_58[0] & 1) != 0) {
    pcVar4 = local_48;
  }
  pcVar4 = strcat(param_2,pcVar4);
  strcat(pcVar4,*(char **)(param_3 + 8));
  if (((local_58[0] & 1) != 0) && (local_48 != (char *)0x0)) {
    plVar8 = *(long **)(lVar1 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,local_48,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,local_48,0,8);
    }
  }
  *(undefined8 *)(lVar1 + 0x30) = local_40;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_38;
  return;
}


