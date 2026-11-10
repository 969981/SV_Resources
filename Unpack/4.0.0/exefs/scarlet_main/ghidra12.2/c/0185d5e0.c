/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0185d5e0; name: FUN_0185d5e0
 */


undefined8 FUN_0185d5e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_58 [24];
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4518 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4518);
      puVar4 = PTR_DAT_047d4520;
      if (iVar1 != 0) {
        *PTR_DAT_047d4520 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d47c8,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4518);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4520;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  dVar5 = (double)FUN_00c41790(param_1,3,0);
  dVar6 = (double)FUN_00c41790(param_1,4,0);
  dVar7 = (double)FUN_00c41790(param_1,5,0);
  dVar8 = (double)FUN_00c41790(param_1,6,0);
  if ((DAT_04806430 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04806430);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_04806430);
    }
  }
  FUN_0185d77c(auStack_58,CONCAT44((float)dVar6,(float)dVar5),(double)(float)dVar8,(float)dVar7,
               puVar4,uVar3);
  FUN_00ca1900(param_1,auStack_58);
  FUN_00cecfd8(auStack_58);
  return 1;
}


