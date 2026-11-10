/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a8acd8; name: FUN_00a8acd8
 */


void FUN_00a8acd8(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 200) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 200) + 0x48);
  }
  uVar1 = *(undefined1 *)(param_1 + 0xfe);
  if ((*PTR_DAT_047d7d30 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7d30);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d7d38;
  *(undefined8 *)PTR_DAT_047d7d40 = uVar3;
  FUN_01173918(uVar3,uVar4,uVar1);
  return;
}


