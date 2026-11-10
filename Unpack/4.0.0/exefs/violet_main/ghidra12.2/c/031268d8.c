/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031268d8; name: FUN_031268d8
 */


void FUN_031268d8(long *param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  void *__src;
  void *__dest;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x90);
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    lVar9 = *param_1;
    lVar10 = 0;
    iVar8 = iVar6;
    do {
      __src = (void *)(lVar9 + lVar10);
      __dest = (void *)(lVar4 + lVar10);
      memcpy(__dest,__src,0x38);
      *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
      uVar2 = *(undefined4 *)((long)__src + 0x3c);
      puVar1 = (undefined4 *)((long)__dest + 0x50);
      *(undefined4 **)((long)__dest + 0x40) = puVar1;
      *(undefined4 *)((long)__dest + 0x3c) = uVar2;
      *(undefined4 *)((long)__dest + 0x48) = 0;
      *(undefined4 *)((long)__dest + 0x4c) = 0x80000004;
      if (lVar9 != lVar4) {
        *(undefined8 *)((long)__dest + 0x40) = 0;
        *(undefined4 *)((long)__dest + 0x48) = *(undefined4 *)((long)__src + 0x48);
        *(undefined4 *)((long)__dest + 0x4c) = *(undefined4 *)((long)__src + 0x4c);
        puVar5 = *(undefined4 **)((long)__src + 0x40);
        if ((undefined4 *)((long)__src + 0x50) == puVar5) {
          *(undefined4 **)((long)__dest + 0x40) = puVar1;
          *puVar1 = *puVar5;
          *(undefined4 *)((long)__dest + 0x54) = *(undefined4 *)((long)__src + 0x54);
          *(undefined4 *)((long)__dest + 0x58) = *(undefined4 *)((long)__src + 0x58);
          *(undefined4 *)((long)__dest + 0x5c) = *(undefined4 *)((long)__src + 0x5c);
        }
        else {
          *(undefined4 **)((long)__dest + 0x40) = puVar5;
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
        puVar5 = *(undefined4 **)((long)__src + 0x60);
        if ((undefined4 *)((long)__src + 0x70) == puVar5) {
          *(undefined4 **)((long)__dest + 0x60) = puVar1;
          *puVar1 = *puVar5;
          *(undefined4 *)((long)__dest + 0x74) = *(undefined4 *)((long)__src + 0x74);
          *(undefined4 *)((long)__dest + 0x78) = *(undefined4 *)((long)__src + 0x78);
          *(undefined4 *)((long)__dest + 0x7c) = *(undefined4 *)((long)__src + 0x7c);
        }
        else {
          *(undefined4 **)((long)__dest + 0x60) = puVar5;
          *(undefined4 **)((long)__src + 0x60) = (undefined4 *)((long)__src + 0x70);
          *(undefined4 *)((long)__src + 0x6c) = 0x80000004;
        }
        *(undefined4 *)((long)__src + 0x68) = 0;
      }
      uVar2 = *(undefined4 *)((long)__src + 0x80);
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + 0x90;
      *(undefined1 *)((long)__dest + 0x84) = *(undefined1 *)((long)__src + 0x84);
      *(undefined4 *)((long)__dest + 0x80) = uVar2;
      puVar3 = PTR_PTR_047d1a50;
    } while (iVar8 != 0);
    puVar7 = (uint *)(lVar9 + 0x6c);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*(long *)(puVar7 + -3),(ulong)*puVar7 << 2);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *puVar7 = 0x80000000;
      puVar7[-9] = 0;
      if ((-1 < (int)puVar7[-8]) && (*(long *)(puVar7 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(puVar7 + -0xb),(ulong)puVar7[-8] << 2);
      }
      puVar7[-0xb] = 0;
      puVar7[-10] = 0;
      iVar6 = iVar6 + -1;
      puVar7[-8] = 0x80000000;
      puVar7 = puVar7 + 0x24;
    } while (iVar6 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar4;
  return;
}


