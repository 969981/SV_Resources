/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01889030; name: FUN_01889030
 */


bool FUN_01889030(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char local_40 [4];
  uint local_3c;
  int iStack_38;
  
  uVar3 = FUN_01195974();
  iVar2 = *(int *)(param_1 + 0x108);
  iVar5 = (int)((ulong)uVar3 >> 0x20);
  if (iVar2 == 0) {
    lVar4 = FUN_01195854();
    uVar6 = (uint)*(byte *)(lVar4 + 0x570);
    bVar1 = true;
    iVar2 = *(int *)(param_1 + 0x108);
  }
  else if (iVar2 - 1U < 2) {
    uVar6 = *(uint *)(param_1 + 0x2a4);
    bVar1 = false;
  }
  else {
    bVar1 = false;
    uVar6 = 0xffffffff;
  }
  if (iVar2 == 0) {
    iVar5 = (int)uVar3 + iVar5 * 6;
  }
  else if ((iVar2 != 1) && (iVar2 != 2)) {
    iVar5 = 1;
  }
  if (bVar1) {
    if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar2 != 0)) {
      FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d5ff8);
    }
    lVar4 = *(long *)PTR_DAT_047d6000;
    *(long *)PTR_DAT_047d6008 = lVar4;
    if (lVar4 == 0) {
      return false;
    }
    FUN_01a2fe88(local_40);
    if (local_40[0] != '\0') {
      return local_3c == uVar6 && iStack_38 == iVar5;
    }
  }
  return false;
}


