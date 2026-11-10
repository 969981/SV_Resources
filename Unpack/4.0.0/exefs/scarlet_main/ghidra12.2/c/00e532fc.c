/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e532fc; name: FUN_00e532fc
 */


void FUN_00e532fc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    *(undefined1 *)(lVar1 + 0xb0) = 1;
    __cxa_thread_atexit(&LAB_02b4dbdc,lVar1 + 0x88,&PTR_LOOP_04483000);
  }
  if (*(char *)(lVar1 + 0xa8) != '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("!m_name","SceneElementNameReplacer",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/scene_element_name_replacer.cpp"
               ,10);
  }
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    *(undefined1 *)(lVar1 + 0xb0) = 1;
    __cxa_thread_atexit(&LAB_02b4dbdc,(undefined8 *)(lVar1 + 0x88),&PTR_LOOP_04483000);
    *(undefined8 *)(lVar1 + 0x88) = *param_2;
    if (*(char *)(lVar1 + 0xa8) != '\0') {
      uVar4 = param_2[2];
      *(undefined8 *)(lVar1 + 0x90) = param_2[1];
      *(undefined8 *)(lVar1 + 0x98) = uVar4;
      plVar2 = (long *)param_2[3];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar3 = *(long **)(lVar1 + 0xa0);
      *(long **)(lVar1 + 0xa0) = plVar2;
      if (plVar3 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00e534d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  else {
    *(undefined8 *)(lVar1 + 0x88) = *param_2;
  }
  uVar4 = param_2[2];
  *(undefined8 *)(lVar1 + 0x90) = param_2[1];
  *(undefined8 *)(lVar1 + 0x98) = uVar4;
  plVar2 = (long *)param_2[3];
  *(long **)(lVar1 + 0xa0) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(undefined1 *)(lVar1 + 0xa8) = 1;
  return;
}


