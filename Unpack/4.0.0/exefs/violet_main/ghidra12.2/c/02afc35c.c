/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02afc35c; name: FUN_02afc35c
 */


uint FUN_02afc35c(long param_1,uint *param_2,char *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
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
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  }
  if (*(long *)(param_2 + 4) == 0) {
    plVar3 = *(long **)(param_1 + 0x60);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),1)
    ;
    if (__dest == (void *)0x0) {
      uVar2 = 0;
      goto LAB_02afc60c;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 1;
    param_2[5] = 0;
LAB_02afc450:
    uVar9 = 1;
    param_2[6] = 1;
    param_2[7] = 0;
  }
  else if (*(long *)(param_2 + 4) == 1) {
    uVar9 = *(undefined8 *)(param_2 + 6);
  }
  else {
    if (*(long *)(param_2 + 6) != 1) {
      plVar3 = *(long **)(param_1 + 0x60);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      goto LAB_02afc450;
    }
    uVar9 = 1;
  }
  uVar8 = *(undefined8 *)(param_2 + 2);
  local_c0 = PTR_DAT_047dcc68 + 0x10;
  uStack_54 = *param_2;
  puVar1 = PTR_DAT_047dcc70 + 0x10;
  local_60 = 0;
  local_58 = 0;
  local_68 = puVar1;
  if (uStack_54 != 0) {
    uVar7 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
    uStack_54 = uStack_54 ^ uStack_54 << 2;
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
    uStack_54 = uStack_54 ^ uStack_54 << 0xd;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar7 != 1) &&
        (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
        uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 2)) &&
       (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
       uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 3)) {
      (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_68);
      for (lVar5 = uVar7 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
        (**(code **)(local_68 + 0x10))(&local_68);
      }
    }
  }
  local_a8 = PTR_DAT_047dcc78 + 0x10;
  local_90 = 0;
  local_78 = CONCAT44(uStack_54,uStack_54);
  uStack_70 = 0;
  local_b8 = PTR_DAT_047dcc80 + 0x10;
  uStack_b0 = 0;
  uVar6 = 1;
  if (*param_3 != '\0') {
    uVar6 = 2;
  }
  local_68 = (undefined *)CONCAT71(local_68._1_7_,uVar6);
  uStack_a0 = uVar8;
  local_98 = uVar9;
  local_88 = puVar1;
  uStack_80 = local_60;
  local_58 = uStack_54;
  plVar3 = (long *)(**(code **)(local_c0 + 0x10))(&local_c0);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,1,plVar3[1]);
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_68,1,0);
  }
  lVar5 = (**(code **)(local_c0 + 0x10))(&local_c0);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  uVar7 = FUN_015d0a70(param_1,param_2);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ValidateElement(element)","Update",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/pokemon_engine\\pe/savedata/./hashdb/basic_storage.hpp"
               ,0x246);
  }
LAB_02afc60c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return uVar2 & 1;
}


