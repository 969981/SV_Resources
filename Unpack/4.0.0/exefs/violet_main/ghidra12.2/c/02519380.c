/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02519380; name: FUN_02519380
 */


undefined8 FUN_02519380(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7bd0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d7bd0);
      puVar5 = PTR_DAT_047d7bd8;
      if (iVar3 != 0) {
        *PTR_DAT_047d7bd8 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047dea28,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7bd0);
      }
    }
    else {
      puVar5 = PTR_DAT_047d7bd8;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  dVar8 = (double)FUN_00c41790(param_1,4,0);
  if ((DAT_0484e250 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_0484e250);
    if (iVar3 != 0) {
      DAT_0484ecf0 = '\x01';
      __cxa_guard_release(&DAT_0484e250);
    }
  }
  local_40 = CONCAT44((float)dVar7,(float)dVar6);
  uStack_38 = (ulong)(uint)(float)dVar8;
  puVar1 = PTR_thunk_FUN_026fd880_047df2d0;
  if (DAT_0484ecf0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  auVar2 = FUN_0251933c(puVar5,puVar1,0,&local_40);
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


