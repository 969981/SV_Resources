/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349fbcc; name: FUN_0349fbcc
 */


void FUN_0349fbcc(ulong *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_54;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar7 = DAT_048b0118;
  if (param_2 == 0) {
    for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(char *)(lVar7 + 0x46d) != '\0') goto LAB_0349fc88;
    }
    uVar10 = 0;
    bVar3 = false;
    iVar5 = 0;
    param_2 = 0;
  }
  else {
    local_54 = (int)param_2;
    iVar5 = (int)((ulong)param_2 >> 0x20);
    local_90 = CONCAT44(local_90._4_4_,iVar5);
    if ((local_54 == 0) || (lVar9 = param_2, iVar5 == 0)) {
      FUN_0349dde0(&local_54,&local_90);
      lVar9 = CONCAT44((int)local_90,local_54);
      lVar7 = DAT_048b0118;
    }
    for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(long *)(lVar7 + 0x28) == lVar9) goto LAB_0349fc88;
    }
    uVar10 = 0;
    bVar3 = false;
    iVar5 = 0;
  }
LAB_0349fcac:
  puVar2 = PTR_DAT_047e7138;
  local_90 = *param_1;
  uStack_88 = param_1[1];
  uVar12 = *param_1;
  if ((int)uVar12 == 0) {
    local_90._4_4_ = (int)(local_90 >> 0x20);
    local_90 = CONCAT44(local_90._4_4_,iVar5);
  }
  else {
    uVar4 = (ulong)*(uint *)(PTR_DAT_047e7138 + 8);
    if (*(uint *)(PTR_DAT_047e7138 + 8) != 0) {
      plVar6 = *(long **)PTR_DAT_047e7138;
      plVar13 = plVar6;
      do {
        lVar7 = *plVar13;
        iVar8 = *(int *)(lVar7 + 0x1b8);
        if (iVar8 == -1) {
          lVar9 = lVar7;
          do {
            lVar9 = *(long *)(lVar9 + 0xa0);
            if (lVar9 == 0) {
              iVar8 = -1;
              goto LAB_0349fd0c;
            }
            iVar8 = *(int *)(lVar9 + 0x1b8);
          } while (iVar8 == -1);
          *(int *)(lVar7 + 0x1b8) = iVar8;
        }
LAB_0349fd0c:
        if (iVar8 == iVar5) {
          FUN_03475440(*plVar13,(int)uVar12);
          plVar6 = *(long **)puVar2;
          uVar4 = (ulong)*(uint *)(puVar2 + 8);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar6 + uVar4);
    }
  }
  FUN_0349f898(param_2,1);
  puVar2 = PTR_DAT_047e6ce8;
  if (bVar3 != false) {
    *(ulong *)(PTR_DAT_047e6ce8 + 0x20) = local_90;
    *(ulong *)(puVar2 + 0x28) = uStack_88;
  }
  bVar1 = local_90._4_4_ == 0;
  iVar5 = local_90._4_4_;
  if (bVar1) {
    FUN_0349dde0(&local_90,(ulong)&local_90 | 4);
    iVar5 = local_90._4_4_;
  }
  uVar12 = local_90 & 0xffffffff;
  uVar11 = CONCAT44(iVar5,(int)local_90);
  if ((*PTR_DAT_047e7258 != '\0') && ((iVar5 == 0 || ((int)local_90 == 0)))) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    lVar7 = FUN_034a0148(uVar12,iVar5);
    if (lVar7 != 0) {
      uVar11 = *(undefined8 *)(lVar7 + 0x28);
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  }
  FUN_0349e7f4(uVar11,&local_90,param_3,auStack_80,uVar10,bVar3,0,bVar1);
  return;
LAB_0349fc88:
  iVar5 = *(int *)(lVar7 + 0x80);
  FUN_0349fe20(auStack_80,lVar7 + 0x40);
  bVar3 = *(char *)(lVar7 + 0x46d) != '\0';
  uVar10 = *(undefined4 *)(lVar7 + 0x60);
  param_2 = *(long *)(lVar7 + 0x28);
  goto LAB_0349fcac;
}


