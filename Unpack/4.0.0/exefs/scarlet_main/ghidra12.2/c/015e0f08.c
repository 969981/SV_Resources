/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e0f08; name: FUN_015e0f08
 */


void FUN_015e0f08(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047d8a30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8a38;
  *(undefined8 *)PTR_DAT_047d8a40 = uVar2;
  FUN_015e0fd0(uVar2,param_1);
  if (*(char *)(param_1 + 0x7c6) == '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_isDestroyed","OnZeroReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_object.cpp"
               ,0x156);
  }
  if (*(char *)(param_1 + 0x7c5) == '\0') {
    FUN_00e5fbe0(param_1);
    return;
  }
  return;
}


