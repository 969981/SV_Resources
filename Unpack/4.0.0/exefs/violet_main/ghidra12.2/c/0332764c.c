/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0332764c; name: FUN_0332764c
 */


void FUN_0332764c(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar10 * 2;
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x18,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    if (uVar3 != 1) {
      iVar8 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = puVar6[1];
        iVar8 = iVar8 + 2;
        *puVar7 = *puVar6;
        puVar7[1] = uVar2;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
        uVar2 = puVar6[4];
        puVar7[3] = puVar6[3];
        puVar7[4] = uVar2;
        *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar6 + 5);
        puVar7 = puVar7 + 6;
        puVar6 = puVar6 + 6;
      } while (iVar8 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
    }
  }
  uVar1 = uVar5 * 0x18 + 0x18;
  uVar9 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar9 = uVar5 + 1;
    if (uVar1 <= local_48) {
      uVar9 = uVar9 + (local_48 + uVar5 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar10 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


