/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00151db0; name: FUN_00151db0
 */


uint FUN_00151db0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  long local_70;
  undefined1 auStack_68 [4];
  int local_64;
  
  if (param_2 < 2) {
LAB_00151f14:
    FUN_0015c3d0();
    pcVar4 = *(code **)PTR_PTR_047cb868;
    if (pcVar4 == (code *)0x0) goto LAB_00151f44;
    uVar3 = 0x6cf;
  }
  else {
    lVar2 = FUN_0015c660(auStack_68,param_1);
    if (lVar2 == 0) {
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6af,
                   "OODLE ERROR : LZ corruption : invalid header..\n");
      }
      FUN_0015c3f0();
      goto LAB_00151f14;
    }
    uVar5 = *(uint *)(&DAT_03cb6698 + (long)local_64 * 4);
    if (param_3 < 0x40001) {
      return uVar5;
    }
    local_70 = 0;
    lVar2 = FUN_00152010(param_1,param_2,0,0x40000,&local_70,0);
    if (lVar2 == param_2) {
      return uVar5;
    }
    if (local_70 != 0x40000) {
      return uVar5;
    }
    lVar6 = 0x40000;
    while( true ) {
      if ((lVar2 < 1) || (lVar1 = param_2 - lVar2, lVar1 == 0 || param_2 < lVar2)) {
        FUN_0015c3d0();
        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6e9,
                     "OODLE ERROR : LZ corruption : insufficient comp data in OodleLZ_GetAllChunksCompressor\n"
                    );
        }
        FUN_0015c3f0();
        return uVar5;
      }
      param_3 = param_3 - lVar6;
      if (param_3 == 0) {
        return uVar5;
      }
      if (lVar1 < 2) break;
      param_1 = param_1 + lVar2;
      lVar2 = FUN_0015c660(auStack_68,param_1);
      if (lVar2 == 0) {
        FUN_0015c3d0();
        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x6af,
                     "OODLE ERROR : LZ corruption : invalid header..\n");
        }
        FUN_0015c3f0();
        break;
      }
      if (uVar5 != *(uint *)(&DAT_03cb6698 + (long)local_64 * 4)) {
        if (((0x3b00U >> (ulong)(*(uint *)(&DAT_03cb6698 + (long)local_64 * 4) & 0x1f) & 1) == 0) ||
           ((0x3b00U >> (ulong)(uVar5 & 0x1f) & 1) == 0)) {
          return 0xe;
        }
        uVar5 = 0xc;
      }
      lVar6 = param_3;
      if (0x3ffff < param_3) {
        lVar6 = 0x40000;
      }
      local_70 = 0;
      lVar2 = FUN_00152010(param_1,lVar1,0,lVar6,&local_70,0);
      if (lVar1 == lVar2) {
        return uVar5;
      }
      param_2 = lVar1;
      if (local_70 != lVar6) {
        return uVar5;
      }
    }
    FUN_0015c3d0();
    pcVar4 = *(code **)PTR_PTR_047cb868;
    if (pcVar4 == (code *)0x0) goto LAB_00151f44;
    uVar3 = 0x6fb;
  }
  (*pcVar4)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar3,
            "OODLE ERROR : Invalid chunk compressor in OodleLZ_GetAllChunksCompressor\n");
LAB_00151f44:
  FUN_0015c3f0();
  return 0xffffffff;
}


