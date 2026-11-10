/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030bbb9c; name: FUN_030bbb9c
 */


void FUN_030bbb9c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *__src;
  void *__dest;
  int iVar3;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  pvVar2 = (void *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x30);
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    __src = (void *)*param_1;
    __dest = pvVar2;
    do {
      memcpy(__dest,__src,0x24);
      *(undefined4 *)((long)__dest + 0x24) = *(undefined4 *)((long)__src + 0x24);
      puVar1 = (undefined1 *)((long)__src + 0x28);
      iVar3 = iVar3 + -1;
      __src = (void *)((long)__src + 0x30);
      *(undefined1 *)((long)__dest + 0x28) = *puVar1;
      __dest = (void *)((long)__dest + 0x30);
    } while (iVar3 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = pvVar2;
  return;
}


