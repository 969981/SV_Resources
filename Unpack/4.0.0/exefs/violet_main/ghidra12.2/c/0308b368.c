/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308b368; name: FUN_0308b368
 */


void FUN_0308b368(long *param_1,ulong param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  ulong local_68;
  
  puVar4 = PTR_PTR_047d1a50;
  puVar11 = PTR_DAT_047d1a08;
  uVar6 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar6 * 0x90;
  lVar5 = (**(code **)PTR_DAT_047d1a08)
                    (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar9 = (int)param_1[1];
  if (0 < iVar9) {
    lVar13 = *param_1;
    lVar10 = 0;
    iVar12 = iVar9;
    do {
      __src = (void *)(lVar13 + lVar10);
      __dest = (void *)(lVar5 + lVar10);
      memcpy(__dest,__src,0x38);
      *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
      uVar3 = *(undefined4 *)((long)__src + 0x3c);
      puVar1 = (undefined4 *)((long)__dest + 0x50);
      *(undefined4 **)((long)__dest + 0x40) = puVar1;
      *(undefined4 *)((long)__dest + 0x3c) = uVar3;
      *(undefined4 *)((long)__dest + 0x48) = 0;
      *(undefined4 *)((long)__dest + 0x4c) = 0x80000004;
      if (lVar13 != lVar5) {
        *(undefined8 *)((long)__dest + 0x40) = 0;
        *(undefined4 *)((long)__dest + 0x48) = *(undefined4 *)((long)__src + 0x48);
        *(undefined4 *)((long)__dest + 0x4c) = *(undefined4 *)((long)__src + 0x4c);
        puVar7 = *(undefined4 **)((long)__src + 0x40);
        if ((undefined4 *)((long)__src + 0x50) == puVar7) {
          *(undefined4 **)((long)__dest + 0x40) = puVar1;
          *puVar1 = *puVar7;
          *(undefined4 *)((long)__dest + 0x54) = *(undefined4 *)((long)__src + 0x54);
          *(undefined4 *)((long)__dest + 0x58) = *(undefined4 *)((long)__src + 0x58);
          *(undefined4 *)((long)__dest + 0x5c) = *(undefined4 *)((long)__src + 0x5c);
        }
        else {
          *(undefined4 **)((long)__dest + 0x40) = puVar7;
          *(undefined4 **)((long)__src + 0x40) = (undefined4 *)((long)__src + 0x50);
          *(undefined4 *)((long)__src + 0x4c) = 0x80000004;
        }
        *(undefined4 *)((long)__src + 0x48) = 0;
      }
      puVar1 = (undefined4 *)((long)__dest + 0x70);
      *(undefined4 **)((long)__dest + 0x60) = puVar1;
      *(undefined4 *)((long)__dest + 0x68) = 0;
      *(undefined4 *)((long)__dest + 0x6c) = 0x80000004;
      if (__src != __dest) {
        *(undefined8 *)((long)__dest + 0x60) = 0;
        *(undefined4 *)((long)__dest + 0x68) = *(undefined4 *)((long)__src + 0x68);
        *(undefined4 *)((long)__dest + 0x6c) = *(undefined4 *)((long)__src + 0x6c);
        puVar7 = *(undefined4 **)((long)__src + 0x60);
        if ((undefined4 *)((long)__src + 0x70) == puVar7) {
          *(undefined4 **)((long)__dest + 0x60) = puVar1;
          *puVar1 = *puVar7;
          *(undefined4 *)((long)__dest + 0x74) = *(undefined4 *)((long)__src + 0x74);
          *(undefined4 *)((long)__dest + 0x78) = *(undefined4 *)((long)__src + 0x78);
          *(undefined4 *)((long)__dest + 0x7c) = *(undefined4 *)((long)__src + 0x7c);
        }
        else {
          *(undefined4 **)((long)__dest + 0x60) = puVar7;
          *(undefined4 **)((long)__src + 0x60) = (undefined4 *)((long)__src + 0x70);
          *(undefined4 *)((long)__src + 0x6c) = 0x80000004;
        }
        *(undefined4 *)((long)__src + 0x68) = 0;
      }
      uVar3 = *(undefined4 *)((long)__src + 0x80);
      iVar12 = iVar12 + -1;
      lVar10 = lVar10 + 0x90;
      *(undefined1 *)((long)__dest + 0x84) = *(undefined1 *)((long)__src + 0x84);
      *(undefined4 *)((long)__dest + 0x80) = uVar3;
      puVar11 = PTR_DAT_047d1a08;
    } while (iVar12 != 0);
    puVar8 = (uint *)(lVar13 + 0x6c);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*(long *)(puVar8 + -3),(ulong)*puVar8 << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      *puVar8 = 0x80000000;
      puVar8[-9] = 0;
      if ((-1 < (int)puVar8[-8]) && (*(long *)(puVar8 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))
                  (puVar4,*(long *)(puVar8 + -0xb),(ulong)puVar8[-8] << 2);
      }
      puVar8[-0xb] = 0;
      puVar8[-10] = 0;
      iVar9 = iVar9 + -1;
      puVar8[-8] = 0x80000000;
      puVar8 = puVar8 + 0x24;
    } while (iVar9 != 0);
  }
  iVar9 = (int)uVar6;
  uVar2 = uVar6 * 0x90 + 0x90;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x90;
    iVar9 = iVar9 + 1;
    if (uVar2 <= local_68) {
      iVar9 = iVar9 + (int)((local_68 + uVar6 * -0x90) / 0x90);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar11 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = iVar9;
  *param_1 = lVar5;
  return;
}


