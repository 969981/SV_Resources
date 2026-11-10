/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a8c7c; name: FUN_028a8c7c
 */


void FUN_028a8c7c(byte *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  byte local_48 [8];
  ulong local_40;
  ulong local_38;
  
  FUN_028a9258(local_48);
  uVar4 = (ulong)(local_48[0] >> 1);
  uVar2 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar4 = local_40;
    uVar2 = local_38;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),uVar2,uVar2 + uVar4);
  bVar1 = *param_1;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (uVar4 != 1) {
    if (uVar4 == 0xc) {
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((bVar1 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      pbVar6[0xb] = pbVar6[3];
    }
    else if ((bVar1 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,local_38,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,local_38,0,8);
    }
  }
  return;
}


