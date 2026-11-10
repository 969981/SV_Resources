/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308f388; name: FUN_0308f388
 */


void FUN_0308f388(undefined8 *param_1,long *param_2,ulong param_3)

{
  void *__dest;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  __dest = (void *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 4);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 4);
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = __dest;
  return;
}


