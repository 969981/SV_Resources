/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eec9e4; name: FUN_02eec9e4
 */


void FUN_02eec9e4(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  void *__dest;
  long *plVar2;
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
  local_10f4 = param_2;
  if ((int)param_2 < 0) {
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
  uVar1 = param_2;
  if ((int)*(uint *)((long)param_1 + 0xc) <= (int)param_2) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
  }
  plVar2 = (long *)(PTR_PTR_047d1a50 + 0x20);
  __dest = (void *)(**(code **)(*plVar2 + 0x18))(plVar2,(ulong)param_2 << 2);
  memcpy(__dest,(void *)*param_1,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  (**(code **)(*plVar2 + 0x20))(plVar2,*param_1,(long)*(int *)((long)param_1 + 0xc) << 2);
  *param_1 = __dest;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


