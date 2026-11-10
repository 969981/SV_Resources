/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f68360; name: FUN_00f68360
 */


undefined8 FUN_00f68360(undefined8 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4d10 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d4d10);
      puVar6 = PTR_DAT_047d4d18;
      if (iVar3 != 0) {
        *PTR_DAT_047d4d18 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_FUN_047d56f0,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4d10);
      }
    }
    else {
      puVar6 = PTR_DAT_047d4d18;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) || (pbVar5 = (byte *)*puVar4, (byte *)*puVar4 == (byte *)0x0)) {
    if ((*PTR_DAT_047d3bf8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d3bf8);
      pbVar5 = PTR_DAT_047d3c00;
      if (iVar3 != 0) {
        *PTR_DAT_047d3c00 = 0;
        *(undefined8 *)(pbVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d45f0,pbVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3bf8);
      }
    }
    else {
      pbVar5 = PTR_DAT_047d3c00;
    }
  }
  if (((DAT_0484ffb8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0484ffb8), iVar3 != 0)) {
    DAT_04850990 = '\x01';
    __cxa_guard_release(&DAT_0484ffb8);
  }
  cVar2 = DAT_04850990;
  if ((1 < *pbVar5) ||
     (puVar4 = *(undefined8 **)(pbVar5 + 8), *(undefined8 **)(pbVar5 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar4 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar3 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar4 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar4 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  uStack_38 = puVar4[1];
  local_40 = *puVar4;
  puVar1 = &LAB_02560e78;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_00f68560(puVar6,puVar1,0,&local_40);
  return 0;
}


