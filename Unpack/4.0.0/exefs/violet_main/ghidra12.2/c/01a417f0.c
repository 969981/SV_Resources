/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a417f0; name: FUN_01a417f0
 */


undefined8 FUN_01a417f0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (puVar6 = (undefined1 *)*puVar5, puVar6 == (undefined1 *)0x0)
     ) {
    if ((DAT_04800db8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_04800db8);
      puVar6 = &DAT_04800da8;
      if (iVar4 != 0) {
        DAT_04800da8 = 0;
        DAT_04800db0 = 0;
        FUN_00100190(FUN_01784638,&DAT_04800da8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800db8);
      }
    }
    else {
      puVar6 = &DAT_04800da8;
    }
  }
  uVar1 = FUN_00c92df0(param_1,2,0);
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar7 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      puVar7 = PTR_DAT_047d3b08;
      if (iVar4 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        FUN_00100190(&LAB_008f3e5c,puVar7,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      puVar7 = PTR_DAT_047d3b08;
    }
  }
  uVar2 = FUN_00c92df0(param_1,4,0);
  uVar3 = FUN_00c92df0(param_1,5,0);
  if (((DAT_04801028 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04801028), iVar4 != 0)) {
    DAT_04802128 = 1;
    __cxa_guard_release(&DAT_04801028);
  }
  FUN_01a419a4(puVar6,uVar1,puVar7,uVar2,uVar3);
  return 0;
}


