/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049f450; name: FUN_0049f450
 */


bool FUN_0049f450(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  lVar2 = (**(code **)(*param_1 + 0x98))();
  pbVar5 = *(byte **)(lVar2 + 8);
  __n = strlen(PTR_s_google_protobuf_Any_047cd720);
  if ((*pbVar5 & 1) == 0) {
    if (__n != *pbVar5 >> 1) {
      return false;
    }
    if (__n == 0xffffffffffffffff) {
LAB_0049f5c8:
                    /* try { // try from 0049f5c8 to 0049f5cf has its CatchHandler @ 0049f5d0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar5 = pbVar5 + 1;
  }
  else {
    if (__n != *(size_t *)(pbVar5 + 8)) {
      return false;
    }
    if (__n == 0xffffffffffffffff) goto LAB_0049f5c8;
    pbVar5 = *(byte **)(pbVar5 + 0x10);
  }
  if ((__n == 0) || (iVar1 = memcmp(pbVar5,PTR_s_google_protobuf_Any_047cd720,__n), iVar1 == 0)) {
    lVar3 = FUN_004a5180(lVar2,1);
    *param_2 = lVar3;
    lVar2 = FUN_004a5180(lVar2,2);
    *param_3 = lVar2;
    lVar2 = *param_2;
    if (lVar2 != 0) {
      puVar4 = *(ulong **)(lVar2 + 0x30);
      if ((puVar4 != (ulong *)0x0) && (puStack_48 = PTR_LAB_047cd728, *puVar4 != 0xffffffffffffffff)
         ) {
        local_40 = &puStack_48;
        local_28 = &local_40;
        local_50 = lVar2;
        puStack_38 = (undefined1 *)&local_50;
        std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_0049f690);
      }
      if ((*(int *)(lVar2 + 0x38) == 9) && (lVar2 = *param_3, lVar2 != 0)) {
        puVar4 = *(ulong **)(lVar2 + 0x30);
        if ((puVar4 != (ulong *)0x0) &&
           (puStack_48 = PTR_LAB_047cd728, *puVar4 != 0xffffffffffffffff)) {
          local_40 = &puStack_48;
          local_28 = &local_40;
          local_50 = lVar2;
          puStack_38 = (undefined1 *)&local_50;
          std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_0049f690);
        }
        return *(int *)(lVar2 + 0x38) == 0xc;
      }
    }
  }
  return false;
}


