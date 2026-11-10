/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307683c; name: FUN_0307683c
 */


void FUN_0307683c(float param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  
  lVar12 = tpidr_el0;
  lVar7 = *(long *)(lVar12 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar7;
  }
  plVar11 = *(long **)(lVar7 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("initClearanceCache",0x12,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar3 = (undefined8 *)plVar11[2];
    uVar8 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtinitClearanceCache";
      uVar5 = nn::os::GetSystemTick();
      puVar3[1] = uVar5;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar3 = (undefined8 *)plVar11[2];
      uVar8 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  *(float *)(param_2 + 0x18) = param_1;
  fVar13 = *(float *)(*(long *)(*(long *)(param_3 + 0x20) + 0x68) + 0xb0);
  *(float *)(param_2 + 0x1c) = fVar13;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (param_1 <= fVar13 + 0.001) {
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    *(float *)(param_2 + 0x20) = (param_1 - fVar13) / 254.0;
    *(int *)(param_2 + 0x24) = (int)(254.0 / (param_1 - fVar13)) + 1;
    iVar10 = *(int *)(*(long *)(param_3 + 0x20) + 0xd8) + *(int *)(*(long *)(param_3 + 0x20) + 0x20)
    ;
    if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar10) {
      FUN_02fd6094(param_2 + 0x28,PTR_PTR_047d1a50,(long)iVar10);
      uVar6 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar6 = 0;
    }
    if ((int)uVar6 < iVar10) {
      *(int *)(param_2 + 0x30) = iVar10;
      memset((void *)(*(long *)(param_2 + 0x28) + (long)(int)uVar6 * 4),0xff,
             (ulong)(iVar10 + ~uVar6) * 4 + 4);
    }
    else if (iVar10 < (int)uVar6) {
      *(int *)(param_2 + 0x30) = iVar10;
    }
    iVar10 = *(int *)(*(long *)(param_3 + 0x20) + 0xe8) + *(int *)(*(long *)(param_3 + 0x20) + 0x30)
    ;
    if ((int)(*(uint *)(param_2 + 0x5c) & 0x7fffffff) < iVar10) {
      FUN_03078324(param_2 + 0x50,PTR_PTR_047d1a50,(long)iVar10);
    }
    uVar6 = *(uint *)(param_2 + 0x58);
    if ((int)uVar6 < iVar10) {
      *(int *)(param_2 + 0x58) = iVar10;
      uVar4 = DAT_048731b8;
      puVar1 = (undefined2 *)(*(long *)(param_2 + 0x50) + (long)(int)uVar6 * 2);
      uVar2 = iVar10 - uVar6 & 3;
      if (2 < iVar10 + ~uVar6) {
        iVar10 = -(iVar10 - uVar6 & 0xfffffffc);
        puVar9 = puVar1;
        do {
          puVar1 = puVar9 + 4;
          *puVar9 = uVar4;
          iVar10 = iVar10 + 4;
          puVar9[1] = uVar4;
          puVar9[2] = uVar4;
          puVar9[3] = uVar4;
          puVar9 = puVar1;
        } while (iVar10 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = uVar4;
        puVar1 = puVar1 + 1;
      }
    }
    else if (iVar10 < (int)uVar6) {
      *(int *)(param_2 + 0x58) = iVar10;
    }
    lVar12 = (long)*(int *)(*(long *)(param_3 + 0x20) + 0xf8) +
             (long)*(int *)(*(long *)(param_3 + 0x20) + 0x40);
    iVar10 = (int)lVar12;
    if ((int)(*(uint *)(param_2 + 0x6c) & 0x7fffffff) < iVar10) {
      FUN_00cb58c0(param_2 + 0x60,PTR_PTR_047d1a50,lVar12);
    }
    uVar6 = *(uint *)(param_2 + 0x68);
    if ((int)uVar6 < iVar10) {
      *(int *)(param_2 + 0x68) = iVar10;
      memset((void *)(*(long *)(param_2 + 0x60) + (long)(int)uVar6),0xff,
             (ulong)(iVar10 + ~uVar6) + 1);
    }
    else if (iVar10 < (int)uVar6) {
      *(int *)(param_2 + 0x68) = iVar10;
    }
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar3 = (undefined8 *)plVar11[2];
      uVar8 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar11[2];
    uVar8 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar11[3]) && (plVar11[2] = uVar8, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar3[1] = uVar5;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  return;
}


