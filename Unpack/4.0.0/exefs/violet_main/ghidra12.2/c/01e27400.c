/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e27400; name: FUN_01e27400
 */


ulong FUN_01e27400(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long local_70 [3];
  undefined8 uStack_58;
  undefined8 local_50;
  ushort *local_48;
  undefined1 local_40;
  ushort local_38;
  ushort local_36;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  ushort **local_18;
  
  piVar1 = (int *)((long)*param_3 + (ulong)*(uint *)*param_3);
  lVar3 = *param_2;
  lVar5 = param_2[2];
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
    local_38 = 0;
  }
  else {
    local_38 = ((ushort *)((long)piVar1 - (long)*piVar1))[2];
    if ((ulong)local_38 != 0) {
      local_38 = *(ushort *)((long)piVar1 + (ulong)local_38);
    }
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
    local_36 = 0;
  }
  else {
    local_36 = ((ushort *)((long)piVar1 - (long)*piVar1))[3];
    if ((ulong)local_36 != 0) {
      local_36 = *(ushort *)((long)piVar1 + (ulong)local_36);
    }
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
    local_34 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
    local_34 = 0;
    if (uVar8 != 0) {
      local_34 = *(undefined1 *)((long)piVar1 + uVar8);
    }
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) {
    local_33 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
    local_33 = false;
    if (uVar8 != 0) {
      local_33 = *(char *)((long)piVar1 + uVar8) != '\0';
    }
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
    local_32 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
    local_32 = false;
    if (uVar8 != 0) {
      local_32 = *(char *)((long)piVar1 + uVar8) != '\0';
    }
  }
  local_30 = 0;
  if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar8 != 0)) {
    local_30 = *(undefined4 *)((long)piVar1 + uVar8);
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) {
    local_2c = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
    local_2c = 0;
    if (uVar8 != 0) {
      local_2c = *(undefined4 *)((long)piVar1 + uVar8);
    }
  }
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
    local_28 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
    local_28 = 0;
    if (uVar8 != 0) {
      local_28 = *(undefined4 *)((long)piVar1 + uVar8);
    }
  }
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar8 == 0)) {
    local_40 = false;
  }
  else {
    local_40 = *(char *)((long)piVar1 + uVar8) != '\0';
  }
  local_48 = &local_38;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  local_70[1] = 0;
  lVar7 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar7;
  local_50 = 0;
  uStack_58 = 0;
  if (lVar3 != 0) {
    for (plVar4 = *(long **)(lVar7 + 0xb1e0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4[2] == -0x6d3e1e4a48f2f096) {
        local_18 = &local_48;
        local_20 = 0x10;
        local_70[0] = lVar3;
        local_70[2] = lVar5;
        uVar8 = (*(code *)plVar4[6])(plVar4 + 10,local_70,&local_18,&local_20);
        uVar6 = uVar8 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xff;
        goto LAB_01e27628;
      }
    }
  }
  uVar8 = 0;
  uVar6 = 0;
LAB_01e27628:
  return uVar6 | uVar8;
}


