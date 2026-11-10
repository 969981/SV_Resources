/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a054c; name: FUN_028a054c
 */


void FUN_028a054c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_28;
  
  if ((((*(char *)(param_1 + 0x68) != '\0') ||
       ((*(long *)(param_1 + 0x50) != 0 && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0)))) &&
      (plVar4 = *(long **)(param_1 + 0x60), plVar4 != (long *)0x0)) &&
     (local_28 = param_2, lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4), lVar2 != local_28)) {
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_28);
    uVar1 = (uint)uVar3 & 0xff;
    if (uVar1 != 0xfd) {
      if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_028a0600();
      }
      *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 1L << (uVar3 & 0x3f);
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  return;
}


