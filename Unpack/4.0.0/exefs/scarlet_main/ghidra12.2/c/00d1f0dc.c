/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1f0dc; name: FUN_00d1f0dc
 */


void FUN_00d1f0dc(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  
  if (((*(long *)(param_1 + 0x98) != 0) || (*(long *)(param_1 + 0xa0) != 0)) ||
     (*(long *)(param_1 + 0x50) != 0)) goto LAB_00d1f0fc;
  if ((*(long *)(param_1 + 0x60) == 0) || ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0 &&
         (*(long *)(param_1 + 0x18) != 0)))) &&
       ((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0)) {
      puVar3 = (uint *)(**(code **)(**(long **)(param_1 + 0x18) + 0x70))();
      lVar4 = (long)puVar3 + (ulong)*puVar3;
      goto joined_r0x00d1f294;
    }
  }
  else {
    lVar4 = FUN_029be138(*(undefined8 *)(param_1 + 0x60));
joined_r0x00d1f294:
    if (lVar4 != 0) goto LAB_00d1f0fc;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0) {
    return;
  }
LAB_00d1f0fc:
  if (0.0 < *(float *)(param_1 + 400)) {
    plVar2 = *(long **)(param_1 + 0xd0);
    lVar4 = param_1 + 0x10;
    lVar1 = param_1 + 0xb0;
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
    }
    plVar2 = *(long **)(param_1 + 0xf0);
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
    }
    plVar2 = *(long **)(param_1 + 0x110);
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
    }
    plVar2 = *(long **)(param_1 + 0x130);
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
    }
    plVar2 = *(long **)(param_1 + 0x150);
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
    }
    plVar2 = *(long **)(param_1 + 0x170);
    if ((plVar2 != (long *)0x0) && ((char)plVar2[1] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00d1f220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 8),lVar1,lVar4,param_2 & 1);
      return;
    }
  }
  return;
}


