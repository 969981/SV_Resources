/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304b420; name: FUN_0304b420
 */


void FUN_0304b420(undefined8 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  void *pvVar2;
  void *__src;
  void *pvVar3;
  int iVar4;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  pvVar2 = (void *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x70);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    __src = (void *)*param_1;
    pvVar3 = pvVar2;
    if (uVar1 != 1) {
      iVar4 = -(uVar1 & 0xfffffffe);
      do {
        memcpy(pvVar3,__src,0x70);
        memcpy((void *)((long)pvVar3 + 0x70),(void *)((long)__src + 0x70),0x70);
        pvVar3 = (void *)((long)pvVar3 + 0xe0);
        __src = (void *)((long)__src + 0xe0);
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
    if ((uVar1 & 1) != 0) {
      memcpy(pvVar3,__src,0x70);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = pvVar2;
  return;
}


