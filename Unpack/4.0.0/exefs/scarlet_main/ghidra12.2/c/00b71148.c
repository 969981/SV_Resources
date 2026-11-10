/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b71148; name: FUN_00b71148
 */


void FUN_00b71148(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  string *psVar5;
  string *psVar6;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/proto/saturday.pb.cc"
                 ,0x27c);
  }
  if (DAT_0483a5d8 == 0) {
    FUN_00b6f350();
  }
  lVar1 = DAT_0483a5d8;
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
                 ,0x28d);
  }
  if ((int)param_2[6] != 0) {
    *(int *)(param_1 + 6) = (int)param_2[6];
  }
  if (param_2[3] != 0) {
    param_1[3] = param_2[3];
  }
  psVar6 = (string *)param_2[4];
  if (((byte)*psVar6 & 1) == 0) {
    if ((byte)*psVar6 >> 1 == 0) goto LAB_00b71254;
  }
  else if (*(long *)(psVar6 + 8) == 0) goto LAB_00b71254;
  psVar5 = (string *)param_1[4];
  if (psVar5 != psVar6) {
    if (psVar5 == *(string **)PTR_DAT_047dabb0) {
      FUN_00b6eb88();
    }
    else {
      std::string::operator=(psVar5,psVar6);
    }
  }
LAB_00b71254:
  psVar6 = (string *)param_2[5];
  if (((byte)*psVar6 & 1) == 0) {
    if ((byte)*psVar6 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(psVar6 + 8) == 0) {
    return;
  }
  psVar5 = (string *)param_1[5];
  if (psVar5 != psVar6) {
    if (psVar5 == *(string **)PTR_DAT_047dabb0) {
      FUN_00b6eb88(param_1 + 5);
      return;
    }
    std::string::operator=(psVar5,psVar6);
  }
  return;
}


