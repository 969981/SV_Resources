/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03102564; name: FUN_03102564
 */


void FUN_03102564(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  int iVar7;
  uint *puVar8;
  void *__dest;
  void *__src;
  ulong uVar9;
  int iVar10;
  ulong local_68;
  
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar5 * 2;
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  pvVar3 = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x60,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    pvVar6 = (void *)*param_1;
    __dest = pvVar3;
    __src = pvVar6;
    iVar10 = iVar7;
    do {
      memcpy(__dest,__src,0x50);
      FUN_01339774((long)__src + 0x50,puVar2);
      *(undefined8 *)((long)__dest + 0x50) = *(undefined8 *)((long)__src + 0x50);
      *(undefined4 *)((long)__dest + 0x58) = *(undefined4 *)((long)__src + 0x58);
      *(undefined4 *)((long)__dest + 0x5c) = *(undefined4 *)((long)__src + 0x5c);
      iVar10 = iVar10 + -1;
      *(undefined8 *)((long)__src + 0x50) = 0;
      *(undefined8 *)((long)__src + 0x58) = 0;
      __dest = (void *)((long)__dest + 0x60);
      __src = (void *)((long)__src + 0x60);
    } while (iVar10 != 0);
    puVar8 = (uint *)((long)pvVar6 + 0x5c);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(long *)(puVar8 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar8 + -3),(ulong)*puVar8 << 2);
      }
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      iVar7 = iVar7 + -1;
      *puVar8 = 0x80000000;
      puVar8 = puVar8 + 0x18;
    } while (iVar7 != 0);
  }
  uVar1 = uVar4 * 0x60 + 0x60;
  uVar9 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x60;
    uVar9 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar9 = uVar9 + (local_68 + uVar4 * -0x60) / 0x60;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar5 * 0x60);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar9;
  *param_1 = (long)pvVar3;
  return;
}


