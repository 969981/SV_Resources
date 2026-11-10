/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8cbcc; name: FUN_00e8cbcc
 */


void FUN_00e8cbcc(float param_1,long *param_2,ulong param_3)

{
  size_t sVar1;
  ulong *puVar2;
  ulong *__src;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  
  puVar3 = (ulong *)*param_2;
  lVar7 = param_2[1] - (long)puVar3;
  uVar4 = lVar7 >> 4;
  if (param_3 < uVar4) {
    if (lVar7 != 0) {
      uVar6 = uVar4;
      puVar2 = puVar3;
      do {
        __src = puVar2 + 2;
        if (*puVar2 == param_3) {
          sVar1 = param_2[1] - (long)__src;
          if (sVar1 != 0) {
            memmove(puVar2,__src,sVar1);
            puVar3 = (ulong *)*param_2;
            uVar4 = param_2[1] - (long)puVar3 >> 4;
          }
          puVar3[uVar4 * 2 + -2] = 0xffffffffffffffff;
          puVar3 = (ulong *)*param_2;
          lVar7 = param_2[1];
          lVar5 = lVar7 - (long)puVar3;
          goto LAB_00e8ccb8;
        }
        uVar6 = uVar6 - 1;
        puVar2 = __src;
      } while (uVar6 != 0);
    }
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Add",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/haxe_lua.bindings/script_execution_manager.cpp"
               ,0x46b);
  }
  FUN_00e8cd20(param_2,param_3 + 1);
  puVar3 = (ulong *)*param_2;
  lVar7 = param_2[1];
  lVar5 = lVar7 - (long)puVar3;
  if (lVar5 == 0x10) {
    uVar4 = 0;
  }
  else {
LAB_00e8ccb8:
    if (lVar5 != 0) {
      uVar6 = lVar5 >> 4;
      pfVar8 = (float *)(puVar3 + uVar6 * 2 + -1);
      uVar4 = uVar6;
      do {
        if ((*(ulong *)(pfVar8 + -2) != 0xffffffffffffffff) && (*pfVar8 <= param_1))
        goto LAB_00e8ccfc;
        uVar9 = uVar4 - 2;
        uVar4 = uVar4 - 1;
        pfVar8 = pfVar8 + -4;
      } while (uVar9 < uVar6);
    }
    uVar4 = 0;
LAB_00e8ccfc:
    puVar2 = puVar3 + uVar4 * 2;
    sVar1 = (lVar7 - (long)puVar2) - 0x10;
    if (sVar1 != 0) {
      memmove(puVar2 + 2,puVar2,sVar1);
      puVar3 = (ulong *)*param_2;
    }
    puVar3 = puVar3 + uVar4 * 2;
  }
  *puVar3 = param_3;
  *(float *)(*param_2 + uVar4 * 0x10 + 8) = param_1;
  return;
}


