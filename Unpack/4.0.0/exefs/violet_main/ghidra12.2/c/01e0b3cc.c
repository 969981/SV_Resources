/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0b3cc; name: FUN_01e0b3cc
 */


short FUN_01e0b3cc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *local_60;
  undefined2 *puStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined2 local_28;
  undefined1 auStack_24 [4];
  
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
  local_28 = (ushort)local_28._1_1_ << 8;
  local_60 = auStack_24;
  puStack_58 = &local_28;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_01e0b524(*(undefined8 *)(param_1 + 0x100),&local_60);
  return local_28;
}


