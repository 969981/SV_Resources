/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031b0610; name: FUN_031b0610
 */


void FUN_031b0610(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong local_68;
  
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
  lVar4 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar5 * 0x150,&local_68);
  iVar9 = (int)param_1[1];
  if (0 < iVar9) {
    lVar12 = *param_1;
    lVar6 = lVar4;
    lVar7 = lVar12;
    iVar10 = iVar9;
    do {
      FUN_031a7d70(lVar6,lVar7);
      puVar2 = PTR_DAT_047d1a08;
      lVar6 = lVar6 + 0x150;
      lVar7 = lVar7 + 0x150;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    do {
      if (*(char *)(lVar12 + 0x148) == '\0') {
        (**(code **)(puVar2 + 8))(0,*(undefined8 *)(lVar12 + 0x130),0);
      }
      *(undefined1 *)(lVar12 + 0x148) = 0;
      *(undefined8 *)(lVar12 + 0x130) = 0;
      *(undefined4 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x138) = 0;
      *(undefined8 *)(lVar12 + 0x140) = 0;
      if ((-1 < (int)*(uint *)(lVar12 + 0x2c)) && (*(long *)(lVar12 + 0x20) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(lVar12 + 0x20),(ulong)*(uint *)(lVar12 + 0x2c) << 4);
      }
      *(undefined8 *)(lVar12 + 0x20) = 0;
      iVar9 = iVar9 + -1;
      *(undefined4 *)(lVar12 + 0x2c) = 0x80000000;
      lVar12 = lVar12 + 0x150;
    } while (iVar9 != 0);
  }
  uVar1 = uVar5 * 0x150 + 0x150;
  uVar8 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x150;
    uVar8 = uVar5 + 1;
    if (uVar1 <= local_68) {
      uVar8 = (local_68 + uVar5 * -0x150) / 0x150 + uVar8;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar11 * 0x150);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = lVar4;
  return;
}


