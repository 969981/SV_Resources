/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03115444; name: FUN_03115444
 */


void FUN_03115444(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong local_68;
  
  plVar9 = (long *)PTR_PTR_047e5548;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar8 * 2;
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
  lVar4 = (**(code **)(*(long *)PTR_PTR_047e5548 + 0x10))(PTR_PTR_047e5548,uVar5 * 0x80,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    plVar7 = (long *)*param_1;
    lVar11 = 0;
    iVar10 = iVar6;
    do {
      puVar2 = (undefined8 *)(lVar4 + lVar11);
      *puVar2 = &PTR_LAB_0464ea88;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 1;
      puVar2[3] = *(undefined8 *)((long)plVar7 + lVar11 + 0x18);
      FUN_031158a0((long)plVar7 + lVar11 + 0x20);
      puVar2[4] = *(undefined8 *)((long)plVar7 + lVar11 + 0x20);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((long)plVar7 + lVar11 + 0x28);
      *(undefined4 *)((long)puVar2 + 0x2c) = *(undefined4 *)((long)plVar7 + lVar11 + 0x2c);
      *(undefined8 *)((long)plVar7 + lVar11 + 0x20) = 0;
      *(undefined8 *)((long)plVar7 + lVar11 + 0x28) = 0;
      FUN_030e8a7c((long)plVar7 + lVar11 + 0x30,puVar3);
      puVar2[6] = *(undefined8 *)((long)plVar7 + lVar11 + 0x30);
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)((long)plVar7 + lVar11 + 0x38);
      *(undefined4 *)((long)puVar2 + 0x3c) = *(undefined4 *)((long)plVar7 + lVar11 + 0x3c);
      *(undefined8 *)((long)plVar7 + lVar11 + 0x30) = 0;
      *(undefined8 *)((long)plVar7 + lVar11 + 0x38) = 0;
      FUN_030e8fa8((long)plVar7 + lVar11 + 0x40,puVar3);
      puVar2[8] = *(undefined8 *)((long)plVar7 + lVar11 + 0x40);
      *(undefined4 *)(puVar2 + 9) = *(undefined4 *)((long)plVar7 + lVar11 + 0x48);
      iVar10 = iVar10 + -1;
      *(undefined4 *)((long)puVar2 + 0x4c) = *(undefined4 *)((long)plVar7 + lVar11 + 0x4c);
      *(undefined8 *)((long)plVar7 + lVar11 + 0x40) = 0;
      *(undefined8 *)((long)plVar7 + lVar11 + 0x48) = 0;
      plVar9 = (long *)PTR_PTR_047e5548;
      lVar11 = lVar11 + 0x80;
    } while (iVar10 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7);
      iVar6 = iVar6 + -1;
      plVar7 = plVar7 + 0x10;
    } while (iVar6 != 0);
  }
  iVar6 = (int)uVar5;
  uVar1 = uVar5 * 0x80 + 0x80;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x80;
    iVar10 = iVar6 + 1 + (int)(local_68 + uVar5 * -0x80 >> 7);
    if (local_68 < uVar1) {
      iVar10 = iVar6 + 1;
    }
    iVar6 = iVar10;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar9 + 0x20))(plVar9,*param_1,uVar8 << 7);
  }
  *(int *)((long)param_1 + 0xc) = iVar6;
  *param_1 = lVar4;
  return;
}


