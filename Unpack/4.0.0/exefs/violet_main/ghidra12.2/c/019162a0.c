/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019162a0; name: FUN_019162a0
 */


undefined8 FUN_019162a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 local_18;
  undefined1 local_14 [4];
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) ||
     (puVar6 = (undefined *)*puVar5, (undefined *)*puVar5 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      puVar6 = PTR_DAT_047d3d50;
      if (iVar4 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      puVar6 = PTR_DAT_047d3d50;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar3 = FUN_00c92df0(param_1,3,0);
  if (((DAT_0482de60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0482de60), iVar4 != 0)) {
    DAT_0482ec30 = '\x01';
    __cxa_guard_release(&DAT_0482de60);
  }
  puVar1 = PTR_FUN_047d7530;
  if (DAT_0482ec30 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = uVar3;
  local_14[0] = uVar2;
  FUN_019163dc(puVar6,puVar1,0,local_14,&local_18);
  return 0;
}


