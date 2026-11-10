/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01804300; name: FUN_01804300
 */


undefined8 FUN_01804300(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  if (((DAT_0480f138 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480f138), iVar1 != 0)) {
    DAT_0480f200 = 1;
    __cxa_guard_release(&DAT_0480f138);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480f0c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480f0c0);
      puVar3 = &DAT_0480f098;
      if (iVar1 != 0) {
        DAT_0480f098 = 0;
        DAT_0480f0a0 = 0;
        FUN_00100190(&LAB_0188e008,&DAT_0480f098,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480f0c0);
      }
    }
    else {
      puVar3 = &DAT_0480f098;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar4 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4f50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4f50);
      puVar4 = PTR_DAT_047d4f58;
      if (iVar1 != 0) {
        *PTR_DAT_047d4f58 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        FUN_00100190(PTR_FUN_047d5680,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4f50);
      }
    }
    else {
      puVar4 = PTR_DAT_047d4f58;
    }
  }
  FUN_01804460(puVar3,puVar4);
  return 0;
}


