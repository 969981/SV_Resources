/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e74f4; name: FUN_020e74f4
 */


ulong FUN_020e74f4(long param_1,uint param_2)

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined2 local_24 [2];
  
  uVar3 = FUN_00cf44f4(*(undefined8 *)(**(long **)(param_1 + 8) + 0x70));
  if (uVar3 < 0x1ed) {
    if (uVar3 == 0x1e3) {
      bVar2 = (param_2 & 0xffff) == 0x6f1;
    }
    else if (uVar3 == 0x1e4) {
      bVar2 = (param_2 & 0xffff) == 0x6f2;
    }
    else {
      if (uVar3 != 0x1e7) goto LAB_020e7604;
      bVar2 = (param_2 & 0xffff) == 0x6f3;
    }
    return (ulong)bVar2;
  }
  if (uVar3 < 0x305) {
    if (uVar3 == 0x1ed) {
      uVar5 = FUN_020e80f4(param_2);
LAB_020e7654:
      return (ulong)(uVar5 & 0xff);
    }
    if (uVar3 == 0x289) {
      if (((*PTR_DAT_047d89b0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d89b0), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d89b0);
      }
      puVar1 = PTR_DAT_047d90c8;
      *(undefined8 *)PTR_DAT_047d89c0 = *(undefined8 *)PTR_DAT_047d89b8;
      pcVar7 = *(code **)(*(long *)puVar1 + 0x250);
      if (pcVar7 != (code *)0x0) {
        local_24[0] = (undefined2)param_2;
        iVar4 = (*pcVar7)(*(long *)puVar1 + 0x270,local_24);
        if ((iVar4 - 0xbU & 0xffff) < 4) {
          return (ulong)(iVar4 - 10);
        }
      }
    }
  }
  else {
    if (uVar3 == 0x305) {
      uVar5 = FUN_020e81ec(param_2);
      goto LAB_020e7654;
    }
    if (uVar3 == 0x3f3) {
      if ((param_2 - 0x966 & 0xffff) < 3) {
        return 0x200010003 >> (((ulong)(param_2 - 0x966) & 3) << 4);
      }
      return 0;
    }
  }
LAB_020e7604:
  uVar6 = FUN_00cf41a8(*(undefined8 *)(**(long **)(param_1 + 8) + 0x70));
  return uVar6;
}


