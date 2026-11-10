/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00357e00; name: FUN_00357e00
 */


undefined8 FUN_00357e00(char *param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  FILE *__stream;
  ulong uVar3;
  void *__ptr;
  size_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_38;
  
  FUN_00367020(&local_60);
  local_38 = 0;
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar5 = __errno_location();
    uVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x2d,
                         *piVar5,"fopen");
    if (uVar3 == 0) {
LAB_00357fd4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_3[1] = uStack_58;
    *param_3 = local_60;
    param_3[3] = uStack_48;
    param_3[2] = uStack_50;
    local_38 = uVar3;
  }
  else {
    fseek(__stream,0,2);
    uVar3 = ftell(__stream);
    fseek(__stream,0,0);
    uVar1 = uVar3;
    if (param_2 != 0) {
      uVar1 = uVar3 + 1;
    }
    __ptr = (void *)FUN_0038c780(uVar1);
    sVar4 = fread(__ptr,1,uVar3,__stream);
    if (sVar4 < uVar3) {
      free(__ptr);
      piVar5 = __errno_location();
      uVar3 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x39,
                           *piVar5,"fread");
      if ((uVar3 == 0) || (local_38 = uVar3, iVar2 = ferror(__stream), iVar2 == 0))
      goto LAB_00357fd4;
    }
    else {
      if (param_2 != 0) {
        *(undefined1 *)((long)__ptr + uVar3) = 0;
        uVar3 = uVar3 + 1;
      }
      FUN_003674a0(&local_80,__ptr,uVar3,PTR_free_047ccb18);
      uStack_58 = uStack_78;
      local_60 = local_80;
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
    }
    param_3[1] = uStack_58;
    *param_3 = local_60;
    param_3[3] = uStack_48;
    param_3[2] = uStack_50;
    fclose(__stream);
    if (local_38 == 0) {
      return 0;
    }
  }
  FUN_003673f0(&local_80,"Failed to load file");
  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/load_file.cc",0x48,
                       &local_80,&local_38,1);
  FUN_00367770(auStack_a0,param_1);
  uVar6 = FUN_00351fa0(uVar6,8,auStack_a0);
  if (4 < local_38) {
    FUN_00350fd0();
  }
  return uVar6;
}


