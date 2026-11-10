/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008379bc; name: FUN_008379bc
 */


void FUN_008379bc(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar9 * 2;
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x60,&local_58);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar3;
    if (uVar2 != 1) {
      iVar8 = (uVar2 & 1) - uVar2;
      do {
        uVar7 = puVar5[0xb];
        iVar8 = iVar8 + 2;
        puVar6[9] = puVar5[9];
        puVar6[0xb] = uVar7;
        uVar7 = puVar5[7];
        puVar6[5] = puVar5[5];
        puVar6[7] = uVar7;
        uVar7 = puVar5[3];
        puVar6[1] = puVar5[1];
        puVar6[3] = uVar7;
        uVar7 = *puVar5;
        puVar6[2] = puVar5[2];
        *puVar6 = uVar7;
        uVar7 = puVar5[4];
        puVar6[6] = puVar5[6];
        puVar6[4] = uVar7;
        uVar7 = puVar5[8];
        puVar6[10] = puVar5[10];
        puVar6[8] = uVar7;
        uVar7 = puVar5[0x17];
        puVar6[0x15] = puVar5[0x15];
        puVar6[0x17] = uVar7;
        uVar7 = puVar5[0x13];
        puVar6[0x11] = puVar5[0x11];
        puVar6[0x13] = uVar7;
        uVar7 = puVar5[0xf];
        puVar6[0xd] = puVar5[0xd];
        puVar6[0xf] = uVar7;
        uVar7 = puVar5[0xc];
        puVar6[0xe] = puVar5[0xe];
        puVar6[0xc] = uVar7;
        uVar7 = puVar5[0x10];
        puVar6[0x12] = puVar5[0x12];
        puVar6[0x10] = uVar7;
        uVar7 = puVar5[0x14];
        puVar6[0x16] = puVar5[0x16];
        puVar6[0x14] = uVar7;
        puVar6 = puVar6 + 0x18;
        puVar5 = puVar5 + 0x18;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar7 = puVar5[0xb];
      puVar6[9] = puVar5[9];
      puVar6[0xb] = uVar7;
      uVar7 = puVar5[7];
      puVar6[5] = puVar5[5];
      puVar6[7] = uVar7;
      uVar7 = puVar5[3];
      puVar6[1] = puVar5[1];
      puVar6[3] = uVar7;
      uVar7 = *puVar5;
      puVar6[2] = puVar5[2];
      *puVar6 = uVar7;
      uVar7 = puVar5[4];
      puVar6[6] = puVar5[6];
      puVar6[4] = uVar7;
      uVar7 = puVar5[8];
      puVar6[10] = puVar5[10];
      puVar6[8] = uVar7;
    }
  }
  uVar1 = uVar4 * 0x60 + 0x60;
  uVar11 = uVar4;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 0x60;
    uVar11 = uVar4 + 1;
    if (uVar1 <= local_58) {
      iVar10 = (int)uVar11 + (int)((local_58 + uVar4 * -0x60) / 0x60);
      iVar8 = *(int *)((long)param_1 + 0xc);
      goto joined_r0x00837ba8;
    }
  }
  iVar10 = (int)uVar11;
  iVar8 = *(int *)((long)param_1 + 0xc);
joined_r0x00837ba8:
  if (-1 < iVar8) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar9 * 0x60);
  }
  *(int *)((long)param_1 + 0xc) = iVar10;
  *param_1 = (long)puVar3;
  return;
}


