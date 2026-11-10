/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300a228; name: FUN_0300a228
 */


void FUN_0300a228(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar11 * 2;
  if (uVar6 <= param_3) {
    uVar6 = param_3;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x10,&local_48);
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = puVar5;
    if (uVar4 != 1) {
      iVar9 = -(uVar4 & 0xfffffffe);
      do {
        uVar3 = puVar7[1];
        iVar9 = iVar9 + 2;
        *puVar8 = *puVar7;
        puVar8[1] = uVar3;
        puVar1 = puVar7 + 2;
        uVar3 = puVar7[3];
        puVar7 = puVar7 + 4;
        puVar8[2] = *puVar1;
        puVar8[3] = uVar3;
        puVar8 = puVar8 + 4;
      } while (iVar9 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar3 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar3;
    }
  }
  uVar2 = uVar6 * 0x10 + 0x10;
  uVar10 = uVar6;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar10 = uVar6 + 1 + (local_48 + uVar6 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar10 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar11 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar5;
  return;
}


