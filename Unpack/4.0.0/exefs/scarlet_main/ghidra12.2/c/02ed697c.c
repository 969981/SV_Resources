/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed697c; name: FUN_02ed697c
 */


void FUN_02ed697c(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong local_68;
  
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar10 * 2;
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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x40,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar11 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    puVar8 = puVar11;
    iVar12 = iVar6;
    do {
      FUN_02ed67fc(puVar8,puVar2);
      *puVar5 = *puVar8;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((long)puVar5 + 0xc) = *(undefined4 *)((long)puVar8 + 0xc);
      *puVar8 = 0;
      puVar8[1] = 0;
      memcpy(puVar5 + 2,puVar8 + 2,0x24);
      iVar12 = iVar12 + -1;
      puVar8 = puVar8 + 8;
      puVar5 = puVar5 + 8;
    } while (iVar12 != 0);
    puVar7 = (uint *)((long)puVar11 + 0xc);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar7 + -3),(ulong)*puVar7 << 2);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      iVar6 = iVar6 + -1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 0x10;
    } while (iVar6 != 0);
  }
  uVar1 = uVar4 * 0x40 + 0x40;
  uVar9 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar9 = uVar4 + 1 + (local_68 + uVar4 * -0x40 >> 6);
    if (local_68 < uVar1) {
      uVar9 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar10 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar3;
  return;
}


