/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fee3c; name: FUN_030fee3c
 */


void FUN_030fee3c(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
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
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x38,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar9 = *(int *)(param_1 + 1);
  if (0 < iVar9) {
    puVar8 = (undefined4 *)*param_1;
    puVar6 = puVar3;
    puVar10 = puVar8;
    iVar11 = iVar9;
    do {
      *puVar6 = *puVar10;
      FUN_030da6d0(puVar10 + 2,puVar2);
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar10 + 2);
      puVar6[4] = puVar10[4];
      puVar6[5] = puVar10[5];
      *(undefined8 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      FUN_030da6d0(puVar10 + 6,puVar2);
      *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar10 + 6);
      puVar6[8] = puVar10[8];
      puVar6[9] = puVar10[9];
      *(undefined8 *)(puVar10 + 6) = 0;
      *(undefined8 *)(puVar10 + 8) = 0;
      FUN_030da42c(puVar10 + 10,puVar2);
      *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar10 + 10);
      puVar6[0xc] = puVar10[0xc];
      puVar6[0xd] = puVar10[0xd];
      iVar11 = iVar11 + -1;
      *(undefined8 *)(puVar10 + 10) = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      puVar10 = puVar10 + 0xe;
      puVar6 = puVar6 + 0xe;
    } while (iVar11 != 0);
    puVar8 = puVar8 + 8;
    do {
      puVar8[4] = 0;
      if ((-1 < (int)puVar8[5]) && (*(long *)(puVar8 + 2) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar8 + 2),(ulong)(uint)puVar8[5] << 5);
      }
      *(undefined8 *)(puVar8 + 2) = 0;
      puVar8[5] = 0x80000000;
      *puVar8 = 0;
      if ((-1 < (int)puVar8[1]) && (*(long *)(puVar8 + -2) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar8 + -2),(ulong)(uint)puVar8[1] << 2);
      }
      *(undefined8 *)(puVar8 + -2) = 0;
      puVar8[1] = 0x80000000;
      puVar8[-4] = 0;
      if ((-1 < (int)puVar8[-3]) && (*(long *)(puVar8 + -6) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar8 + -6),(ulong)(uint)puVar8[-3] << 2);
      }
      *(undefined8 *)(puVar8 + -6) = 0;
      iVar9 = iVar9 + -1;
      puVar8[-3] = 0x80000000;
      puVar8 = puVar8 + 0xe;
    } while (iVar9 != 0);
  }
  uVar1 = uVar4 * 0x38 + 0x38;
  uVar7 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x38;
    uVar7 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar7 = (local_68 + uVar4 * -0x38) / 0x38 + uVar7;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar5 * 0x38);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = puVar3;
  return;
}


