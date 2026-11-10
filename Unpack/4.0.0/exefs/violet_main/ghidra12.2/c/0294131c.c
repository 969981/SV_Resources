/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294131c; name: FUN_0294131c
 */


void FUN_0294131c(long param_1,byte *param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  char local_54 [4];
  
  param_2[0] = 0;
  param_2[1] = 0;
  plVar7 = (long *)FUN_014813f4(param_1,*param_3);
  plVar8 = (long *)FUN_014813f4(param_1,param_3[1]);
  cVar1 = FUN_02986014(param_1,*(undefined1 *)(param_3 + 2));
  pbVar13 = param_2 + 1;
  *pbVar13 = 0;
  cVar2 = FUN_02986068(param_1,plVar8);
  if (cVar2 == '\n') {
    return;
  }
  uVar9 = (**(code **)(*plVar8 + 0x200))(plVar8);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar9 = (**(code **)(*plVar8 + 0x220))(plVar8,0x22);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar9 = (**(code **)(*plVar8 + 0x310))(plVar8);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar9 = (**(code **)(*plVar8 + 0x210))(plVar8);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49a) >> 1 & 1) != 0) {
    plVar10 = (long *)(**(code **)plVar8[5])(plVar8 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
      uVar11 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_047d3f08) {
        uVar9 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar8);
        if (((uVar9 & 1) == 0) && (*(char *)((long)plVar8 + 0x714) != '\0')) goto LAB_02941414;
        break;
      }
    }
  }
  uVar9 = *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x498);
  if ((((uVar9 & 0x801000) == 0) && (uVar12 = (uint)uVar9, (uVar12 >> 0x1c & 1) == 0)) &&
     ((uVar12 >> 10 & 1) == 0)) {
    lVar14 = *(long *)(param_1 + 0x10);
    uVar4 = (**(code **)(*plVar8 + 0x98))(plVar8);
    plVar10 = (long *)FUN_01021c94(*(undefined8 *)(lVar14 + 0x30),uVar4);
    if ((plVar10 == (long *)0x0) || (uVar9 = (**(code **)(*plVar10 + 0x78))(), (uVar9 & 1) != 0)) {
      FUN_02935950(*(undefined8 *)(param_1 + 0x38),local_54,pbVar13,plVar7,plVar8);
      if (local_54[0] != '\0') {
        return;
      }
      uVar9 = (**(code **)(*plVar8 + 0x220))(plVar8,0x15);
      if ((uVar9 & 1) == 0) {
        if (cVar1 == '\x01') {
          bVar3 = FUN_029860a8(param_1,plVar7,plVar8,*(undefined2 *)((long)param_3 + 10),
                               *(undefined8 *)(param_3 + 4));
          *param_2 = bVar3 & 1;
          return;
        }
        bVar3 = FUN_029861e8(param_1,plVar7,plVar8,*(undefined2 *)((long)param_3 + 10),
                             *(undefined1 *)((long)param_3 + 9));
        *param_2 = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
          return;
        }
        FUN_0123de68(param_1);
        uVar11 = FUN_0123de70();
        FUN_0123fa5c(uVar11,8);
        return;
      }
      lVar14 = *(long *)(param_1 + 0x20);
      uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
      uVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
      FUN_0167ebc0(*(undefined8 *)(lVar14 + 0x18),0xcb,uVar4,0xf3,uVar5,0xffff0000);
      goto LAB_02941440;
    }
  }
LAB_02941414:
  lVar14 = *(long *)(param_1 + 0x20);
  uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
  FUN_0167ebc0(*(undefined8 *)(lVar14 + 0x18),0xca,uVar4,0x237,0xffff0000);
LAB_02941440:
  *pbVar13 = 1;
  return;
}


