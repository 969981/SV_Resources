/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0180c840; name: FUN_0180c840
 */


undefined8 FUN_0180c840(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (((DAT_0480f178 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480f178), iVar1 != 0)) {
    DAT_0480f220 = 1;
    __cxa_guard_release(&DAT_0480f178);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480f0c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480f0c0);
      puVar4 = &DAT_0480f098;
      if (iVar1 != 0) {
        DAT_0480f098 = 0;
        DAT_0480f0a0 = 0;
        FUN_00100190(&LAB_0188e008,&DAT_0480f098,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480f0c0);
      }
    }
    else {
      puVar4 = &DAT_0480f098;
    }
  }
  uVar3 = FUN_0180c930(param_1,2);
  FUN_0180c9c0(puVar4,uVar3);
  return 0;
}


