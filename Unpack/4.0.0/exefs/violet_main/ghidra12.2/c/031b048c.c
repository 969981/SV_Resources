/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031b048c; name: FUN_031b048c
 */


void FUN_031b048c(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  ulong local_48;
  
  puVar6 = PTR_PTR_047d1a50;
  uVar9 = (ulong)DAT_0487e9e4;
  uVar10 = (uVar9 & 0x7fffffff) * 2;
  if (uVar10 <= param_1) {
    uVar10 = param_1;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  puVar8 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar10 * 0x20,&local_48)
  ;
  uVar7 = DAT_0487e9e0;
  if (0 < (int)DAT_0487e9e0) {
    puVar11 = DAT_0487e9d8;
    puVar12 = puVar8;
    if (DAT_0487e9e0 != 1) {
      iVar13 = -(DAT_0487e9e0 & 0xfffffffe);
      do {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        iVar13 = iVar13 + 2;
        uVar5 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar5;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        uVar3 = puVar11[4];
        uVar4 = puVar11[5];
        puVar1 = puVar11 + 6;
        uVar5 = puVar11[7];
        puVar11 = puVar11 + 8;
        puVar12[6] = *puVar1;
        puVar12[7] = uVar5;
        puVar12[4] = uVar3;
        puVar12[5] = uVar4;
        puVar12 = puVar12 + 8;
      } while (iVar13 != 0);
    }
    if ((uVar7 & 1) != 0) {
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar5 = puVar11[3];
      puVar12[2] = puVar11[2];
      puVar12[3] = uVar5;
      *puVar12 = uVar3;
      puVar12[1] = uVar4;
    }
  }
  uVar2 = uVar10 * 0x20 + 0x20;
  uVar14 = uVar10;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar14 = uVar10 + 1 + (local_48 + uVar10 * -0x20 >> 5);
    if (local_48 < uVar2) {
      uVar14 = uVar10 + 1;
    }
  }
  if (-1 < (int)DAT_0487e9e4) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,DAT_0487e9d8,(uVar9 & 0x7fffffff) << 5);
  }
  DAT_0487e9e4 = (int)uVar14;
  DAT_0487e9d8 = puVar8;
  return;
}


