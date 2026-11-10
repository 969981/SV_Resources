/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f6cf8; name: FUN_031f6cf8
 */


void FUN_031f6cf8(long param_1,ulong *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= iVar3) {
    FUN_031f9ab0(param_1 + 0x20,lVar4 + 1);
    iVar3 = *(int *)(param_1 + 0x28);
  }
  *(ulong **)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8) = param_2;
  *(int *)(param_1 + 0x28) = (int)(lVar4 + 1);
  puVar2 = PTR_PTR_047d1a50;
  if (param_2 == (ulong *)0x0) {
    FUN_031f7120(param_1);
  }
  else {
    puVar6 = param_2;
    do {
      FUN_031f6ed0(puVar6[1]);
      puVar6 = (ulong *)(*puVar6 & 0xfffffffffffffffc);
    } while (puVar6 != (ulong *)0x0);
    FUN_031f7120(param_1);
    puVar6 = param_2;
    do {
      uVar7 = puVar6[1];
      local_90 = 0;
      local_88 = -0x8000000000000000;
      FUN_031dcad0(uVar7,&local_90);
      lVar4 = local_88;
      uVar5 = (ulong)local_88._4_4_;
      local_88 = (ulong)local_88._4_4_ << 0x20;
      if ((-1 < lVar4) && (local_90 != 0)) {
        (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,local_90,uVar5 << 3);
      }
      FUN_031dced8(uVar7);
      puVar6 = (ulong *)(*puVar6 & 0xfffffffffffffffc);
    } while (puVar6 != (ulong *)0x0);
  }
  local_60 = 0;
  local_58 = -0x8000000000000000;
  iVar3 = 0;
  if (param_2 != (ulong *)0x0) {
    do {
      uVar5 = *param_2;
      if (((uint)uVar5 >> 1 & 1) == 0) {
        uVar5 = param_2[1];
        iVar1 = iVar3 + 1;
        if ((int)(local_58._4_4_ & 0x7fffffff) <= iVar3) {
          FUN_031bc928(&local_60,puVar2 + 0x20,(long)iVar1);
          iVar3 = (int)local_58;
        }
        *(ulong *)(local_60 + (long)iVar3 * 8) = uVar5;
        local_58 = CONCAT44(local_58._4_4_,iVar1);
        uVar5 = *param_2;
        iVar3 = iVar1;
      }
      param_2 = (ulong *)(uVar5 & 0xfffffffffffffffc);
    } while (param_2 != (ulong *)0x0);
  }
  local_88 = local_60 + (long)iVar3 * 8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = local_60;
  FUN_031f4b48(param_1,&local_90);
  lVar4 = local_58;
  uVar5 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_60 != 0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20,local_60,uVar5 << 3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}


