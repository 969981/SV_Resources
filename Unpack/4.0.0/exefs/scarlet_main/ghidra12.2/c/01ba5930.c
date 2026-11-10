/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ba5930; name: FUN_01ba5930
 */


undefined8 FUN_01ba5930(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480c070 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480c070);
      puVar4 = &DAT_0480c058;
      if (iVar1 != 0) {
        DAT_0480c058 = 0;
        DAT_0480c060 = 0;
        FUN_00100190(FUN_015a5d3c,&DAT_0480c058,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480c070);
      }
    }
    else {
      puVar4 = &DAT_0480c058;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_0480c050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480c050), iVar1 != 0)) {
    DAT_0480c040 = PTR_LAB_047d5238;
    DAT_0480c048 = 0;
    __cxa_guard_release(&DAT_0480c050);
  }
  FUN_015294d4(&DAT_0480c040,puVar4,uVar3);
  return 0;
}


