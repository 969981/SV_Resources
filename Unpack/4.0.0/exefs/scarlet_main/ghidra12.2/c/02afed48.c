/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02afed48; name: FUN_02afed48
 */


uint FUN_02afed48(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  uVar5 = *param_4 + 5;
  if (*(ulong *)(param_2 + 4) < uVar5) {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                               (*(long **)(param_1 + 0x40),uVar5);
    if (__dest == (void *)0x0) {
      uVar3 = 0;
      goto LAB_02afef8c;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    *(ulong *)(param_2 + 4) = uVar5;
    *(ulong *)(param_2 + 6) = uVar5;
    uVar7 = uVar5;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 6);
    if (*(ulong *)(param_2 + 4) != uVar5) {
      if (*(ulong *)(param_2 + 6) != uVar5) {
        plVar4 = *(long **)(param_1 + 0x60);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
        }
        *(ulong *)(param_2 + 6) = uVar5;
      }
      uVar7 = uVar5;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 2);
  local_d0 = PTR_DAT_047dcc68 + 0x10;
  uStack_64 = *param_2;
  puVar1 = PTR_DAT_047dcc70 + 0x10;
  local_70 = 0;
  local_68 = 0;
  local_78 = puVar1;
  if (uStack_64 != 0) {
    uVar5 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
    uStack_64 = uStack_64 ^ uStack_64 << 2;
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
    uStack_64 = uStack_64 ^ uStack_64 << 0xd;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar5 != 1) &&
        (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
        uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar5 != 2)) &&
       (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
       uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar5 != 3)) {
      (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_78);
      for (lVar2 = uVar5 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
        (**(code **)(local_78 + 0x10))(&local_78);
      }
    }
  }
  local_b8 = PTR_DAT_047dcc78 + 0x10;
  local_a0 = 0;
  local_88 = CONCAT44(uStack_64,uStack_64);
  uStack_80 = 0;
  local_c8 = PTR_DAT_047dcc80 + 0x10;
  uStack_c0 = 0;
  uStack_b0 = uVar6;
  local_a8 = uVar7;
  local_98 = puVar1;
  uStack_90 = local_70;
  local_68 = uStack_64;
  uVar3 = FUN_015d05bc(&local_d0,*param_3,*param_4);
  uVar5 = FUN_015d0a70(param_1,param_2);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ValidateElement(element)","Update",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
               ,0x246);
  }
LAB_02afef8c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return uVar3 & 1;
}


