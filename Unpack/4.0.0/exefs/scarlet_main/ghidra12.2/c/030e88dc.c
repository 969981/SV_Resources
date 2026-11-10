/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e88dc; name: FUN_030e88dc
 */


void FUN_030e88dc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar10 * 2;
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
  puVar4 = (undefined1 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0xc,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar6 = (undefined1 *)*param_1;
    puVar7 = puVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar6 + 8);
        puVar7[0xc] = puVar6[0xc];
        *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(puVar6 + 0x10);
        *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(puVar6 + 0x14);
        puVar7 = puVar7 + 0x18;
        puVar6 = puVar6 + 0x18;
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar7 = *puVar6;
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar6 + 8);
    }
  }
  uVar1 = uVar5 * 0xc + 0xc;
  uVar9 = uVar5;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0xc;
    uVar9 = uVar5 + 1 + (local_48 + uVar5 * -0xc) / 0xc;
    if (local_48 < uVar1) {
      uVar9 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar10 * 0xc);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar4;
  return;
}


