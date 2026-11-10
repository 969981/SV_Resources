/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c20fe4; name: FUN_00c20fe4
 */


undefined4 FUN_00c20fe4(long param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar3;
    do {
      if (param_2 <= (int)plVar2[4]) {
        plVar1 = plVar2;
      }
      plVar2 = (long *)plVar2[(int)plVar2[4] < param_2];
    } while (plVar2 != (long *)0x0);
    if ((plVar1 != plVar3) && ((int)plVar1[4] <= param_2)) goto LAB_00c21098;
  }
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_60[0] = 3;
  local_50 = 0x149;
  local_58 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
  ;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  std::string::append(local_48);
  std::string::append(local_48);
  FUN_00bb0e90(local_60);
  FUN_00bb0d74(local_60);
  plVar1 = plVar3;
LAB_00c21098:
  return *(undefined4 *)(*(long *)(plVar1[5] + 8) + (long)param_3 * 4 + 8);
}


