/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b6f48; name: FUN_028b6f48
 */


undefined4 FUN_028b6f48(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *local_48;
  undefined *local_40;
  
  FUN_028b8274(&local_48);
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      uVar2 = FUN_028b84bc(lVar6,param_3);
      *(undefined4 *)(local_48 + lVar6 * 4) = uVar2;
      lVar6 = lVar6 + 1;
    } while (param_2 != lVar6);
  }
  puVar1 = &DAT_048639e8;
  if ((long)local_40 - (long)local_48 != 0) {
    puVar1 = local_48;
  }
  uVar2 = FUN_028b82c8(param_1,puVar1,(long)local_40 - (long)local_48 >> 2);
  if (local_48 != (undefined *)0x0) {
    local_40 = local_48;
    lVar6 = tpidr_el0;
    plVar5 = *(long **)(lVar6 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) != 0) && (lVar6 = FUN_00c4e600(), 0 < *(int *)(lVar6 + 0x12c8))) {
      FUN_00c48fe8(plVar5,local_48,0,8);
      return uVar2;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,local_48,0,8);
  }
  return uVar2;
}


