/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01079a28; name: FUN_01079a28
 */


void FUN_01079a28(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_88;
  undefined1 local_80;
  undefined4 uStack_7f;
  undefined3 local_7b;
  undefined5 uStack_78;
  long local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined1 local_58;
  byte local_57;
  undefined4 local_38;
  undefined2 local_34;
  
  *param_2 = 7;
  lVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  if (*(char *)(param_3 + 3) == '\0') {
    bVar2 = (**(code **)(*plVar5 + 0x3b8))(plVar5);
  }
  else {
    bVar2 = 0;
  }
  uStack_78 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_7f = 0;
  local_7b = 0;
  local_38 = *param_3;
  local_34 = *(undefined2 *)(param_3 + 2);
  uStack_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_63 = 0;
  FUN_02e3027c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d00),&local_70,&local_38);
  local_88 = local_70;
  local_80 = (undefined1)uStack_68;
  uStack_7f = (undefined4)((uint5)uStack_68 >> 8);
  local_7b = local_63;
  uStack_78 = uStack_60;
  if ((*(char *)((long)param_3 + 10) != '\0') &&
     (local_88._0_2_ = (short)local_70, bVar1 = (short)local_88 == 0x353, bVar1)) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar7 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar7;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047d3f08) {
        if (*(char *)(lVar4 + 0x714) == '\0') {
          local_80 = *(undefined1 *)(lVar4 + 0x715);
        }
        break;
      }
    }
  }
  local_58 = *(undefined1 *)((long)param_3 + 0xb);
  local_57 = bVar2 & 1;
  uStack_68 = SUB85(plVar5,0);
  local_63 = (undefined3)((ulong)plVar5 >> 0x28);
  uStack_60 = SUB85(&local_88,0);
  uStack_5b = (undefined3)((ulong)&local_88 >> 0x28);
  local_70 = lVar4;
  FUN_0167bb8c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x4a0),&local_38,&local_70);
  *param_2 = (undefined1)local_38;
  return;
}


