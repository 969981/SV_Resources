/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b2600; name: FUN_022b2600
 */


undefined8 FUN_022b2600(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char local_58 [8];
  long local_50;
  undefined1 auStack_48 [24];
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_048436b0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_048436b0);
      puVar5 = &DAT_04843688;
      if (iVar3 != 0) {
        DAT_04843688 = 0;
        DAT_04843690 = 0;
        FUN_00100190(&LAB_022b13a8,&DAT_04843688,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048436b0);
      }
    }
    else {
      puVar5 = &DAT_04843688;
    }
  }
  dVar6 = (double)FUN_00c41790(param_1,2,0);
  dVar7 = (double)FUN_00c41790(param_1,3,0);
  FUN_00c41790(param_1,4,0);
  dVar8 = (double)FUN_00c41790(param_1,5,0);
  dVar9 = (double)FUN_00c41790(param_1,6,0);
  FUN_00c41790(param_1,7,0);
  dVar10 = (double)FUN_00c41790(param_1,8,0);
  dVar11 = (double)FUN_00c41790(param_1,9,0);
  uVar2 = FUN_00c92df0(param_1,10,0);
  if ((DAT_048436e0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048436e0);
    if (iVar3 != 0) {
      DAT_04843c18 = 1;
      __cxa_guard_release(&DAT_048436e0);
    }
  }
  FUN_022b282c(local_58,CONCAT44((float)dVar7,(float)dVar6),CONCAT44((float)dVar9,(float)dVar8),
               (double)(float)dVar10,(double)(float)dVar11,puVar5,uVar2);
  FUN_022a2940(param_1,local_58);
  lVar1 = local_50;
  if (local_58[0] == '\x01') {
    local_50 = 0;
    if (lVar1 != 0) {
      FUN_022a2a24(auStack_48);
    }
  }
  return 1;
}


