/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024908e0; name: FUN_024908e0
 */


undefined8 FUN_024908e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar3, (undefined *)*puVar3 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4f50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4f50);
      puVar6 = PTR_DAT_047d4f58;
      if (iVar1 != 0) {
        *PTR_DAT_047d4f58 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047d5680,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4f50);
      }
    }
    else {
      puVar6 = PTR_DAT_047d4f58;
    }
  }
  uVar4 = FUN_00c646d0(param_1,2,0);
  iVar1 = FUN_00c92df0(param_1,3,0);
  uVar5 = FUN_00c646d0(param_1,4,0);
  if (((DAT_0484ada0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484ada0), iVar2 != 0)) {
    DAT_0484c3e0 = 1;
    __cxa_guard_release(&DAT_0484ada0);
  }
  FUN_02490a0c(puVar6,uVar4,(long)iVar1,uVar5);
  return 0;
}


