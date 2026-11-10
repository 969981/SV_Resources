/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323dbcc; name: FUN_0323dbcc
 */


void FUN_0323dbcc(long *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  void *__dest;
  uint local_10f4;
  undefined8 local_10f0;
  undefined *local_10e8;
  uint *puStack_10e0;
  undefined1 *local_10d8;
  undefined8 uStack_10d0;
  undefined1 local_10c8;
  undefined4 local_1048;
  undefined1 local_1040 [4096];
  
  local_10d8 = local_1040;
  local_10f4 = param_4;
  if ((int)param_4 < 0) {
    local_1040[0] = 0;
    local_1048 = 1;
    puStack_10e0 = &local_10f4;
    local_10f0 = 1;
    local_10c8 = 0;
    local_10e8 = PTR_DAT_047e3510;
    uStack_10d0 = 0x8000100000000001;
    FUN_031c8aac(&local_10d8,"Invalid requestedCapacity {}",&local_10f0);
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x159079fc,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x14,local_10d8);
  }
  if ((param_3 == (void *)0x0) || ((int)param_4 <= *(int *)(param_2 + 1))) {
    uVar1 = param_4;
    if ((int)*(uint *)((long)param_2 + 0xc) <= (int)param_4) {
      uVar1 = *(uint *)((long)param_2 + 0xc);
    }
    __dest = (void *)(**(code **)(*param_1 + 0x18))(param_1,(ulong)param_4 << 3);
    memcpy(__dest,(void *)*param_2,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)
    ;
    (**(code **)(*param_1 + 0x20))(param_1,*param_2,(long)*(int *)((long)param_2 + 0xc) << 3);
    if (0x7ffffffe < param_4) {
      param_4 = 0x7fffffff;
    }
    *param_2 = __dest;
  }
  else {
    memcpy(param_3,(void *)*param_2,(long)*(int *)(param_2 + 1) << 3);
    (**(code **)(*param_1 + 0x20))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = param_3;
    param_4 = param_4 | 0x80000000;
  }
  *(uint *)((long)param_2 + 0xc) = param_4;
  return;
}


