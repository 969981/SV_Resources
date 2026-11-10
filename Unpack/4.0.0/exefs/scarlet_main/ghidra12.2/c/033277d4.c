/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033277d4; name: FUN_033277d4
 */


void FUN_033277d4(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar11 * 2;
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
    puVar8 = puVar4;
    if (uVar3 != 1) {
      iVar9 = -(uVar3 & 0xfffffffe);
      do {
        uVar2 = *puVar6;
        iVar9 = iVar9 + 2;
        uVar7 = puVar6[2];
        puVar8[1] = puVar6[1];
        puVar8[2] = uVar7;
        *puVar8 = uVar2;
        uVar2 = puVar6[3];
        uVar7 = puVar6[5];
        puVar8[4] = puVar6[4];
        puVar8[5] = uVar7;
        puVar8[3] = uVar2;
        puVar8 = puVar8 + 6;
        puVar6 = puVar6 + 6;
      } while (iVar9 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar2 = *puVar6;
      uVar7 = puVar6[2];
      puVar8[1] = puVar6[1];
      puVar8[2] = uVar7;
      *puVar8 = uVar2;
    }
  }
  uVar1 = uVar5 * 0x18 + 0x18;
  uVar10 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar10 = uVar5 + 1;
    if (uVar1 <= local_48) {
      uVar10 = uVar10 + (local_48 + uVar5 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar11 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


