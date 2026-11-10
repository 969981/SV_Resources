/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0311e264; name: FUN_0311e264
 */


void FUN_0311e264(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = tpidr_el0;
  lVar3 = *(long *)(lVar7 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar3;
  }
  plVar6 = *(long **)(lVar3 + 0x3e0);
  if (plVar6 == (long *)0x0) {
    FUN_0311e8b4(param_1,param_2);
    return;
  }
  lVar7 = *plVar6;
  if (*(code **)(lVar7 + 0x18) != (code *)0x0) {
    (**(code **)(lVar7 + 0x18))("ProcessPathRequests",0x13,*(undefined8 *)(lVar7 + 0x28));
  }
  puVar1 = (undefined8 *)plVar6[2];
  uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
    *puVar1 = "TtProcessPathRequests";
    uVar2 = nn::os::GetSystemTick();
    puVar1[1] = uVar2;
  }
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
    puVar1 = (undefined8 *)plVar6[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
    }
  }
  FUN_0311e8b4(param_1,param_2);
  lVar7 = *plVar6;
  if (((*(byte *)(lVar7 + 0x38) & 1) != 0) && (plVar6[6] != 0)) {
    puVar1 = (undefined8 *)plVar6[2];
    puVar5 = (undefined8 *)((long)puVar1 + 0x17U & 0xfffffffffffffff8);
    if (puVar5 <= (undefined8 *)plVar6[3]) {
      plVar6[2] = (long)puVar5;
      if (puVar1 == (undefined8 *)0x0) goto LAB_0311e394;
      *puVar1 = &DAT_03c4e575;
      puVar1[1] = *(undefined8 *)(plVar6[6] + 8);
    }
  }
  puVar5 = (undefined8 *)plVar6[2];
LAB_0311e394:
  uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
  if ((uVar4 <= (ulong)plVar6[3]) && (plVar6[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
    *puVar5 = &DAT_03c2d363;
    uVar2 = nn::os::GetSystemTick();
    puVar5[1] = uVar2;
  }
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(*(undefined8 *)(lVar7 + 0x28));
  }
  return;
}


