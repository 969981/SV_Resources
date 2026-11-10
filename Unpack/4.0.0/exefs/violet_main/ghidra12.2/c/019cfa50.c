/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cfa50; name: FUN_019cfa50
 */


undefined8 FUN_019cfa50(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  char local_40 [8];
  long *local_38;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d39d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d39d0);
      puVar3 = PTR_DAT_047d39d8;
      if (iVar1 != 0) {
        *PTR_DAT_047d39d8 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(PTR_FUN_047d4210,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d39d0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d39d8;
    }
  }
  dVar4 = (double)FUN_00c41790(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  FUN_00c41790(param_1,4,0);
  if ((DAT_04849938 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04849938);
    if (iVar1 != 0) {
      DAT_0484c138 = 1;
      __cxa_guard_release(&DAT_04849938);
    }
  }
  FUN_019cfbd0(local_40,CONCAT44((float)dVar5,(float)dVar4),puVar3);
  FUN_019cfcd0(param_1,local_40);
  if ((local_40[0] == '\x01') && (local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x18))();
  }
  return 1;
}


