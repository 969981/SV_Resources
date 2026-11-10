/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bdef0; name: FUN_019bdef0
 */


undefined8 FUN_019bdef0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      puVar5 = PTR_DAT_047d3d50;
      if (iVar1 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      puVar5 = PTR_DAT_047d3d50;
    }
  }
  iVar1 = FUN_00c92df0(param_1,2,0);
  iVar2 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04833210 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04833210), iVar3 != 0)) {
    DAT_04833780 = PTR_FUN_047d8430;
    __cxa_guard_release(&DAT_04833210);
  }
  FUN_019be008(puVar5,(long)iVar1,(long)iVar2);
  return 0;
}


