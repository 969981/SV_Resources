/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc7abc; name: FUN_01dc7abc
 */


void FUN_01dc7abc(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char local_60 [4];
  int local_5c;
  int local_58;
  
  uVar1 = 0xc;
  if ((param_2 == 3) || (param_5 == 3)) goto LAB_01dc7b54;
  lVar3 = FUN_010f26f8(param_1,param_5,param_6,param_7);
  if (lVar3 != 0) {
    uVar4 = FUN_00cf4cfc(*(undefined8 *)(lVar3 + 0x70));
    uVar1 = 0x16;
    if (((uVar4 & 1) != 0) ||
       ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) != 0))
    goto LAB_01dc7b54;
  }
  if (param_2 != 0) goto joined_r0x01dc7bc0;
  uVar4 = FUN_01dc7ce0(*(undefined8 *)(param_1 + 0x40),param_3,param_4);
  if ((uVar4 & 1) == 0) {
    if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar2 != 0)) {
      FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d5ff8);
    }
    lVar3 = *(long *)PTR_DAT_047d6000;
    *(long *)PTR_DAT_047d6008 = lVar3;
    if (lVar3 != 0) {
      FUN_01a2fe88(local_60);
      if (((local_60[0] == '\0') || (local_5c != param_3)) || (local_58 != param_4))
      goto joined_r0x01dc7bc0;
LAB_01dc7c34:
      uVar1 = 0x18;
      goto LAB_01dc7b54;
    }
    local_60[0] = '\0';
joined_r0x01dc7bc0:
    if (param_5 == 0) {
      uVar4 = FUN_01dc7ce0(*(undefined8 *)(param_1 + 0x40),param_6,param_7);
      if ((uVar4 & 1) != 0) goto LAB_01dc7b88;
      if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar2 != 0)) {
        FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5ff8);
      }
      lVar3 = *(long *)PTR_DAT_047d6000;
      *(long *)PTR_DAT_047d6008 = lVar3;
      if (((lVar3 != 0) && (FUN_01a2fe88(local_60), local_60[0] != '\0')) &&
         ((local_5c == param_6 && (local_58 == param_7)))) goto LAB_01dc7c34;
    }
    uVar1 = 0;
  }
  else {
LAB_01dc7b88:
    uVar1 = 0x17;
  }
LAB_01dc7b54:
  *(undefined4 *)(param_1 + 0x1c0) = uVar1;
  return;
}


