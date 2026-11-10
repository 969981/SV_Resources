/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff8054; name: FUN_02ff8054
 */


void FUN_02ff8054(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar6 = *plVar5;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("ShiftBroadphaseSubTask",0x16,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtShiftBroadphaseSubTask";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
      }
    }
    plVar5 = *(long **)(param_2 + 8);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x28) + 0x4c0);
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ff81c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
      return;
    }
  }
  return;
}


