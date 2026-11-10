/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbd178; name: FUN_00bbd178
 */


void FUN_00bbd178(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x742);
  }
  if (DAT_0483a758 == 0) {
    FUN_00bb5d70();
  }
  lVar1 = DAT_0483a758;
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x280))();
  uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (lVar1 == lVar4) {
    FUN_00bb9118(param_1,param_2);
    return;
  }
  FUN_00bfd448(param_2,param_1);
  return;
}


