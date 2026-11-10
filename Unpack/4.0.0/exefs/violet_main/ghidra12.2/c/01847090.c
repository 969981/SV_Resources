/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01847090; name: FUN_01847090
 */


undefined8 FUN_01847090(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 local_24;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4d10 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d4d10);
      puVar6 = PTR_DAT_047d4d18;
      if (iVar4 != 0) {
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
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_0484fe70 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_0484fe70);
    if (iVar4 != 0) {
      DAT_04850908 = '\x01';
      __cxa_guard_release(&DAT_0484fe70);
    }
  }
  pcVar1 = FUN_0193d4a4;
  if (DAT_04850908 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_24 = uVar2;
  uVar3 = FUN_018471cc(puVar6,pcVar1,0,&local_24);
  FUN_00c419e0(param_1,uVar3 & 1);
  return 1;
}


