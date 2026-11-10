/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9ccfc; name: FUN_01e9ccfc
 */


void FUN_01e9ccfc(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_230 [368];
  byte local_c0;
  undefined7 uStack_bf;
  long local_b8;
  void *local_b0;
  long *plStack_a8;
  char local_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [64];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = lVar5 + -0x28;
  uVar3 = FUN_01e9d104(lVar5);
  if ((uVar3 & 0xff) == 0) {
    return;
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar4 = FUN_01dd68a8();
  if (lVar4 == 0) {
    return;
  }
  iVar1 = (int)(uVar3 >> 0x20);
  iVar2 = (uint)(iVar1 == 2) << 1;
  if (iVar1 == 1) {
    iVar2 = 1;
  }
  iVar1 = FUN_01e9a628();
  if (((iVar2 != 2) || (iVar1 == 2)) || (FUN_01e9e08c(local_a0,lVar5), local_a0[0] == '\0'))
  goto LAB_01e9ce08;
  FUN_01cfa5b0(&local_c0,auStack_80);
  memset(auStack_230,0,0x16c);
  if ((local_c0 & 1) != 0) {
    if (local_b8 == 0x16c) {
      memcpy(auStack_230,local_b0,0x16c);
      FUN_01e9e0a8(lVar4,auStack_230);
      if ((local_c0 & 1) == 0) goto LAB_01e9cdf0;
    }
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
LAB_01e9cdf0:
  if (local_a0[0] != '\0') {
    FUN_01e9e0b4(auStack_98);
    local_a0[0] = '\0';
  }
LAB_01e9ce08:
  FUN_01e9d458(lVar4,iVar2);
  return;
}


