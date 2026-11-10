/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307df00; name: FUN_0307df00
 */


void FUN_0307df00(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 8);
  puVar3 = PTR_PTR_047d1a50;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    puVar5 = (undefined8 *)*param_1;
    puVar6 = puVar5;
    puVar9 = puVar4;
    iVar8 = iVar7;
    do {
      *puVar9 = *puVar6;
      *puVar6 = 0;
      puVar9[1] = puVar6[1];
      puVar6[1] = 0;
      puVar9[2] = puVar6[2];
      puVar6[2] = 0;
      memcpy(puVar9 + 3,puVar6 + 3,0x78);
      *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar6 + 0x12);
      uVar2 = puVar6[0x15];
      puVar9[0x14] = puVar6[0x14];
      puVar9[0x15] = uVar2;
      FUN_0307e2f4(puVar6 + 0x16,puVar3);
      puVar9[0x16] = puVar6[0x16];
      *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)(puVar6 + 0x17);
      *(undefined4 *)((long)puVar9 + 0xbc) = *(undefined4 *)((long)puVar6 + 0xbc);
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar9[0x18] = puVar6[0x18];
      *(undefined4 *)(puVar9 + 0x19) = *(undefined4 *)(puVar6 + 0x19);
      puVar6[0x18] = &DAT_03d7702c;
      *(undefined4 *)(puVar6 + 0x19) = 0;
      FUN_0307e364(puVar6 + 0x1a,puVar3);
      puVar9[0x1a] = puVar6[0x1a];
      *(undefined4 *)(puVar9 + 0x1b) = *(undefined4 *)(puVar6 + 0x1b);
      *(undefined4 *)((long)puVar9 + 0xdc) = *(undefined4 *)((long)puVar6 + 0xdc);
      puVar6[0x1a] = 0;
      puVar6[0x1b] = 0;
      puVar9[0x1c] = puVar6[0x1c];
      *(undefined4 *)(puVar9 + 0x1d) = *(undefined4 *)(puVar6 + 0x1d);
      puVar1 = puVar6 + 0x1e;
      puVar6[0x1c] = &DAT_03d7702c;
      *(undefined4 *)(puVar6 + 0x1d) = 0;
      iVar8 = iVar8 + -1;
      puVar6 = puVar6 + 0x20;
      *(undefined1 *)(puVar9 + 0x1e) = *(undefined1 *)puVar1;
      puVar9 = puVar9 + 0x20;
    } while (iVar8 != 0);
    do {
      FUN_0307e0e0(puVar5);
      puVar5 = puVar5 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar4;
  return;
}


