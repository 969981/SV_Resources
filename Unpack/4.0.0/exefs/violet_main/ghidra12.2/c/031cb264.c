/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cb264; name: FUN_031cb264
 */


void FUN_031cb264(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  long *__src;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong local_68;
  
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
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
  pvVar3 = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x38,&local_68);
  iVar8 = *(int *)(param_1 + 1);
  if (0 < iVar8) {
    plVar5 = (long *)*param_1;
    puVar1 = PTR_DAT_047e5a20 + 0x10;
    __dest = pvVar3;
    __src = plVar5;
    iVar9 = iVar8;
    do {
      memcpy(__dest,__src,0x38);
      *(undefined1 *)(__src + 1) = 0;
      __dest = (void *)((long)__dest + 0x38);
      iVar9 = iVar9 + -1;
      *(undefined4 *)((long)__src + 10) = 0;
      __src[2] = 0;
      *__src = (long)puVar1;
      __src = __src + 7;
    } while (iVar9 != 0);
    do {
      (**(code **)(*plVar5 + 8))(plVar5);
      iVar8 = iVar8 + -1;
      plVar5 = plVar5 + 7;
    } while (iVar8 != 0);
  }
  uVar2 = uVar4 * 0x38 + 0x38;
  uVar7 = uVar4;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x38;
    uVar7 = uVar4 + 1;
    if (uVar2 <= local_68) {
      uVar7 = (local_68 + uVar4 * -0x38) / 0x38 + uVar7;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar6 * 0x38);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = pvVar3;
  return;
}


