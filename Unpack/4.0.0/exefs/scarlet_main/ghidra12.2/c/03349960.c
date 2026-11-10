/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03349960; name: FUN_03349960
 */


void FUN_03349960(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int iVar12;
  ulong local_68;
  
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar5 * 2;
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x18,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar9 = *(int *)(param_1 + 1);
  if (0 < iVar9) {
    puVar8 = (undefined8 *)*param_1;
    puVar6 = puVar3;
    puVar10 = puVar8;
    iVar12 = iVar9;
    do {
      *puVar6 = *puVar10;
      FUN_01339774(puVar10 + 1,puVar2);
      puVar6[1] = puVar10[1];
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar10 + 2);
      *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar10 + 0x14);
      iVar12 = iVar12 + -1;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10 = puVar10 + 3;
      puVar6 = puVar6 + 3;
    } while (iVar12 != 0);
    puVar11 = (uint *)((long)puVar8 + 0x14);
    do {
      puVar11[-1] = 0;
      if ((-1 < (int)*puVar11) && (*(long *)(puVar11 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar11 + -3),(ulong)*puVar11 << 2);
      }
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      iVar9 = iVar9 + -1;
      *puVar11 = 0x80000000;
      puVar11 = puVar11 + 6;
    } while (iVar9 != 0);
  }
  uVar1 = uVar4 * 0x18 + 0x18;
  uVar7 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar7 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar7 = uVar7 + (local_68 + uVar4 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar5 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = puVar3;
  return;
}


