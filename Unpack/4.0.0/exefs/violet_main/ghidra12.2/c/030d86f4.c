/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d86f4; name: FUN_030d86f4
 */


undefined8 FUN_030d86f4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  void *__dest;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  
  uVar4 = FUN_030da9b4();
  iVar7 = (int)uVar4;
  if ((int)param_1[1] == iVar7) {
    iVar1 = iVar7 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar7) {
      FUN_030daab0(param_1,(long)iVar1);
      iVar7 = (int)param_1[1];
    }
    lVar10 = *param_1;
    puVar8 = (undefined4 *)(lVar10 + (long)iVar7 * 0x30);
    *puVar8 = *param_2;
    uVar2 = *param_3;
    puVar9 = (undefined8 *)(puVar8 + 4);
    *puVar9 = 0;
    puVar8[2] = uVar2;
    lVar6 = (long)iVar7;
    puVar11 = puVar8 + 6;
    puVar11[0] = 0;
    puVar11[1] = 0x80000000;
    uVar3 = param_3[4];
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      *puVar9 = 0;
      *puVar11 = 0;
      puVar8[7] = 0x80000000;
    }
    else {
      puVar13 = *(undefined4 **)(param_3 + 2);
      puVar5 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar12 * 0x68);
      *puVar9 = puVar5;
      *puVar11 = uVar3;
      puVar8[7] = uVar3;
      do {
        *puVar5 = *puVar13;
        FUN_030db080(puVar5 + 2,puVar13 + 2);
        uVar3 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar3;
        puVar5 = puVar5 + 0x1a;
        puVar13 = puVar13 + 0x1a;
      } while (uVar3 != 0);
    }
    puVar9 = (undefined8 *)(lVar10 + lVar6 * 0x30 + 0x20);
    if (*(int *)(*(long *)(param_3 + 6) + 4) == -2) {
      *puVar9 = &DAT_03d7702c;
      *(undefined4 *)(lVar10 + lVar6 * 0x30 + 0x28) = 0;
    }
    else {
      *(undefined4 *)(lVar10 + lVar6 * 0x30 + 0x28) = param_3[8];
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)(int)param_3[8] * 8 + 8);
      *puVar9 = __dest;
      memcpy(__dest,*(void **)(param_3 + 6),(long)(int)param_3[8] * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar4;
}


