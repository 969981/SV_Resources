/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ff507c; name: FUN_02ff507c
 */


void FUN_02ff507c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar5 = *(long **)(lVar3 + 0x3e0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("WorldCastShape",0xe,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtWorldCastShape";
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
  }
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0xd0))
            (*(long **)(param_1 + 0x4c0),param_2,param_3,*(undefined8 *)(param_1 + 0x510),param_4,
             param_5,0);
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
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  return;
}


