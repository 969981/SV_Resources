/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bb844; name: FUN_007bb844
 */


void FUN_007bb844(uint *param_1,long param_2,undefined8 param_3,void *param_4,uint param_5,
                 undefined8 param_6,undefined4 param_7,uint param_8)

{
  MutexType *pMVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ErrorResultVariant *this;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  int local_658 [4];
  undefined1 auStack_648 [16];
  undefined8 local_638;
  undefined1 *local_630;
  undefined4 local_628;
  uint *local_620;
  undefined4 local_618;
  undefined4 local_610 [4];
  uint local_600 [4];
  undefined1 auStack_5f0 [4];
  undefined1 auStack_5ec [8];
  undefined1 auStack_5e4 [8];
  undefined1 auStack_5dc [512];
  undefined1 auStack_3dc [4];
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [2];
  undefined1 auStack_3ce [2];
  undefined1 uStack_3cc;
  undefined1 uStack_3cb;
  undefined1 uStack_3ca;
  undefined1 auStack_3c9 [825];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  FUN_007c70a8(auStack_70);
  uVar3 = FUN_007a2074(*(undefined8 *)(param_2 + 0x58));
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = FUN_007a2084(*(undefined8 *)(param_2 + 0x58)), (uVar3 & 1) == 0)) ||
     ((param_8 & 1) == 0)) {
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(auStack_90,uVar5);
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(auStack_88,uVar5);
  }
  else {
    if (0xf < param_5) {
      param_5 = 0x10;
    }
    FUN_0078ef10(auStack_90,0x10);
    memcpy(auStack_80,param_4,(ulong)param_5);
    if (*(char *)(*(long *)(param_2 + 0x58) + 0x1279) == '\0') {
      FUN_007b9cd4(*(long *)(param_2 + 0x58),auStack_90,0x20);
      pMVar1 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1f8);
      *(undefined1 *)(*(long *)(param_2 + 0x58) + 0x1258) = 1;
      nn::os::LockMutex(pMVar1);
      memcpy((void *)(*(long *)(*(long *)(*(long *)(param_2 + 0x58) + 0x218) + 0x20) + 0x5c),
             auStack_90,0x20);
      nn::os::UnlockMutex(pMVar1);
    }
  }
  pMVar1 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1f8);
  nn::os::LockMutex(pMVar1);
  lVar8 = *(long *)(*(long *)(param_2 + 0x58) + 0x218);
  FUN_00793890(auStack_5e4,*(undefined8 *)(lVar8 + 8));
  memcpy(auStack_5dc,(void *)(lVar8 + 0xb8),0x200);
  FUN_007938b0(auStack_3dc,*(undefined4 *)(lVar8 + 0x28));
  FUN_00793890(auStack_3d8,*(undefined8 *)(lVar8 + 0x10));
  FUN_007938d0(auStack_3d0,*(undefined2 *)(lVar8 + 0x18));
  FUN_007938d0(auStack_3ce,*(undefined2 *)(lVar8 + 0x1a));
  FUN_007938f0(&uStack_3cc,*(undefined1 *)(lVar8 + 0x1e));
  FUN_007938f0(&uStack_3cb,*(undefined1 *)(lVar8 + 0x1f));
  FUN_007938f0(&uStack_3ca,*(undefined1 *)(lVar8 + 0x1c));
  plVar4 = (long *)FUN_007b7268(lVar8);
  (**(code **)(*plVar4 + 0x10))(&local_638,plVar4,auStack_3c9,local_600,0x338);
  uVar3 = (ulong)local_600[0];
  nn::os::UnlockMutex(pMVar1);
  lVar8 = param_2 + 0x5be;
  puVar9 = auStack_3c9 + (uVar3 - (long)auStack_5e4);
  FUN_007938f0(lVar8,1);
  FUN_007938b0(param_2 + 0x5bf,(ulong)puVar9 & 0xffffffff);
  memcpy((void *)(param_2 + 0x5c3),auStack_5e4,(ulong)puVar9 & 0xffffffff);
  iVar7 = (int)puVar9;
  memcpy((void *)(lVar8 + (ulong)(iVar7 + 0xf)),auStack_90,0x10);
  *(long *)(param_2 + 0xb60) = *(long *)(param_2 + 0xb60) + 1;
  FUN_007938f0(lVar8 + (ulong)(iVar7 + 5),3);
  uVar2 = FUN_007a2074(*(undefined8 *)(param_2 + 0x58));
  FUN_007938f0(lVar8 + (ulong)(iVar7 + 6),uVar2 & 1);
  FUN_00793890(lVar8 + (ulong)(iVar7 + 7),*(undefined8 *)(param_2 + 0xb60));
  local_638 = (ulong)local_638._4_4_ << 0x20;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_638);
  uVar3 = FUN_007a2074(*(undefined8 *)(param_2 + 0x58));
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = FUN_007a2084(*(undefined8 *)(param_2 + 0x58)), (uVar3 & 1) == 0)) ||
     ((param_8 & 1) == 0)) {
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(lVar8 + (ulong)(iVar7 + 0x1f),uVar5);
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(lVar8 + (ulong)(iVar7 + 0x27),uVar5);
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(lVar8 + (ulong)(iVar7 + 0x2f),uVar5);
    uVar5 = FUN_007c71ac(auStack_70);
    FUN_00793890(lVar8 + (ulong)(iVar7 + 0x37),uVar5);
  }
  else {
    uVar3 = FUN_0078a34c(*(long *)(param_2 + 0x58) + 0x1238);
    if ((uVar3 & 1) == 0) {
      local_600[0] = 0;
      FUN_0078a244(&local_638,*(long *)(param_2 + 0x58) + 0x1238,local_600);
      FUN_007938b0(auStack_5f0,local_600[0]);
    }
    else {
      local_638 = 0;
      local_630 = (undefined1 *)0x0;
      FUN_0078a390(local_600,*(long *)(param_2 + 0x58) + 0x1238,&local_638);
      memcpy(auStack_5f0,&local_638,4);
    }
    FUN_00793890(auStack_5ec,*(undefined8 *)(param_2 + 0xb60));
    FUN_007b9a6c(&local_638,*(undefined8 *)(param_2 + 0x58),auStack_90,0x20,local_600,0x10);
    FUN_018ff39c(param_1,&local_638);
    FUN_007b9bb0(&local_638,*(undefined8 *)(param_2 + 0x58),param_6,param_7,local_610,0x10);
    FUN_018ff39c(param_1,&local_638);
    local_628 = 0xc;
    local_638 = CONCAT44(local_638._4_4_,1);
    local_618 = 0x10;
    local_630 = auStack_5f0;
    local_620 = local_600;
    FUN_0078d79c(auStack_648,param_2 + 0x5be + (ulong)(iVar7 + 0x2f),local_610,0x10,
                 param_2 + 0x5be + (ulong)(iVar7 + 0x1f),0x10,&local_638);
  }
  iVar7 = iVar7 + 0x3f;
  FUN_0078a1c0(&local_638,param_3);
  this = (ErrorResultVariant *)((ulong)local_600 | 4);
  FUN_007929a0(local_600,*(undefined8 *)(param_2 + 0x60),lVar8,iVar7,&local_638,auStack_648);
  FUN_018ff39c(param_1,local_600);
  if (*param_1 != 0) {
    local_600[0] = 0x4c0d;
    local_610[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_610);
    if (*param_1 != local_600[0]) {
      lVar6 = *(long *)(param_2 + 0x58);
      FUN_00cbd7c0(local_658,param_1);
      if (*(int *)(lVar6 + 0x1a8) != local_658[0]) {
        FUN_018ff39c(lVar6 + 0x1a8,local_658);
      }
    }
  }
  FUN_007929a0(local_600,*(undefined8 *)(param_2 + 0x60),lVar8,iVar7,&local_638,auStack_648);
  FUN_018ff39c(param_1,local_600);
  if (*param_1 != 0) {
    local_600[0] = 0x4c0d;
    local_610[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_610);
    if (*param_1 != local_600[0]) {
      lVar6 = *(long *)(param_2 + 0x58);
      FUN_00cbd7c0(local_658,param_1);
      if (*(int *)(lVar6 + 0x1a8) != local_658[0]) {
        FUN_018ff39c(lVar6 + 0x1a8,local_658);
      }
    }
  }
  FUN_007929a0(local_600,*(undefined8 *)(param_2 + 0x60),lVar8,iVar7,&local_638,auStack_648);
  FUN_018ff39c(param_1,local_600);
  if (*param_1 != 0) {
    local_600[0] = 0x4c0d;
    local_610[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_610);
    if (*param_1 != local_600[0]) {
      lVar8 = *(long *)(param_2 + 0x58);
      FUN_00cbd7c0(local_658,param_1);
      if (*(int *)(lVar8 + 0x1a8) != local_658[0]) {
        FUN_018ff39c(lVar8 + 0x1a8,local_658);
      }
    }
  }
  FUN_0284e3d4(&local_638);
  return;
}


