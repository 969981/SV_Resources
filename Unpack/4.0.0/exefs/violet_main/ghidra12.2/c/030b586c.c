/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b586c; name: FUN_030b586c
 */


void FUN_030b586c(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_48;
  
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar9 * 2;
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
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar5 = (undefined4 *)*param_1;
    puVar6 = puVar3;
    if (uVar2 != 1) {
      iVar7 = -(uVar2 & 0xfffffffe);
      do {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        puVar6[4] = puVar5[4];
        puVar6[5] = puVar5[5];
        puVar6 = puVar6 + 6;
        puVar5 = puVar5 + 6;
        iVar7 = iVar7 + 2;
      } while (iVar7 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
  }
  uVar1 = uVar4 * 0xc + 0xc;
  uVar8 = uVar4;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar8 = uVar4 + 1;
    if (uVar1 <= local_48) {
      uVar8 = uVar8 + (local_48 + uVar4 * -0xc) / 0xc;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar9 * 0xc);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}


