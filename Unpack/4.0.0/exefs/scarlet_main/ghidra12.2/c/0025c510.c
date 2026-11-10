/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025c510; name: FUN_0025c510
 */


void FUN_0025c510(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long *local_38;
  
  uVar3 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  if (uVar3 == 0) {
    return;
  }
  uVar4 = 0;
  while ((ulong)pbVar1[uVar4] < 0x40 && (1L << ((ulong)pbVar1[uVar4] & 0x3f) & 0x100002e00U) != 0) {
    uVar4 = uVar4 + 1;
    if (uVar3 == uVar4) {
      return;
    }
  }
  if (uVar4 == 0xffffffffffffffff) {
    return;
  }
  do {
    uVar5 = 0xffffffffffffffff;
    if (uVar3 == 0) break;
    uVar5 = uVar3 - 1;
    lVar2 = uVar3 - 1;
    uVar3 = uVar5;
  } while ((ulong)pbVar1[lVar2] < 0x40 && (1L << ((ulong)pbVar1[lVar2] & 0x3f) & 0x100002e00U) != 0)
  ;
  uVar3 = (uVar5 - uVar4) + 1;
  local_38 = (long *)FUN_01cf7e20();
  if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 0025c6e0 to 0025c6e7 has its CatchHandler @ 0025c6e8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)uVar3 << 1));
    __dest = (void *)((ulong)&local_50 | 1);
    if (uVar3 == 0) goto LAB_0025c638;
  }
  else {
    uVar5 = (uVar5 - uVar4) + 0x11 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*local_38 + 0x10))(local_38,uVar5,1);
    local_50 = uVar5 | 1;
    uStack_48 = uVar3;
    local_40 = __dest;
  }
  memcpy(__dest,pbVar1 + uVar4,uVar3);
LAB_0025c638:
  *(undefined1 *)((long)__dest + uVar3) = 0;
  if (((long *)param_1[3] == local_38) ||
     (uVar3 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar3 & 1) != 0)) {
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_1 = 0;
    }
    param_1[2] = (ulong)local_40;
    param_1[1] = uStack_48;
    *param_1 = local_50;
  }
  else {
                    /* try { // try from 0025c6ac to 0025c6b7 has its CatchHandler @ 0025c6f0 */
    FUN_01d0e1a8(param_1,&local_50);
    if ((local_50 & 1) != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,local_40,local_50 & 0xfffffffffffffffe,1);
    }
  }
  return;
}


