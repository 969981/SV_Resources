/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0326fb2c; name: FUN_0326fb2c
 */


void FUN_0326fb2c(undefined8 *param_1,long *param_2,ulong param_3)

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
  pvVar3 = (void *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x40,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar5 = pvVar3;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar5,__src,0x40);
        memcpy((void *)((long)pvVar5 + 0x40),(void *)((long)__src + 0x40),0x40);
        pvVar5 = (void *)((long)pvVar5 + 0x80);
        __src = (void *)((long)__src + 0x80);
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      memcpy(pvVar5,__src,0x40);
    }
  }
  uVar1 = uVar4 * 0x40 + 0x40;
  uVar6 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar6 = uVar4 + 1 + (local_68 + uVar4 * -0x40 >> 6);
    if (local_68 < uVar1) {
      uVar6 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar7 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = pvVar3;
  return;
}


