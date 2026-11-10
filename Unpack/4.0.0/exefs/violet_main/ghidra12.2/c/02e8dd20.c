/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8dd20; name: FUN_02e8dd20
 */


/* WARNING: Removing unreachable block (ram,0x02e8ddac) */

void FUN_02e8dd20(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  void *__src;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
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
  pvVar3 = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x90,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar5 = pvVar3;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar5,__src,0x90);
        memcpy((void *)((long)pvVar5 + 0x90),(void *)((long)__src + 0x90),0x90);
        pvVar5 = (void *)((long)pvVar5 + 0x120);
        __src = (void *)((long)__src + 0x120);
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
      if ((uVar2 & 1) == 0) goto LAB_02e8de0c;
    }
    memcpy(pvVar5,__src,0x90);
  }
LAB_02e8de0c:
  uVar1 = uVar4 * 0x90 + 0x90;
  uVar7 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x90;
    uVar7 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar7 = uVar7 + (local_68 + uVar4 * -0x90) / 0x90;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar6 * 0x90);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = pvVar3;
  return;
}


