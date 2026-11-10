/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02afca50; name: FUN_02afca50
 */


uint FUN_02afca50(long param_1,uint *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  if (*(ulong *)(param_2 + 4) < 9) {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),9)
    ;
    if (__dest == (void *)0x0) {
      uVar3 = 0;
      goto LAB_02afcc80;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 9;
    param_2[5] = 0;
LAB_02afcb38:
    lVar7 = 9;
    param_2[6] = 9;
    param_2[7] = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 6);
    if ((*(ulong *)(param_2 + 4) != 9) && (lVar7 != 9)) {
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      }
      goto LAB_02afcb38;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 2);
  local_c0 = PTR_DAT_047dcc68 + 0x10;
  uStack_54 = *param_2;
  puVar1 = PTR_DAT_047dcc70 + 0x10;
  local_60 = 0;
  local_58 = 0;
  local_68 = puVar1;
  if (uStack_54 != 0) {
    uVar5 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
    uStack_54 = uStack_54 ^ uStack_54 << 2;
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
    uStack_54 = uStack_54 ^ uStack_54 << 0xd;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar5 != 1) &&
        (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
        uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar5 != 2)) &&
       (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
       uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar5 != 3)) {
      (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_68);
      for (lVar2 = uVar5 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
        (**(code **)(local_68 + 0x10))(&local_68);
      }
    }
  }
  local_78 = CONCAT44(uStack_54,uStack_54);
  local_a8 = PTR_DAT_047dcc78 + 0x10;
  local_90 = 0;
  uStack_70 = 0;
  local_b8 = PTR_DAT_047dcc80 + 0x10;
  uStack_b0 = 0;
  local_a0 = uVar6;
  lStack_98 = lVar7;
  local_88 = puVar1;
  uStack_80 = local_60;
  local_58 = uStack_54;
  uVar3 = FUN_02af2338(&local_c0,param_3);
  uVar5 = FUN_015d0a70(param_1,param_2);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ValidateElement(element)","Update",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
               ,0x246);
  }
LAB_02afcc80:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return uVar3 & 1;
}


