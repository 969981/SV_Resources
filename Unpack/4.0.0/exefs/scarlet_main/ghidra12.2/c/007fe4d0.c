/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe4d0; name: FUN_007fe4d0
 */


void FUN_007fe4d0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  FUN_0079a890(local_78);
  if ((*(long *)(param_2 + 0x1320) == 0) && (*(long *)(param_2 + 0x1338) == 0)) {
    uVar1 = *(int *)(param_3 + 0x140) + 1;
    uVar10 = (ulong)uVar1;
    *(uint *)(param_2 + 0x1328) = uVar1;
    uVar5 = FUN_0078a12c();
    pvVar6 = (void *)FUN_007bf9f0((ulong)uVar1 * 0x5d0,uVar5);
    if ((pvVar6 != (void *)0x0) && (uVar1 != 0)) {
      uVar13 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        pvVar12 = pvVar6;
        do {
          memset(pvVar12,0,0x5d0);
          memset((void *)((long)pvVar12 + 0x5d0),0,0x5d0);
          memset((void *)((long)pvVar12 + 0xba0),0,0x5d0);
          memset((void *)((long)pvVar12 + 0x1170),0,0x5d0);
          uVar14 = uVar14 + 4;
          pvVar12 = (void *)((long)pvVar12 + 0x1740);
        } while ((uVar10 & 0xfffffffc) != uVar14);
      }
      if ((uVar1 & 3) != 0) {
        pvVar12 = (void *)((long)pvVar6 + uVar14 * 0x5d0);
        do {
          memset(pvVar12,0,0x5d0);
          uVar13 = uVar13 - 1;
          pvVar12 = (void *)((long)pvVar12 + 0x5d0);
        } while (uVar13 != 0);
      }
    }
    *(void **)(param_2 + 0x1320) = pvVar6;
    uVar1 = *(int *)(param_3 + 0x140) + 1;
    uVar10 = (ulong)uVar1;
    *(uint *)(param_2 + 0x1340) = uVar1;
    uVar5 = FUN_0078a12c();
    pvVar6 = (void *)FUN_007bf9f0((ulong)uVar1 * 0x5d0,uVar5);
    if (pvVar6 == (void *)0x0) {
      *(undefined8 *)(param_2 + 0x1338) = 0;
    }
    else {
      if (uVar1 != 0) {
        uVar13 = uVar10 & 3;
        if (uVar10 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          pvVar12 = pvVar6;
          do {
            memset(pvVar12,0,0x5d0);
            memset((void *)((long)pvVar12 + 0x5d0),0,0x5d0);
            memset((void *)((long)pvVar12 + 0xba0),0,0x5d0);
            memset((void *)((long)pvVar12 + 0x1170),0,0x5d0);
            uVar14 = uVar14 + 4;
            pvVar12 = (void *)((long)pvVar12 + 0x1740);
          } while ((uVar10 & 0xfffffffc) != uVar14);
        }
        if ((uVar1 & 3) != 0) {
          pvVar12 = (void *)((long)pvVar6 + uVar14 * 0x5d0);
          do {
            memset(pvVar12,0,0x5d0);
            uVar13 = uVar13 - 1;
            pvVar12 = (void *)((long)pvVar12 + 0x5d0);
          } while (uVar13 != 0);
        }
      }
      lVar8 = *(long *)(param_2 + 0x1320);
      *(void **)(param_2 + 0x1338) = pvVar6;
      if (lVar8 != 0) {
        if (0 < *(int *)(param_2 + 0x1328)) {
          lVar9 = 0;
          lVar11 = 0;
          do {
            memset((void *)(lVar8 + lVar9),0,0x5c0);
            lVar8 = *(long *)(param_2 + 0x1320);
            lVar2 = lVar8 + lVar9;
            lVar9 = lVar9 + 0x5d0;
            *(undefined4 *)(lVar2 + 0x5c0) = 0;
            *(undefined8 *)(lVar2 + 0x5c8) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(param_2 + 0x1328));
        }
        if (0 < *(int *)(param_2 + 0x1340)) {
          lVar11 = *(long *)(param_2 + 0x1338);
          lVar8 = 0;
          lVar9 = 0;
          do {
            memset((void *)(lVar11 + lVar8),0,0x5c0);
            lVar11 = *(long *)(param_2 + 0x1338);
            lVar2 = lVar11 + lVar8;
            lVar8 = lVar8 + 0x5d0;
            *(undefined4 *)(lVar2 + 0x5c0) = 0;
            *(undefined8 *)(lVar2 + 0x5c8) = 0;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_2 + 0x1340));
        }
        puVar4 = PTR_DAT_047d0860;
        plVar7 = (long *)FUN_007f738c(*(undefined8 *)PTR_DAT_047d0860);
        uVar5 = (**(code **)(*plVar7 + 0x118))();
        *(undefined8 *)(param_2 + 0x1318) = uVar5;
        FUN_007ab9a4(*(undefined8 *)(param_2 + 0x188),200);
        uVar3 = *(undefined2 *)(*(long *)puVar4 + 0x50);
        uVar5 = FUN_0078a12c();
        lVar8 = FUN_007bf9f0(0x30,uVar5);
        if (lVar8 != 0) {
          FUN_00800d1c(lVar8,uVar3);
        }
        *(long *)(param_2 + 0x1308) = lVar8;
        local_78[0] = 0;
        goto LAB_007fe524;
      }
    }
    local_78[0] = 0x10408;
  }
  else {
    local_78[0] = 0x10408;
  }
LAB_007fe524:
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_00cbd7c0(param_1,local_78);
  return;
}


