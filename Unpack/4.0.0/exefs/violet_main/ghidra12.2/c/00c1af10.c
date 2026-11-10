/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1af10; name: FUN_00c1af10
 */


/* WARNING: Removing unreachable block (ram,0x00c1b090) */

void FUN_00c1af10(long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + param_3 * 8);
  if (lVar3 == 0) {
    param_4[3] = 0;
    lVar3 = 0;
    *(undefined8 **)(*(long *)(param_2 + 0x20) + param_3 * 8) = param_4;
  }
  else {
    uVar7 = param_3 ^ 1;
    if (lVar3 == *(long *)(*(long *)(param_2 + 0x20) + uVar7 * 8)) {
      param_4[3] = 0;
      local_70 = param_4;
      lVar3 = FUN_00c1b5a8(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_70,
                           &local_70);
      lVar6 = *(long *)(lVar3 + 0x20);
      param_1[2] = param_3 & 0xfffffffffffffffe;
      *param_1 = lVar6;
      param_1[1] = param_2;
      goto LAB_00c1afe4;
    }
    uVar5 = 0;
    lVar6 = lVar3;
    do {
      lVar6 = *(long *)(lVar6 + 0x18);
      uVar5 = uVar5 + 1;
    } while (lVar6 != 0);
    if (uVar5 < 8) {
      param_4[3] = lVar3;
      *(undefined8 **)(*(long *)(param_2 + 0x20) + param_3 * 8) = param_4;
      *param_1 = (long)param_4;
      param_1[1] = param_2;
      param_1[2] = param_3;
      param_1[3] = 0;
      return;
    }
    if (*(long *)(param_2 + 0x28) == 0) {
      lVar3 = tpidr_el0;
      plVar2 = *(long **)(lVar3 + 0x30);
      if (plVar2 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar2 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,8);
      local_60 = 0;
    }
    else {
      plVar2 = (long *)FUN_00c0e238(*(long *)(param_2 + 0x28),0,0x20);
      local_60 = *(long *)(param_2 + 0x28);
    }
    local_70 = &local_68;
    *plVar2 = (long)local_70;
    plVar2[1] = 0;
    plVar2[2] = local_60;
    plVar2[3] = 0;
    *plVar2 = (long)(plVar2 + 1);
    local_58 = 0;
    local_68 = 0;
    FUN_00c1a630(&local_70,0);
    lVar3 = *(long *)(param_2 + 0x20);
    puVar8 = *(undefined8 **)(lVar3 + param_3 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      do {
        local_70 = puVar8;
        FUN_00c1b5a8(plVar2,&local_70,&local_70);
        puVar4 = (undefined8 *)puVar8[3];
        puVar8[3] = 0;
        puVar8 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      lVar3 = *(long *)(param_2 + 0x20);
    }
    puVar8 = *(undefined8 **)(lVar3 + uVar7 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      do {
        local_70 = puVar8;
        FUN_00c1b5a8(plVar2,&local_70,&local_70);
        puVar4 = (undefined8 *)puVar8[3];
        puVar8[3] = 0;
        puVar8 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      lVar3 = *(long *)(param_2 + 0x20);
    }
    *(long **)(lVar3 + uVar7 * 8) = plVar2;
    *(long **)(*(long *)(param_2 + 0x20) + param_3 * 8) = plVar2;
    param_4[3] = 0;
    local_70 = param_4;
    lVar3 = FUN_00c1b5a8(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_70,
                         &local_70);
    param_4 = *(undefined8 **)(lVar3 + 0x20);
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  uVar7 = param_3;
  if (*(ulong *)(param_2 + 0x18) <= param_3) {
    uVar7 = *(ulong *)(param_2 + 0x18);
  }
  *(ulong *)(param_2 + 0x18) = uVar7;
  *param_1 = (long)param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
LAB_00c1afe4:
  param_1[3] = lVar3;
  return;
}


