/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00254840; name: FUN_00254840
 */


bool FUN_00254840(basic_string_view *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  basic_string_view *pbVar3;
  long *plVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  void *__dest;
  ulong uVar8;
  char *local_60;
  ulong local_58;
  void *local_50;
  long *local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  local_60 = param_2;
  if (param_2 == (char *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = strlen(param_2);
  }
  pbVar3 = (basic_string_view *)nn::util::detail::IntrusiveDicImpl::FindImpl(param_1);
  uVar8 = local_58;
  uVar7 = *(ulong *)(pbVar3 + 8);
  sVar5 = local_58;
  if (uVar7 <= local_58) {
    sVar5 = uVar7;
  }
  if (sVar5 == 0) {
    if (uVar7 <= local_58) goto LAB_002548d0;
LAB_002548dc:
    pbVar3 = param_1;
  }
  else {
    iVar2 = memcmp(*(void **)pbVar3,local_60,sVar5);
    iVar6 = iVar2;
    if (iVar2 == 0) {
      iVar6 = 1;
    }
    if ((uVar7 <= uVar8) && (iVar2 == 0)) {
LAB_002548d0:
      iVar6 = -(uint)(uVar7 < uVar8);
    }
    if (iVar6 != 0) goto LAB_002548dc;
  }
  if (param_1 != pbVar3) {
    bVar1 = (bool)((byte)pbVar3[0xa0] & 1);
    goto LAB_002549d0;
  }
  plVar4 = (long *)FUN_01cf7e20();
  local_48 = plVar4;
  sVar5 = strlen(param_2);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 002549f4 to 002549fb has its CatchHandler @ 002549fc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_60 = (char *)CONCAT71(local_60._1_7_,(char)((int)sVar5 << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (sVar5 != 0) goto LAB_00254968;
  }
  else {
    uVar8 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar8,1);
    local_60 = (char *)(uVar8 | 1);
    local_58 = sVar5;
    local_50 = __dest;
LAB_00254968:
    memcpy(__dest,param_2,sVar5);
  }
  *(undefined1 *)((long)__dest + sVar5) = 0;
                    /* try { // try from 00254980 to 00254987 has its CatchHandler @ 00254a04 */
  pbVar3 = (basic_string_view *)FUN_00254ab0(param_1 + 0x30,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,(ulong)local_60 & 0xfffffffffffffffe,1);
  }
  if (param_1 + 0x38 == pbVar3) {
    bVar1 = false;
  }
  else {
    bVar1 = pbVar3[0x40] != (basic_string_view)0x0;
  }
LAB_002549d0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return bVar1;
}


