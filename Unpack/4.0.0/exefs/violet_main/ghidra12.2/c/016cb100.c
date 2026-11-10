/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016cb100; name: FUN_016cb100
 */


void FUN_016cb100(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
LAB_016cb154:
      puVar2 = (undefined8 *)FUN_00c5e120(param_1,8,1);
      if (((*PTR_DAT_047d38a0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar1 != 0)) {
        FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38a0);
      }
      *(undefined8 *)PTR_DAT_047d38b0 = *(undefined8 *)PTR_DAT_047d38a8;
      uVar3 = FUN_016cb2a8();
      FUN_016cb248(uVar3,param_2);
      *puVar2 = uVar3;
      FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_045caf68);
      FUN_00c5e190(param_1,0xfffffffe);
      return;
    }
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) != 0) && (*(short *)(*(long *)(param_2 + 8) + 0x1a) != 0))
    goto LAB_016cb154;
  }
  FUN_00ca1a30(param_1);
  return;
}


