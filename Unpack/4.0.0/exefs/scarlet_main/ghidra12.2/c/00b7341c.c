/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7341c; name: FUN_00b7341c
 */


void FUN_00b7341c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  string *this;
  string *psVar5;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/proto/saturday.pb.cc"
                 ,0x571);
  }
  if (DAT_0483a608 == 0) {
    FUN_00b6f350();
  }
  lVar1 = DAT_0483a608;
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x280))();
  uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (lVar1 != lVar4) {
    FUN_00bfd448(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/proto/saturday.pb.cc"
                 ,0x582);
  }
  if (param_2[3] != 0) {
    param_1[3] = param_2[3];
  }
  psVar5 = (string *)param_2[4];
  if (((byte)*psVar5 & 1) == 0) {
    if ((byte)*psVar5 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(psVar5 + 8) == 0) {
    return;
  }
  this = (string *)param_1[4];
  if (this != psVar5) {
    if (this == *(string **)PTR_DAT_047dabb0) {
      FUN_00b6eb88(param_1 + 4);
      return;
    }
    std::string::operator=(this,psVar5);
  }
  return;
}


