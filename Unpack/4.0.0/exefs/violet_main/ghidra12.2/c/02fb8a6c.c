/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb8a6c; name: FUN_02fb8a6c
 */


void FUN_02fb8a6c(undefined8 *param_1,long *param_2,ulong param_3)

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
  
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar7 * 2;
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
  pvVar3 = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x70,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar5 = pvVar3;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar5,__src,0x70);
        memcpy((void *)((long)pvVar5 + 0x70),(void *)((long)__src + 0x70),0x70);
        pvVar5 = (void *)((long)pvVar5 + 0xe0);
        __src = (void *)((long)__src + 0xe0);
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      memcpy(pvVar5,__src,0x70);
    }
  }
  uVar1 = uVar4 * 0x70 + 0x70;
  uVar6 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x70;
    uVar6 = uVar4 + 1;
    if (uVar1 <= local_68) {
      uVar6 = (local_68 + uVar4 * -0x70) / 0x70 + uVar6;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar7 * 0x70);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = pvVar3;
  return;
}


