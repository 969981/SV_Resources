/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb1344; name: FUN_00bb1344
 */


void FUN_00bb1344(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  ulong local_38 [3];
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)*param_1);
  if (iVar2 != 0) {
    local_38[2] = 0;
    local_50[0] = 3;
    local_40 = 0x171;
    local_48 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/stubs/common.cc"
    ;
    local_38[0] = 0;
    local_38[1] = 0;
    std::string::append((char *)local_38);
    strerror(iVar2);
    std::string::append((char *)local_38);
    FUN_00bb0e90(local_50);
    uVar1 = local_38[2];
    if (((local_38[0] & 1) != 0) && (local_38[2] != 0)) {
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar3 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
        FUN_00c48fe8(plVar5,uVar1,0,8);
        return;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar1,0,8);
    }
  }
  return;
}


