/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030daab0; name: FUN_030daab0
 */


void FUN_030daab0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong local_68;
  
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar8 * 2;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  puVar4 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x30,&local_68);
  puVar3 = PTR_PTR_047d1a50;
  iVar10 = *(int *)(param_1 + 1);
  if (0 < iVar10) {
    puVar13 = (undefined4 *)*param_1;
    puVar11 = puVar4;
    puVar12 = puVar13;
    iVar9 = iVar10;
    do {
      *puVar11 = *puVar12;
      puVar11[2] = puVar12[2];
      FUN_030dad34(puVar12 + 4,puVar3);
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar12 + 4);
      puVar11[6] = puVar12[6];
      puVar11[7] = puVar12[7];
      *(undefined8 *)(puVar12 + 4) = 0;
      *(undefined8 *)(puVar12 + 6) = 0;
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar12 + 8);
      iVar9 = iVar9 + -1;
      puVar11[10] = puVar12[10];
      *(undefined **)(puVar12 + 8) = &DAT_03d7702c;
      puVar12[10] = 0;
      puVar2 = PTR_DAT_047d1a08;
      puVar12 = puVar12 + 0xc;
      puVar11 = puVar11 + 0xc;
    } while (iVar9 != 0);
    iVar9 = 0;
    do {
      lVar5 = *(long *)(puVar13 + 8);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
        (**(code **)(puVar2 + 8))(puVar3[8],lVar5,0);
        *(undefined **)(puVar13 + 8) = &DAT_03d7702c;
        puVar13[10] = 0;
      }
      if (puVar13[6] != 0) {
        lVar7 = *(long *)(puVar13 + 4);
        lVar5 = (long)(int)puVar13[6] * 0x68;
        do {
          FUN_030d9a14(lVar7 + -0x60 + lVar5);
          lVar5 = lVar5 + -0x68;
        } while (lVar5 != 0);
      }
      puVar13[6] = 0;
      if ((-1 < (int)puVar13[7]) && (*(long *)(puVar13 + 4) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(puVar13 + 4),(ulong)(uint)puVar13[7] * 0x68);
      }
      iVar9 = iVar9 + 1;
      *(undefined8 *)(puVar13 + 4) = 0;
      puVar13[7] = 0x80000000;
      puVar13 = puVar13 + 0xc;
    } while (iVar9 != iVar10);
  }
  uVar1 = uVar6 * 0x30 + 0x30;
  iVar10 = (int)uVar6;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x30;
    iVar9 = iVar10 + 1 + (int)((local_68 + uVar6 * -0x30) / 0x30);
    if (local_68 < uVar1) {
      iVar9 = iVar10 + 1;
    }
    iVar10 = iVar9;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar8 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = iVar10;
  *param_1 = puVar4;
  return;
}


