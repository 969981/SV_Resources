/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01974c30; name: FUN_01974c30
 */


undefined8 FUN_01974c30(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      puVar6 = PTR_DAT_047d3d50;
      if (iVar2 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3d50;
    }
  }
  uVar4 = FUN_01798fb0(param_1,2);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar7 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3db8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3db8);
      puVar7 = PTR_DAT_047d3dc0;
      if (iVar2 != 0) {
        *PTR_DAT_047d3dc0 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        FUN_00100190(PTR_FUN_047d3f90,puVar7,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3db8);
      }
    }
    else {
      puVar7 = PTR_DAT_047d3dc0;
    }
  }
  uVar5 = FUN_01974df0(param_1,4);
  if ((DAT_0482e0f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0482e0f8);
    if (iVar2 != 0) {
      DAT_0482e0e8 = PTR_FUN_047d76d0;
      DAT_0482e0f0 = 0;
      __cxa_guard_release(&DAT_0482e0f8);
    }
  }
  uVar1 = FUN_01974e80(&DAT_0482e0e8,puVar6,uVar4,puVar7,uVar5);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


