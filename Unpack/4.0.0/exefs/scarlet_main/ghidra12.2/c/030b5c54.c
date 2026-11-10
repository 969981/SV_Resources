/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b5c54; name: FUN_030b5c54
 */


bool FUN_030b5c54(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  
  lVar8 = tpidr_el0;
  lVar5 = *(long *)(lVar8 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar5;
  }
  plVar7 = *(long **)(lVar5 + 0x3e0);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("lineOfSight",0xb,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= (ulong)plVar7[3]) && (plVar7[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtlineOfSight";
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= (ulong)plVar7[3]) && (plVar7[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
  }
  local_48 = plVar7;
  if ((*(int *)(param_2 + 4) == -1) || (*(int *)(param_2 + 0x10) == -1)) {
    bVar2 = false;
  }
  else {
    uVar4 = param_2[0xe];
    fVar9 = (float)uVar4 - (float)*param_2;
    fVar10 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
    fVar11 = (float)param_2[0xf] - (float)param_2[1];
    fVar12 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    if (fVar12 == 0.0) {
      local_60 = 0;
      uStack_58 = 0;
    }
    else {
      fVar12 = SQRT(fVar12);
      fVar13 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      local_60 = CONCAT44(fVar10 / fVar13,fVar9 / fVar12);
      uStack_58 = CONCAT44(((float)((ulong)param_2[0xf] >> 0x20) -
                           (float)((ulong)param_2[1] >> 0x20)) / fVar13,fVar11 / fVar12);
    }
    iVar3 = FUN_030b5e7c(&local_60,param_2 + 0xe,*(int *)(param_2 + 0x10),param_1,param_2,param_3);
    bVar2 = iVar3 == 9;
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar7[6] != 0)) {
      puVar1 = (undefined8 *)plVar7[2];
      uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= (ulong)plVar7[3]) && (plVar7[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar7[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar7[2];
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= (ulong)plVar7[3]) && (plVar7[2] = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  return bVar2;
}


