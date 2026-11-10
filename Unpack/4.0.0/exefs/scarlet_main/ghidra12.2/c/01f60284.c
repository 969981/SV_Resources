/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f60284; name: FUN_01f60284
 */


void FUN_01f60284(long param_1)

{
  uint uVar1;
  long lVar2;
  void *__dest;
  void *__src;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((((*(char *)(param_1 + 0x60) != '\0') ||
       ((*(long *)(param_1 + 0x48) != 0 && (*(short *)(*(long *)(param_1 + 0x48) + 0x1a) != 0)))) &&
      (plVar3 = *(long **)(param_1 + 0x58), plVar3 != (long *)0x0)) &&
     (uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3), (uVar1 & 0xff) != 0xfd)) {
    lVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (lVar2 != 0) {
      uVar4 = (ulong)uVar1 & 0xff;
      lVar5 = param_1 + uVar4 * 0x30;
      plVar3 = (long *)(lVar5 + 0xd0);
      if ((*plVar3 == 0) && (__src = *(void **)(param_1 + 0x90), __src != (void *)0x0)) {
        plVar6 = (long *)(lVar5 + 0xb0);
        __dest = (void *)*plVar6;
        if (__dest == (void *)0x0) {
          FUN_01f5fbb0(&local_70,*(undefined8 *)(param_1 + 0x40));
          __dest = local_70;
          local_70 = (void *)0x0;
          lVar5 = *plVar6;
          *plVar6 = (long)__dest;
          if (lVar5 == 0) {
            lVar5 = param_1 + uVar4 * 0x30;
            *(undefined8 *)(lVar5 + 0xc0) = uStack_60;
            *(undefined8 *)(lVar5 + 200) = local_58;
            *(undefined8 *)(lVar5 + 0xb8) = local_68;
          }
          else {
            lVar5 = param_1 + uVar4 * 0x30;
            FUN_01f5fed0(lVar5 + 0xb8);
            *(undefined8 *)(lVar5 + 0xc0) = uStack_60;
            *(undefined8 *)(lVar5 + 200) = local_58;
            *(undefined8 *)(lVar5 + 0xb8) = local_68;
            __dest = (void *)*plVar6;
          }
          __src = *(void **)(param_1 + 0x90);
        }
        *plVar3 = lVar2;
        memcpy(__dest,__src,0x97e08);
        *(undefined1 *)(param_1 + uVar4 * 0x30 + 0xd8) = 1;
        FUN_01f628ec(param_1,lVar2,(ulong)uVar1,*(undefined8 *)(param_1 + 0x90));
        return;
      }
    }
  }
  return;
}


