/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038f3ac; name: FUN_0038f3ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0038f3ac(undefined4 *param_1,char *param_2,_func_void_void_ptr *param_3,void *param_4,
                 undefined1 *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  undefined1 uVar7;
  ulong uVar8;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0x101;
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x1d8);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 4;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    uVar8 = *(ulong *)(param_6 + 8);
    *puVar3 = &PTR_FUN_04497290;
    *(undefined1 *)(puVar3 + 0x3a) = 0;
    if (uVar8 == 0) {
      if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
        DAT_047f15c0 = 0x10000;
        DAT_047f15d0 = 6;
        DAT_047f15c8 = DAT_03cb5450;
        __cxa_guard_release(&DAT_047f15b8);
      }
      uVar8 = DAT_047f15c0;
    }
    lVar4 = FUN_0038c780(uVar8 + 0xfff);
    puVar3[0x39] = lVar4;
    pvVar6 = (void *)(lVar4 + 0xfffU & 0xfffffffffffff000);
    if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
      DAT_047f15c0 = 0x10000;
      DAT_047f15d0 = 6;
      DAT_047f15c8 = DAT_03cb5450;
      __cxa_guard_release(&DAT_047f15b8);
    }
    if (DAT_047f15c8 < 0) {
      if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
        DAT_047f15c0 = 0x10000;
        DAT_047f15d0 = 6;
        DAT_047f15c8 = DAT_03cb5450;
        __cxa_guard_release(&DAT_047f15b8);
      }
      iVar1 = nn::os::CreateThread
                        ((ThreadType *)(puVar3 + 1),param_3,param_4,pvVar6,uVar8,(int)DAT_047f15c8);
      *(bool *)(puVar3 + 0x3a) = iVar1 == 0;
    }
    else {
      if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
        DAT_047f15c0 = 0x10000;
        DAT_047f15d0 = 6;
        DAT_047f15c8 = DAT_03cb5450;
        __cxa_guard_release(&DAT_047f15b8);
      }
      iVar1 = (int)DAT_047f15c8;
      if (((DAT_047f15b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_047f15b8), iVar2 != 0)) {
        DAT_047f15c0 = 0x10000;
        DAT_047f15d0 = 6;
        DAT_047f15c8 = DAT_03cb5450;
        __cxa_guard_release();
      }
      iVar1 = nn::os::CreateThread
                        ((ThreadType *)(puVar3 + 1),param_3,param_4,pvVar6,uVar8,iVar1,
                         DAT_047f15c8._4_4_);
      *(bool *)(puVar3 + 0x3a) = iVar1 == 0;
    }
    if (iVar1 == 0) {
      if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
        DAT_047f15c0 = 0x10000;
        DAT_047f15d0 = 6;
        DAT_047f15c8 = DAT_03cb5450;
        __cxa_guard_release(&DAT_047f15b8);
      }
      if (DAT_047f15d0 != 0) {
        if (((DAT_047f15b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047f15b8), iVar1 != 0)) {
          DAT_047f15c0 = 0x10000;
          DAT_047f15d0 = 6;
          DAT_047f15c8 = DAT_03cb5450;
          __cxa_guard_release(&DAT_047f15b8);
        }
        iVar1 = DAT_047f15c8._4_4_;
        if (((DAT_047f15b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_047f15b8), iVar2 != 0)) {
          DAT_047f15c0 = 0x10000;
          DAT_047f15d0 = 6;
          DAT_047f15c8 = DAT_03cb5450;
          __cxa_guard_release(&DAT_047f15b8);
        }
        nn::os::SetThreadCoreMask((ThreadType *)(puVar3 + 1),iVar1,DAT_047f15d0);
      }
      uStack_78 = ram0x03cbf8a8;
      local_80[0] = s_npln_grpc_03cbf8a0[0];
      local_80[1] = s_npln_grpc_03cbf8a0[1];
      local_80[2] = s_npln_grpc_03cbf8a0[2];
      local_80[3] = s_npln_grpc_03cbf8a0[3];
      local_80[4] = s_npln_grpc_03cbf8a0[4];
      local_80[5] = s_npln_grpc_03cbf8a0[5];
      local_80[6] = s_npln_grpc_03cbf8a0[6];
      local_80[7] = s_npln_grpc_03cbf8a0[7];
      uStack_68 = _UNK_03cbf8b8;
      uStack_70 = _DAT_03cbf8b0;
      sVar5 = strlen(local_80);
      strncat(local_80,param_2,0x1f - sVar5);
      nn::os::SetThreadName((ThreadType *)(puVar3 + 1),local_80);
      *(undefined8 **)(param_1 + 2) = puVar3;
      uVar7 = 1;
      *param_1 = 1;
      goto joined_r0x0038f5cc;
    }
    *(undefined8 **)(param_1 + 2) = puVar3;
    *param_1 = 4;
    (**(code **)*puVar3)(puVar3);
    FUN_0049e790(PTR_LAB_047cba48,puVar3);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  uVar7 = 0;
joined_r0x0038f5cc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}


