/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03088788; name: FUN_03088788
 */


void FUN_03088788(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar11 * 2;
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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x14,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar3;
    if (uVar2 != 1) {
      iVar7 = -(uVar2 & 0xfffffffe);
      do {
        uVar8 = *puVar5;
        uVar9 = puVar5[1];
        iVar7 = iVar7 + 2;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
        *puVar6 = uVar8;
        puVar6[1] = uVar9;
        uVar8 = *(undefined8 *)((long)puVar5 + 0x14);
        uVar9 = *(undefined8 *)((long)puVar5 + 0x1c);
        *(undefined4 *)((long)puVar6 + 0x24) = *(undefined4 *)((long)puVar5 + 0x24);
        *(undefined8 *)((long)puVar6 + 0x1c) = uVar9;
        *(undefined8 *)((long)puVar6 + 0x14) = uVar8;
        puVar6 = puVar6 + 5;
        puVar5 = puVar5 + 5;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
    }
  }
  uVar1 = uVar4 * 0x14 + 0x14;
  uVar10 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x14;
    uVar10 = uVar4 + 1;
    if (uVar1 <= local_48) {
      uVar10 = uVar10 + (local_48 + uVar4 * -0x14) / 0x14;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar11 * 0x14);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar3;
  return;
}


