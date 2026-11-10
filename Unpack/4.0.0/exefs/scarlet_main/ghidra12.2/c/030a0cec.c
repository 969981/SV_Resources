/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a0cec; name: FUN_030a0cec
 */


void FUN_030a0cec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar11 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar11 * 2;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x10))
                     (PTR_PTR_047d1a50 + 0x20,uVar5 * 0xc,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = puVar4;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        uVar6 = *puVar7;
        iVar9 = iVar9 + 2;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar8 = uVar6;
        uVar6 = *(undefined8 *)((long)puVar7 + 0xc);
        *(undefined4 *)((long)puVar8 + 0x14) = *(undefined4 *)((long)puVar7 + 0x14);
        *(undefined8 *)((long)puVar8 + 0xc) = uVar6;
        puVar8 = puVar8 + 3;
        puVar7 = puVar7 + 3;
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar6 = *puVar7;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar8 = uVar6;
    }
  }
  uVar1 = uVar5 * 0xc + 0xc;
  uVar10 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar10 = uVar5 + 1;
    if (uVar1 <= local_48) {
      uVar10 = uVar10 + (local_48 + uVar5 * -0xc) / 0xc;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,*param_1,uVar11 * 0xc);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = puVar4;
  return;
}


