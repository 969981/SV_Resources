/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e188c; name: FUN_010e188c
 */


undefined1 FUN_010e188c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined1 *puStack_50;
  long local_48;
  undefined **ppuStack_40;
  undefined1 local_34 [4];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar3 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar3;
  if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x90) != -1)) {
    *(undefined8 *)(lVar3 + (long)*(int *)(lVar2 + 0x90) * 8 + 0x6a0) = uVar4;
  }
  puStack_50 = local_34;
  local_58 = &DAT_03bfce13;
  ppuStack_40 = &local_58;
  local_48 = param_1;
  FUN_010e19dc(*(undefined8 *)(param_1 + 0x100),&puStack_50);
  return local_34[0];
}


