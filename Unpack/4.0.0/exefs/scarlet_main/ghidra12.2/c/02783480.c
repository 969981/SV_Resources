/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02783480; name: FUN_02783480
 */


void FUN_02783480(long param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  char *__dest;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    local_68 = param_4;
    FUN_02783630(&local_88,*(undefined8 *)(param_1 + 0x60),&local_68);
    lVar5 = local_88;
    local_88 = 0;
    lVar2 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar5;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x90) = local_78;
      *(undefined8 *)(param_1 + 0x98) = local_70;
      *(long **)(param_1 + 0x88) = local_80;
      local_88 = 0;
    }
    else {
      FUN_02782144(param_1 + 0x88);
      lVar5 = local_88;
      *(long **)(param_1 + 0x88) = local_80;
      *(undefined8 *)(param_1 + 0x90) = local_78;
      *(undefined8 *)(param_1 + 0x98) = local_70;
      local_88 = 0;
      if (lVar5 != 0) {
        FUN_02782144(&local_80);
      }
    }
    if (local_68 != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar2 = **(long **)(param_1 + 0x80);
        if ((ulong)(((*(long **)(param_1 + 0x80))[1] - lVar2 >> 4) * 0x6db6db6db6db6db7) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        __dest = (char *)(lVar2 + lVar5);
        strncpy(__dest,param_3,0x41);
        plVar3 = *(long **)(param_1 + 0x60);
        uVar4 = *(undefined8 *)(param_3 + 0x50);
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar4,8);
        local_70 = 8;
        local_88 = 0;
        local_80 = plVar3;
        local_78 = uVar4;
        FUN_02783744(__dest + 0x48,uVar1);
        *(long **)(__dest + 0x50) = local_80;
        *(undefined8 *)(__dest + 0x58) = local_78;
        *(undefined8 *)(__dest + 0x60) = local_70;
        FUN_02783744(&local_88,0);
        memcpy(*(void **)(__dest + 0x48),*(void **)(param_3 + 0x48),*(size_t *)(param_3 + 0x50));
        *(undefined8 *)(__dest + 0x68) = *(undefined8 *)(param_3 + 0x50);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x70;
        param_3 = param_3 + 0x58;
      } while (uVar6 < local_68);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 2;
  return;
}


