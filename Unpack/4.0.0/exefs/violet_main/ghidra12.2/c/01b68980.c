/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b68980; name: FUN_01b68980
 */


undefined8 FUN_01b68980(undefined8 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (puVar8 = (undefined1 *)*puVar7, puVar8 == (undefined1 *)0x0)
     ) {
    if ((DAT_04808630 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04808630);
      puVar8 = &DAT_04808618;
      if (iVar3 != 0) {
        DAT_04808618 = 0;
        DAT_04808620 = 0;
        FUN_00100190(&LAB_01b69a4c,&DAT_04808618,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04808630);
      }
    }
    else {
      puVar8 = &DAT_04808618;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  iVar3 = FUN_00c92df0(param_1,3,0);
  uVar1 = FUN_00c92df0(param_1,4,0);
  iVar4 = FUN_00cc4dc0(param_1,5);
  iVar5 = FUN_00cc4dc0(param_1,6);
  if (((DAT_04808670 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04808670), iVar6 != 0)) {
    DAT_04809c08 = 1;
    __cxa_guard_release(&DAT_04808670);
  }
  FUN_01b68ae4(puVar8,uVar2,(long)iVar3,uVar1,iVar4 != 0,iVar5 != 0);
  return 0;
}


