/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c24b98; name: FUN_00c24b98
 */


undefined8 FUN_00c24b98(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  char local_38 [24];
  
  plVar7 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar7;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar7;
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar7) && ((int)plVar2[4] <= param_2)) goto LAB_00c24c44;
  }
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_50[0] = 3;
  local_40 = 0x32d;
  local_48 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
  ;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  std::string::append(local_38);
  std::string::append(local_38);
  FUN_00bb0e90(local_50);
  FUN_00bb0d74(local_50);
  plVar2 = plVar7;
LAB_00c24c44:
  lVar5 = plVar2[5];
  piVar3 = *(int **)(lVar5 + 0x10);
  lVar6 = (long)*(int *)(lVar5 + 8) + -1;
  *(int *)(lVar5 + 8) = (int)lVar6;
  uVar1 = *(undefined8 *)(piVar3 + lVar6 * 2 + 2);
  *piVar3 = *piVar3 + -1;
  piVar3 = *(int **)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 8) < *piVar3) {
    *(undefined8 *)(piVar3 + (long)*(int *)(lVar5 + 8) * 2 + 2) =
         *(undefined8 *)(piVar3 + (long)*piVar3 * 2 + 2);
  }
  return uVar1;
}


