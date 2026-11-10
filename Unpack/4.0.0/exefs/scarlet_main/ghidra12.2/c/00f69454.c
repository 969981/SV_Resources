/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f69454; name: FUN_00f69454
 */


void FUN_00f69454(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  int iVar11;
  ulong *puVar12;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  *param_1 = 1;
  puVar4 = PTR_PTR_047d1a50;
  local_78 = (void *)0x0;
  local_70 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_78 = (void *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    pvVar10 = (void *)*param_2;
    pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
    local_70 = CONCAT44(uVar2,uVar2);
    local_78 = pvVar5;
    memcpy(pvVar5,pvVar10,0x34);
    *(undefined8 *)((long)pvVar5 + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar6 = strlen(pcVar1);
      sVar6 = (size_t)((int)sVar6 + 1);
      pvVar7 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar6);
      memcpy(pvVar7,pcVar1,sVar6);
      *(ulong *)((long)pvVar5 + 0x38) = (ulong)pvVar7 | 1;
    }
    if (uVar2 != 1) {
      memcpy((void *)((long)pvVar5 + 0x40),(void *)((long)pvVar10 + 0x40),0x34);
      *(undefined8 *)((long)pvVar5 + 0x78) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x78) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar6 = strlen(pcVar1);
        sVar6 = (size_t)((int)sVar6 + 1);
        pvVar7 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar6);
        memcpy(pvVar7,pcVar1,sVar6);
        *(ulong *)((long)pvVar5 + 0x78) = (ulong)pvVar7 | 1;
      }
      if (uVar2 != 2) {
        memcpy((void *)((long)pvVar5 + 0x80),(void *)((long)pvVar10 + 0x80),0x34);
        *(undefined8 *)((long)pvVar5 + 0xb8) = 0;
        pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0xb8) & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar6 = strlen(pcVar1);
          sVar6 = (size_t)((int)sVar6 + 1);
          pvVar7 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar6);
          memcpy(pvVar7,pcVar1,sVar6);
          *(ulong *)((long)pvVar5 + 0xb8) = (ulong)pvVar7 | 1;
        }
        iVar11 = uVar2 - 3;
        if (iVar11 != 0) {
          pvVar10 = (void *)((long)pvVar10 + 0xc0);
          puVar12 = (ulong *)((long)pvVar5 + 0xf8);
          do {
            memcpy(puVar12 + -7,pvVar10,0x34);
            *puVar12 = 0;
            pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x38) & 0xfffffffffffffffe);
            if (pcVar1 != (char *)0x0) {
              sVar6 = strlen(pcVar1);
              sVar6 = (size_t)((int)sVar6 + 1);
              pvVar5 = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,sVar6);
              memcpy(pvVar5,pcVar1,sVar6);
              *puVar12 = (ulong)pvVar5 | 1;
            }
            iVar11 = iVar11 + -1;
            puVar12 = puVar12 + 8;
            pvVar10 = (void *)((long)pvVar10 + 0x40);
          } while (iVar11 != 0);
        }
      }
    }
  }
  local_68 = *(undefined4 *)(param_2 + 2);
  FUN_00f697d8(param_1 + 8,&local_78);
  pvVar10 = local_78;
  lVar9 = (long)(int)local_70;
  if ((int)local_70 != 0) {
    pvVar5 = (void *)((long)local_78 + lVar9 * 0x40 + -0x40);
    uVar8 = *(ulong *)((long)local_78 + lVar9 * 0x40 + -8);
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
    if (pvVar5 != pvVar10) {
      uVar8 = *(ulong *)((long)pvVar10 + lVar9 * 0x40 + -0x48);
      if ((uVar8 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
      }
      if ((void *)((long)pvVar10 + lVar9 * 0x40 + -0x80) != pvVar10) {
        uVar8 = *(ulong *)((long)pvVar10 + lVar9 * 0x40 + -0x88);
        if ((uVar8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
        }
        if ((void *)((long)pvVar10 + lVar9 * 0x40 + -0xc0) != pvVar10) {
          uVar8 = *(ulong *)((long)pvVar10 + lVar9 * 0x40 + -200);
          if ((uVar8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
          }
          puVar3 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar10 + lVar9 * 0x40 + -0x100) != pvVar10) {
            lVar9 = lVar9 << 6;
            do {
              uVar8 = *(ulong *)((long)pvVar10 + lVar9 + -0x108);
              if ((uVar8 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,uVar8 - 1,0);
              }
              lVar9 = lVar9 + -0x40;
            } while (lVar9 != 0x100);
          }
        }
      }
    }
  }
  lVar9 = local_70;
  uVar8 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_78 != (void *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_78,uVar8 << 6);
  }
  return;
}


