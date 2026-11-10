/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c1e50; name: FUN_031c1e50
 */


void FUN_031c1e50(undefined8 param_1,int param_2)

{
  undefined8 local_10d0;
  undefined *puStack_10c8;
  int *local_10c0;
  undefined1 *local_10b8;
  undefined8 uStack_10b0;
  undefined1 local_10a8;
  undefined4 local_1028;
  undefined1 local_1020 [4096];
  int local_4;
  
  local_10b8 = local_1020;
  if (param_2 < 0) {
    local_10c0 = &local_4;
    local_1020[0] = 0;
    local_10d0 = 1;
    puStack_10c8 = &DAT_044e9048;
    local_1028 = 1;
    local_10a8 = 0;
    uStack_10b0 = 0x8000100000000001;
    local_4 = param_2;
    FUN_031c8aac(&local_10b8,"Invalid requestedCapacity {}",&local_10d0);
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x159079fc,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x14,local_10b8);
  }
  return;
}


