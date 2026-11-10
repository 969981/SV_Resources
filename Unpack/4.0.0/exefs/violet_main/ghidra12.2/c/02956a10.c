/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02956a10; name: FUN_02956a10
 */


undefined8 FUN_02956a10(long param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 local_a0 [10];
  undefined4 local_78 [10];
  undefined4 local_38;
  undefined1 local_34;
  
  local_34 = FUN_02943aa0();
  local_38 = 3;
  bVar1 = FUN_02943d30(param_1,&local_38,local_78);
  if (bVar1 != 0) {
    uVar8 = (ulong)bVar1;
    puVar9 = local_78;
    bVar1 = 0;
    do {
      plVar5 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),*puVar9);
      uVar6 = (**(code **)(*plVar5 + 0x510))(plVar5,8);
      bVar7 = bVar1;
      if (((uVar6 & 1) != 0) && (sVar2 = (**(code **)(*plVar5 + 0x650))(plVar5), sVar2 != 0)) {
        uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
        bVar7 = bVar1 + 1;
        local_a0[bVar1] = uVar3;
      }
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 1;
      bVar1 = bVar7;
    } while (uVar8 != 0);
    if (bVar7 != 0) {
      uVar4 = FUN_02944130(param_1,bVar7);
      *param_3 = local_a0[uVar4 & 0xff];
      return 1;
    }
  }
  return 0;
}


