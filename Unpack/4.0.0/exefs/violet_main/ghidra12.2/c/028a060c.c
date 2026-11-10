/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a060c; name: FUN_028a060c
 */


void FUN_028a060c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_28;
  
  if ((((*(char *)(param_1 + 0x68) != '\0') ||
       ((*(long *)(param_1 + 0x50) != 0 && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0)))) &&
      (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) &&
     (local_28 = param_2, lVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar3 != local_28)) {
    uVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,&local_28);
    uVar1 = (uint)uVar4 & 0xff;
    if (uVar1 != 0xfd) {
      if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_028a0600();
      }
      uVar4 = 1L << (uVar4 & 0x3f);
      uVar5 = *(ulong *)(param_1 + 0x78) & (uVar4 ^ 0xffffffffffffffff);
      *(ulong *)(param_1 + 0x78) = uVar5;
      if ((uVar5 & 0xff) == 0) {
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      lVar3 = *(long *)(param_1 + 0x80);
      lVar2 = *(long *)(param_1 + 0x88);
      uVar4 = ~uVar4;
      if ((((lVar3 != lVar2) &&
           (*(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & uVar4, lVar3 + 0x18 != lVar2)) &&
          (*(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar3 + 0x20) & uVar4, lVar3 + 0x30 != lVar2)) &&
         (*(ulong *)(lVar3 + 0x38) = *(ulong *)(lVar3 + 0x38) & uVar4, lVar3 + 0x48 != lVar2)) {
        *(ulong *)(lVar3 + 0x50) = *(ulong *)(lVar3 + 0x50) & uVar4;
        for (lVar3 = lVar3 + 0x60; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
          *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & uVar4;
        }
      }
      lVar3 = *(long *)(param_1 + 0xb8);
      lVar2 = *(long *)(param_1 + 0xc0);
      if (((lVar3 != lVar2) &&
          (*(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & uVar4, lVar3 + 0x18 != lVar2)) &&
         ((*(ulong *)(lVar3 + 0x20) = *(ulong *)(lVar3 + 0x20) & uVar4, lVar3 + 0x30 != lVar2 &&
          (*(ulong *)(lVar3 + 0x38) = *(ulong *)(lVar3 + 0x38) & uVar4, lVar3 + 0x48 != lVar2)))) {
        *(ulong *)(lVar3 + 0x50) = *(ulong *)(lVar3 + 0x50) & uVar4;
        for (lVar3 = lVar3 + 0x60; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
          *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & uVar4;
        }
      }
    }
  }
  return;
}


