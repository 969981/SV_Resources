/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00809ebc; name: FUN_00809ebc
 */


void FUN_00809ebc(long param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong *puVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long *local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) == 0) goto LAB_0080a0dc;
  uVar7 = FUN_00560b6c(param_2);
  if ((uVar7 & 1) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_00809c74(param_1,param_2);
      lVar9 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
      *(undefined1 *)(lVar9 + 0x24b) = 1;
    }
    goto LAB_0080a0dc;
  }
  iVar4 = FUN_00560b90(param_2);
  if (iVar4 == 0) goto LAB_0080a0dc;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  iVar4 = FUN_00560b90(param_2);
  uVar5 = FUN_00560b88(param_2);
  uVar6 = FUN_00560b98(param_2);
  puVar8 = (ulong *)FUN_00560b64(param_2);
  local_58 = (long *)FUN_01cf7e20();
  if ((*puVar8 & 1) == 0) {
    local_70 = *puVar8;
    local_68 = puVar8[1];
    local_60 = (void *)puVar8[2];
    if (iVar4 == *(int *)(param_1 + 0x3c)) goto LAB_00809f70;
LAB_0080a01c:
    puVar3 = PTR_DAT_047d15d8;
    if (*(char *)(param_1 + 0x48) == '\0') {
      lVar9 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
      iVar2 = *(int *)(lVar9 + 0x13c8);
      lVar9 = thunk_FUN_00799c50(*(undefined8 *)puVar3);
      if ((iVar2 + 1U <= *(uint *)(lVar9 + 0x13cc)) &&
         (lVar9 = thunk_FUN_00799c50(*(undefined8 *)puVar3),
         *(int *)(lVar9 + 0x13c8) + 1U <= (uint)*(ushort *)(*(long *)PTR_DAT_047d0a08 + 8))) {
        pvVar1 = (void *)((ulong)&local_70 | 1);
        if ((local_70 & 1) != 0) {
          pvVar1 = local_60;
        }
        FUN_00809a48(lVar9,uVar6,iVar4,uVar5,0,0,pvVar1);
        lVar9 = thunk_FUN_00799c50(*(undefined8 *)puVar3);
        *(undefined1 *)(lVar9 + 0x24b) = 1;
      }
    }
  }
  else {
    uVar7 = puVar8[1];
    pvVar1 = (void *)puVar8[2];
    if (uVar7 < 0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar7 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar10 = uVar7 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*local_58 + 0x10))(local_58,uVar10,1);
      local_70 = uVar10 | 1;
      local_68 = uVar7;
      local_60 = __dest;
    }
    memcpy(__dest,pvVar1,uVar7 + 1);
    if (iVar4 != *(int *)(param_1 + 0x3c)) goto LAB_0080a01c;
LAB_00809f70:
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    FUN_0080a108(param_1,uVar6);
  }
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
LAB_0080a0dc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


