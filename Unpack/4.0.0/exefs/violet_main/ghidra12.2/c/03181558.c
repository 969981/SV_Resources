/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03181558; name: FUN_03181558
 */


void FUN_03181558(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
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
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar3;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        uVar5 = *puVar6;
        iVar8 = iVar8 + 2;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        *puVar7 = uVar5;
        uVar5 = *(undefined8 *)((long)puVar6 + 0xc);
        *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)((long)puVar6 + 0x14);
        *(undefined8 *)((long)puVar7 + 0xc) = uVar5;
        puVar7 = puVar7 + 3;
        puVar6 = puVar6 + 3;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar5 = *puVar6;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
      *puVar7 = uVar5;
    }
  }
  uVar1 = uVar4 * 0xc + 0xc;
  uVar9 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar9 = uVar4 + 1;
    if (uVar1 <= local_48) {
      uVar9 = uVar9 + (local_48 + uVar4 * -0xc) / 0xc;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar10 * 0xc);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar3;
  return;
}


